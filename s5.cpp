#include<bits/stdc++.h>

#define ll long long

using namespace std;


 

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);               

    ll int n,k;                                         //n is the array size & k is the number of operation

    cin>>n>>k;

    ll int a[n];


 

    for(ll int i=0;i<n;i++){

        cin>>a[i];

    }


 

    if((n==1) && (k%2!=0)){                               //trivial case for array of size 1.

     cout<<"-1";

    }   

    else if(k==n){

         cout<<*max_element(a,a+n-1);

    }   

    else if(k<n){

ll int maximum=*max_element(a,a+k-1);

         if(maximum>a[k]){

             cout<<maximum;

         }

         else{

             cout<<a[k];

         }  

    }

    else{                                                                       //condition in which "number of operation is greater than the size of the array"

        cout<<*max_element(a,a+n);

    }

    return 0;

}