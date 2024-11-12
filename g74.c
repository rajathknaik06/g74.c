/*Javed wants to determine the number of digits in a given integer. Help Javed by writing a program that reads an integer from the user and prints the number of digits in the integer.

Input format :
The input consists of an integer n.

Output format :
The output displays an integer, representing the number of digits in n.*/

#include <stdio.h>

int main() {
  int n,r,c=0;
  scanf("%d",&n);
  while(n>0)
  {
      r=n%10;
      n=n/10;
      c++;
  }
  printf("%d",c);
}
