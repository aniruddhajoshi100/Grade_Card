#include<stdio.h>  
#include<string.h>  
#include"full.h"  
  
void display(){  
    char a[100];  
    printf("Enter name to search: ");  
    scanf("%s",a);  
    printf("\n");
    int n;
    for(int i=0;i<10;i++){  
        if(strcmp(name[i], a) == 0){  
           n=i; 
        }  
    }  
    printf("Roll no. %d\n\n",n+1);
    printf("Isa1 marks:\n");
    for(int i=0;i<5;i++){
        printf("%s:",*(subjects+i));
        printf("%d ",*(*(isa1+n)+i));
    }
    printf("\n\n");
    printf("Isa2 marks:\n");
    for(int i=0;i<5;i++){
        printf("%s:",*(subjects+i));
        printf("%d ",*(*(isa2+n)+i));
    }
    printf("\n\n");
    printf("Esa marks:\n");
    for(int i=0;i<5;i++){
        printf("%s:",*(subjects+i));
        printf("%d ",*(*(esa+n)+i));
    }
    printf("\n");
    printf("\n");
}  
