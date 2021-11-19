#include <iostream>
#include <fstream>
using namespace std;


int checkTags(const char* fname, string tag) {
    string end_tag = "</";
    end_tag.append(tag.substr(1, tag.size()));
    ifstream file(fname);
    if (!file.is_open()) cout << "File hasn't opened!";
    string text;
    while (!file.eof()) {
        string line;
        getline(file, line);
        text.append(line);
    }
    file.close();
//    cout << "text: " << text << endl;
    int tag1 = text.find(tag), tag2 = text.rfind(end_tag);
    while (tag1 != string::npos && tag2 != string::npos) {
        tag1 = text.find(tag, tag1+1);
        tag2 = text.rfind(end_tag, tag2-1);
//        cout << endl << "tag1: " << tag1 << " tag2: " << tag2;
//        cout << endl << "text: " << text;
        if (tag1 == string::npos && tag2 == string::npos) return 1;
        if (tag2 == string::npos  || tag1 == string::npos) return 0;
    }
    cout << endl;
    return 1;
}


int main() {
    cout << "Tags have written correctly: " << checkTags("14_3.txt", "<tg>");
}


