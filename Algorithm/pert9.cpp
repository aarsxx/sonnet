#include <Stdio.h>
#include <String.h>
struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
};
void cls() {
    for(int i =  0 ; i <25; i++) {
        printf("\n");
    }
}
void fibo(){
    int n, first = 0, second = 1, next, c;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("First %d terms of Fibonacci series are:\n", n);

    for (c = 0; c < n; c++)
    {
        if (c <= 1)
            next = c;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
}
void palindrome() {
    int n, r = 0, t;
    printf("Enter an integer to check if it is palindrome or not\n");
    scanf("%d", &n);

    t = n;

    while (t != 0)
    {
        r = r * 10;
        r = r + t%10;
        t = t/10;
    }

    if (n == r){
        printf("%d is a palindrome number.\n", n);
    }
    else {
        printf("%d isn't a palindrome number.\n", n);
    }
}
void MainMenu(){
    printf("Menu Aritmatika\n");
    printf("1.Fibonacci\n");
    printf("2.Palindrome\n");
    printf("3.Exit\n");
    printf("input:::");
}
int main() {

    struct Books Book1;        /* Declare Book1 of type Book */
    struct Books Book2;        /* Declare Book2 of type Book */

    /* book 1 specification */
    strcpy( Book1.title, "C Programming");
    strcpy( Book1.author, "Nuha Ali");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;

    /* book 2 specification */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    /* print Book1 info */
    printf( "Book 1 title : %s\n", Book1.title);
    printf( "Book 1 author : %s\n", Book1.author);
    printf( "Book 1 subject : %s\n", Book1.subject);
    printf( "Book 1 book_id : %d\n", Book1.book_id);

    /* print Book2 info */
    printf( "Book 2 title : %s\n", Book2.title);
    printf( "Book 2 author : %s\n", Book2.author);
    printf( "Book 2 subject : %s\n", Book2.subject);
    printf( "Book 2 book_id : %d\n", Book2.book_id);

    int choice = 0;
    do {
        do {
            cls();
            MainMenu();
            scanf("%d", &choice);
        } while (choice < 1 || choice >3);
        switch(choice){
            case 1:
                fibo();
                break;
            case 2:
                palindrome();
                break;
        }
        printf("Thankyou!");
    }while(choice !=3);
    getchar();
    return 0;
}
