#include <iostream>

using namespace std;

class A
{
public:
    A(){
        cout << "from A" << endl;
    }
};

class B: virtual public A
{
public:
    B() : A(){
        cout << "from B" << endl;
    }
};

class C : virtual public A
{
public:
    C():A(){
        cout << "from C" << endl;
    }
};

class D : public B, public C
{
public:
    D():B(),C(){
        cout << "from D" << endl;
    }
};

int main (){
    D d;
}