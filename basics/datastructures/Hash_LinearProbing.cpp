#include <iostream>
#include <stdio.h>
#include <string.h>

int hash (int inputData){
    return inputData % 6;
}
int main() {
    // linear Probing

    int data [6]={0};
    int angka;
    while(true){
        printf("masukan angka");
        scanf("%d", &angka);
        getchar();
            if(data[hash(angka)==0]){
                data[hash(angka)] = angka;
            }else{
                int hashAngka = hash(angka);
                while (data[hashAngka]!=0){
                    hashAngka++;
                }
                data[hashAngka] = angka;
            }
        for (int i = 0; i < 6; ++i) {
            printf("%d. %d\n",i, data[i]);
        }
    }
    printf("%d\n",hash(angka));
    printf("%d\n", data[0]);
    return 0;

}