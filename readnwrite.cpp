// WAP to overload operator using friend function.
/*#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
   public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
     friend void operator++(rectangle &r);

        void display(){
            cout<<"Length = "<<length<<endl<<"Breadth ="<<breadth;
        }
    };
    void operator++(rectangle &r){
        ++r.length;
        ++r.breadth;
        }
int main(){
    rectangle r1(2,3);
    ++r1;
    r1.display();
    return 0;
}
*/

// WAP to show use of function template.
/*
#include<iostream>
using namespace std;

template<typename T>
T maximum(T a,T b){
    return (a>b)?a:b;
}
int main(){
    cout<<maximum(2,3)<<endl;
    cout<<maximum(22.3,22.1)<<endl;

    return 0;
}
*/

// WAP to Write content to file & Read content from file
/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ofstream writeto("file.txt");
    writeto << "trying 1gainn and agaain1";
    writeto.close();

    ifstream readfrom("file.txt");
    char text[50];

    while (readfrom.getline(text, 50))
    {
        cout << text << endl;
    }
    readfrom.close();

    return 0;
}
*/

// Ambiguity solved using virtual function

/*
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "base" << endl;
    }
};
class Derived :  public Base
{
public:
    void show()
    {
        cout << "derived" << endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b = &d;
    d.show();
    return 0;
}

*/

// Ambiguity solved using scope resolution operator
#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C c;
    // c.show();    // Wont work
    c.A::show(); // A
    c.B::show(); // B

    return 0;
}
