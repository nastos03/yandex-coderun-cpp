#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream in_file("input.txt");
    set<string> unique_words;
    string line;

    if (in_file.is_open()) {
        while (getline(in_file, line)) {
            istringstream iss(line);
            string word;
            while (iss >> word) {
                unique_words.insert(word);
            }
        }
        in_file.close();
    } else {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    cout << unique_words.size() << endl;
    return 0;
}
