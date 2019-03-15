#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    struct Mahasiswa {
    char nim[15];
    char nama[100];
    float ipk;
    struct Mahasiswa *next, *prev;
    }*head,*tail,*curr;

void cetak(){
    curr = head;
    while(curr!=NULL){
        printf("%s %s %f\n",curr->nim, curr->nama, curr->ipk);
        curr = curr -> next;
    }
}

void push(char tNim[], char tNama[], int tIpk){
    curr = (struct Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(curr->nim, tNim);
    strcpy(curr->nama, tNama);
    curr->ipk = tIpk;
    curr->next = curr->prev = NULL;

    // ketika tidak ada data
    if(head == NULL){
        head = tail = curr;
    }
    else{
        curr->next = head;
        head->prev = curr;
        head = curr;
    }
}

void pop(){
    // ketika ada 1 data
    if(head == tail){
        curr = head;
        free(curr);
        head = tail = NULL;
    }
    else {
        curr = head;
        head = head -> next;
        free(curr);
        head ->prev = NULL;
    }
}

    int main() {
    push("2", "aa",1);
    push("3", "aa",1);
    push("4", "aa",1);
    cetak();
    printf("\n");
    pop();
    cetak();

    return 0;
}