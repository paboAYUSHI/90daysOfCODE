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
      -> space complexity = N=4bytes,i=4bytes,a=4bytes,rand=4bytes => O(1) //for N
                            M=4bytes,j=4bytes,b=4bytes,rand=4bytes => O(1) //for M
                            so, in total it is O(1)
      
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
              
## Day 2
Space complexity: amount of space required to store a program which include storing program instructions , constt values , variable values , function calling , jumping statements etc.
# Space complexity= Auxiliary space + input size
Auxiliary space is the temporary space allocated by the algo to solve the problem m wrt to input size.
      ## question 1:
      fun add(n1,n2){
        sum=n1+n2
        return sum
      }
      explaination-> here let's suppose n1 takes 4 bytes and n2 also take 4 bytes . The variable sum takes 4 bytes too . Now as we know that space complexity is the sum of auxiliary sum and input size so let's assume that auxiliary space also takes 4 bytes , in total it is taking 16 bytes. Now here 16 bytes is an constant and we know that we drop the constant . so at last the space complexity of this is O(1).
      
      ##question 2:
      fun(arr[],N){
      sum=0
      for(i=0 to N)
          sum+=arr[i]
       print(sum)
      }
 space complexity-> here N is the size of array so total=4N+4+4+4=O(N) 
 time complexity->Tn=O(N)
 
       ##question 3:
       int fact=1;
       for(int i=1;i<=n;++i){
       fact=fact*i;
       }
       return fact;
   space complexity->O(1)
    time complexity->Tn=O(n)
    
      ##question 4:
      if(n<=1)
          return 1;
      else
          return (n*factorial(n-1));
      space complexity->O(n)
      time complexity->Tn=O(n)
      
      
      
  ## RECURSION
     recursion is basically when a function calls itself directly or indirectly a number of times until unless a condition is satisfied.
  ## what is difference between recursion and back tracking
      Backtracking is when the algorithm makes an opportunistic decision.
      Many times backtracking is not implemented recursively. If backtracking uses recursion its called Recursive Backtracking.
     
  ## Arrays
     array is a linear data structure which stores items of same data type.
     here contiguos memory is allocated to the items . the elements are indexed here .
     formula for finding out the the address of the element is = Base address + W * (i- LB)
                 where , W = size of each element in bytes ,
                         i = subscript of the element whose address we want to find
                         LB = lower limit
   ## Stacks 
      stack is a linear data structure in which elements are added and deleted from one end only called top .
      in stack when top==maxSize -1 , then it means that stack is full now and if we try to add an element in the stack then the OVERFLOW condition occurs.
      when top==-1 , then it means that stack is empty and if we try to delete any element from the stack then a condition of UNDERFLOW will occurs .
      always before doing any operation on stack we have to test these conditions first.
      now we have two operations on stack .. these are PUSH and POP
      PUSH means inserting the element into the stack (overflow)
      POP means deleting an element from the  stack (underflow)
      Stack is an abstract data type [ADT]
      now a question arises that what is ADT?
     so ADT is also a data type where only behaviour is defined and not the implementation  . opposite of ADT is concrete data type [CDT]
   ## Queues
      queue is also a linear data structure and also an ADT . here it has 2 ends unlike stack which has only 1 . its one end from where deletion takes place is called front whereas the end from where insertion or elements are added is called rear end . 
      queue have 2 operations - enqueue and dequeue
      application of queues are-
      * widely used as waiting lists for a single shared resource like printer, disk, CPU.
      * used in asynchronous transfer of data
      * used as buffers in most of the applications like MP3 media player, CD player, etc.
   ## linked lists
      memory is not stored contiguosly
      these are divided into 2 types ... first is a pointer where the address to another linked list is stored and second is the data/info part whwre the value of that block is stored
      linked list are of 3 types
      - singly linked list
      - doubly linked list
      - circular linke list
   use of linked list 
   - The list is not required to be contiguously present in the memory. The node can reside any where in the memory and linked together to make a list. This achieves optimized utilization of space.
   -list size is limited to the memory size and doesn't need to be declared in advance.
   -Empty node can not be present in the linked list.
   -We can store values of primitive types or objects in the singly linked list
   Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer). 
   The prev part of the first node and the next part of the last node will always contain null indicating end in each direction.
   Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer). 
   A doubly linked list containing three nodes having numbers from 1 to 3 in their data part
