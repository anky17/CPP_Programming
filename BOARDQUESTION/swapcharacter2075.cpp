/*Write a member function called reverseit() that reverses a string . Use for loop that swaps the first and last 
character, then second and next- to lat characters and so on. The string should be passsed to reverseit() as 
an argument using C++
*/
#include <iostream>
#include <string>
using namespace std;

class StringReverser {
public:
    void reverseit(string& str) {
        int length = str.length();
        for (int i = 0; i < length / 2; ++i) {
            // Swap characters at positions i and length - i - 1
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }
};

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;
    StringReverser r1;
    r1.reverseit(inputString);
    cout << "Reversed string: " << inputString << endl;
    return 0;
}
