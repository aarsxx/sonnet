#include<stdio.h>
//stdio.h adalah standar library untuk input dan output.
void main(){
//VARIABEL - VARIABEL
//ada 2 cara untuk membuat variabel integer
//inisialisasi = tanpa value
//definisi = dengan value
int angka1;
angka1 = 0;
int angka2 = 65;
//digunakan untuk menampung angka dengan digit lebih panjang dari int
long longNumber1;
long longNumber2 = 12345678910;
//variable float digunakan untuk menampung angka desimal
float desimal1;
float desimal2 = 3.14;
//variable double digunakan untuk menampung angka desimal, tetapi
//menampung angka
//dengan digit lebih panjang dari float
double double1;
double double2 = 34657683.14;
//digunakan untuk menampung huruf (menggunakan kutip 1)
char huruf1;
huruf1 = 'a';
char huruf2 = 'a';
//digunakan untuk menampung kata (menggunakan kutip 2)
char kata1[10];
char kata2[20] = "anto";
// const digunakan untuk membuat variabel konstan/tetap,
// dapat digunakan untuk semua tipe data.
const int angka = 5;
// variabel angka akan error ketika diubah isinya.
// angka = 10;

//OUTPUT -> printf (print function)

//basic output untuk menampilkan tulisan di ikuti dengan enter (\n)
// \t digunakan untuk membuat tab
// \" --> digunakan untuk print "
// \b --> digunakan untuk backspace
// %% digunakan untuk menampilkan %
printf("\t\"Hello %% Gu\bys!\" \n");
//hasil : "Hello Guys!"
//output integer
printf("%d\n",angka1);
//hasil : 0
printf("angka2 = %d\n",angka2);
//hasil : 65
// angka2=65
// ubah 65 menjadi hexadecimal, octal
printf("Hexadecimal dari 65: %#x\n", angka2);
printf("Octal dari 65: %#o\n", angka2);
//output float
printf("%f\n",&desimal1);
//hasil : 0.000000
printf("desimal2 = %.2f\n",desimal2);
//hasil : 3.14
//output char (huruf dan kata)
printf("%c\n",huruf1);
//hasil : a
//kata
// %20s akan rata kanan sebanyak 20 karakter,
// rata kiri dengan %-20s
printf("%s\n",kata2);
printf("%20s\n",kata2);
//hasil : anto
//ASCII, American Standard Code for Information Interchange
//memberikan angka unik untuk tiap karakter
// A -> 65, a -> 97
printf("%c\n",angka2);
//hasil : A

//PUTCHAR
//fungsi sama seperti printf tetapi hanya bisa 1 character (1 huruf)
putchar('Z');
//hasil : Z
//PUTS
/*fungsi sama seperti printf tetapi tidak bisa menggunakan format
format yang dapat
*/
// di atur
//(%d %s %f dll). akan otomatis di akhiri dengan \n (enter)
char kalimat1[100] = "Hallo Dunia";
puts(kalimat1);
//hasil : "Hallo Dunia",diakhiri \n
//-----------------------------------------------------------------
//INPUT

//digunakan untuk input data ke variabel angka1
// harus menggunakan & sebelum nama variabel khusus untuk integer
scanf("%d",&angka1);
fflush(stdin);
printf("%d\n",angka1);
//untuk input data ke variabel desimal1
//hasil akan di tampilkan 2 angka belakang koma
scanf("%f",&desimal1);
fflush(stdin);
printf("%.2f\n",desimal1);
//untuk input data ke varibel kata1 sampai spasi
// untuk string, ketika menggunakan & ataupun tidak --> tetap menunjuk alamat
printf("Masukan nama depan anda : ");
scanf("%s",kata1);
fflush(stdin);
printf("%s\n",kata1);
//untuk input data ke variabel kata2 sampai enter
printf("Masukan nama lengkap anda : ");
scanf("%[^\n]",kata2);
fflush(stdin);
printf("%s\n",kata2);

//GETS
//fungsinya sama seperti scanf
//tetapi bisa lebih dari 1 kata (mengambil sampai enter)
char kalimat2[100] = "";
printf("Masukkan string : ");
gets(kalimat2);
printf("Kata yang anda input : ");
puts(kalimat2);

//untuk meminta inputan enter
getchar();
}