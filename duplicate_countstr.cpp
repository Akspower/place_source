#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    unordered_map<char, int> charCount;

    // Ask the user for a string
    cout << "Enter a string: ";
    getline(cin, str);

    // Count the frequency of each character
    for (char ch : str) {
        charCount[ch]++;
    }

   
    cout << "Characters with their counts:" << endl;
    for (auto pair : charCount) {
        cout << "' " << pair.first << " ' : " << pair.second << endl;
    }

    

    return 0;
}
