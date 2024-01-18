// WAP TO GET AND PUT A CHARACTER.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    cout << "Enter the string and press enter to end:";
    while (ch != '\n')
    {
        cin.get(ch);
        cout.put(ch);
        count++;
    }
    cout << "Number of characters: " << count - 1;
    return 0;
}