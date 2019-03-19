#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n){
  int i, l=1, m=1;
  if(array == NULL)
    l=0;
  else
    for(i=1; i<n; i++){
      if(array[i]>array[i-1])
	l++;
      else if(l>=m){
	m=l;
	l=1;}
      else
	l=1;
    }
  return m;
}
