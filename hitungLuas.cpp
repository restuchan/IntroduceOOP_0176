#include <iostream>
using namespace std;

class lingkaran{
    public:
    double jejari;
    double luasLingkaran;

    void inputData(){
        cout << "Masukkan jejari = " << endl;
        cin >> jejari;
        
    }

    double hitungLuas (){
        return 3,14*jejari*jejari;
    }
   
};
int main(){
    lingkaran bulat;
    bulat.inputData();
    cout << endl;
    coutn << "luasnya adalah = " << bulat.hitungLuas() << endl;
    cout << endl;
};