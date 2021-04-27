#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(){
    system("clear");
    int count = 0;
    string nama, kamar;
    map <string, string> hotel;
    map <string, string>::iterator it;
    jump:
    cout  << "Hotel Database System\n1. Check in\n2. Check out\n3. Print all hotel guest\n4. Exit" << endl;
    int func;
    cin >> func;
    switch (func)
    {
    case 1:
    system("clear");
    cout  << "Hotel Database System" << endl;
    cout << "Kamar : ";
    cin >> kamar;
    cout << "Nama pemesan : ";
    cin >> nama;
    system("clear");
    it = hotel.find(kamar);
    if (it == hotel.end())
        {
            auto acc = pair<string, string>(kamar, nama);
            hotel.insert(acc);
            cout << "Kamar berhasil dipesan\n "<< endl;
        }
    else{
            cout << "Kamar sudah dipesan oleh " << it->second << endl << endl;
        }
        
        goto jump;
    case 2:
        system("clear");
        cout  << "Hotel Database System" << endl;
        cout << "Kamar : ";
        cin >> kamar;
        it = hotel.find(kamar);
        if (it != hotel.end())
            {
                system("clear");
                hotel.erase(kamar);
                cout << "Kamar berhasil check-out "<< endl << endl;
            }
        else{
            system("clear");
            cout << "Kamar tidak ada yang memesan"<< endl << endl;
        }
        goto jump;
    case 3:
        system("clear");
        cout << "List of all hotel guest : " << endl;
        for(it = hotel.begin();it != hotel.end(); ++it){
            cout << "Kamar No. " << it->first << " sudah dipesan oleh " << it->second << endl;
            count++;
        }
        cout << "Total guest : " << count << endl << endl;
        goto jump;
    default:
        break;
    }
}