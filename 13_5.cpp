#include <iostream>
#include <string>
using namespace std;


void printShortestWord(string line, string delimiter) {
    line += " ";
    int min_len = line.size();
    int space1 = 0, space2;
    while (space2 < line.size()) {
        space2 = line.find(delimiter, space1);
        int len = space2 - space1;
        if (len < 0) break;
        if (min_len > len) min_len = len;
        space1 = space2+1;
    }

    string shortest_word;
    while (line.size() > 0) {
        space1 = line.find(delimiter);
        if (space1 == min_len) {
            /** Case (a) */
//            shortest_word = line.substr(0, min_len);
//            break;
            /** Case (b) */
//            shortest_word = line.substr(0, min_len);
            /** Case (c) */
            cout << "Shrotest word: " << line.substr(0, min_len) << endl;
        }
        line.erase(0, space1+1);
    }
//    cout << "Shortest word: " << shortest_word; // cases (a) or (b)

}


int main() {
    string line = "good day today hello be Hola be moon sun me";
    printShortestWord(line, " ");
}
