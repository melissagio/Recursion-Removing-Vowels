//
//  main.cpp
//  CS 232 Recursion Remove Vowels
//
//  Created by Melissa Gio on 3/6/23.
//

#include <iostream>
#include <string>
using namespace std;

//function prototypes
void removeVowels(string wordPar);

int main() {
    //declarations
    string userWord = "";
    
    //get user input
    cout << "Type a single word: ";
    cin >> userWord;
    
    //calculation and output
    removeVowels(userWord);
    cout << endl;
    
}

//function definitions
void removeVowels(string wordPar) {
    int lengthOfString = wordPar.size(); //can use wordPar.length() does the same thing
    string firstLetter = "";
    
    if (lengthOfString > 0) {
        firstLetter = wordPar.substr(0, 1); //substr gets a section from the string (it will not remove it from the string it will just get it from the string) , in our code it gets one character (0 to 1) the length is 1
        
        if (firstLetter == "a" || firstLetter == "e" || firstLetter == "i" || firstLetter == "o" || firstLetter == "u" || firstLetter == "A" || firstLetter == "E" || firstLetter == "I" || firstLetter == "O" || firstLetter == "U") {
            
            removeVowels(wordPar.substr(1, lengthOfString - 1));
            
        } else {
            cout << firstLetter;
            removeVowels(wordPar.substr(1, lengthOfString - 1));
        }
    }
}
