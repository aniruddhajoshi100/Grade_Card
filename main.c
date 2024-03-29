#include<stdio.h>  
#include"full.h"  
  
int isa1[10][5]={{22,29,27,25,36}};  
int isa2[10][5]={{26,28,31,34,29}};  
int esa[10][5]={{89,76,72,97,85}};  
char name[10][100]={"Aniruddha"};  
int rollno[10]={1}; 
char subjects[5][50]={"Maths","Physics","C","Mechanics","Electrical"};
  
int main(){  
    int n;
    do{
        printf("Menu:\nEnter 1 To check your results\nEnter 2 To add a student's details\nEnter 3 To update a student's results\nEnter 4 To exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
               display();
            break;
            case 2:
                add();
                break;
            case 3:
                update();
                break;
            case 4:
                break;
        }
    }
    while(n!=4);
}  
