#include <iostream>
#include <string>
//#include <stdlib. h>

using namespace std;

void printSquare(int rows, string pattern) {
    int patternIndex = 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
}

void printLeftArrow(int rows, string pattern) {
    int patternIndex = 0;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print pattern
        for (int j = 1; j <= i; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
    // Print the lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print pattern
        for (int j = 1; j <= i; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
}

void printUpperTriangle(int rows, string pattern) {
    int patternIndex = 0;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print pattern
        for (int j = 1; j <= i; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
}

void printLowerTriangle(int rows, string pattern) {
    int patternIndex = 0;
    for (int i = rows; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print pattern
        for (int j = 1; j <= i; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
}

void printEquilateralTriangle(int rows, string pattern) {
    int patternIndex = 0;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << pattern[patternIndex];
            patternIndex = (patternIndex + 1) % pattern.length();
        }
        cout << endl;
    }
}

void printCircle(int rows, string pattern) {
    int patternIndex = 0;
    int radius = rows / 2;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            int distance = (i - radius) * (i - radius) + (j - radius) * (j - radius);
            if (distance <= radius * radius) {
                cout << pattern[patternIndex];
                patternIndex = (patternIndex + 1) % pattern.length();
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int rows;
    string pattern;
    int choice;
    int ch;

    // Get user input
    cout << "Enter the number of rows: ";
    //system("cls");
    cin >> rows;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Please type the pattern you want on screen (e.g., Aa#q): ";
    getline(cin, pattern);

    // Display shape options
    cout << "Shape options:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Left Arrow" << endl;
    cout << "3. Upper Triangle" << endl;
    cout << "4. Lower Triangle" << endl;
    cout << "5. Equilateral Triangle" << endl;
    cout << "6. Circle" << endl;
    cout << "Enter your choice (1-6): \n\n\n";
    //cin>> choice;
    //cin>> ch;
    printSquare(rows, pattern);
    printLeftArrow(rows, pattern);
    
    cout<<"\n\n\n";
    printUpperTriangle(rows, pattern);
    cout<<"\n\n\n";
    printLowerTriangle(rows, pattern);

    printEquilateralTriangle(rows, pattern);

    printCircle(rows, pattern);
    //printCircle(rows, pattern);
    system("CLS");
    
}


