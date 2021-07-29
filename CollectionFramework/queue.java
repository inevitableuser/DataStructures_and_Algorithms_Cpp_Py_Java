import java.util.*;

class queue
{
    public static void main(String[] args) {
        
        Queue<Integer> queue=new LinkedList<>();

        /*
             here queue is implemented using queue interface
            and linked list class 

        */

        queue.offer(1);                      //good way to append ele at rear

        queue.offer(2);

        queue.offer(3);

        queue.add(4);                        //warning here add will throw exception if not successfull

        System.out.println("printing queue:"+queue);

        System.out.println("popping front element: "+queue.poll());    //good way to pop the front element from queue

        System.out.println("printing queue:"+queue);

        System.out.println("Front element in queue: "+queue.peek());    //returns the front ele in queue

        System.out.println("Front element in queue: "+queue.element());  //returns the front ele in queueu, will throw exception if queue is empty 


        System.out.println("popping  front element: "+queue.remove());        //warning here remove will throw exception if queue is empty


        System.out.println("printing queue:"+queue);            //printing queue




    }
}



/*
OUTPUT:

printing queue:[1, 2, 3, 4]
popping front element: 1
printing queue:[2, 3, 4]
Front element in queue: 2
Front element in queue: 2
popping  front element: 2
printing queue:[3, 4]

*/
