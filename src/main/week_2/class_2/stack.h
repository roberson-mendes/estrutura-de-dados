class Stack {
    public:
        virtual bool isEmpty() const = 0;
        virtual bool isFull() const = 0;
        virtual void push(ItemType) = 0;
        virtual ItemType pop() = 0;
};