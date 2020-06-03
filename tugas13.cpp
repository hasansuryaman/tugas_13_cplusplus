#include <iostream>

using namespace std;

int main(){
    struct rumah {
        string tipe_rumah;
        int jumlah_kamar;
        float luas_rumah;
        float tinggi_rumah; 
        string pemilik_rumah;
    };
    
    /*
    rumah rumah1;
    rumah1.tipe_rumah = "46A";
    rumah1.jumlah_kamar = 2;
    rumah1.luas_rumah = 40.7;
    rumah1.tinggi_rumah = 13.5;
    rumah1.pemilik_rumah = "Rendi";
    cout <<"Inputkan Tipe Rumah    : "<<rumah1.tipe_rumah <<endl;
    cout <<"Inputkan Jumlah Kamar  : "<<rumah1.jumlah_kamar <<endl;
    cout <<"Inputkan Luas Rumah    : "<<rumah1.luas_rumah <<endl;
    cout <<"Inputkan Tinggi Rumah  : "<<rumah1.tinggi_rumah <<endl;
    cout <<"Inputkan Pemilik Rumah : "<<rumah1.pemilik_rumah <<endl;
    cout <<endl;
    
    rumah rumah2={"42A", 5, 120.5, 20.5, "Ahmad"};
    cout <<"Inputkan Tipe Rumah    : "<<rumah2.tipe_rumah <<endl;
    cout <<"Inputkan Jumlah Kamar  : "<<rumah2.jumlah_kamar <<endl;
    cout <<"Inputkan Luas Rumah    : "<<rumah2.luas_rumah <<endl;
    cout <<"Inputkan Tinggi Rumah  : "<<rumah2.tinggi_rumah <<endl;
    cout <<"Inputkan Pemilik Rumah : "<<rumah2.pemilik_rumah <<endl;
    */
    
    rumah rumah1;
    rumah rumah2;
    
    cout <<"Inputkan Tipe Rumah    : "; cin >>rumah1.tipe_rumah;
    cout <<"Inputkan Jumlah Kamar  : "; cin >>rumah1.jumlah_kamar;
    cout <<"Inputkan Luas Rumah    : "; cin >>rumah1.luas_rumah;
    cout <<"Inputkan Tinggi Rumah  : "; cin >>rumah1.tinggi_rumah;
    cout <<"Inputkan Pemilik Rumah : "; cin >>rumah1.pemilik_rumah;
    cout <<endl;
    
    cout <<"Inputkan Tipe Rumah    : "; cin >>rumah2.tipe_rumah;
    cout <<"Inputkan Jumlah Kamar  : "; cin >>rumah2.jumlah_kamar;
    cout <<"Inputkan Luas Rumah    : "; cin >>rumah2.luas_rumah;
    cout <<"Inputkan Tinggi Rumah  : "; cin >>rumah2.tinggi_rumah;
    cout <<"Inputkan Pemilik Rumah : "; cin >>rumah2.pemilik_rumah;
}   
