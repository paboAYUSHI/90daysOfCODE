
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cout<<"N = ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
       cin>>arr[i];
       cout<<"k = ";
       cin>>k;


       sort(arr,arr+n);

       cout<<arr[k-1];
   }