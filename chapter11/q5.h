typedef struct LNode
{
    int data;
    LNode *next;
} LNode;

class MyStack
{
public:
    void put(int item);
    int get();
    void print();

protected:
    LNode *L;
};