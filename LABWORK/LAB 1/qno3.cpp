/* Implement a C++ program that demonstrates the usage of namespaces. Create three namespaces called "English",
"Nepali" and “Newa”. All namespaces should define a function called "greet" that takes no parameters and returns a
greeting message in the respective language. In the main function, invoke the "greet" function from each namespace and
display the greetings.*/
#include<iostream>
#include<string>
using namespace std;
namespace English{
    string greet()
    {
        return "Hello";
    }
}
namespace Nepali{
    string greet()
    {
        return "Namaste";
    }
}
namespace Newa{
    string greet()
    {
        return "Jvajalapa";
    }
} 
int main()
{
    cout<<English::greet()<<endl;
    cout<<Nepali::greet()<<endl;
    cout<<Newa::greet();
    return 0;    
}