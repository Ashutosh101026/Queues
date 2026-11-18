
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {

        int n = q.size();

        if(k > n) return q;

        stack<int> st;

        // Push first K elements into stack
        for(int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }

        // Push stack elements back into queue
        while(!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Move remaining elements to the back
        for(int i = 0; i < n-k; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
