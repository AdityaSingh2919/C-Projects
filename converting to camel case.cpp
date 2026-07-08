class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
        // code here
        string str;
       
        for(int i=0;i<s.size();i++){
            if(i==0 && s[i]!=' '){
                str.push_back(s[i]);
            }
            else if(s[i]!=' ' && s[i-1]==' '){
                str.push_back(s[i]-32);
            }
            else if(s[i]==' '){
                continue;
            }
            else {
                str.push_back(s[i]);
            }
        }
        return str;
    }
};
