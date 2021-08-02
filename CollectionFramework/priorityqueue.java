import java.util.*;

class priorityqueue
{
    // best for min heap and max heap problems

    public static void main(String[] args) {
        
          PriorityQueue<Integer> pq=new PriorityQueue<>();              //minheap

        //PriorityQueue<Integer> pq=new PriorityQueue<>(Comparator.reverseOrder());        maxheap
        
        /*
             Queue<Integer> pq=new PriorityQueue<>();      min heap
             will also work as same

             Queue is an interface where offer, poll all methods were just declared

             PriorityQueue is a class where those all methods were implemented

             you can create obj for priorityqueue class or queue interface both works fine.


             Queue<Integer> pq=new PriorityQueue<>(Comparator.reverseOrder());    max heap

        */

        pq.offer(40);      //adds ele in priority queue and heapifies queue

        pq.offer(12);

        pq.offer(24);

        pq.offer(36);

        System.out.println("Printing priority queue: "+pq);


        System.out.println("The popped high priority ele is: "+pq.poll());      // pops the high priority ele and heapify queue


        System.out.println("Printing priority queue: "+pq);


        System.out.println("Peek element of pq is: "+pq.peek());               // gives the root of the priority-queue or min-heap or max-heap

        
        System.out.println("Printing priority queue: "+pq);

        
        System.out.println("36 present in priorityqueue: "+pq.contains(36));                                  // 36 in pq ? true : false
    
    }
}


/*

OUTPUT:
Printing priority queue: [12, 36, 24, 40]
The popped high priority ele is: 12
Printing priority queue: [24, 36, 40]
Peek element of pq is: 24
Printing priority queue: [24, 36, 40]
36 present in priorityqueue: true

*/
