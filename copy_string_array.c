#include <stdio.h>
int main(){
    char a[] = "I am a good student!", b[40];
    int i;
    for(i = 0;*(a + i)!='\0';i++ ){
        *(b+i) = *(a+i);
    }
    *(b+i)='\0';
    printf("string is: %s\n", a);
    printf("string is: ");
    for(i =0; b[i]!='\0';i++){
        printf("%c", b[i]);
    }
}