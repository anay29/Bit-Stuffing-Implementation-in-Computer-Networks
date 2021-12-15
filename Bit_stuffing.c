#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *Receiver(char data2[])
{
 char data3[100]={};
 int i,count=0,j=0;
 for(i=0;i<strlen(data2);i++)
  {
    if(data2[i]=='0')
     {
      
      if(count==5)
      {
        count=0;
      }
      else
      {
        data3[j]=data2[i];
        j++;
	count=0;
      }
     }
    else if(data2[i]=='1')
     {
      count++;
      data3[j]=data2[i];
      j++;
     }
  }
  printf("Data at the receiver end is %s\n",data3);
}
int main()
{
  char data1[100];
  char data2[100];
  int count=0,j=0,i;
  printf("Enter the data in string format\n");
  scanf("%s",data1);
  for(i=0;i<strlen(data1);i++)
   {
      if(data1[i]=='1')
       {
          count++;
          if(count==5)
          {
           data2[j]='1';
           data2[j+1]='0';
           count=0;
           j++;
          }
          else
          data2[j]=data1[i];
          j++;
       }
      else
      {
       count=0;
       data2[j]=data1[i];
       j++;
      }
   }
   printf("Data at the sender end is .....%s\n",data2);
   Receiver(data2);
}
