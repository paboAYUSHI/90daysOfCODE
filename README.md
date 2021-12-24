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
      The storage requirement of linked representation of a queue with n elements is o(n) while the time requirement for operations is o(1).

In a linked queue, each node of the queue consists of two parts i.e. data part and the link part. Each element of the queue points to its immediate next element in the memory.

In the linked queue, there are two pointers maintained in the memory i.e. front pointer and rear pointer. The front pointer contains the address of the starting element of the queue while the rear pointer contains the address of the last element of the queue.
      The dequeue stands for Double Ended Queue. In the queue, the insertion takes place from one end while the deletion takes place from another end. The end at which the insertion occurs is known as the rear end whereas the end at which the deletion occurs is known as front end.
      Deque is a linear data structure in which the insertion and deletion operations are performed from both ends. We can say that deque is a generalized version of the queue
      Deque can be used both as stack and queue as it allows the insertion and deletion operations on both ends. In deque, the insertion and deletion operation can be performed from one side. The stack follows the LIFO rule in which both the insertion and deletion can be performed only from one end; therefore, we conclude that deque can be considered as a stack.
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
   Generally, doubly linked list consumes more space for every node and therefore, causes more expansive basic operations such as insertion and deletion. However, we can easily manipulate the elements of the list since the list maintains pointers in both the directions (forward and backward).
   operations on linked list:
   node creation
   deletion
   searching
   insertion
In a circular Singly linked list, the last node of the list contains a pointer to the first node of the list. We can have circular singly linked list as well as circular doubly linked list.

We traverse a circular singly linked list until we reach the same node where we started. The circular singly liked list has no beginning and no ending. There is no null value present in the next part of any of the nodes.
Circular linked list are mostly used in task maintenance in operating systems. There are many examples where circular linked list are being used in computer science including browser surfing where a record of pages visited in the past by the user

operation on circular doubly linked list
  insertion at the end and at the beg
   deletion at the end 
   searching
   traversing
   A skip list is a probabilistic data structure. The skip list is used to store a sorted list of elements or data with a linked list. It allows the process of the elements or data to view efficiently. In one single step, it skips several elements of the entire list, which is why it is known as a skip list.

The skip list is an extended version of the linked list. It allows the user to search, remove, and insert the element very quickly. It consists of a base list that includes a set of elements which maintains the link hierarchy of the subsequent elements.
It is built in two layers: The lowest layer and Top layer
  
  ## TREES
     A tree is also one of the data structures that represent hierarchical data. 
     A tree data structure is defined as a collection of objects or entities known as nodes that are linked together to represent or simulate hierarchy.
A tree data structure is a non-linear data structure because it does not store in a sequential manner. It is a hierarchical structure as elements in a Tree are arranged in multiple levels.
In the Tree data structure, the topmost node is known as a root node. 
Each node contains some data, and data can be of any type. 
Each node contains some data and the link or reference of other nodes that can be called children.
Root: The root node is the topmost node in the tree hierarchy. In other words, the root node is the one that doesn't have any parent. If a node is directly linked to some other node, it would be called a parent-child relationship.
Child node: If the node is a descendant of any node, then the node is known as a child node.
Parent: If the node contains any sub-node, then that node is said to be the parent of that sub-node.
Sibling: The nodes that have the same parent are known as siblings.
Leaf Node:- The node of the tree, which doesn't have any child node, is called a leaf node. A leaf node is the bottom-most node of the tree. There can be any number of leaf nodes present in a general tree. Leaf nodes can also be called external nodes.
Internal nodes: A node has atleast one child node known as an internal
Ancestor node:- An ancestor of a node is any predecessor node on a path from the root to that node. The root node doesn't have any ancestors. 
Descendant: The immediate successor of the given node is known as a descendant of a node. 
properties of trees:
Recursive data structure: The tree is also known as a recursive data structure. A tree can be defined as recursively because the distinguished node in a tree data structure is known as a root node. The root node of the tree contains a link to all the roots of its subtrees. 

number of node: If there are n nodes, then there would n-1 edges. Each arrow in the structure represents the link or path. Each node, except the root node, will have atleast one incoming link known as an edge. There would be one link for the parent-child relationship.

depth of node x:The depth of node x can be defined as the length of the path from the root to the node x. One edge contributes one-unit length in the path. So, the depth of node x can also be defined as the number of edges between the root node and the node x. The root node has 0 depth.

height of node x:The height of node x can be defined as the longest path from the node x to the leaf node.

The tree data structure can be created by creating the nodes dynamically with the help of the pointers.
applications of trees:
Storing naturally hierarchical data: Trees are used to store the data in the hierarchical structure. For example, the file system. The file system stored on the disc drive, the file and folder are in the form of the naturally hierarchical data and stored in the form of trees.
Organize data: It is used to organize data for efficient insertion, deletion and searching. For example, a binary tree has a logN time for searching an element.
Trie: It is a special kind of tree that is used to store the dictionary. It is a fast and efficient way for dynamic spell checking.
Heap: It is also a tree data structure implemented using arrays. It is used to implement priority queues.
B-Tree and B+Tree: B-Tree and B+Tree are the tree data structures used to implement indexing in databases.
Routing table: The tree data structure is also used to store the data in routing tables in the routers.

types of tree data structure
General tree: The general tree is one of the types of tree data structure. In the general tree, a node can have either 0 or maximum n number of nodes.
Binary tree:  binary name itself suggests two numbers, i.e., 0 and 1.
Binary search tree: is a non-linear data structure in which one node is connected to n number of nodes. It is a node-based data structure. A node can be represented in a binary search tree with three fields, i.e., data part, left-child, and right-child. A node can be connected to the utmost two child nodes in a binary search tree, so the node contains two pointers (left child and right child pointer).
Every node in the left subtree must contain a value less than the value of the root node, and the value of each node in the right subtree must be bigger than the value of the root node.
AVL tree:
It is one of the types of the binary tree, or we can say that it is a variant of the binary search tree. AVL tree satisfies the property of the binary tree as well as of the binary search tree. It is a self-balancing binary search tree that was invented by Adelson Velsky Lindas. Here, self-balancing means that balancing the heights of left subtree and right subtree. This balancing is measured in terms of the balancing factor.
Red Black tree:
he red-Black tree is the binary search tree. The prerequisite of the Red-Black tree is that we should know about the binary search tree. In a binary search tree, the value of the left-subtree should be less than the value of that node, and the value of the right-subtree should be greater than the value of that node. As we know that the time complexity of binary search in the average case is log2n, the best case is O(1), and the worst case is O(n).

## GRAPH
   A graph can be defined as group of vertices and edges that are used to connect these vertices. A graph can be seen as a cyclic tree, where the vertices (Nodes) maintain any complex relationship among them instead of having parent child relationship.
   A graph G can be defined as an ordered set G(V, E) where V(G) represents the set of vertices and E(G) represents the set of edges which are used to connect these vertices.
    A graph can be directed or undirected. However, in an undirected graph, edges are not associated with the directions with them. 
  A path can be defined as the sequence of nodes that are followed in order to reach some terminal node V from the initial node U.
  A path will be called as closed path if the initial node is same as terminal node. A path will be closed path if V0=VN.
  If all the nodes of the graph are distinct with an exception V0=VN, then such path P is called as closed simple path.
  A cycle can be defined as the path which has no repeated edges or vertices except the first and last vertices.
  A connected graph is the one in which some path exists between every two vertices (u, v) in V. There are no isolated nodes in connected graph.
  A complete graph is the one in which every node is connected with all other nodes. A complete graph contain n(n-1)/2 edges where n is the number of nodes in the graph.
  In a weighted graph, each edge is assigned with some data such as length or weight. The weight of an edge e can be given as w(e) which must be a positive (+) value indicating the cost of traversing the edge.
  A digraph is a directed graph in which each edge of the graph is associated with some direction and the traversing can be done only in the specified direction.
  An edge that is associated with the similar end points can be called as Loop.
  If two nodes u and v are connected via an edge e, then the nodes u and v are called as neighbours or adjacent nodes.
  A degree of a node is the number of edges that are connected with that node. A node with degree 0 is called as isolated node.
  By Graph representation, we simply mean the technique which is to be used in order to store some graph into the computer's memory.
  In sequential representation, we use adjacency matrix to store the mapping represented by vertices and edges. In adjacency matrix, the rows and columns are represented by the graph vertices. A graph having n vertices, will have a dimension n x n
  An entry Mij in the adjacency matrix representation of an undirected graph G will be 1 if there exists an edge between Vi and Vj.
  There exists different adjacency matrices for the directed and undirected graph. In directed graph, an entry Aij will be 1 only when there is an edge directed from Vi to Vj.
  Representation of weighted directed graph is different. Instead of filling the entry by 1, the Non- zero entries of the adjacency matrix are represented by the weight of respective edges.
  In the linked representation, an adjacency list is used to store the Graph into the computer's memory.
  An adjacency list is maintained for each node present in the graph which stores the node value and a pointer to the next adjacent node to the respective node. If all the adjacent nodes are traversed then store the NULL in the pointer field of last node of the list. The sum of the lengths of adjacency lists is equal to the twice of the number of edges present in an undirected graph.
  In a directed graph, the sum of lengths of all the adjacency lists is equal to the number of edges present in the graph.

In the case of weighted directed graph, each node contains an extra field that is called the weight of the node.
  Traversing the graph means examining all the nodes and vertices of the graph. There are two standard methods by using which, we can traverse the graphs. 
  Breadth First Search= Breadth first search is a graph traversal algorithm that starts traversing the graph from root node and explores all the neighbouring nodes. Then, it selects the nearest node and explore all the unexplored nodes. The algorithm follows the same process for each of the nearest node until it finds the goal.
The algorithm of breadth first search is given below. The algorithm starts with examining the node A and all of its neighbours. In the next step, the neighbours of the nearest node of A are explored and process continues in the further steps. The algorithm explores all neighbours of all the nodes and ensures that each node is visited exactly once and no node is visited twice.
Step 1: SET STATUS = 1 (ready state)
for each node in G
Step 2: Enqueue the starting node A
and set its STATUS = 2
(waiting state)
Step 3: Repeat Steps 4 and 5 until
QUEUE is empty
Step 4: Dequeue a node N. Process it
and set its STATUS = 3
(processed state).
Step 5: Enqueue all the neighbours of
N that are in the ready state
(whose STATUS = 1) and set
their STATUS = 2
(waiting state)
[END OF LOOP]
Step 6: EXIT
  
  Depth First Search= Depth first search (DFS) algorithm starts with the initial node of the graph G, and then goes to deeper and deeper until we find the goal node or the node which has no children. The algorithm, then backtracks from the dead end towards the most recent node that is yet to be completely unexplored.
The data structure which is being used in DFS is stack.
The process is similar to BFS algorithm. In DFS, the edges that leads to an unvisited node are called discovery edges while the edges that leads to an already visited node are called block edges.
Step 1: SET STATUS = 1 (ready state) for each node in G
Step 2: Push the starting node A on the stack and set its STATUS = 2 (waiting state)
Step 3: Repeat Steps 4 and 5 until STACK is empty
Step 4: Pop the top node N. Process it and set its STATUS = 3 (processed state)
Step 5: Push on the stack all the neighbours of N that are in the ready state (whose STATUS = 1) and set their
STATUS = 2 (waiting state)
[END OF LOOP]
Step 6: EXIT
  Undirected graph: An undirected graph is a graph in which all the edges do not point to any particular direction, i.e., they are not unidirectional; they are bidirectional. It can also be defined as a graph with a set of V vertices and a set of E edges, each edge connecting two different vertices.
Connected graph: A connected graph is a graph in which a path always exists from a vertex to any other vertex. A graph is connected if we can reach any vertex from any other vertex by following edges in either direction.
Directed graph: Directed graphs are also known as digraphs. A graph is a directed graph (or digraph) if all the edges present between any vertices or nodes of the graph are directed or have a defined direction.
