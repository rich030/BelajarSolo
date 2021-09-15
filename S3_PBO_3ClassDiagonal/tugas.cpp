#include<iostream>

using namespace std;

class matrix
{
private:
    int **p;
    int n,m;
    int dia_kiri = 0, dia_kanan = 0;
    int query;
    bool terminate=0;
public:
    matrix();
    //destructor class matrix
    ~matrix(){
        for (int i = 0; i < n; i++)
        {
            delete p[i];
        }
        delete p;
        cout << "mem_cleared" << endl;
    }
    //method untuk input matrix
    void input(){
        cout << "Input Isi Matrix" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Matrix [" << j << "][" << i << "]" << endl;
                cin >> p[j][i];
            }
        }
    }
    //method untuk mencari diagonal dan memuncul menu
    void diagonal(){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               if (i==j)
               {
                   dia_kiri =  dia_kiri + p[j][i];
               }
               if ((i+j) == n - 1)
               {
                   dia_kanan = dia_kanan + p[j][i];
               }  
            }
        }
        //menu akan muncul hingga exit dipilih
        while (terminate != 1)
        {
            cout << "1. Jumlah Diagonal Kiri" << endl << "2. Jumlah Diagonal Kanan" << endl << "3. Isi matrix" << endl << "4. Exit" << endl;
            cin >> query;
            switch (query)
            {
                case 1:
                    cout << "Jumlah : " << dia_kiri << endl;
                    break;
                case 2:
                    cout << "Jumlah : " << dia_kanan << endl;
                    break;
                case 3:
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            cout << p[j][i] << " ";
                        }
                        cout << endl;
                    }
                    break;
                case 4:
                    terminate = true;
                    break;
                default:
                    cout << "Invalid" << endl;
                    break;
            }
        }
    }
};

matrix::matrix(){
    cout << "Length: " << endl;
    cin >> n;
    p = new int*[n];
    for(int i = 0; i < n; i++){
        p[i] = new int[m];
    }
};

int main(){
    matrix mt;
    mt.input();
    mt.diagonal();
    return 0;
}