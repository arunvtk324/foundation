#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

// Define 5x5 font patterns for A-Z
map<char, vector<string>> font = {
    {'A', {"  A  ", " A A ", "AAAAA", "A   A", "A   A"}},
    {'B', {"BBBB ", "B   B", "BBBB ", "B   B", "BBBB "}},
    {'C', {" CCC ", "C   C", "C    ", "C   C", " CCC "}},
    {'D', {"DDD  ", "D  D ", "D   D", "D  D ", "DDD  "}},
    {'E', {"EEEEE", "E    ", "EEE  ", "E    ", "EEEEE"}},
    {'F', {"FFFFF", "F    ", "FFF  ", "F    ", "F    "}},
    {'G', {" GGG ", "G    ", "G  GG", "G   G", " GGG "}},
    {'H', {"H   H", "H   H", "HHHHH", "H   H", "H   H"}},
    {'I', {"IIIII", "  I  ", "  I  ", "  I  ", "IIIII"}},
    {'J', {"JJJJJ", "   J ", "   J ", "J  J ", " JJ  "}},
    {'K', {"K  K ", "K K  ", "KK   ", "K K  ", "K  K "}},
    {'L', {"L    ", "L    ", "L    ", "L    ", "LLLLL"}},
    {'M', {"M   M", "MM MM", "M M M", "M   M", "M   M"}},
    {'N', {"N   N", "NN  N", "N N N", "N  NN", "N   N"}},
    {'O', {" OOO ", "O   O", "O   O", "O   O", " OOO "}},
    {'P', {"PPPP ", "P   P", "PPPP ", "P    ", "P    "}},
    {'Q', {" QQQ ", "Q   Q", "Q   Q", "Q  Q ", " QQ Q"}},
    {'R', {"RRRR ", "R   R", "RRRR ", "R R  ", "R  RR"}},
    {'S', {" SSS ", "S    ", " SSS ", "    S", "SSSS "}},
    {'T', {"TTTTT", "  T  ", "  T  ", "  T  ", "  T  "}},
    {'U', {"U   U", "U   U", "U   U", "U   U", " UUU "}},
    {'V', {"V   V", "V   V", "V   V", " V V ", "  V  "}},
    {'W', {"W   W", "W   W", "W W W", "WW WW", "W   W"}},
    {'X', {"X   X", " X X ", "  X  ", " X X ", "X   X"}},
    {'Y', {"Y   Y", " Y Y ", "  Y  ", "  Y  ", "  Y  "}},
    {'Z', {"ZZZZZ", "   Z ", "  Z  ", " Z   ", "ZZZZZ"}},
    {' ', {"     ", "     ", "     ", "     ", "     "}}
};

// Function to print the string using the defined font
void printWordWithFont(const string& word) {
    for (int row = 0; row < 5; ++row) {
        for (char ch : word) {
            ch = toupper(ch);
            if (font.count(ch)) {
                cout << font[ch][row] << "  ";
            } else {
                cout << "?????  "; // Unknown character
            }
        }
        cout << endl;
    }
}

// int main(){
//     // string word;
//     cout << "Enter a word in CAPS or lowercase: ";
//     //getline(cin, word);

//     //printWordWithFont(word);

//     //return 0;
// }


#include<iostream>
using namespace std;
int main(){
    cout << "Varghese";
    cout << "Enter a word in CAPS or lowercase: ";

 string word;
 cout << "Enter a word in CAPS or lowercase: ";
 getline(cin, word);

 printWordWithFont(word);

}