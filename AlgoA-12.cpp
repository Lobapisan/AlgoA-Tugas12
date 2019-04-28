#include <iostream>
#include <stdlib.h>
using namespace :: std ;

main()
{   int a [50], input, i, j, temp, cari, ketemu, edit;
    cout<<"======DATA NIM TEKNIK ELEKTRO ANGKATAN 2018======\n";
    cout<<"=================================================\n";
    cout <<"Masukkan    Inputan            :  ";                cin>>input;

    for (i=1; i<=input; ++i)
   { cout <<"\nMasukkan    NIM " <<i<< " =  5180711"  ;               cin>>a[i];}
    for (i=1; i<input; ++i)
    {
        for (j=1; j<=(input-i); ++j)
        if (a[j]>a[j+1])
        {
            temp = a[j] ;
            a[j] = a[j+1] ;
            a[j+1] = temp ;
        }
    }
    system ("CLS");
    cout<<"======DATA NIM TEKNIK ELEKTRO ANGKATAN 2018======\n";
    cout<<"=================================================\n";
    cout <<"\nUrutan dari terkecil ";
    for(i=1; i<=input; ++i)
        cout <<"\nNIM        "  <<i<< " = 5180711"  <<a[i];

    cout <<"\n\nInput data yang dicari  :   ";                  cin>>cari;

    ketemu=0;
    for (i=0; i<=input; i++)
    {   if (a[i]==cari)
        {   ketemu=1;
            cout<<"\nData ditemukan pada indeks ke -  " <<i ;
        }
    }
    if (ketemu==0)
    {   cout<<"Data tidak ditemukan";   }

    cout <<"\n\nMasukkan edit NIM        :   5180711";                  cin>>edit;
    for (int e=0; e<input; e++)
    {if (a[e] == edit)
      { cout <<"\nMasukkan NIM yg baru     :   5180711";                  cin>>a[e];  }
    }
    cout <<"\nData NIM setelah diubah";
    for (int u=1; u<=input; u++)
	{   cout << "\nNIM " << u << " =   5180711" << a[u];	}

}
