int peakElement(int arr[], int n)
   {
   
       if(n==1) return 0;
       if(n==2) return (arr[0]!=arr[1]);
       
     for(int i = 1; i < n - 1 ;  i++) {
         
         if(isPeak(arr[i - 1],arr[i],arr[i + 1])) return i;
      
     }
     
     if( arr[n-1] > arr[n-2]) return n-1;
     return 0;
   }