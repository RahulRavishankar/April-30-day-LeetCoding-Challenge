class MinStack {
public:
    /** initialize your data structure here. */
    vector<pair<int,int> > v;
    MinStack() {
        v.push_back(make_pair(INT_MIN,INT_MAX));
    }
    
    void push(int x) {
        v.push_back(make_pair(x,min(x,v.back().second)));
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};
