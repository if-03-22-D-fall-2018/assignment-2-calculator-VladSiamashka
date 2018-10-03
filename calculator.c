#include <stdio.h>
#include <stdbool.h>


void add(double first_operand,double second_operand);
void subtract(double first_operand,double second_operand);
void multiply(double first_operand,double second_operand);
void divide(double firstOperand,double second_operand);

int main(int argc, char const *argv[]) {
  bool leave;
  int operator;
  double first_operand,second_operand;

  do {
    leave = false;

    printf("Choose one of the following operations:\n");
    printf("Add (1)\n");
    printf("Subtract (2)\n");
    printf("Multiply (3)\n");
    printf("Divide (4))\n");
    printf("Stop program (-1)\n");
    printf("Enter your choice:");
    scanf("%d", &operator );
    if (operator==-1) {
      leave = true;
    }
    else{

      switch(operator)
      {
          case 1:
          printf("Please enter the first operand:\n");
          scanf("%lf",&first_operand);
          printf("Please enter the second operand:\n");
          scanf("%lf",&second_operand);
          add(first_operand,second_operand);

              break;

          case 2:
          printf("Please enter the first operand:\n");
          scanf("%lf",&first_operand);
          printf("Please enter the second operand:\n");
          scanf("%lf",&second_operand);
          subtract(first_operand,second_operand);
              break;

          case 3:
          printf("Please enter the first operand:\n");
          scanf("%lf",&first_operand);
          printf("Please enter the second operand:\n");
          scanf("%lf",&second_operand);
          multiply(first_operand,second_operand);
              break;

          case 4:
          printf("Please enter the first operand:\n");
          scanf("%lf",&first_operand);
          printf("Please enter the second operand:\n");
          scanf("%lf",&second_operand);
          divide(first_operand,second_operand);
              break;


          default:
              printf("Input not allowed, please try again");
      }
    }


  } while(leave==false);
  return 0;



    }
      void add(double first_operand,double second_operand) {
        printf("%.1lf + %.1lf = %.1lf\n",first_operand, second_operand, first_operand + second_operand);
      }
      void subtract(double first_operand,double second_operand){
        printf("%.1lf - %.1lf = %.1lf\n", first_operand, second_operand, first_operand - second_operand);
      }
      void multiply(double first_operand,double second_operand) {
        printf("%.1lf * %.1lf = %.1lf\n",first_operand, second_operand, first_operand * second_operand);
      }
      void divide(double first_operand,double second_operand) {
        printf("%.1lf / %.1lf = %.1lf\n",first_operand, second_operand, first_operand / second_operand);
      }
