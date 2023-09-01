#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error: Unable to open the file " << filename << endl;
        return -1; // Return -1 to indicate an error
    }

    string line;
    int wordCount = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string word;
        
        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;

    cout << "Word Count Program" << endl;
    cout << "------------------" << endl;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);

    if (wordCount >= 0) {
        cout << "Total words in " << filename << ": " << wordCount << endl;
    }

    return 0;
}
