#include <iostream>
using namespace std;

string angka[10]={"satu","dua","tiga",
                      "empat","Lima","enam",
                      "tujuh","delapan","sembilan"};

void satuan1(int a);
void puluhan1(int b);
int n;
int main(){
    
    cin>>n;
    if(n<100&&n>0){
        int satuan=n%10;
        int puluhan=n/10;
        puluhan1(puluhan);
        satuan1(satuan);
    }
    else {
        cout<<"Input Harus antara 1-99"<<endl;
    }
    
}
void satuan1(int a){
    if(a==0);
    else if(n>10&&n<20) cout<<" belas"<<endl;
    else cout<<angka[a-1];
}
void puluhan1(int b){
    if(b==0);
    else if(n==10) cout<<"sepuluh"<<endl;
    else if(n>10&&n<20) cout<<angka[b-1];
    else {
        cout<<angka[b-1]<<" puluh ";
    }
}
