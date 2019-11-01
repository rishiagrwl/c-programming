#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int count(int c,int *y){
  int i;
  for(i=0;i<26;i++){
    if(c==i){
      y[i]=y[i]+1;
      return 0;
    }
  }
  return 0;
}

int max(int *z){
  int m=0,i,t;
  for(i=0;i<26;i++){
    if(m<z[i]){
      m=z[i];
      t=i;
    }
  }
  return t;
}
    
  
  
void encrypt(FILE *f){
  int t, i,key, c,x[26];
  for(i=0;i<26;i++){
    x[i]=i;
  }
  
  while((c=fgetc(f))!=EOF){
    if(isalpha(c)){
    c=tolower(c);
    c-='a';
    count(c,x);
    }
  }
  for(i=0;i<26;i++){
    x[i]=x[i]-i;
  }

 t= max(x);
 key=t-'e'+'a';
 if(key<0){
   key=26+key;
 }
   
 printf("%d\n",key);
}


int main(int argc, char**argv){
  if(argc!=2){
    fprintf(stderr,"Usage: breaker  inputFileName\n");
    return EXIT_FAILURE;
  }
  FILE*f=fopen(argv[1],"r");
  if(f==NULL){
    perror("Could not open file");
    return EXIT_FAILURE;
  }
  encrypt(f);
  if(fclose(f)!=0){
    perror("Could not close the file");
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
