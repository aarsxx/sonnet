
#include<stdio.h>
// pertemuan 3
int main() {
//SELECTION
    int angka1 = 10;
    int angka2 = 20;
    char kata1[10] = "course";
    char kata2[20] = "net";
//--------------------------------------------------------------------------------------------------------------
//IF
//menjalankan statement printf kata1 jika kondisi if benar
    if (angka1 > 5) printf("%s\n", kata1);
//menjalankan statement false ketika kondisi dalam if salah
    if (angka1 < 5)
        printf("%s\n", kata1); // -> statement true
    else
        printf("%s\n", kata2); // -> statement false
// NESTED IF
    if (angka1 < 20) {
        printf("Rendah\n");
    } else if (angka1 < 50) {
        printf("Sedang\n");
    } else {
        printf("Tinggi\n");
    }
// Compound condition
// angka1 =10, angka=20
    if (angka1 > 5 && angka2 < 10) {
        printf("Benar\n");
    } else {
        printf("Salah\n");
    }
//-------------------------------------------------------------------------------------------------------------
//Switch case
//merupakan multiple selection
    int pilih = 1;
    switch (pilih) {
        case 1:
            printf("nilai pilih adalah 1\n");
            break;
        case 2:
            printf("nilai pilih adalah 2\n");
            break;
        case 3:
            printf("nilai pilih adalah 3\n");
            break;
        default:
            printf("nilai pilih bukan 1 ataupun 2 ataupun 3\n");
            break;

    }
//hasil = nilai pilih adalah 1
//karena definisi value pilih = 1 di awal
//--------------------------------------------------------------------------------------------------------------
//TERNARY
    int a = 0, b = 0;
    a = 10;
//jika a salah bernilai 1 , maka statement false dijalankan
//b akan bernilai 30
    printf("Value of b is %d\n", (a == 1) ? 20 : 30);
//hasil : Value of b is 30
//jika a benar bernilai 10 , maka statement true di jalankan
//b akan bernilai 20
    printf("Value of b is %d\n", (a == 10) ? 20 : 30);
//Value of b is 20

//--------------------------------------------------------------------------------------------------------------
//contoh
    char grade;
    printf("Input grade : ");
    scanf("%c", &grade);
    fflush(stdin);
    switch (grade) {
        case 'a' :
            printf("Mantap bro");
            break;
        case 'b' :
            printf("Oke juga");
            break;
        case 'c' :
            printf("Lumayan");
            break;
        case 'd' :
            printf("Kurang beruntung");
            break;
        default :
            printf("Format grade salah");
            break;
    }
    getchar();
    return 0 ;
}