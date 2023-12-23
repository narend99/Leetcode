class Solution {
public:
    bool isPathCrossing(string path) 
    {
       unordered_set<string> st; //we can't take map in this question cause we have to update both values x and y continously.
       int x = 0;
       int y = 0;
       int n = path.length();

       string key = to_string(x)+"_"+to_string(y); //converting int x and y to string
       st.insert(key);

       for(int i=0;i<n;i++)
       {
           if(path[i] == 'N')
            y++;
           else if(path[i] == 'S')
            y--;
           else if(path[i] == 'W')
            x--;
           else
            x++;

           key = to_string(x)+"_"+to_string(y);

            if(st.find(key) != st.end())  //this will take O(1) time cause of unordered_set
             return true;

            st.insert(key);
       }

       return false;

       //TC - O(N)
       //SC - O(1)
    }
};