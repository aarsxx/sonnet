#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int linearSearch(int angka[], int key, int jumlah){
    int i;
    for(i = 0 ; i < jumlah; i++){
        if(angka[i] == key){
            return i;
        }
    }
    return -1;
}

// Binary search
// dividing into 3 parts, low, middle, & high

int binarSearch(int angka[], int key, int jumlah){
    int low = 0, high = jumlah-1;
    int middle = (low + high) / 2;

    while(low <= high){
        middle = (low + high)/2 ;
        if( angka[middle] == key) return middle;
        if( key < angka[middle]) high =  middle - 1;
        if( key > angka[middle]) low =  middle + 1;
    }
    return -1;
}