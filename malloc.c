#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr;
    printf("Enter a number");
    scanf("%d",&n);
    ptr=(int*)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("Error! Memory is not sufficient");
        exit(0);
    }else{
        printf("Enter the element of array\n");
        for(int i=0; i<=n; i++){
            scanf("%d", ptr+i);
        }
    
    for (int i=0; i<=n; i++){
        printf("%d",*(ptr+1));
    }
    free(ptr);
    }
    return 0;
}