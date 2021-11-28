# 90daysOfCODE
90daysOfCODE

## DAY 1
Time complexity and Space Complexity
Time complexity: is the number of times a particular instruction set is executed rather than the total time is taken.
Space complexity: is the total memory space required by the program for it's execution.
# time complexity 
  //drop the non-dominant term(we take n as a dominant term)
  //drop the constant(constant is a variable with which n is not involved)
  //break the code into fragments
# question 1: what is the time , space complexity of the following code:
               int a=0,b=0;
               for(i=0;i<N;i++){
               a=a+rand();
               }
               for(j=0;j<M;j++){
               b=b+rand();
               }
