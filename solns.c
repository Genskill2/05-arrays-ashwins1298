/* Enter your solutions in this file */
#include <stdio.h>

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


int factors(int n, int arr[],int x)

{
int prime=0;
for(int i=2;i<=n;i++)
{
if(n%i==0)
{
prime=1;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
prime=0;
break;
}}
if(prime==1)
{int count=sizeof(arr)/sizeof(arr[i]);
return i,count;
}
}}}
