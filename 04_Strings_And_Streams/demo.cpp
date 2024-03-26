#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
//    ofstream output("output.txt", fstream::app);
//    output << "LOG INFO: the program has ended" << endl;
//    output.close();

    fstream fileInput("output.txt", ios::in | ios::binary);

    string sentence;
    getline(fileInput, sentence);

    fileInput.close();

    cout << sentence;

    return 0;
}