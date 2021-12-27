class Solution
{
 
   public static void sort012(int a[], int n)
   {
       // code here 
       int l=0,m=0,h=n-1;
       while(m<h)
       {
           if(a[m]==0)
           { int temp=a[m];
              a[m]=a[l];
              a[l]=temp;
           m++;
           l++;
               
           }
           else if(a[m]==1)
           m++;
           
           else
           { int temp=a[m];
             a[m]=a[h];
             a[h]=temp;
            h--;
               
           }
       }
       
       
   }
}