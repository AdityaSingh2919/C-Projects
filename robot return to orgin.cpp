class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0;
        int r=0;
        int u=0;
        int d=0;

        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                r++;
            }
            else if(moves[i]=='U'){
                u++;
            }
            else if(moves[i]=='D'){
                d++;
            }
        }
       if(l==r && u==d)
            return true;
        return false;
    }
};
