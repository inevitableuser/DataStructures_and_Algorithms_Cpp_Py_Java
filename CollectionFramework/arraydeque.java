import java.util.*;

class arraydeque {
    public static void main(String[] args) {

        ArrayDeque<Integer> deq = new ArrayDeque<>();

        deq.offer(23);

        deq.offerFirst(12);                   // offerFirst is similar to pushfront in c++

        deq.offerLast(45);                   // offerLast is same as offer

        deq.offer(26);

        System.out.println("printing deq: "+deq);

        System.out.println("peek(): "+deq.peek());                  // gives first ele

        System.out.println("peekFirst(): "+deq.peekFirst());        // peekFirst() is similar to peek

        System.out.println("peekLast(): "+deq.peekLast());         // gives tail element

        System.out.println("poll(): "+deq.poll());                 // removes first ele
        System.out.println("printing deq: "+deq);


        System.out.println("poll first(): "+deq.pollFirst());       // pollFirst is similar to poll
        System.out.println("printing deq: "+deq);


        System.out.println("poll last(): "+deq.pollLast());        // removes last ele
        System.out.println("printing deq: "+deq);



    }
}


/*
OUTPUT:

printing deq: [12, 23, 45, 26]
peek(): 12
peekFirst(): 12
peekLast(): 26
poll(): 12
printing deq: [23, 45, 26]
poll first(): 23
printing deq: [45, 26]
poll last(): 26
printing deq: [45]

*/
