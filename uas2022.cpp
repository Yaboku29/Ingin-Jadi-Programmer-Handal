#include <iostream>
using namespace std;

string tim[14];
int pilihan;
bool status=false;

void input();//di sini input gabisa manggil output
void output();

int main(){
    do{
        cout<<"1. Input data"<<endl;
        cout<<"2. Output data"<<endl;
        cout<<"0. Exit"<<endl;
        cin>>pilihan;
        switch (pilihan){
        case 1:
            input();
            break;
        case 2:
            output();
            break;
        case 0:
            cout<<"Keluar Program"<<endl;
            break;
        default:
            break;
        }
    }while(pilihan!=0);
    
}

void input(){
    status=true;
    for(int i=1;i<=13;i++){
        //korea selatan, korea_selatan
        cout<<"Nama Tim ke-"<<i<<": ";
        cin.ignore();
        cin>>tim[i];
    }
}
void output(){
    if(status==false) cout<<"Belum ada data"<<endl;
    else {
        int i=1;
        while(i<=13){
            cout<<"Nama tim ke-"<<i<<": "<<tim[i]<<endl;
            i++;
        }
    }
}