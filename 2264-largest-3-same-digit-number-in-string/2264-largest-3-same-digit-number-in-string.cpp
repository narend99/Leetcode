class Solution {
public:
    string largestGoodInteger(string str) 
    {

/*-------------O(n) Solution-----------------*/ //SC ---> O(1) solution
        int cnt = 1;  
        int maxi = -1;
        string ans;

        for(int i=0;i<str.length()-1;i++)
        {
            if(str[i] == str[i+1])
             cnt++;
            else 
             cnt = 1;

             if(cnt == 3)
             {
                 int no = str[i] - '0';
                 maxi = max(maxi,no);
             }
        }

        if(maxi != -1)
        {
            for(int i=0;i<3;i++)
            {
                ans +=to_string(maxi);
            }

            return ans;
        }
        else
         return ans;
    }    

/*-----------------Another Solution-----------------*/
/*
   char maxchar = ' ';

   for(int i=1;i<str.length()-1;i++)
   {                                                //  i-1  i  i+1
       if(str[i] == str[i-1] && str[i] == str[i+1]) //   2   2   2
       {
           maxchar = max(str[i],maxchar);         //max also works on charcters
       }
   }

   if(maxchar == ' ')
    return "";
   else
    return string(3,maxchar);     //no name of string
    
    }
*/
    
};