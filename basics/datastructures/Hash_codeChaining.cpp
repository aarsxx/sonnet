
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    char nama[100];
    struct  Node* next, *prev;
}*head[6], *tail[6],*current;

int hash (char inputNama[]){
    int panjangString = strlen(inputNama);
    int totalASCII = 0;
    for(int i=0; i < panjangString; i++ ){
        totalASCII = totalASCII + inputNama[i];
    }
    return totalASCII % 6;
}
void pushHash(int hasilHash, char inputNama){
    current = (struct Node*) malloc(sizeof(struct Node));
    strcpy(current->nama, inputNama);
    current->next = current->prev = NULL;
    if(head[hasilHash] == NULL){
        head[hasilHash] = tail[hasilHash] = current;
    }
    else{
        tail[hasilHash]->next = current;
        current->prev = tail[hasilHash];
        tail[hasilHash] = current;
    }
}

void viewAll(){
    for (int i = 0; i < 6 ; ++i) {
        printf("%d: ",i);
        if(head[i] == NULL){
            printf("NULL\n");
        }
        else
        {
            current = head[i];
            printf("%s", current->nama);
            while (current!=NULL){
                printf(" -> %s", current->nama);
                current = current->next;
            }
            puts("");
        }
    }

}

int main() {
    // Code Chaining
    pushHash(hash("Budi"),"Budi");
    pushHash(hash("audi"),"audi");
    viewAll();
    return 0;

}