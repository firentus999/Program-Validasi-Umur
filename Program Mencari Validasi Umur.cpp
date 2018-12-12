#include <iostream>
using namespace std;

int main()
{
    int usia,kerja;
    cout<<" Program Menentukan Tingkatan Usia"<<endl;
    cout<<" Masukan usia :";
    cin>>usia;
    cout<<"Usia anda :"<<usia<<endl;
        if(usia<0)
        {
            cout<<"Masukan anda salah"<<usia<<endl;
        }
        else if(usia>=0,usia<=4)
        {
            cout<<"Balita"<<endl;
        }
        else if(usia>=4,usia<=6)
        {
            cout<<"kanak-kanak"<<endl;
        }
        else if(usia>=7,usia<=12)
        {
            cout<<"SD"<<endl;
        }
        else if(usia>=13,usia<=15)
        {
            cout<<"SMP"<<endl;
        }
        else if(usia>=16,usia<=18)
        {
            cout<<"SMA atau SMK"<<endl;
        }
        else if(usia>=19,usia<=22)
        {
            cout<<"Lanjut Kuliah kalo mau,kalo tidak kerja"<<endl;
        }

        else if(usia>=23,usia<=40)
        {
                cout<<"Cari Uang"<<endl;
        }
        else if(usia>=41,usia<=60)
        {
            cout<<"Menikmati Masa Tua"<<endl;
        }
        else if(usia>=61,usia<=100)
        {
            cout<<"Lebih Mendekati Kepada Tuhan"<<endl;
        }
        else if(usia>100)
        {
        cout<<"MATI"<<endl;
        }
        return 0;
}

