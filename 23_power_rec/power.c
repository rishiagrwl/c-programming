#include<stdio.h>

unsigned power(unsigned x, unsigned y){
unsigned p;
if(y==0)
return 1;
else
p = x*power(x,y-1);
return p;
}
