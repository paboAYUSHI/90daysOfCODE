

class Compute 
{
   static pair getMinMax(long a[], long n)  
   {
       //Write your code here
       Arrays.sort(a);
       
       long min=a[0];
       long max=a[(int)n-1];
        return (new pair(min,max));
   }
}