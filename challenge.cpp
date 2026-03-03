#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;
float phi = 3.14159;
//fungsi awal
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
//fungsi proses
float luas (float j){
    return phi * j * j; 
}
float luas2 (float j){
    return 3.14159 * j * j; 
}
void akhir (){
    cout << "Hasil Luas untuk lingkaran dengan jari-jari: " << luas(jariJari) << endl;
}
int main(){
    
}