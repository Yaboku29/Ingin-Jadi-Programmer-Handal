#include <iostream>
#include <iomanip>
using namespace std;

//======================
struct akun{
    int id;
    string username;
    string password;
};

struct lokasi
{
    string negara;
    string nama_tempat;
};

struct makanan{
    int id;
    lokasi asal;
    string nama_makanan;
    int harga;
};
//======================
akun Akun_Pengguna[100001]={{0,"Ariz","Ariz123"},
                             1,"Asam","RujakAsam"};
makanan jenis_makanan[100001]={0,{" "," "}," ",0};
int jml_akun=2,jml_makanan=0,harga1=0;
//======================
void loginPage();
void login(int a);
void Register();
bool username_akun(string user);
//======================
void menu_utama();
void mencatat_menu();
void melihat_menu();
void mencari_makanan();
void menghitung_total_harga();
int total_harga(int b);
//======================

int main(){
    loginPage();
    //menu_utama();
}
//======================
void loginPage(){
    system("cls");
    int pilihan,batas=3;
    char pilih2;
    cout<<"========LOGIN PAGE=========="<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Register Akun"<<endl;
    cout<<"============================"<<endl;
    cout<<"Mau pilih yang mana?: ";
    cin>>pilihan;

    switch (pilihan)
    {
    case 1:
        cout<<"Apakah kamu yakin mempunyai akun??(y/n): ";
        cin>>pilih2;
        if(pilih2=='N'||pilih2=='n'){
            cout<<"Mohon buat akun terlebih dahulu"<<endl;
            cin.ignore();
            system("pause");
            Register();
        }
        else if(pilih2=='Y'||pilih2=='y'){
            cin.ignore();
            system("pause");
            login(batas);
        }
        break;
    case 2:
        cin.ignore();
        system("pause");
        Register();
        break;
    default:
        cout<<"Input tidak ada di pilihan."<<endl;
        cout<<"Mohon masukkan input yang sesuai"<<endl;
        cin.ignore();
        system("pause");
        loginPage();
        break;
    }
}

void login(int a){
    system("cls");
    string username2;
    string password2;
    bool checkusername=false;
    bool checkpassword=false;
    cout<<"========LOGIN========="<<endl;
    cout<<"Masukkan username :";
    cin>>username2;
    Akun_Pengguna[jml_akun].username=username2;
    cout<<"Masukkan Password :";
    cin.ignore();
    cin>>password2;
    Akun_Pengguna[jml_akun].password=password2;
    // cout<<jml_akun<<endl;
    // cout<<username2<<endl;
    // cout<<password2<<endl;

    for(int i=0;i<=jml_akun;i++){
        if(i==jml_akun) {
            cout<<"Password atau Username tidak ditemukan"<<endl;
            checkusername=false;
            checkpassword=false;
        }
        else if(Akun_Pengguna[i].username==username2&&Akun_Pengguna[i].password==password2){
            checkusername=true;
            checkpassword=true;
            break;
        }
    }
    if(checkusername==true&&checkpassword==true){
        cout<<"LOGIN BERHASIL!!"<<endl;
        cout<<"Masuk ke page MENU"<<endl;
        a=0;
        system("pause");
        menu_utama();
        
    }
    else {
        a--;
        cout<<"Username atau Password salah.\nSilakan coba lagi"<<endl;
        cout<<"Sisa percobaan : "<<a<<" lagi"<<endl;
    }
    if(a>0){
        system("pause");
        login(a);
    }    
}

void Register(){
    system("cls");
    cout<<"=======REGISTER AKUN========="<<endl;
    string username1;
    string password1;
    //Username tidak ada yang sama
    while (true){
        cout<<"Masukkan username    :";
        cin>>username1;
        if(username_akun(username1)==true){
            cout<<"Username sudah digunakan!\nMohon gunakan username yang lain."<<endl;
        }
        else break;
    }
    //Password minimal 5 character
    cin.ignore();
    while(true){
        cout<<"Masukkan password    :";
        cin>>password1;
        if(password1.length()<5){
            cout<<"Password setidaknya terdiri dari 5 character. Coba input lagi"<<endl;
        }
        else break;
    }
    
    Akun_Pengguna[jml_akun].id=jml_akun+1;
    Akun_Pengguna[jml_akun].username=username1;
    Akun_Pengguna[jml_akun].password=password1;
    // cout<<Akun_Pengguna[jml_akun].username<<endl;
    // cout<<Akun_Pengguna[jml_akun].password<<endl;
    jml_akun++;
    cout<<"Register Berhasil"<<endl;
    cout<<"Kembali ke Login page"<<endl;
    system("pause");
    loginPage();
}

bool username_akun(string user){
    //test fungsi
    //Akun_Pengguna[0].username="Asam";
    for(int i=0;i<jml_akun;i++){
        if(Akun_Pengguna[i].username==user){
            return true;
        }
    }
    return false;
}
//======================
void menu_utama(){
    system("cls");
    char pilihan;
    cout<<"==============MENU UTAMA=============="<<endl;
    cout<<"1. Menu mencatat makanan"<<endl;
    cout<<"2. Menu melihat makanan"<<endl;
    cout<<"3. Menu mencari makanan"<<endl;
    cout<<"4. Menu menghitung total harga makanan"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Pilih opsi yang mana: ";
    cin>>pilihan;
    switch (pilihan)
    {
    case '1':
        mencatat_menu();
        break;
    case '2':
        melihat_menu();
        break;
    case '3':
        mencari_makanan();
        break;
    case '4':
        menghitung_total_harga();
        break;
    case '5':
        cout<<"Program Selesai.\nSemoga harimu menyenangkan!!!"<<endl;
        break;
    default:
        break;
    }
}

void mencatat_menu(){
    system("cls");
    int input_makanan,temp;
    char pilihan;
    cout<<"berapa jumlah makanan yang ingin dicatat: ";
    cin>>input_makanan;
    temp=input_makanan;
    input_makanan+=jml_makanan;
    cin.ignore();
    for(int i=jml_makanan;i<input_makanan;i++){
        
        jenis_makanan[i].id=i;
        cout<<"Catatan makanan ke-"<<jenis_makanan[i].id+1<<endl;
        cout<<"Masukkan asal negara makanan         : ";
        //cin.ignore();
        getline(cin,jenis_makanan[i].asal.negara);
        cout<<"Masukkan nama tempat yang menyajikan : ";
        //cin.ignore();
        getline(cin,jenis_makanan[i].asal.nama_tempat);
        cout<<"Masukkan nama makanan                : ";
        //cin.ignore();
        getline(cin,jenis_makanan[i].nama_makanan);
        cout<<"Masukkan Harga makanan               : ";
        //cin.ignore();
        cin>>jenis_makanan[i].harga;
        cout<<endl;
        cin.ignore();
    }
    jml_makanan+=temp;
    cout<<"Apakah mau kembali ke menu utama(y/n): ";
    cin>>pilihan;
    if(pilihan=='y'||pilihan=='Y'){
        cout<<"Kembali ke menu utama"<<endl;
        system("pause");
        menu_utama();
    }
    else if(pilihan=='n'||pilihan=='N'){
        cout<<"Silakan lanjutkan mencatat makanan yang belum dicatat"<<endl;
        system("pause");
        mencatat_menu();
    }
    
}

void mencari_makanan(){
    system("cls");
    string nama_makanan1;
    //jenis_makanan[0].nama_makanan=" ";
    if(jenis_makanan[0].nama_makanan!=" "){
        cin.ignore();
        cout<<"Masukkan Nama Makanan yang ingin dicari: ";
        getline(cin,nama_makanan1);
        jenis_makanan[jml_makanan].nama_makanan=nama_makanan1;
        for(int i=0;i<=jml_makanan;i++){
            if((i!=jml_makanan)&&jenis_makanan[jml_makanan].nama_makanan==jenis_makanan[i].nama_makanan){
                cout<<"Asal Negara      : "<<jenis_makanan[i].asal.negara<<endl;
                cout<<"Nama Tempat      : "<<jenis_makanan[i].asal.nama_tempat<<endl;
                cout<<"Nama Makanan     : "<<jenis_makanan[i].nama_makanan<<endl;
                cout<<"Harga            : "<<jenis_makanan[i].harga<<endl;
            }
        }
        system("pause");
        menu_utama();
    }
    else {
        cout<<"Belum ada makanan yang dicatat.\nMohon catat makanannya terlebih dahulu.\nKembali ke menu utama "<<endl;
        system("pause");
        menu_utama();
    }
}

void menghitung_total_harga(){
    system("cls");
    int banyak_data;
    //jenis_makanan[0].nama_makanan=" ";
    if(jenis_makanan[0].nama_makanan!=" "){
        cout<<"Berapa data yang mau ditotalin: ";
        cin>>banyak_data;

        cout<<"Total harga dari "<<1<<" sampai "<<banyak_data<<" : "<<total_harga(banyak_data-1)<<endl;
        harga1=0;
        system("pause");
        menu_utama();
    }
    else {
        cout<<"Belum ada makanan yang dicatat.\nMohon catat makanannya terlebih dahulu.\nKembali ke menu utama "<<endl;
        system("pause");
        menu_utama();
    }
}

void melihat_menu(){
    system("cls");
    //jenis_makanan[0].nama_makanan=" ";
    if(jenis_makanan[0].nama_makanan!=" "){
        cout << "===========================================================================" << endl;
        cout << "| No | Asal Negara       | Tempat            | Nama Makanan      | Harga  |" << endl;
        cout << "===========================================================================" << endl;
        for(int i=0;i<jml_makanan;i++){
            cout << "| " << setw(2) << jenis_makanan[i].id+1 << " | "
                << setw(15) << left << jenis_makanan[i].asal.negara << " | "
                << setw(18) << left << jenis_makanan[i].asal.nama_tempat << " | "
                << setw(18) << left << jenis_makanan[i].nama_makanan << " | "
                << setw(6)<<left<<fixed << setprecision(2) << jenis_makanan[i].harga << " |" << endl;
        }
        cout << "===========================================================================" << endl;
        system("pause");
        menu_utama();
    }
    else {
        cout<<"Belum ada makanan yang dicatat.\nMohon catat makanannya terlebih dahulu.\nKembali ke menu utama "<<endl;
        system("pause");
        menu_utama();
    }
}

int total_harga(int b){
    if(b<0){
        return 0;
    }
    else {
        harga1+=jenis_makanan[b].harga;
        total_harga(b-1);
    }
    return harga1;
}