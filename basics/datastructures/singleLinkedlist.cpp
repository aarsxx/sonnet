#include <iostream>
#include <stdio.h>
    struct Mahasiswa {
    char nim[15];
    char nama[100];
    float ipk;
    struct Mahasiswa *next;
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
    curr->next = NULL;

    // ketika tidak ada data
    if(head == NULL){
        head = tail = curr;
    }
    else{
        tail->next = curr;
        tail = curr;
    }
}
void pushDepan(char tNim[], char tNama[], int tIpk){
    curr = (struct Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(curr->nim, tNim);
    strcpy(curr->nama, tNama);
    curr->ipk = tIpk;
    curr->next = NULL;

    // ketika tidak ada data
    if(head == NULL){
        head = tail = curr;
    }
    else{
        curr->next = head;
        head = curr;
    }
}
void push(char tNim[], char tNama[], int tIpk){
    curr = (struct Mahasiswa*) malloc(sizeof(Mahasiswa));
    strcpy(curr->nim, tNim);
    strcpy(curr->nama, tNama);
    curr->ipk = tIpk;
    curr->next = NULL;

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
            curr->next = temp->next;
            temp->next = curr;
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
            curr = head;
            while (curr->next != tail) {
                curr = curr->next;
            }
            curr->next = tail->next;
            free(tail);
            tail = curr;
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
        while(curr->next!=NULL && strcmp(curr->next->nim,nim)){
            curr=curr->next;
        }
        if(curr->next==NULL){
            printf("no data");
        }else{
            struct Mahasiswa *temp = curr->next;
            curr->next=temp->next;
            free(temp);

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