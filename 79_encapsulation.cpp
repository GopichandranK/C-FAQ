#include <iostream>
using namespace std;

class Employee
{
private:
    string name;

public:
    // Constructor to initialize the name
    Employee(string n)
    {
        name = n;
    }

    // Setter for name
    void setName(string n)
    {
        name = n;
    }

    // Getter for name
    string getName() const
    {
        return name;
    }
};

int main()
{
    // Creating an object of Employee class
    Employee emp("Alice");

    // Outputting the name
    cout << "Employee Name: " << emp.getName() << endl;

    // Changing the name
    emp.setName("Bob");

    // Outputting the new name
    cout << "Updated Employee Name: " << emp.getName() << endl;

    return 0;
}
