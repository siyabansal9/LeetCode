class MyQueue {

    Stack<Integer> input = new Stack<>();
    Stack<Integer> output = new Stack<>();
    
    
    public MyQueue() {
        
    }
    
    public void push(int x) {
        while (input.empty() == false) {
            output.push(input.peek());
            input.pop();
        }
        input.push(x);
        while (output.empty() == false) {
            input.push(output.peek());
            output.pop();
        }
    }
    
    public int pop() {
        if (input.empty()) {
            return -1;

        }
        int val = input.peek();
        input.pop();
        return val;
    }
    
    public int peek() {
        if (input.empty()) {
            return -1;

        }
        return input.peek();
    }
    
    int size() {
        return input.size();
    }
    
    public boolean empty() {
        if(input.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */