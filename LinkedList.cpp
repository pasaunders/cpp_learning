//LinkedList implementation for exercises
#include "LinkedList.h"

namespace LinkedList
{    
    //Insert new node at head of the linkedlist
    template<typename T>
    void LinkedList<T>::Insert(T insertedValue)
    {
        Node nodeified = new Node(insertedValue);
        nodeified.next = this.head;
        this.head = nodeified;
    }
    
    template<typename T>
    void LinkedList<T>::Append(T appendedValue)
    {
        Node nodeified = new Node(T appendedValue);
        Node * pTraverse = &this.head;
        while(pTraverse->next){
            pTraverse = pTraverse->next;
        }
    }

    //removes the first instance of a value in the linked list.
    template<typename T>
    bool Remove(T valueToRemove)
    {
        Node * pTraverse;
        while(pTraverse->next){
            if (pTraverse->next.data == valueToRemove) {
                pTraverse->next = pTraverse->next->next;
                return true;
            }
        }
        return false;
    }
}
