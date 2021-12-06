#include <iostream>
#include <string>

using namespace std;

class Person {
    protected:
    string name, surname;
    string sex;
    int age;
    public:

    void input() {
        cout << "Name: ";
        cin >> name;
        cout << "Surname: ";
        cin >> surname;
        cout << "Sex: ";
        cin >> sex;
        cout << "Age: ";
        cin >> age;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Sex: " << sex << endl;
        cout << "Age: " << age << endl;
    }

    Person(){}
    Person(string n, string s, string sex, int a): name(n), surname(s), sex(sex), age(a){}
};


class Student: virtual public Person {
    protected:
    int year;
    string group;
    string university;
    public:

    void input() {
        Person::input();
        cout << "Year: ";
        cin >> year;
        cout << "Group: ";
        cin >> group;
        cout << "University: ";
        cin >> university;
    }

    void show() {
        Person::show();
        cout << "Year: " << year;
        cout << "Group: " << group;
        cout << "University: " << university;
    }

    Student(){}
    Student(int year, string group, string univ): year(year), group(group), university(univ){};

};


class Teacher: virtual public Person {
    public:
    string university, position;
    double salary;

    void input() {
        Person::input();
        cout << "University: ";
        cin >> university;
        cout << "Position: ";
        cin >> position;
        cout << "Salary: ";
        cin >> salary;

    }

    void show() {
        Person::show();
        cout << "University: " << university << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }

    Teacher(){}
    Teacher(string univ, string pos, double salary): university(univ), position(pos), salary(salary){};
};


class Graduate: public Student, Teacher {
    public:
    void show() {
        Person::show();
        cout << "Year: " << year << endl;
        cout << "Group: " << group << endl;
        cout << "University: " << Teacher::university << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }

    void input() {
        Person::input();
        cout << "University: ";
        cin >> Teacher::university;
        cout << "Position: ";
        cin >> position;
        cout << "Salary: ";
        cin >> salary;
        cout << "Year: ";
        cin >> year;
        cout << "Group: ";
        cin >> group;
    }
};


int main() {
    Graduate g;
    g.input();
    cout << endl;
    g.show();
}
