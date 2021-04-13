/*
Demonstrate a queue system.
In this case, use "1" for push, use "2" for pop, use "3" for print.
*/

#include <iostream>
#include <queue>
using namespace std;
int main (){
    queue <int> hehe;
    int amount_query, func, isi;
    cin >> amount_query;
    for (int i = 0; i < amount_query; i++)
    {
        cin >> func ;
        switch (func)
        {
        case 1:
            cin >> isi;
            hehe.push(isi);
            break;
        case 2:
            hehe.pop();
            break;
        case 3:
            cout << hehe.front() << endl;
        default:
            break;
        }
    }
}