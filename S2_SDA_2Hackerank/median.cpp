#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main (){
    set <int> median;
    set <int>::iterator it;
    int amount, func, isi, mid;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        auto size = median.size();
        cin >> func ;
        switch (func)
        {
        case 1:
            cin >> isi;
            median.insert(isi);
            //kalo ada pertambahan size
            if (size < median.size())
            {
                if (median.size() == 1){
                    it = median.begin();
                }
                //lebih besar dari it
                else if (median.size() % 2 == 1 && median.size() != 1 && isi > *it){
                    advance(it,1);
                }
                //lebih kecil dari it
                else if (median.size() % 2 == 0 && isi < *it){
                    advance(it,-1);
                }
            }
            break;
        case 2:
            //ganjil
            if (median.size() % 2 == 1){
                auto mid1 = *it;
                cout << mid1 << endl;
            }
            //genap
            else{
                int n = *it;
                auto m = next(it, 1);
                auto mid2 = (float) (n+(*m))/2;
                cout << mid2 << endl;
            }
            break;     
        default:
            break;
        }
    }
}