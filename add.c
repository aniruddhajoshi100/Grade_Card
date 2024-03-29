#include<stdio.h>  
#include"full.h"  
  
void add(){  
    int n;
    printf("Enter your roll no. ");
    scanf("%d",&n);
    rollno[n]=n;
    printf("Enter your name ");
    scanf("%s",&name[n-1]);
    printf("\n");
    printf("Enter your isa1 marks:\n");
    for(int i=0;i<5;i++){
        printf("%s: ",*(subjects+i));
        scanf("%d",&*(*(isa1+n-1)+i));
    }
    printf("\n");
    printf("Enter your isa2 marks:\n");
    for(int i=0;i<5;i++){
        printf("%s: ",*(subjects+i));
        scanf("%d",&*(*(isa2+n-1)+i));
    }
    printf("\n");
    printf("Enter your esa marks:\n");
    for(int i=0;i<5;i++){
        printf("%s: ",*(subjects+i));
        scanf("%d",&*(*(esa+n-1)+i));
    }
    printf("\n");
    printf("Successfully added\n\n");
}
