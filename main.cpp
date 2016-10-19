#include <windows.h>
#include <iostream>
#include <stdio.h>


using namespace std;

#define m  2
#define n  2

typedef int matriks[m][n]; //mendefinisikan tipe data matriks integer

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int i, j;

    matriks A, B, C;
    cout<<"Program Penjumlahan Matriks 2 x 2"<<endl;
    cout<<"---------------------------------"<<endl;

    cout<<"\n Masukkan entri-entri matriks A\n"<<endl;

    for(i=0; i < m; i++) {
        for(j=0; j < n;j++) {
            printf("A[%d][%d] = ", i, j); cin>>A[i][j];
        }
    }

    cout<<"\n Masukkan entri-entri matriks B\n"<<endl;

    for(i=0; i < m; i++) {
        for(j=0; j < n;j++) {
            printf("B[%d][%d] = ", i, j); cin>>B[i][j];
        }
    }

    //proses penjumlahan

    cout<<"\n";

    for(i=0; i < m; i++) {
        for(j=0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Menampilkasn Matriks A
    system("cls");
    cout<<"Entri-entri matriks A, B, dan hasil C \n\n"<<endl;
    gotoxy(1,5);cout<<"A = ";
    for(i=1; i <= m; i++) {
        for(j=1; j <= n; j++) {
            gotoxy(2+4*j, 2+i*2);
            cout<<A[i-1][j-1];
        }
    }

    gotoxy(1,10);cout<<"B = ";
    for(i=1; i <= m; i++) {
        for(j=1; j <= n; j++) {
            gotoxy(2+4*j, 2+i*2+5);
            cout<<B[i-1][j-1];
        }
    }

    cout<<"\n\nHasil Penjumlahan\n\n"<<endl;
    gotoxy(1,15);cout<<"C = ";
    for(i=1; i <= m; i++) {
        for(j=1; j <= n; j++) {
            gotoxy(2+4*j, i*2+13);
            cout<<C[i-1][j-1];
        }
    }

    cout<<"\n"<<endl;
    return 0;
}
