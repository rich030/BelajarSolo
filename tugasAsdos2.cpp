#include <iostream>
#define MOD 100000007
using namespace std;


void alg (int n){
        int suku1=1,suku2=1,suku3=2;
        unsigned long long int next;
        for (int i = 3; i < n; i++){
        suku1 = suku1 % MOD;
        suku2 = suku2 % MOD;
        suku3 = suku3 % MOD;
        next=suku1 + suku2 + suku3;
        suku1=suku2;
        suku2=suku3;
        suku3=next;
        }
        next = next % MOD;
        cout << next;
}


int main (){
    int n,suku1=1,suku2=1,suku3=2;
    cin >> n;
        if (n == 1)
        {
            cout << "1";
        }
        if (n == 2)
        {
            cout << "1";
        }
        if (n == 3)
        {
            cout << "2";
        }
        if (n > 3){
            alg(n);
        }
}