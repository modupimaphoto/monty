# 0x19. C - Stacks, Queues - LIFO, FIFO

LIFO and FIFO are two common methods used in the cost of goods sold calculation. FIFO stands for "First-In, 
First-Out" and assumes that the oldest products in a company's inventory have been sold first and goes by those production costs. 
The LIFO ("Last-In, First-Out") method assumes that the most recent products in a company's inventory have been sold first and uses those costs instead.

A **stack** is a linear data structure in which elements can be inserted and deleted only from one side of the list, called the top. 
A stack follows the LIFO principle, i.e., the element inserted at the last is the first element to come out. 
The insertion of an element into the stack is called push operation, and the deletion of an element from the stack is called pop operation. 
Stacks are often used for tasks that require backtracking, such as parsing expressions or implementing undo functionality.

A **queue** is a linear data structure in which elements can be inserted only from one side of the list called rear, 
and the elements can be deleted only from the other side called the front. The queue data structure follows the FIFO principle, 
i.e. the element inserted at first in the list, is the first element to be removed from the list. 
The insertion of an element in a queue is called an enqueue operation and the deletion of an element is called a dequeue operation. 
Queues are often used for tasks that involve processing elements in a specific order, such as handling requests or scheduling tasks.

The most common implementations of stacks and queues are using arrays and linked lists. 
Arrays are simple to implement but have a fixed size, while linked lists are more flexible but require more memory overhead.
