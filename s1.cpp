#include <bits/stdc++.h>

using namespace std;

 

int main(){

string str;

cin>>str;

vector<int> vec={};
 

for (int i{};i<str.length();i++){

if (str[i] == '/')

vec.push_back(i);

 

else if (str[i] == '\\'){

int vecsize = vec.size();

int index = vec[vecsize-1];

reverse(str.begin()+index+1 , str.begin()+i);

vec.erase(vec.begin()+vecsize-1);

}

}

 

for (int i{};i<str.length();i++){

if (str[i]=='/'||str[i]=='\\')

str.erase(str.begin()+i);

}

cout<<str;

}