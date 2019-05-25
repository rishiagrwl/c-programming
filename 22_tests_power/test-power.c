#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned power(unsigned x, unsigned y);

int main(){
  if(power(0,0)!= 1){
    printf("Error1");
    return EXIT_FAILURE;}
  if(power(6,0)!= 1){
    printf("Error2");
    return EXIT_FAILURE;}
  if(power(3,1)!= 3){
    printf("Error3");
    return EXIT_FAILURE;}
  if(power(2,2)!= 4){
    printf("Error4");
    return EXIT_FAILURE;}
if(power(-2,2)!= 4){
  printf("Error5");
    return EXIT_FAILURE;}
 if(power(2,16) != pow(2,16)){
  printf("Error6");
  return EXIT_FAILURE;}
  return EXIT_SUCCESS;
}
