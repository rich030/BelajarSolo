#include <iostream>
#include <map>
#include <string>
using namespace std;

int main (){
    map <string, string> booking;
    map <string, string>::iterator it;
    string nama(50, '\0'), seat;
    int amount, func;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cin >> func ;
        switch (func)
        {
        case 1:
            cin >> seat >> nama;
            it = booking.find(seat);
            if (it == booking.end())
            {
                auto acc = pair<string, string>(seat, nama);
                booking.insert(acc);
                cout << "kursi berhasil dipesan" << endl;
            }
            else{
                cout << "kursi sudah dipesan " << it->second << endl;
            }
            break;
        case 2:
            cin >> seat;
            it = booking.find(seat);
            if (it == booking.end())
            {
                cout << "kursi masih kosong" << endl;
            }
            else{
                cout << "kursi sudah dipesan " << it->second << endl;
            }
            break;     
        default:
            break;
        }
    }
}