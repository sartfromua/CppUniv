#include <iostream>
#include <fstream>
using namespace std;
string Punctuation = " ,.?!";


int checkPunctuatin(char s) {
    string symb = string(1, s);
    for (int i=0; i<Punctuation.size(); i++) {
        if (symb == Punctuation.substr(i, 1)) return 1;
    }
    return 0;
}


string inversion(string word) {
    string res;
    for (int i=word.size(); i>=0; i--) {
        res.append(word.substr(i, 1));
    }
    return res;
}


void decription(const char* finname, const char* foutname) {
    ifstream fin(finname);
    if (!fin.is_open()) cout  << "File in hasn't opened!" << endl;
    ofstream fout(foutname);
    if (!fout.is_open()) cout << "File out hasn't opened!" << endl;

    string word;
    while (fin >> word) {
        string inv_word, punct_part;
        for (int i=0; i<word.size(); i++) {
            if (checkPunctuatin(word[i])) punct_part += word[i];
            else inv_word += word[i];
        }
        word = inversion(inv_word) + punct_part;
        fout << word << " ";
    }

    fin.close();
    fout.close();
}


int main() {
    decription("14_2.txt", "14_2_out.txt");
}

