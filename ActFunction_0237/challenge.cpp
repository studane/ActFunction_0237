#include <iostream>
using namespace std;
float Luas, d1, d2;

void ProsedurInputData(){
    cout << "Masukkan diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan diagonal 2 : ";
    cin >> d2;
}

float HitungLuasBerparameter(float d1, float d2)
{
    return 0.5 * d1 * d2;
}

void ProsedurOutput(){
    cout << "Luas Ketupat : " << HitungLuasBerparameter(d1,d2);
}
