#define LEN 20

typedef struct _arrayStack{
    char stackArr[LEN];
    int top;
}Stack;

void StackInit(Stack * ps);
int IsEmpty(Stack * ps);    // 1 - ���� Empty , 0 - �� ��.
int IsFull(Stack * ps);         // 1 - ���� Full. 0 - �� ��.
void Push(Stack *ps, char data);
char Pop(Stack * ps);
char Peek(Stack *ps);
