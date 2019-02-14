namespace LinkedList
{
    template <class T>
    class Node
    {
    private:
        /* data */
    public:
        T data;
        Node * next;

        Node(T nodeValue)
        {
            this.data = nodeValue;
        }
    };        

    template <class T>
    class LinkedList
    {
    private:
    public:
        void Insert(T insertedValue);
        void Append(T appendedValue);
        bool Remove(T valueToRemove);
        Node head;

        LinkedList()
        {
            this.head == nullptr;
        }
    };    
} // LinkedList