/*WAP TO GENERATE FIBONACCI SERIES USING OPERATOR OVERLOADING OF ++ OPERATOR*/

#include <iostream>
using namespace std;
class Fibonacci
{
private:
    int current;
    int next;

public:
    Fibonacci()
	{
	current=0;
	next=1;
	} 
    void operator++()
    {
        int temp = current + next;
        current = next;
        next = temp;
    }
    void display()
	{
    	cout<<current<<" ";
	}
};

int main()
{
    Fibonacci fib;
    int n;
    cout << "Enter the number of Fibonacci numbers to generate:";
    cin >> n;
    cout << "Fibonacci Series:"<<endl;
    for (int i = 0; i < n; i++)
    {
        fib.display();
        ++fib;
    }
    return 0;
}
