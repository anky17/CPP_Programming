// WAP TO OVERLOAD THE ACCESS TO ARRAY OVERLOAD.

#include <iostream>
using namespace std;
class Array
{

private:
    int arr[4];

public:
    Array(int a1, int a2, int a3, int a4)
    {
        arr[0] = a1;
        arr[1] = a2;
        arr[2] = a3;
        arr[3] = a4;
    }
    int operator[](int position)
    {
        return arr[position];
    }
};
int main()
{
    Array a1(2, 4, 5, 6);
    int position;
    cout << "Enter the array position to extract that element:";
    cin >> position;
    cout << a1[position-1] << endl;
    return 0;
}