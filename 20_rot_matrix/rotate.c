#include<stdio.h>

void rotate(char matrix[10][10]){
int i,j;
char arr[10][10];
for(i=0;i<10;i++){
for(j=0;j<10;j++){
  arr[j][9-i]=matrix[i][j];
}
}
 for(i=0;i<10;i++){
   for(j=0;j<10;j++){
     matrix[i][j]=arr[i][j];
   }
 }
}
