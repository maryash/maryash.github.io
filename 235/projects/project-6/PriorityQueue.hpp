#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_
template<typename ItemType>
class PriorityQueue
{
public:
  PriorityQueue();
  PriorityQueue(const PriorityQueue<ItemType>& a_priority_queue); // Copy constructor
  ~PriorityQueue();
  void enqueue(const ItemType& new_entry); //adds an element to the back of the queue
  void dequeue(); // removes element from front of the queue
  ItemType front() const; // returns a copy of the front element
  int size() const; // returns the number of elements in the queue
  bool isEmpty() const; // returns true if no elements in the queue
private:
  PriorityNode<ItemType>* back_; // Pointer to back of the queue
  PriorityNode<ItemType>* front_; // Pointer to front of the queue
  int item_count;
}; //end PriorityQueue
#include "PriorityQueue.cpp"
#endif // PRIORITYQUEUE_H_ 
