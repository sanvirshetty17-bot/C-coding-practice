#include<stdio.h>
int main(){
    int x=5;
    int *ptr1=&x;
    int*ptr2=NULL;
    if(ptr2!=NULL)
    {
        *ptr2=10;
    }else{
        printf("the ptr2 is NULL\n");
    }
    return 0;
}