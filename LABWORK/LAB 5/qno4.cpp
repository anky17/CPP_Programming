/*Write a program to compare magnitude of complex numbers by overloading <,>,== and != operators*/
#include <iostream>
#include <cmath>
using namespace std;
class ComplexNo
{
private:
    float real;
    float image;

public:
    ComplexNo()
    {
        real = 0.0;
        image = 0.0;
    }
    ComplexNo(float r, float i)
    {
        real = r;
        image = i;
    }
    void display()
    {
        cout << "(" << real << "," << image << ")" << endl;
    }
    int operator>(ComplexNo obj)
    {
        float mag1 = sqrt(real * real + image * image);
        float mag2 = sqrt(obj.real * obj.real + obj.image + obj.image);
        if (mag1 > mag2)
            return 1;
        else
            return 0;
    }
    int operator<(ComplexNo obj)
    {
        float mag1 = sqrt(real * real + image * image);
        float mag2 = sqrt(obj.real * obj.real + obj.image + obj.image);
        if (mag1 < mag2)
            return 1;
        else
            return 0;
    }
    int operator==(ComplexNo obj)
    {
        float mag1 = sqrt(real * real + image * image);
        float mag2 = sqrt(obj.real * obj.real + obj.image + obj.image);
        if (mag1 == mag2)
            return 1;
        else
            return 0;
    }
    int operator!=(ComplexNo obj)
    {
        float mag1 = sqrt(real * real + image * image);
        float mag2 = sqrt(obj.real * obj.real + obj.image + obj.image);
        if (mag1 > mag2)
            return 1;
        else
            return 0;
    }
};
int main()
{
    ComplexNo c1(2, 4);
    ComplexNo c2(4, 3);
    c1.display();
    c2.display();
    if (c1 > c2)
        cout << "Complex 1 is greater." << endl;
    if (c1 < c2)
        cout << "Complex 2 is greater." << endl;
    if (c1 == c2)
        cout << "Both are equal." << endl;
    if (c1 != c2)
        cout << "Both are not equal." << endl;
    return 0;
}
