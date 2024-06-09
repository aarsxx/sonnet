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

void pushBelakang(char tNim[], char tNama[], int tIpk){
    curr = (struct Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(curr->nim, tNim);
    strcpy(curr->nama, tNama);
    curr->ipk = tIpk;
    curr->next =  curr->prev = NULL;

    // ketika tidak ada data
    if(head == NULL){
        head = tail = curr;
    }
    else{
        tail->next = curr;
        curr->prev = tail;
        tail = curr;
    }
}
void pushDepan(char tNim[], char tNama[], int tIpk){
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
        if(strcmp(tNim,head->nim)<0){
            pushDepan(tNim,tNama,tIpk);
        }
        else if(strcmp(tNim,tail->nim)>0){
            pushBelakang(tNim,tNama,tIpk);
        }else{
            struct Mahasiswa *temp;
            temp = head;
            while(strcmp(tNim, temp->next->nim)>0){
                temp = temp ->next;
            }
            curr->prev = temp -> prev;
            curr->next = temp;
            temp->prev->next = curr;
            temp-> prev = curr;
        }
    }
}
void popDepan(){
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

void popBelakang(){
    // ketika ada 1 data
    if(tail != NULL) {
        if (head == tail) {
            curr = tail;
            free(curr);
            head = tail = NULL;
        } else {
            curr = tail;
            tail = tail->prev;
            free(curr);
            tail->next = NULL;
        }
    }
}

void pop(char nim[]){
    if(strcmp(head->nim, nim)==0){
        popDepan();
    }
    else if(strcmp(tail->nim, nim)==0){
        popBelakang();
    }
    else{
        curr = head;
        while(curr->next!=NULL && strcmp(curr->next->nim,nim)!=0){
            curr=curr->next;
        }
        if(curr->next==NULL){
            printf("no data");
        }else{
            curr->next->prev = curr->prev;
            curr->prev->next = curr->next;
            free(curr);

        }
    }
}


void popAll(){
    while(head!=NULL){
        popDepan();
    }
}

    int main() {
    cetak();
    return 0;
}