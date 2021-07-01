#include <math.h>
#include <cs50.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>

void swap_max(int arr[],int l,int x){
 int max=arr[x];
 int index=x;
 int i;
 for(i=x;i<l;i++)
 {
  if(arr[i]>max)
   {
    max=arr[i];
    index=i;
   }
 }
 int temp;
 temp=arr[x];
 arr[x]=max;
 arr[index]=temp;
}


void ssort(int arr[],int l){
 int  i;
 for(i=0;i<l;i++)
   swap_max(arr,l,i);
}
