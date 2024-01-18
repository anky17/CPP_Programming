/*FUNCTION DEFINITION OUTSIDE THE CLASS TEMPLATE*/

/* WAP TO FIND THE SUM OF ARRAY ELEMENTS USING CLASS TEMPLATE*/

#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
    T arr[5];

public:
    void get_arr();
    T find_sum();
};
template <class T>
void Array<T>::get_arr()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}
template <class T>
T Array<T>::find_sum()
{
    T sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    Array<int> a1;
    cout << "Enter the integer number:";
    a1.get_arr();
    cout << "Sum of integer array=" << a1.find_sum();
    return 0;
}