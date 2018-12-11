#include<stdio.h>
#include<string.h>
int main(){
//ARRAY
//deklarasi array
//dimulai dari index ke 0 sampai index n-1 (9)
    char array1 [10] = {'a','b','c','d','e','f','g','h','i','j'};
//print index awal :
    printf("%c\n",array1[0]);
//hasil : a
//print index akhir (n-1):
    printf("%c\n",array1[10-1]);
//hasil : j
    int array2 [5] = {1,2,3,4,5};
    printf("%d\n",array2[2]);
//hasil : 3
//--------------------------------------------------------------------------------------------------------------
//Array 2 Dimensi
            int array2D [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n",array2D[2][2]);
/*hasil : 9*/

//akan mencetak data array 2 dimensi dalam bentuk kotak 3x3
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            printf("%d",array2D[i][j]);
        }
        printf("\n");
    }
/*hasil :
123
456
789*/
    char mahasiswa[100][100];
    strcpy(mahasiswa[0], "andi");
    printf("%s\n", mahasiswa[0]);

// POINTER
// * artinya isi dari
// & artinya alamat dari
    int angka = 100;
    int *ptr;
// menampung alamat angka ke dalam ptr
    ptr = &angka;
    printf ("Isi angka : %d\n", angka);
    printf("Alamat angka : %d\n", &angka);
    printf("Isi ptr : %d\n", ptr);
    printf("Alamat ptr %d\n", &ptr);
// Isi variabel angka dapat diubah menggunakan *ptr
    *ptr = 30;
    printf("Isi angka : %d\n", angka);

    getchar();
    return 0;
}