#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(){
int array1[] = {1,2,3};
if (maxSeq(array1,3) != 3)
{printf("Failed on 1,2,3\n");
  exit(EXIT_FAILURE);}
 int array2[] = {9,2,1};
if (maxSeq(array2,3) != 1)
{printf("Failed on 9,2,1\n");
  exit(EXIT_FAILURE);}
 int array3[] = {-8,2,3};
if (maxSeq(array3,3) != 3)
{printf("Failed on -8,2,3\n");
  exit(EXIT_FAILURE);}
 int array4[] = {2,2,3};
if (maxSeq(array4,3) != 2)
{printf("Failed on 2,2,3\n");
  exit(EXIT_FAILURE);}
  int array5[] = {4};
if (maxSeq(array5,1) != 1)
{printf("Failed on 4\n");
  exit(EXIT_FAILURE);}
  int array6[] = {};
if (maxSeq(array6,0) != 0)
{printf("Failed on {}\n");
  exit(EXIT_FAILURE);}
  int array7[] = {1,2,3,12,3,23,12};
if (maxSeq(array7,7) != 4)
{printf("Failed on 1,2,3,12,3,23,12\n");
  exit(EXIT_FAILURE);}
 exit(EXIT_SUCCESS);
}
