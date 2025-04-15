#include <iostream>
using namespace std;
#include <stack>

void sortedInsert(stack<int> &stack,int num){
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    //recursive call
    sortedInsert(stack,num);

    stack.push(n);
}
void SortedStack(stack<int> &stack){
    //base case 
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    //recursive call
    SortedStack(stack);

    sortedInsert(stack,num);

}
int main()
{
    
    return 0;
}