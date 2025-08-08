class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int> q;

       for(int i=0;i<students.size();i++){
            q.push(students[i]);
       }

       int i = 0;
       int count = 0;

       while(!q.empty()){
            if(q.front() == sandwiches[i]){
                q.pop();
                i++;
                count = 0;
            }else{
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;
            }

            if(count == q.size()){
                break;
            }
       }

       return q.size();
    }
};