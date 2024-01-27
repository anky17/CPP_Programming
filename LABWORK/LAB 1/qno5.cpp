/*WAP to implement dynamic memory allocation with new and delete
operators (for both simple variable and array variable).*/

#include <iostream>
using namespace std;
int main()
{
    int *p, n, i, sum = 0;
    cout << "Enter the size of array:";
    cin >> n;
    p = new int[n];
    cout << "Enter the array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }
    cout << "Entered array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << *(p + i) << "\t";
        sum = sum + *(p + i);
    }
    cout << endl
         << "sum=" << sum;
    delete[] p;
    return 0;
}