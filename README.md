# 90daysOfCODE
90daysOfCODE

## DAY 1
Time complexity and Space Complexity
Time complexity: is the number of times a particular instruction set is executed rather than the total time is taken.
Space complexity: is the total memory space required by the program for it's execution.
# time complexity 
 // *drop the non-dominant term(we take n as a dominant term)
 //  drop the constant(constant is a variable with which n is not involved)
 //  break the code into fragments
 //  in nested loops the time complexity is n raise to the power no. of times a loop is nested....eg. if there's a nested loop and there are two loops nested then the time complexity will be n*n , if there are 3 loops nested then it would be n*n*n and so on
 
# what is the time , space complexity of the following code:
        ## question 1:      
               int a=0,b=0;
               for(i=0;i<N;i++){
               a=a+rand();
               }
               for(j=0;j<M;j++){
               b=b+rand();
               }
      -> time complexity = O(N+M)
      -> space complexity = 
      
      ## question 2:
               void func1(int array[],int length){
               int sum=0;      //f1
               int product=1;  //f1
               for(int i=0;i<length;i++){
               sum+=array[i];                    //f2*length
               }
               for(int i=0;i<length;i++){
               product*=array[i];                //f3*length
               }
               }
              int main(){
              int arr[]={3,5,66};
              func1(arr,3);
              return 0;
              } 
           -> time complexity= O(length)=f1(constt)+f2*length+f3*length=length(f2+f3)
           -> space complexity=
     ## question 3:
              void func(int n){
              int sum=0;
              int product=1;
              for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                   printf("%d , %d\n",i,j);
                }
              }
              }
              -> time complexity= O(n*n)
              -> space complexity =
