#include <stdio.h>
int main(){
    char a[] = "I am a good student!", b[40], *p1, *p2;
    int i;
    p1 = a;
    p2 = b;
    for(;*p1!='\0';p1++, p2++ ){
        *p2 = *p1;
    }
    *p2='\0';
    printf("string is: %s\n", a);
    printf("string is: ");
    for(i =0; b[i]!='\0';i++){
        printf("%c", b[i]);
    }
}