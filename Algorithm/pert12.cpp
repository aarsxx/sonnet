//
// Created by Andika Leonardo on 11/01/19.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>


void cls(){
    for(int i = 0 ; i <25; i ++){
        printf("\n");
    }
}
void init(int sizeS[], int sizeM[], int sizeL[]){
    for(int i = 0; i <100; i ++){
        sizeS[i]=0;
        sizeM[i]=0;
        sizeL[i]=0;
    };

}
void sortWord(char word[]){
    for(int i = 0 ; i < strlen(word); i++){
        for(int j = i+1; j<strlen(word);j++){
            if(toupper(word[i])>toupper(word[i])){
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

}
void fibonaci(){

    int tc;
    //Input test case
    printf("input test case: ");
    scanf("%d", &tc);
    for(int a=1; a<=tc; a++){
        printf("Case #%d: ", a);
        int line,num,i=0,j,k;
        //Input line & num
        scanf("%d %d", &line, &num);
        j=num;
        for(int a=0; a<line; a++){
            if(a==0){
                k=num;
            }
            else{
                k=i+j;
                i=j;
                j=k;
            }
        }
        printf("%d\n", k);
    }
}
void lastWord(){
    int JumlahKata;
    char kata1[100], kata2[100];
    char kata1rev[100], kata2rev[100];

    scanf("%d", &JumlahKata);
    for(int i = 0; i<JumlahKata;i++){
        scanf("%s %s", kata1,kata2);
        printf("case #%d", i+1);
        strrev(kata1);
        strrev(kata2);
        if(strstr(kata1,kata2)){
            printf("%s",strrev(strstr(kata1,kata2)));
        }else{
            printf(" ");
        }
    }
}
void clothesCombination(){
    int countCase=0, beli=0;
    int sizeS[101], sizeM[101], sizeL[101];
    char size=' ';
    int color=0, result = 0;

    scanf("%d",&countCase);
    for(int i = 0; i <countCase; i++){
        scanf("%d",&beli);
        getchar();
        init(sizeS,sizeM,sizeL);
        result=0;
        for(int j = 0 ; j<beli;j++){
            scanf("%c %d",&size, &color);
            getchar();
                if(size=='S'){
                    if(sizeS[color]==0)result++;
                    sizeS[color]+=1;
            }else if(size=='M'){
                    if(sizeM[color]==0)result++;
                    sizeM[color]+=1;
            }else if(size=='L'){
                    if(sizeL[color]==0)result++;
                    sizeL[color]+=1;
            }
        }
        printf("case #%d: %d\n",i+1,result);
    }
}
void alphabethCombination(){
    char word[100][100];
    int countCase;
    int countWord;
    char result [100];
    FILE * read = fopen("Data.txt","r");
    fscanf(read,"%d",&countCase);

    for(int i = 0; i<countWord;i++){
            strcpy(result,"Equal");
            fscanf(read,"%d",&countWord);
        for(int j = 0; j<countWord;j++){
            fscanf(read,"%s", word[j]);
            sortWord(word[j]);
        }
        for(int j = 0; j<countWord-1;j++){
            if(strcmpi(word[j],word[j+1]!=0)){
                strcpy(result,"Not Equal");
                break;
            }
        }
        printf("Case #%d:%s\n",i+1,result);
    }
    fclose(read);
}
int main(){
    int choice;

    do{
        do{
                cls();
                printf("================== \n");
                printf("=      Menu      =\n");
                printf("================== \n");
                printf("1. Custom Fibonaci \n");
                printf("2. last Word\n");
                printf("3. Clothes Combination\n");
                printf("4. Alphabeth Combination\n");
                printf("5. Exit \n");
                printf(">>");
                scanf("%d",&choice);
        }while(choice < 1||choice >5);

            switch (choice){
                case 1:
                    fibonaci();
                    break;
                case 2:
                    lastWord();
                case 3:
                    clothesCombination();
                    break;
                case 4:
                    alphabethCombination();
                    break;
            }
    }while(choice!=5);
    printf("Thankyou!");
    return 0;

}


