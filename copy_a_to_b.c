#include <stdio.h>
void copy_string(char *from, char *to);
void main(){
    
    char *a = "I am a teacher.";
    char b[] = "I am a student.";
    copy_string(a,b);
    printf("a: %s\nnew b: %s", a,b);
}
void copy_string(char *from, char *to){
    for(;*from!='\0';*from++,*to++){
        *to = *from;
    }
    *to = '\0';
}


