void Insert(int *arr, int n){
       
       while(n>0 && arr[n]<arr[n-1])
          {swap(arr[n],arr[n-1]);
              n--;
          }
       
   }
   void SortI(int *arr, int n){
       if(n<1)
          return;
       SortI(arr,n-1);
       Insert(arr,n);
   }