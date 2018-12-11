#include<stdio.h>
#include<string.h>
int main(){
//REPETITION / LOOPING
//FOR
//terdapat 3 ekspresi dalam for
// initial state , conditional state , dan increment decrement
//mengulang dari index i = 0 sampai i<5 dan setiap kali pengulangan
//    i di tambah 1 (increment)
    for(int i = 0 ; i < 5 ; i++){
        printf("*");
    }
    printf("\n\n");
//hasil : *****
//mengulang dari index i = 0 dan j=20 sampai i<j
//i increment, j dikurangi 2
    for(int i = 0, j=20 ; i < j ; i++, j-=2){
        printf("*");
    }
    printf("\n\n");
//hasil : *****
//mengulang dari index i = 0 , lalu j = 0 sampai j < 5
//setiap i akan menjalankan 5x for j
    for(int i = 0; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            printf("*");
        }
        printf("\n");
    }
//i bisa di anggap sebagai baris dan j sebagai kolom tiap baris
/*hasil :
*****
*****
*****
*****
******/
//-----------------------------------------------------------------

//WHILE
//akan memeriksa kondisi , lalu menjalankan statement di dalamnya
//akan mengulang while sebanyak 5x
//dari index i = 0 sampai i<5
    int i = 0;
    while(i<5){
        printf("#");
        i++; //untuk increment agar tidak forever loop;
    }
    printf("\n");
//hasil : #####
//--------------------------------------------------------------------------------------------------------------

//DO WHILE
//akan menjalankan statement di dalamnya sebanyak minimal 1x , baru mengecek kondisi while
// input akan looping selama input nama lebih kecil dari 5 atau lebih besar dari 20
    char nama[100];
    do{
        printf("Input nama: ");
        scanf ("%s", nama); fflush(stdin);
    }while(strlen(nama)<5 || strlen(nama)>20);
//--------------------------------------------------------------------------------------------------------------
//BONUS BANGUN DATAR & BILANGAN
//FOR SEGITIGA rata kiri bawah
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < i ; j++){
            printf("*");
        }
        printf("\n");
    }
//hasil :
//*
//**
//***
//****

//SEGITIGA RATA KIRI ATAS
    int n = 5;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(i+j<n)
            {
                printf("*");
            }
        }
        printf("\n");
    }
/*hasil:
*****
****
***
**
**/

//SEGITIGA RATA KANAN BAWAH
    n=5;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(i+j>=n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
//hasil :
// *
// **
// ***
// ****
//*****

    int faktor=0;
//BILANGAN GENAP
    for(int i=0;i<=20;i++)
    {
        if(i%2 == 0)
        {
            printf("%d ",i);
        }
    }
/*hasil : 0 2 4 6 8 10 12 14 16 18 20 */
//BILANGAN GANJIL
    for(int i=0;i<=20;i++)
    {
        if(i%2 !=0)
        {
            printf("%d ",i);
        }
    }
/*hasil : 1 3 5 7 9 11 13 15 17 19 */

//BILANGAN PRIMA
    printf("\n");
    for(int i=0;i<=20;i++)
    {
        for(int bagi=1; bagi<=i;bagi++)
        {
            if(i % bagi==0)
            {
                faktor++;
            }
        }
        if(faktor==2)
        {
            printf("%d ",i);
        }
        faktor=0;
    }
/*hasil : 2 3 5 7 11 13 17 19 */


//BILANGAN FIBONACI
            printf("\n");
    int x=1,y=1,z;
    printf("%d ",x);
    printf("%d ",y);
    z=x+y;
    while(z<=20)
    {
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
    }
/*hasil : 1 1 2 3 5 8 13 */

    getchar();
    return 0;
}