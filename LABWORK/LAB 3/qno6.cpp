/* Write a program that manages an array of student objects. Each student object contains a name and age.
The program should prompt the user to enter the number of students and their respective names and ages. Afterward,
calculate and display the average age of all the students. Furthermore, find and print the name of the oldest student
in the array. Provide the code to implement this program, including the necessary class definition and the logic to
calculate the average age and find the oldest student. */

#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int age;

public:
    void input()
    {
        cout << endl
             << "Enter the name of student:";
        getline(cin >> ws, name);
        /*Using “ cin >> ws ”: Typing “cin>>ws” after “cin” statement tells the compiler to ignore buffer and also to
         discard all the whitespaces before the actual content of string or character array. */
        cout << "Enter the age of student:";
        cin >> age;
    }
    int data()
    {
        return age;
    }
    void maxagedisp()
    {
        cout << "The name of the oldest student is: " << name << endl;
    }
};

int main()
{
    int i, num, maxage, index = 0, totalage = 0;
    cout << "Enter the number of students:";
    cin >> num;
    Student s[num];
    for (i = 0; i < num; i++)
    {
        cout << "Enter the data of student " << i + 1;
        s[i].input();
    }
    maxage = s[0].data();
    for (i = 0; i < num; i++)
    {
        if (s[i].data() > maxage)
        {
            maxage = s[i].data();
            index = i; // kun index ma age max cha vanera thapauna index vanne variable ma ith loop lai store gareko.
        }
        totalage += s[i].data(); // s[i].data vanne function le age return garcha so age ko total.
    }
    double avgage = double(totalage) / num;
    cout << "The average age of all students is: " << avgage << endl;
    s[index].maxagedisp();
    return 0;
}
