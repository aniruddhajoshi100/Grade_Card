#include<stdio.h>
#include"full.h"
void update(){
    int n;
    printf("Enter your roll no. ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter:\n1 To update Isa1 marks\n2 To update Isa2 makrs\n3 To update Esa marks\n");
    int n1;
    scanf("%d",&n1);
    printf("Enter:\n1 To update Maths marks\n2 To update Physics marks\n3 To update C marks\n4 To update Mechanical marks\n5 To update Electrical marks\n");
    int n2;
    scanf("%d",&n2);
    switch(n1){
        case 1:
            printf("Previous marks: %d\n",isa1[n-1][n2-1]);
            printf("Re-enter your Isa1 %s marks: ",subjects[n2-1]);
            scanf("%d",&isa1[n-1][n2-1]);
            printf("Successfully Updated\n\n");
            break;
        case 2:
            printf("Previous marks: %d\n",isa1[n-1][n2-1]);
            printf("Re-enter your Isa2 %s marks: ",subjects[n2-1]);
            scanf("%d",&isa2[n-1][n2-1]);
            printf("Successfully Updated\n\n");
            break;
        case 3:
            printf("Previous marks: %d\n",isa1[n-1][n2-1]);
            printf("Re-enter your Esa %s marks: ",subjects[n2-1]);
            scanf("%d",&esa[n-1][n2-1]);
            printf("Successfully Updated\n\n");
            break;
    }
}