/*
Nama        : Muhammad Faiq
NPM         : 140810190012
Kelas       : B
Deskripsi   : Program Enkripsi dan Dekripsi Metode Shift Chiper
*/

#include <iostream>
#include <string>
using namespace std;

string enkripsi(string plainteks, int k);
string dekripsi(string cipherteks, int k);

int main(){
    system("cls");
    string plainteks;
    string cipherteks;
    int k, n;
    cout<<"Menu Program Shift Cipher\n1. Enkripsi Menggunakan Shift Cipher\n2. Dekripsi Menggunakan Shift Cipher\n3. Exit\n";
    cout<<"Pilih : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Masukan Plainteks : ";
        cin>>plainteks;
        cout<<"Masukan jumlah pergeseran : ";
        cin>>k;
        cout<<"Hasil Enkripsi (Cipherteks) : "<<enkripsi(plainteks,k)<<endl;
        system("pause");
        return main();
        break;
    case 2:
        cout<<"Masukan Cipherteks : ";
        cin>>cipherteks;
        cout<<"Masukan jumlah pergeseran : ";
        cin>>k;
        cout<<"Hasil Dekripsi (Plainteks) : "<<dekripsi(cipherteks,k)<<endl;
        system("pause");
        return main();
        break;
    case 3:
        return 0;
        break;
    }
}

string enkripsi(string plainteks, int k){
    string hasil="";
    for(int i=0;i<plainteks.length();i++){
        if(isupper(plainteks[i])){
            hasil+=char(int(plainteks[i]+k-65)%26+65);
        }
        else{
            hasil+=char(int(plainteks[i]+k-97)%26+97);
        }
    }
    return hasil;
}
string dekripsi(string cipherteks, int k){
    string hasil="";
    for(int i=0;i<cipherteks.length();i++){
        if(isupper(cipherteks[i])){
            hasil+=char(int(cipherteks[i]-65-k+26)%26+65);
        }
        else{
            hasil+=char(int(cipherteks[i]-97-k+26)%26+97);
        }
    }
    return hasil;
}