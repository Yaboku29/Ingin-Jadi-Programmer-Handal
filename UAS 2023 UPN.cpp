#include <iostream>
using namespace std;
//array mulai dari 0
string angka[10]={"satu","dua","tiga",
                  "empat","Lima","enam",
                  "tujuh","delapan","sembilan"};

void satuan1(int a);
void puluhan1(int b);
int n;
int main(){
    cout<<"Masukkan nilai: ";
    cin>>n; //kriteria 1-99
    //n=28
    if(n<100&&n>0){
        int satuan=n%10;//% artinya modulo, sisa pembagian.28%10=8
        int puluhan=n/10;// dibagi,28/10=2
        puluhan1(puluhan);//2
        satuan1(satuan);//8
    }
    else cout<<"Input Harus antara 1-99"<<endl;
     
}
void satuan1(int a){
    if(a==0);//sepuluh nol
    else if(n>11&&n<20) cout<<angka[a-1]<<" belas"<<endl;
    //n>10&&n<20, n=11, penyebutannya sebelas belas
    else cout<<" "<<angka[a-1];
}

void puluhan1(int b){
    if(b==0);//nol puluh dua
    else if(n==10) cout<<"sepuluh"<<endl;
    else if(n==11) cout<<"sebelas"<<endl;
    else if(n>11&&n<20);
    else cout<<angka[b-1]<<" puluh";
}
