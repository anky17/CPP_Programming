/*3. Write a C++ program that demonstrates the dynamic memory allocation for objects and object arrays. Create a
class called Rectangle with private member variables length and width and member functions to set and display the
dimensions of a rectangle. Implement the following functionalities:
i. Dynamically create a single Rectangle object by allocating memory using new and set the dimensions of the rectangle
object.
ii. Display the dimensions of the rectangle object.
iii. Dynamically create an array of Rectangle objects by allocating memory using new and set the dimensions of each
rectangle in the array.
iv. Display the dimensions of each rectangle in the array.*/

#include <iostream>
using namespace std;
class rectangle
{
private:
  int length, width;

public:
  void setdim()
  {
    cout << "Enter the length and width:";
    cin >> length >> width;
  }
  void display()
  {
    cout << "Dimension of rectangle:" << endl;
    cout << "Length=" << length << " Width=" << width << endl;
  }
};
int main()
{
  rectangle *rec = new rectangle;
  rec->setdim();
  rec->display();
  delete rec;
  rectangle *rect = new rectangle[2];
  for (int i = 0; i < 2; i++)
  {
    rect[i].setdim();
  }
  for (int i = 0; i < 2; i++)
  {
    rect[i].display();
  }
  delete[] rec;
  return 0;
}
