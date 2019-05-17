/* Standard C++ includes */
#include <iostream> // untu3k mendeklarasikan bahasa c++
#include <ctime>    //
#include <cstdlib>  //untuk menerapkan CLS (clear screen)
#include <fstream>  //untuk menerapkan varfile (akses file)

using namespace std;
int pil;

struct data
{
    string nama['a'] = {"Susilo", "Akbar", "Tanjung"};
    string kitas['b'] = {"89076", "22311", "131311"};
    double tabungan['c'] = {20000, 30000, 50000};

} member;

int jmlhdata = 3;
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
    cout << "\t\t\t\t\t3. Hapus Data Member" << endl;
    cout << "\t\t\t\t\t4. Menabung" << endl;
    cout << "\t\t\t\t\t5. Withdraw" << endl;
    cout << "\t\t\t\t\t6. Keluar" << endl;
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
        {
            system("cls");
            cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
            int i;
            for (i = 0; i < 10; i++)
            {
                cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
            }
            system("pause");
            goto home;
        }
    }
    if (pil == 2)
    {
        system("cls");
        int x, indt;
        cout << "menu input" << endl;
        cout << "berapa data yang ingin di input :";
        cin >> indt;
        for (x = 3; x >= indt; --x)
        {
            cout << "masukan data ke - " << x + 1 << endl;
            cout << "nama :";
            cin >> member.nama[x];
            cout << "kitas :";
            cin >> member.kitas[x];
            cout << "tabungan :";
            cin >> member.tabungan[x];
            cout << endl;
        }
        //x = indt;
        // cout << "data berhasil di input" << endl;
        // cout << endl;
        // cout << "NO.\t\tNAMA\t\tNo.Identitas\t\tSaldo" << endl;
        // int i;
        // for (i = 0; i < 10; i++)
        // {
        //     cout << i + 1 << "\t\t" << member.nama[i] << "\t\t" << member.kitas[i] << "\t\tRp. " << member.tabungan[i] << endl;
        // }
        system("pause");
        goto home;
    }
    else if (pil == 3)
    {
    }
    else if (pil == 4)
    {
    }
    else if (pil == 5)
    {
    }
    else if (pil == 6)
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
