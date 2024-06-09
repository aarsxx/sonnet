#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    struct Mahasiswa {
    char nim[15];
    char nama[100];
    float ipk;
    struct Mahasiswa *next, *prev;
    }*rear,*front,*curr;

void cetak(){
    curr = rear;
    while(curr!=NULL){
        printf("%s %s %f\n",curr->nim, curr->nama, curr->ipk);
        curr = curr -> next;
    }
}

void enqueue(char tNim[], char tNama[], int tIpk){
    curr = (struct Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(curr->nim, tNim);
    strcpy(curr->nama, tNama);
    curr->ipk = tIpk;
    curr->next = curr->prev = NULL;

    // ketika tidak ada data
    if(rear == NULL){
        rear = front = curr;
    }
    else{
        curr->next = rear;
        rear->prev = curr;
        rear = curr;
    }
}

void dequeue(){
    // ketika ada 1 data
    if(rear == front){
        curr = front;
        free(curr);
        rear = front = NULL;
    }
    else {
        curr = front;
        front = front -> next;
        free(curr);
        front ->next = NULL;
    }
}

    int main() {
    enqueue("2", "aa",1);
    enqueue("3", "aa",1);
    enqueue("4", "aa",1);
    cetak();
    printf("\n");
    dequeue();
    cetak();

    return 0;
}