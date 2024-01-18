/*WAP to show the destructor call such that it prints the message “memory is released”.*/

#include <iostream>
using namespace std;

class demo {
public:
    demo() {
        cout << "Constructor called" << endl;
    }
    ~demo() {
        cout << "Destructor called: memory is released" << endl;
    }
};

int main() {
    
    {
        demo des,des1;
    }

    cout<<"End of the program";
    return 0;
}