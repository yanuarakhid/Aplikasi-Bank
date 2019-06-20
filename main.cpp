/* Standard C++ includes */
#include <iostream> // untu3k mendeklarasikan bahasa c++
#include <iomanip>
#include <ctime>   //Mengambil Lib Tanggal
#include <cstdlib> //untuk menerapkan CLS (clear screen)
#include <fstream> //untuk menerapkan varfile (akses file)
using namespace std;
/*
Judul FP    : Aplikasi Perbankan 
Materi      :
a. Array
b. Struct
c. Sorting
d. Searching
e. Queue

Aplikasi Dibuat Oleh : 
1. Dika
2. Ari
3. Fahrudin
4. AJi
5. Ragil
6. Reza
7. Tirta
8. Adil
9. Akhid
*/

//global Scope Variabel
int x = 2, indt, pil;

//Tempat Menampung Data
struct data
{
    string username['a']={"susilo43","tanjungaja41"};
    string nama['b'] = {"Susilo", "Tanjung"};
    string identity['c'] = {"89076", "131311"};
    double tabungan['d'] = {20000, 50000};
} member;

void header()
{
    // Fungsi Dashborad Menu
    system("cls");
    cout << "========================================================\n";
    cout << "                   WELCOME ADMIN !!!\n";
    cout << "                      PT. JAJAL WAE    \n";
    cout << endl;
    cout << "            Aplikasi Perbankan Version 1.0   " << endl;
    cout << "========================================================\n";
    cout<<endl;
    cout << "[1] List Member Bank" << endl;
    cout << "[2] Input Data Member Baru" << endl;
    cout << "[3] Edit Data Member" << endl;
    cout << "[4] Hapus Data Member" << endl;
    cout << "[5] Menabung" << endl;
    cout << "[6] Penarikan" << endl;
    cout << "[7] Pencarian Data" << endl;
    cout << "[8] Tentang Kami" << endl;
    cout << "[9] Keluar" << endl;
    cout << endl;
}

//Main Program
int main()
{
home:
    header(); //Pemanggilan Menu
    cout << "INPUT PILIHAN =>> ";cin >> pil;

    if (pil == 1)
    {
        sor://label
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                      List Member Bank                                |\n";
        cout << "|======================================================================================|\n";
        cout<<endl;
        cout << "NO.\tUSERNAME\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i]<<"\t\t"<< member.nama[i] << "\t\t" << member.identity[i] << "\t\t\tRp. " << member.tabungan[i] << endl;
        }
        cout<<endl;
        cout << "|======================================================================================|\n";
        cout<<endl;
        cout<<"Lakukan Per-Sortingan "<<endl;
        cout<<"[1] Mode Ascending (A to Z)"<<endl;
        cout<<"[2] Mode Discending (Z to A)"<<endl;
        cout<<"[3] Kembali Ke Menu"<<endl;
        cout <<endl;
        int sort;
        cout<< "Masukan Pilihan Anda [1/2/3] > ";cin>>sort;
        if (sort == 1){
            cout<<"fitur belum ada"<<endl;
            system("pause");
            goto home;
        }else if(sort==2){
            cout<<"fitur belum ada"<<endl;
            system("pause");
            goto home;
        }else if (sort==3){
            goto home;
        }else{
            cout <<"Inputan Anda Salah ,INputkan Pilihan [1 / 2 / 3]"<<endl;
            system("pause");
            goto sor;
        }
        system("pause");
        goto home;
    }
    else if (pil == 2)
    {
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                      Menu Tambah Member                              |\n";
        cout << "|======================================================================================|\n";
        cout<<endl;
        cout << "Berapa Jumlah Data yang akan Anda Inputkan > ";
        cin >> indt;
        int b = x;
        for (x; x < indt + b; x++)
        {
            cout << "Masukan Data Member ke - " << x + 1 << endl;
            cout << "InpUt Nama     : ";
            cin >> member.nama[x];
            cout << "No. Identitas  : ";
            cin >> member.identity[x];
            cout << "Tabungan Awal  : Rp. ";
            cin >> member.tabungan[x];
            cout << "Buat Username  : ";
            cin >> member.username[x];
            cout <<endl;
        }
        //update x variable
        x = (x + indt) - indt;
        cout << "Data Berhasil Di INputkan !!!" << endl;
        cout << endl;
        system("pause");
        goto home;
    }
    else if (pil == 3)
    {
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                   Menu Edit Data Member                              |\n";
        cout << "|======================================================================================|\n";
        cout << "NO.\tUsername" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i] << endl;
        }
        cout << endl;
        string nm;
        cout << "Untuk Edit Data Input Username Member = ";
        cin >> nm;
        bool tabung = false;
        for (i = 0; i < x; i++)
        {
            if (nm == member.username[i])
            {
                cout <<"Halo !!!, "<<member.username[i]; 
                cout <<endl;
                cout << "Informasi Data Anda Saat Ini" << endl;
                cout << "Username       : " << member.username[i] << endl;
                cout << "Nama Member    : " << member.nama[i] << endl;
                cout << "Saldo Tabungan : " << member.tabungan[i] << endl;
                cout << "No. Identitas  : " << member.identity[i] << endl;
                cout << endl;
                system("pause");
                goto home;
            }
        }
    }
    else if (pil == 4)
    {
    busak:
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                  Menu Hapus Data Member                              |\n";
        cout << "|======================================================================================|\n";
        cout << endl;
        cout << "NO.\tUsername" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i]<<endl;
        }
        cout << endl;
        string busak;
        
        cout << "Untuk Hapus Data Input Username Member = ";
        cin >> busak;
        bool delstatus = false;
        //Perulangan untuk mencari data yang di inputkan user di index array
        for (int j = 0; j < x; j++)
        {
            if (busak == member.username[j])
            {
                //Jika nilai yang di masukkan user sesuai dengan salah satu
                //Nilai data di index array
                cout <<"Halo !!!, "<<member.username[j]; 
                cout <<endl;
                cout << "Informasi Data Anda Saat Ini" << endl;
                cout << "Username       : " << member.username[j] << endl;
                cout << "Nama Member    : " << member.nama[j] << endl;
                cout << "Saldo Tabungan : " << member.tabungan[j] << endl;
                cout << "No. Identitas  : " << member.identity[j] << endl;
                cout << endl;
                char hps;
                cout << "Apakah Anda Yakin Ingin Mengahupus Data Tersebut ? (y/n) > ";cin>>hps;
                    if (hps=='y'||hps=='Y'){
                        for (int k = j /* dimulai dari index nilai yang ditemukan */; k < x; k++){
                        //Menggeser niali data pada index array sampai jumlah maksimal data array
                        member.username[k] /* Nilai index saat ini */ = member.username[k + 1] /* Nilai index selanjutnya */;
                        member.nama[k] /* Nilai index saat ini */ = member.nama[k + 1] /* Nilai index selanjutnya */;
                        member.identity[k] /* Nilai index saat ini */ = member.identity[k + 1] /* Nilai index selanjutnya */;
                        member.tabungan[k] /* Nilai index saat ini */ = member.tabungan[k + 1] /* Nilai index selanjutnya */;
                    }
                        // Mengurangi jumlah array karena saah satu datanya telah dihapus
                        x -= 1;
                        delstatus = true;
                        cout<<"Data Berhasil Dihapus !!!"<<endl;
                        cout <<endl;
                        break;
                    }else if (hps=='n'||hps =='N'){
                        system("pause");
                        goto home;
                    }else{
                        cout <<"Inputan Salah,Inputkan (y/n)"<<endl;
                        system("pause");
                        goto home;
                    }
            }
        }
        if (delstatus == false)
        {
            cout << "Username " << busak << "Tidak Ditemukan !!!" << endl;
            system("pause");
            goto busak;
        }
        system("pause");
        goto home;
    }
    else if (pil == 5)
    {
    tabg:
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                      Menu Menabung                                   |\n";
        cout << "|======================================================================================|\n";
        cout << endl;
        cout << "NO.\tUsername" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i]<< endl;
        }
        cout << endl;
        string tab;
        cout << "Untuk Menabung ,Silakan Input Username Member = ";
        cin >> tab;
        bool tabung = false;
        for (i = 0; i < x; i++)
        {
            if (tab == member.username[i])
            {
                cout <<"Halo !!!, "<<member.username[i]; 
                cout <<endl;
                cout << "Informasi Data Anda Saat Ini" << endl;
                cout << "Username       : " << member.username[i] << endl;
                cout << "Nama Member    : " << member.nama[i] << endl;
                cout << "Saldo Tabungan : " << member.tabungan[i] << endl;
                cout << "No. Identitas  : " << member.identity[i] << endl;
                cout << endl;
                double baru;
                cout << "Masukan Jumlah Uang Yang akan Ditabung = Rp. ";
                cin >> baru;
                member.tabungan[i] = baru + member.tabungan[i];
                tabung = true;
                cout << endl;
                cout << "Berhasil Menambahkan Saldo Ke Akun Anda !!! " << endl;
                //revisi
                cout << endl;
                for (i = 0; i < x; i++)
                {
                    cout << i + 1 << "\t" <<member.username[i]<<"\t\t"<< member.nama[i] << "\t\t" << member.identity[i] << "\t\t\tRp. " << member.tabungan[i] << endl;
                }
                system("pause");
                goto home;
            }
        }
        if (tabung == false)
        {
            cout << "Username " << tab << "Tidak Ditemukan !!!" << endl;
            system("pause");
            goto tabg;
        }
    }
    else if (pil == 6)
    {
    bali:
        system("cls");
        string ambil;
        double buang;
        cout << "|======================================================================================|\n";
        cout << "|                                  Menu Penarikan Uang                                 |\n";
        cout << "|======================================================================================|\n";
        cout << endl;
        cout << "NO.\tUsername" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i]<< endl;
        }
        cout << endl;
        string tarik;
        cout << "Untuk Melakukan Penarikan Uang  ,Silakan Input Username Member = ";
        cin >> tarik;
        bool take = false;
        for (i = 0; i < x; i++)
        {
            if (tarik == member.username[i])
            {
                cout <<"Halo !!!, "<<member.username[i]; 
                cout <<endl;
                cout << "Informasi Data Anda Saat Ini" << endl;
                cout << "Username       : " << member.username[i] << endl;
                cout << "Nama Member    : " << member.nama[i] << endl;
                cout << "Saldo Tabungan : " << member.tabungan[i] << endl;
                cout << "No. Identitas  : " << member.identity[i] << endl;
                cout << endl;
                double baru;
                cout << "Masukan Jumlah Uang yang akan diambil = Rp. ";
                cin >> baru;
                if (baru > member.tabungan[i])
                {
                    cout << "Maaf, Saldo Anda Tidak Mencukupi Untuk Melakukan Penarikan !!!" << endl;
                    system("pause");
                    goto bali;
                }
                else if (baru < member.tabungan[i])
                {
                    member.tabungan[i] = member.tabungan[i] - baru;
                    take = true;
                    cout << endl;
                    cout << "Berhasil Melakukan Penarikan Uang !!! " << endl;
                    cout << endl;
                    cout << "Informasi Data Anda Saat Ini" << endl;
                    cout << "Username       : " << member.username[i] << endl;
                    cout << "Nama Member    : " << member.nama[i] << endl;
                    cout << "Saldo Tabungan : " << member.tabungan[i] << endl;
                    cout << "No. Identitas  : " << member.identity[i] << endl;
                    cout << endl;
                    print:
                    char ps;
                    cout <<"Apakah Anda Akan Print Struck ? (y/n) > ";cin >>ps;
                    if (ps=='y'||ps=='Y'){
                        cout <<"fitur belum ada";
                        system("pause");
                        goto home;
                    }else if (ps=='n'||ps =='N'){
                        system("cls");
                        system("pause");
                        goto home;
                    }else{
                        cout <<"Inputan Salah,Inputkan (y/n)"<<endl;
                        system("pause");
                        goto print;
                    }
                }
            }
        }
        if (take == false)
        {
            cout << "Username " << tarik << "Tidak Ditemukan !!!" << endl;
            system("pause");
            goto bali;
        }
    }
    else if (pil == 7)
    {
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                      Menu Pencarian Data                             |\n";
        cout << "|======================================================================================|\n";
        cout<<endl;
        cout << "NO.\tUSERNAME"<< endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t" <<member.username[i]<<endl;
        }
        cout<<endl;
        cout << "|======================================================================================|\n";
        string cari;
        cout<<endl;
        cout <<"Inputkan Username Data yang Akan Anda Cari > ";
        cin >>cari;
    }
    else if (pil == 8)
    {
        system("cls");
        cout << "|======================================================================================|\n";
        cout << "|                                      Tentang                                         |\n";
        cout << "|======================================================================================|\n";
        cout<<endl;
        cout <<"Aplikasi Ini Dibuat Oleh : "<<endl;
        cout <<"1. Dika"<<endl;
        cout <<"2. Ari"<<endl;
        cout <<"3. Fahrudin"<<endl;
        cout <<"4. Aji"<<endl;
        cout <<"5. Ragil"<<endl;
        cout <<"6. Reza"<<endl;
        cout <<"7. Tirta"<<endl;
        cout <<"8. Adil"<<endl;
        cout <<"9. Akhid"<<endl;
        cout<<endl;
        cout << "|======================================================================================|\n";
        system("pause");
        goto home;
    }
    else if (pil == 9)
    {
        system("cls");
        cout<<endl;
        cout << "TERIMAKASIH";
        system("pause");
        return 0;
    }
    else
    {
        cout << "Inputan Salah !!!,SIlakan Masukan Pilihan yang Benar [ 1 / 2 / 3 / 4 / 5 / 6 / 7 / 8 / 9]" << endl;
        system("pause");
        goto home;
    }
}
