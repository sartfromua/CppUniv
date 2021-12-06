#include <iostream>
#include <cmath>
#include <exception>
#include <fstream>

using namespace std;

class DenomException: public exception {
    public:
        const char* what() const throw() {
            return "Denominator tried to be set 0!";
        }
};


class FileOpeningException: public exception {
    public:
        const char* fname;
        FileOpeningException(const char* fname):fname(fname){};

        const char* what() const throw() {
            return "File wasn't opened!";
        }

        const char* file() {
            return fname;
        }
};


class Rational {
    private:
        int nom;
        unsigned denom;

        unsigned int gcd (unsigned int n1, unsigned int n2) {
            return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
        }

        void reduce() {
            int g = gcd(abs(nom), denom);
            denom /= g;
            nom /= g;
        }
    public:
        void input() {
            cout << "a/b:\na = ";
            cin >> nom;
            cout << "b = ";
            unsigned item;
            cin >> item;
            if (item == 0) throw DenomException();
            else denom = item;
            reduce();
        }

        void show() {
            if (nom == 0) {
                cout << 0;
                return;
            }
            cout << nom << '/' << denom;
        }

        void setDenom(unsigned d) {if (d!=0) denom = d; else throw DenomException();}

        void setNom(int n) {nom = n;}

        unsigned getDenom() {return denom;}

        int getNom() {return nom;}

        friend Rational &operator+(const Rational &r1, const Rational &r2) {
            Rational res;
            res.denom = r1.denom * r2.denom;
            res.nom = r1.nom * r2.denom + r2.nom * r1.denom;
            res.reduce();
            return res;
        }

        friend Rational &operator-(const Rational &r1, const Rational &r2) {
            Rational res;
            res.denom = r1.denom * r2.denom;
            res.nom = r1.nom * r2.denom - r2.nom * r1.denom;
            res.reduce();
            return res;
        }

        friend Rational &operator*(const Rational &r1, const Rational &r2) {
            Rational res;
            res.nom = r1.nom * r2.nom;
            res.denom = r1.denom * r2.denom;
            res.reduce();
            return res;
        }

        friend bool &operator>(const Rational &r1, const Rational &r2) {
            bool res = r1.nom*r2.denom > r1.denom*r2.nom;
            return res;
        }

        friend bool &operator<(const Rational &r1, const Rational &r2) {
            bool res = r1.nom*r2.denom < r1.denom*r2.nom;
            return res;
        }

        friend bool &operator==(const Rational &r1, const Rational &r2) {
            bool res = r1.nom*r2.denom == r1.denom*r2.nom;
            return res;
        }

        friend bool &operator!=(const Rational &r1, const Rational &r2) {
            bool res = r1.nom*r2.denom != r1.denom*r2.nom;
            return res;
        }

        friend bool &operator<=(const Rational &r1, const Rational &r2) {
            bool res = r1< r2 || r1 == r2;
            return res;
        }

        friend bool &operator>=(const Rational &r1, const Rational &r2) {
            bool res = r1 > r2 || r1 == r2;
            return res;
        }

        friend ostream &operator<<(ostream &output, Rational &r) {
            r.show();
        }

        friend istream &operator>>(istream &input, Rational &r) {
            r.input();
        }

        friend void fout(const char* fname, const Rational &r) {
            fstream file(fname);
            if (!file.is_open()) throw FileOpeningException(fname);
            file << r.nom << " " << r.denom;
        }


        Rational() {nom=1; denom=1;};
        Rational(int nom, unsigned denom) {
            this->nom = nom;
            if (denom !=0) this->denom = denom;
            else throw DenomException();
            reduce();
        }
};


int main() {
    try {
        Rational a, b, c;
        cin >> a >> b;
        cout << a << endl << b << endl;
        cout << "a+b= " << a+b << " a*b= " << a*b;
        cin >> c;
        fout("   ", c);
    } catch (DenomException &e) {
        cout << e.what() << endl;
    } catch (FileOpeningException &e) {
        cout << e.what() << endl << e.file();
    }
}
