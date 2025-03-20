class Solution {
public:

    string toLower(string s){
        string str = "";
        for(int i=0; i<s.length(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                str.push_back(s[i]);
            
            else if(s[i]>='A' && s[i]<='Z'){
                str.push_back(s[i]+'a'-'A');
            }
        }
        return str;
    }

    bool isPalindrome(string s) {
        if(s.length() == 0)
            return true;

        string str = toLower(s);

        int st = 0;
        int e = str.length()-1;
        while(st<e){
            if(str[st] == str[e]){
                st++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};