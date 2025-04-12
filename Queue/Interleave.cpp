#include <iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> solution(queue<int> q) {
    stack<int> s;
    int n = q.size(); // Store original size

    // Step 1: Push first half into stack
    for (int i = 0; i < n / 2; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the first half to the back of the queue
    for (int i = 0; i < n / 2; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Again push first half (which were originally second half) into stack
    for (int i = 0; i < n / 2; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 5: Interleave the elements of stack and queue
    queue<int> result;
    while (!s.empty()) {
        result.push(q.front());
        q.pop();
        result.push(s.top());
        s.pop();
    }

    return result;
}

int main() {
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    queue<int> res = solution(q);

    while (!res.empty()) {
        cout << res.front() << endl;
        res.pop();
    }

    return 0;
}