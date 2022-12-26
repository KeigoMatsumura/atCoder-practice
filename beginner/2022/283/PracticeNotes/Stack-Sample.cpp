#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;
    
    //push Operation
    stack.push(1);
    stack.push(2);

    //output size of stack
    printf("size=%lu\n", stack.size());

    //pop until stack is empty
    while(!stack.empty()) {
        printf("%d ", stack.top());
        stack.pop();
    }
    printf("\n");
    return 0;
}