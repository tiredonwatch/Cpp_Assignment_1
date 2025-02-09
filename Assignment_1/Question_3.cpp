#include <iostream>
using namespace std;

int main() {
    string str_var;
    char replace;

    // Step 1: Input string and character for vowel replacement
    cout << "Enter a string: ";
    getline(cin, str_var);

    cout << "Enter a character to replace vowels: ";
    cin >> replace;

    // Convert to lowercase and replace vowels with the specified character
    for (char &c : str_var) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            c = replace;
        }
    }

    // Step 2: Check if the string is a palindrome
    int length = str_var.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; ++i) {
        if (str_var[i] != str_var[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    cout << "Modified string: " << str_var << endl;

    if(isPalindrome)
      {
        cout<<"The String is a palindrome.";
      }
    else
      {
        cout<<"The String is not a palindrome.";
      }

  
    // Step 3: Frequency count of each character using an array
    int counter[26] = {0};
    for (char c : str_var) {
        if (isalpha(c)) {
            counter[tolower(c) - 'a']++;
        }
    }

    cout << "Character frequencies: " << endl;
    for (int i = 0; i < 26; i++) {
        if (counter[i] > 0) {
            cout << char(i + 'a') << ": " << counter[i] << endl;
        }
    }

    return 0;
}
