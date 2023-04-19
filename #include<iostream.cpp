#include <iostream>
using namespace std;
class Employee
{
public:
    int eid, sal;

private:
    void getdata()
    {

        cout << "Enter ID and Salary of an employee" << endl;

        cin >> eid >> sal;
    }
    void display()
    {

        cout << "p ID: " << eid << endl
             << " Salary: " << sal << endl;
    }
};
int main()
{

    Employee e;
    e.getdata();
    cout << "Employee Details::::" << endl;

    e.display();
    return 0;
}