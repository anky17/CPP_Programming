#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "123";
    
    int num;

    // using stoi() to store the value of str to num
    num = stoi(str);

    cout << num;

    return 0;
}