#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void revrese(char*s);
int main()
{
 char arr[100];
fgets(arr,sizeof(arr),stdin);
reverse(arr);
printf(arr);

    return 0;
}

void reverse(char*s)
{
 int len=strlen(s);
 for(int i=0;i<len/2;i++)
 {
   char c=s[i];
   s[i]=s[len-i-1];  // The first one is equal to the last one;
   s[len-i-1]=c;     // the last value become equal to the first value;

 }

}
