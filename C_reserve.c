#include<stdio.h>
void reserve(int *x, int n);
void main(){
    int a[10];
    int i;
    printf("Enter arrys:");
    for(i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    reserve(a,10);
    printf("The reserve arrays is :");
    for(i = 0; i < 10; i++){
        printf("%d", a[i]);
    }
    
}
void reserve(int *x, int n){
    int *i, *j, *v, temp, mid;
    mid =(n-1)/2;
    i = x;
    j = x-1 + n;
    
    v = x+mid;
    for(;i<=v; i++, j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
    
}
