/* Standard C++ includes */
#include <iostream> // untu3k mendeklarasikan bahasa c++
#include <iomanip>
#include <ctime>   //
#include <cstdlib> //untuk menerapkan CLS (clear screen)
#include <fstream> //untuk menerapkan varfile (akses file)

using namespace std;
int pil;
// int rekening = 859274871;
// int norekening()
// {
//     cout << rekening << endl;
//     return ++rekening;
int x = 3, indt, rek = 859274873;

struct data
{
    string nama['a'] = {"Susilo", "Akbar", "Tanjung"};
    string kitas['b'] = {"89076", "22311", "131311"};
    double tabungan['c'] = {20000, 30000, 50000};
    int rekening['d'] = {859274871, 859274872, 859274873};

} member;

//int jmlhdata = 3;
//double panjang = sizeof member.tabungan / sizeof(member.tabungan[0]);

void header()
{
    system("cls");
    cout << "\t\t\t\t======================================================\n";
    cout << "\t\t\t\t\t\t     WELCOME TO PT BANK PLECIT" << endl;
    cout << "\t\t\t\t\t\t     PT. JAJAL WAE    \n"
         << endl;
    cout << "\t\t\t\t\t\t        Created Kelompok PAPEN   " << endl;
    cout << "\t\t\t\t======================================================\n";
    cout << "\t\t\t\t\t1. Lihat Daftar Member & Tabungan" << endl;
    cout << "\t\t\t\t\t2. Masukan Data Member Baru" << endl;
    cout << "\t\t\t\t\t3. Edit Data" << endl;
    cout << "\t\t\t\t\t4. Hapus Data Member" << endl;
    cout << "\t\t\t\t\t5. Menabung" << endl;
    cout << "\t\t\t\t\t6. Withdraw" << endl;
    cout << "\t\t\t\t\t7. Keluar" << endl;
    // int c;
    //     for (c;c<=2;c++){
    //         cout << c+1 << "\t\t"<<member.nama[c]<<"\t\t"<<member.kitas[c]<<"\t\t"<<member.tabungan[c]<<endl;
    //     }
}

int main()
{
home:
    header();

    cout << "\n\t\t\t\t => INPUT PILIHAN : ";
    cin >> pil;

    if (pil == 1)
    {

        system("cls");
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Daftar Member PT Bank Plecit" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo\t\t\tNo.Rekening" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\t\tRp. " << member.tabungan[i] << "\t\t" << member.rekening[i] << endl;
        }
        system("pause");
        goto home;
    }
    else if (pil == 2)
    {
        system("cls");
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Halaman Input Data Memer BAru" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "Berapa Jumlah Data yang akan Anda Inputkan > ";
        cin >> indt;
        int b = x;
        for (x; x < indt + b; x++)
        {
            cout << "Masukan Data Member ke - " << x + 1 << endl;
            cout << "nama :";
            cin >> member.nama[x];
            cout << "kitas :";
            cin >> member.kitas[x];
            cout << "tabungan :";
            cin >> member.tabungan[x];
            cout << endl;
            cout << "rekening :";
            cin >> member.rekening[x];
        }
        x = (x + indt) - indt;
        //cout << x << endl;
        cout << "data berhasil di input" << endl;
        cout << endl;
        cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
        }
        system("pause");
        goto home;
    }
    else if (pil == 3)
    {
        system("cls");
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Menu Edit Data Member PT Bank Plecit" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
        }
        cout << endl;
        int ya;
        cout << "Untuk Edit Data Input Namanya = ";
        cin >> ya;
        system("pause");
        goto home;
    }
    else if (pil == 4)
    {
    busak:
        system("cls");
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Halaman Hapus Data User" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << endl;
        cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
        }
        cout << endl;
        string busak;

        cout << "Input Nama data yang akan anda hapus > ";
        cin >> busak;
        bool delstatus = false;
        //Perulangan untuk mencari data yang di inputkan user di index array
        for (int j = 0; j < x; j++)
        {
            if (busak == member.nama[j])
            {
                //Jika nilai yang di masukkan user sesuai dengan salah satu
                //Nilai data di index array
                for (int k = j /* dimulai dari index nilai yang ditemukan */; k < x; k++)
                {
                    //Menggeser niali data pada index array sampai jumlah maksimal data array
                    member.nama[k] /* Nilai index saat ini */ = member.nama[k + 1] /* Nilai index selanjutnya */;
                    member.kitas[k] /* Nilai index saat ini */ = member.kitas[k + 1] /* Nilai index selanjutnya */;
                    member.tabungan[k] /* Nilai index saat ini */ = member.tabungan[k + 1] /* Nilai index selanjutnya */;
                }

                // Mengurangi jumlah array karena saah satu datanya telah dihapus
                x -= 1;
                delstatus = true;
                break;
            }
            // else if (busak == member.nama[j])
            //
        }
        if (delstatus == false)
        {
            cout << "Data " << busak << " Not Found Pen !!!" << endl;
            system("pause");
            goto busak;
        }
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Daftar Member PT Bank Plecit" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "NO.\t\tNAMA\t\t\tNo.Identitas\t\t\tSaldo" << endl;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t\t" << member.kitas[i] << "\t\t\tRp. " << member.tabungan[i] << endl;
        }
        system("pause");
        goto home;
    }
    else if (pil == 5)
    {
    }
    else if (pil == 6)
    {
        cout << "+-----------------------------------------------------------------------+\n";
        cout << "|" << setiosflags(ios::right) << setw(50) << "Menu Penarikan Uang" << setiosflags(ios::right) << setw(23) << "|\n";
        cout << "+-----------------------------------------------------------------------+\n";
        cout << endl;
        int i;
        for (i = 0; i < x; i++)
        {
            cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
        }
        cout << endl;
        cout << "Masukan Nama User Yang Akan";
    }
    else if (pil == 7)
    {
        cout << "\t\t\t\t";
        system("pause");
        return 0;
    }
    else
    {
        cout << "\t\t\t\tInputan Salah" << endl;
        cout << "\t\t\t\t";
        system("pause");
        goto home;
    }
}
