#include <iostream>

using namespace std;

class Mahasiswa{
private :
    string nama;
    char jenisKelamin;
    string alamat;
public:
    void setMahasiswa(string n, char jk, string a){
        nama = n;
        jenisKelamin = jk;
        alamat = a;
    }
    void getMahasiswa(){
    cout << "nama mhs : " << nama << endl;
    cout << "jenis kelamin mhs : " << jenisKelamin << endl;
    cout << "alamat mhs : " << alamat << endl;
    }
};

int main(){
    Mahasiswa mhs;

    // input data
    mhs.setMahasiswa ("Abiyyu",'L',"Joglo");

    // tampil data
    mhs.getMahasiswa();
}