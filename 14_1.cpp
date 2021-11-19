#include <iostream>
#include <fstream>
#include <cctype> // toupper()
#define N 3
using namespace std;

const string Artickles[N] = {"der", "das", "die"};


void makeBigLetter(const char* fname) {
    ifstream fin(fname);
    string word, prev_word, line;
    while (!fin.eof()) {
        fin >> word;
        int flag = 1;
        for (int i=0; i<N; i++) {
            if (prev_word == Artickles[i]) flag = 0;
        }
        if (flag) line += word + " ";
        else line += string(1, toupper(word[0])) + word.substr(1, word.size()) + " ";
        prev_word = "";
        for (int i=0; i<word.size(); i++) prev_word += string(1, tolower(word[i]));
        }
    fin.close();
    ofstream fout(fname);
    fout << line;
    fout.close();
}


int main() {
    char fname[] = "14_1.txt";
    makeBigLetter(fname);

}
