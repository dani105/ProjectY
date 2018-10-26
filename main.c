#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "First.h"

//Functions..........
int User_input();
char msg();
int whole_concept(int var,int User_input());
void say_hello();

int main(){

    //Vars................
    int first_num = 0;
    int second_num = 0;
    int result = 0;
    int choice = 0;
    int visitor_count = 5;
    void say_hello(){
        static int count = 1;
        printf("Now At : %d  and Counting\n",count);
        count++;
    }
    printf("Welcome user Number : %d \n \t\t    : %s\n",visitor_count,NAME);
    printf("\n");
    printf("\n");
    printf("--------------------------\n");
    printf("XOXOXOXOXOXOXOXOXOXOXOXOXO\n");
    printf("XO \t");
    printf("CALCULATOR\tXO\n");
    printf("XOXOXOXOXOXOXOXOXOXOXOXOXO\n");
    printf("--------------------------\n");
    //Message to the user..................
    char msg(){
        printf("\n");
        printf("\t\tXOXOXOXOX....KEY....XOXOXOXOXOXO\n");
        printf("\t\tXO     1 for Addition         XO\n\t\tXO     2 for Subtraction      XO\n\t\tXO     3 for Multiplication   XO\n\t\tXO     4 for Division         XO\n\t\tXO     5 to EXIT              XO\n");
        printf("\t\tXOXOXOXOXOXOXOXOXOXOXOXOXOXOXOXO\n");
        printf("\n");
    }

    int User_input(){
    printf("Enter a number : ");
    scanf("%d",&first_num);
    printf("Enter another number : ");
    scanf("%d",&second_num);
    }


    int whole_concept(int var,int User_input()){

            switch(var){
        case 1:
            printf("..........ADDITION............\n");
                User_input();
                result = first_num + second_num;
                printf(" Output : %d + %d = %d \n",first_num,second_num,result);
                break;
         case 2:
            printf("..........SUBTRACTION............\n");
                User_input();
                result = first_num - second_num;
                printf(" Output : %d - %d = %d \n",first_num,second_num,result);
                 break;
          case 3:
            printf("..........MULTIPLICATION............\n");
                User_input();
                result = first_num * second_num;
                printf(" Output : %d * %d = %d \n",first_num,second_num,result);
                  break;
            case 4:
            printf("..........DIVISION............\n");
                User_input();
                if(second_num == 0){
                            printf("Output : %d / %d = 0 \n",first_num,second_num);
                }else{
                 result = first_num / second_num;
                 printf(" Output : %d / %d = %d \n",first_num,second_num,result);
                   break;
                }
        default :
            printf("Please Enter a Number.   ");
            printf("Your choices are :\n(1) for Addition\n(2) for Subtraction\n(3) for Multiplication \n(4) for Division\n");
            printf("XOXOXOXOXOXOXOXOXOXOX\n");
            printf("\n");
            break;
               }
            }

            while ( choice != 5){
            msg();
            scanf("%d",&choice);
            if(choice == 5){
                printf("PROGRAM ENDED\n");
                break;
            }
            if(choice >5 ){

                printf("Enter A number between 1(included) and 4(included)\n");
            }
            whole_concept(choice,User_input);
        }
    return 0;
}
