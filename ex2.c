#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while(1)
  {
    *dst = *src;
    src++;
    dst++;
    if( *src == '\0'){
      *dst = *src;
      break;
    }
  }
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int length = strlen(srcString)+1;
 char dstString[length];
 char *sptr = &srcString[0];
 char *dptr = &dstString[0];


 copy(*dptr, *sptr);
 printf("%s", dstString);
}