#include <iostream>
using namespace std;
class mobil
{
public:
    string name;
    int regnum;
    
    void printName(){
        cout << "Tipe/Jenis Mobil: " << name << endl;
    }
    void printRegnum(){
        cout << "Plat Nomor Mobil: " << regnum << endl;
    }
};


int main(){
    mobil data1;
    data1.name = "kijang";
    data1.regnum= 1241556;
    data1.printName();
    data1.printRegnum();
}
