/*Write a C++ function called calculateDiscountedPrice that calculates the discounted price of an item. The function should have two parameters: price
(representing the original price) and discountPercentage (with a default value of 10%). The function should return the calculated discounted price.
In the main function, prompt the user to enter the original price of an item. Then, call the calculateDiscountedPrice function twice: once with the default
discount percentage and once with a specific discount percentage entered by the user. Finally, print the original price and the two discounted prices.*/

#include <iostream>
using namespace std;
double calculateDiscountedPrice(double price, double discountPercentage = 10.0)
{
  double discountamount = price * (discountPercentage / 100);
  double discountedprice = price - discountamount;
  return discountedprice;
}

int main()
{
  double mp, disper;
  ;
  cout << "Enter the original price of an item:";
  cin >> mp;
  cout << "The price of an item after 10% discount is " << calculateDiscountedPrice(mp) << endl;
  cout << "Enter the discount percentage:";
  cin >> disper;
  cout << "The price of an item after " << disper << "% discount is " << calculateDiscountedPrice(mp, disper) << endl;
  return 0;
}
