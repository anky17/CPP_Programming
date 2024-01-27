/*WAP to implement pointer with array.*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;
    int *ptr = arr;
    cout << "Enter the array element:";
    for (i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }
    cout << "The array elements are:" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr+i) << "\t";
    }
    return 0;
}