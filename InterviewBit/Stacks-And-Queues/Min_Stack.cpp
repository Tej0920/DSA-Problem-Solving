stack<int> stk;
stack<int> min_stk;

MinStack::MinStack() {
    while(!stk.empty()){
        stk.pop();
    }
    
    while(!min_stk.empty()){
        min_stk.pop();
    }
}

void MinStack::push(int x) {
    stk.push(x);
    if(min_stk.empty() || x < min_stk.top()){
        min_stk.push(x);
    }
}

void MinStack::pop() {
    if(stk.empty()){
        return;
    }
    if(min_stk.top()==stk.top()){
        min_stk.pop();
    }
    stk.pop();
}

int MinStack::top() {
    if(stk.empty()){
        return -1;
    }
    
    return stk.top();
}

int MinStack::getMin() {
    if(min_stk.empty()){
        return -1;
    }
    return min_stk.top();
}

