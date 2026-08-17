 #include<iostream>
 #include<utility>
 #include<algorithm>

 using namespace std;
 
 bool areAnagrams(string& s1, string& s2) {
        // code here
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        int i=0;
        int j=0;
        if(s1.length() != s2.length()){
            return false;
        }
         while(i < s1.length() && j<s2.length()){
            if(s1[i]==' ' ){
                i++;
            }
            else if(s2[j]==' '){
                j++;
            }
             else if(s1[i]==s2[j]){
                 i++;
                 j++;
             }else{
                 return false;
             }
         }
         return true;
        
        
    }
    int main(){
        string s1;
        getline(cin,s1);
        string s2;
        getline(cin,s2);
         cout << boolalpha << areAnagrams(s1, s2);
        
    }
    
