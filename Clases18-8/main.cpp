#include <iostream>

using namespace std;

template <typename Type> // Parámetro tipo template
class Stack {
  private:
    Type *stackPtr;
    int maxLen;
    int topSub;
    
  public:
    Stack() { //Constructo de 100 elementos
    stackPtr = new Type [100];
    maxLen = 99;
    topSub = -1;
}

    Stack(int size) { // Constructor de n dados elementos
      stackPtr = new Type [size];
      maxLen = size - 1;
      topSub = -1;
}
    
    ~Stack() {delete stackPtr;}; // Destructor

    void push(Type number) {
      if (topSub == maxLen)
        cout << "Error in push—stack is full\n";
      else stackPtr[++ topSub] = number;
}
    void pop() {
      if (empty())
        cout << "Error in pop—stack is empty\n";
      else topSub --;
}

Type top() {
    if (empty())
      cout << "Error in top--stack is empty\n";
    else
      return (stackPtr[topSub]);
}
    
int empty() {return (topSub == -1);}
}
