#include <iostream>
using namespace std;

void hurufA(int a);
void hurufB(int a);
void hurufC(int a);
void hurufD(int a);
void hurufE(int a);
void hurufF(int a);
void hurufG(int a);
void hurufH(int a);
void hurufI(int a);
void hurufJ(int a);
void hurufK(int a);
void hurufL(int a);
void hurufM(int a);
void hurufN(int a);
void hurufO(int a);
void hurufP(int a);
void hurufQ(int a);
void hurufR(int a);
void hurufS(int a);
void hurufT(int a);
void hurufU(int a);
void hurufV(int a);
void hurufW(int a);
void hurufX(int a);
void hurufY(int a);
void hurufZ(int a);
void spasi(int a);

int main(){
    system("cls");
    string nama;
    cout<<"Masukkan nama: ";
    cin>>nama;

    //cout<<endl<<nama.size()<<endl;
    

    for(int j=1;j<=6;j++){// Ke bawah
        for(int i=0;i<nama.size();i++){//huruf
            if(nama[i]=='A'||nama[i]=='a'){
                hurufA(j);
            }
            if(nama[i]=='B'||nama[i]=='b'){
                hurufB(j);
            }
            if(nama[i]=='C'||nama[i]=='c'){
                hurufC(j);
            }
            if(nama[i]=='D'||nama[i]=='d'){
                hurufD(j);
            }
            if(nama[i]=='E'||nama[i]=='e'){
                hurufE(j);
            }
            if(nama[i]=='F'||nama[i]=='f'){
                hurufF(j);
            }
            if(nama[i]=='G'||nama[i]=='g'){
                hurufG(j);
            }
            if(nama[i]=='H'||nama[i]=='h'){
                hurufH(j);
            }
            if(nama[i]=='I'||nama[i]=='i'){
                hurufI(j);
            }
            if(nama[i]=='J'||nama[i]=='j'){
                hurufJ(j);
            }
            if(nama[i]=='K'||nama[i]=='k'){
                hurufK(j);
            }
            if(nama[i]=='L'||nama[i]=='l'){
                hurufL(j);
            }
            if(nama[i]=='M'||nama[i]=='m'){
                hurufM(j);
            }
            if(nama[i]=='N'||nama[i]=='n'){
                hurufN(j);
            }
            if(nama[i]=='O'||nama[i]=='o'){
                hurufO(j);
            }
            if(nama[i]=='P'||nama[i]=='p'){
                hurufP(j);
            }
            if(nama[i]=='Q'||nama[i]=='q'){
                hurufQ(j);
            }
            if(nama[i]=='R'||nama[i]=='r'){
                hurufR(j);
            }
            if(nama[i]=='S'||nama[i]=='s'){
                hurufS(j);
            }
            if(nama[i]=='T'||nama[i]=='t'){
                hurufT(j);
            }
            if(nama[i]=='U'||nama[i]=='u'){
                hurufU(j);
            }
            if(nama[i]=='V'||nama[i]=='v'){
                hurufV(j);
            }
            if(nama[i]=='W'||nama[i]=='w'){
                hurufW(j);
            }
            if(nama[i]=='X'||nama[i]=='x'){
                hurufX(j);
            }
            if(nama[i]=='Y'||nama[i]=='y'){
                hurufY(j);
            }
            if(nama[i]=='Z'||nama[i]=='z'){
                hurufZ(j);
            }
            if(nama[i]==' ') spasi(j);
        }
        cout<<endl;
    }
    
}

void hurufA(int a){//done
    for(int i=1;i<=5;i++){
        if(a==1&&(i==1||i==5)) cout<<" ";
        else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
        else cout<<"*";
    }
    cout<<" ";
}
void hurufB(int a){//done
    for(int i=1;i<=5;i++){
        if((a==1||a==3||a==6)&&i==5) cout<<" ";
        else if(a==2&&(i==2||i==3||i==4)) cout<<" ";
        else if((a==5||a==4)&&i>1&&i<5) cout<<" ";
        else cout<<"*";
    }
    cout<<" ";
}
void hurufC(int a){//done
    for(int i=1;i<=5;i++){
            if((a==1||a==6)&&i==1) cout<<" ";
            else if(a>1&&a<6&&i>1) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufD(int a){//done
    for(int i=1;i<=5;i++){
            if((a==1||a==6)&&i==5) cout<<" ";
            else if(a>1&&a<6&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufE(int a){//done
    for(int i=1;i<=5;i++){
            if((a==2||(a>3&&a<6))&&i>1) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufF(int a){//done
    for(int i=1;i<=5;i++){
            if((a==2||a>3)&&i>1) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufG(int a){//done
    for(int i=1;i<=5;i++){
            if((a==1||a==6)&&i==1) cout<<" ";
            else if((a==2||a==3)&&i>1) cout<<" ";
            else if(a==4&&i==2) cout<<" ";
            else if(a==5&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufH(int a){//done
    for(int i=1;i<=5;i++){
            if(a!=3&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufI(int a){//done
    for(int i=1;i<=5;i++){
            if((a>1&&a<6)&&(i>3||i<3)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufJ(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufK(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufL(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufM(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufN(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufO(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufP(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufQ(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufR(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufS(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufT(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufU(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufV(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufW(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufX(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufY(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void hurufZ(int a){
    for(int i=1;i<=5;i++){
            if(a==1&&(i==1||i==5)) cout<<" ";
            else if((a==2||a==3||a==5||a==6)&&(i>1&&i<5)) cout<<" ";
            else cout<<"*";
        }
    cout<<" ";
}
void spasi(int a){
    
}