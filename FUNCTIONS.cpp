#include <iostream>
#include <string>

using namespace std;

int main (){

    string a,b;
    float c,d,e,f;
    float rata, nilaiab = 0.10 , nilaitu = 0.20 , nilaiuts = 0.30 , nilaiuas = 0.40; 


    cout<<"============================"<<endl;
	cout<<"MENGHITUNG NILAI RATA - RATA"<<endl;
    cout<<"============================"<<endl<<endl;


    cout<<"Masukan NIM : "; getline (cin, a);
    cout<<"Masukan Nama : "; getline (cin, b); 
    cout<<"Masukan Nilai Absen : "; cin >> c;
    cout<<"Masukan Nilai Tugas : "; cin >> d;
    cout<<"Masukan NIlai UTS : "; cin >> e;
    cout<<"Masukan Nilai UAS : "; cin >> f;

    cout<<endl;
    cout<<"Berikut Adalah Identitas & Nilai anda"<<endl<<endl;

    cout<<"NIM Anda Adalah : "<<a<<endl;
    cout<<"Nama Nama Adalah : "<<b<<endl;
    cout<<"Nilai Absen Anda : "<<c<<endl;
    cout<<"Nilai Tugas Anda: "<<d<<endl;
    cout<<"Nama UTS Anda : "<<e<<endl;
    cout<<"Nama UAS Anda : "<<f<<endl;

    rata = ((nilaiab * c) + (nilaitu * d ) + (nilaiuts * e ) + (nilaiuas * f)) / (nilaiab + nilaitu + nilaiuts + nilaiuas);

    cout<<endl;
    cout<<"Nilai Rata-rata Anda Adalah : "<<rata;

    cout<<endl;


        if ( rata >= 60 ){ 
        cout<< "Nilai anda mengcukupi : "<<rata<<endl;
    }

        else {
        cout<< "Maaf nilai anda tidak mengcukupi : "<<rata<<endl;    
    }

    }