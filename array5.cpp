int c=0;
 int d=str.length()-1;
 while(c<d)
 {
     swap(str[c],str[d]);
     c++,d--;
 }
 return str;