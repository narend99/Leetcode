class Solution {
public:
    int numberOfMatches(int n) 
    {
/*-------------O(log(n)) Approach--------------*/

/*      int team = n;
        int match = 0;

        while(team>1)
        {
            if(team % 2 == 0)
            {
                team = team/2;
                match += team;
            }
            else if(team % 2 != 0)
            {
                match += (team-1)/2;
                team = (team-1)/2 + 1;
            }
        }

        return match;
    }

    //TC - O(log n)
    //SC - O(1)
*/

/*-------------O(1) Approach --------------*/
            return n-1;     //Two Ways 
    //TC- O(1)              //1. Finding Pattern by running different Test Cases
    //SC- O(1)              //2. if n is the total team, that means 1 will be the winner and n-1 will be eliminated
    }                       // in a single match played b/w two team one gets eleminated 
};                          //so that means for n-1 eliminations n-1 matches needs to be played  
