// WAP TO FIND THE SUM AND AVERAGE OF ARRAY ELEMENTS USING CLASS TEMPLATE.

#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
    T arr[5];
    int i;
    T sum;

public:
    void get_array();
    T sum1();
};
template <class T>
void Array<T>::get_array()
{
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}
template <class T>
T Array<T>::sum1()
{
    T sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    Array<int> a1;
    cout << "Enter the integer array:";
    a1.get_array();
    cout << "The sum of integer array is: "<<a1.sum1();
}