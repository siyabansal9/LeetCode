class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int arr[2]={0};
        //arr[0]=count of students liking 0 sandwich
        //arr[1]=count of students liking 1 sandwich
        
        int n=students.size();
        
        for (int i = 0; i < students.size(); ++i) {
            int &stud = students[i];
            arr[stud]++;
        }

        
        for(int i=0;i<n;i++){
            int sand=sandwiches[i];
            
            if(arr[sand]==0){
                return n-i;
            }
            
            arr[sand]--;
        }
        return 0;
    }
};