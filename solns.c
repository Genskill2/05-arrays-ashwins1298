/* Enter your solutions in this file */
#include <math.h>

#include <stdio.h>
int max(int arr[],int n)
{
for(int i=1;i<n;++i)
{
if(arr[0]<arr[i]){
arr[0]=arr[i];
}
}
return arr[0];
}

int min(int arr[],int n)
{
for(int i=1;i<n;i++)
{
if(arr[i]<arr[0]){
arr[0]=arr[i];
}
}
return arr[0];
}

float average(int arr[], int n)
{
float sum=0.0;
 for(int i=0;i<n;++i){
 sum=sum+arr[i];
 }
float average=sum/n;
 
 return average;
 }
 
 int mode(int arr[], int n){
int maxcount=0;
for(int i=0;i<n;++i){
int counts=0;

for(int j=0;j<n;++j){
if(arr[j]==arr[i])
++counts;
}
if(counts>maxcount){
maxcount=counts;
}
return arr[i];
}
}


int factors(int n, int [])
{ 
   int n,i; 
    while (n%2 == 0) 
    { 
        printf("%d ", 2); 
        n = n/2; 
    } 
    
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
         
        while (n%i == 0) 
        { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
    
    
    if (n > 2) 
        printf ("%d ", n); 
}
