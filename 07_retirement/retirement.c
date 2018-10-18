#include <stdio.h>
#include <stdlib.h>


typedef struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
} retire_info;

double myfunction(int a, int n,  double balance, double d, int z)
  {
  for (int i=a ; i<n ; i++)
    {
      int r= i/12;
      int s= i%12;
      printf("Age %3d month %2d you have $%.2f\n", r, s, balance);
      balance = balance*d + z + balance;
    }
  return balance;
  }
void retirement (int startAge, double initial, retire_info working, retire_info retired)
{
  int upto= startAge + working.months;
  double w= myfunction(startAge, upto, initial, working.rate_of_return, working.contribution); 
  int last= upto + retired.months;
  myfunction(upto, last, w, retired.rate_of_return, retired.contribution);
}


int main (void)
{
  retire_info work;
  work.months = 489;
  work.contribution = 1000;
  work.rate_of_return = 0.045/12;
  retire_info retire;
  retire.months = 384;
  retire.contribution = -4000;
  retire.rate_of_return = 0.01/12;
  int age = 327;
  double savings = 21345;
  retirement(age, savings, work, retire);
  return 0;
}
  
