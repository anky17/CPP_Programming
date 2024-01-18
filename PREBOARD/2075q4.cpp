/*Write a member function called reverseIt() that reverses a string ( an array of character). Use a for loop that swaps the first and last
 characters, then the second and next-to last characters and so on. The string should be passed to reverseIt() as an argument.*/

#include <iostream>
#include <string.h>
using namespace std;
void reverseIt(char *p)
{
    int j;
    int len = strlen(p);
    j = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        char a = p[i];
        p[i] = p[j];
        p[j] = a;
        j--;
    }
    cout << "\nReverse Of String :";
    puts(p);
}
int main()
{
    char str[50];
    cout << "\nEnter The String : ";
    gets(str);
    reverseIt(str);
    return 0;
}