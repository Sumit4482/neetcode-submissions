class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(auto i: strs){
            str += (i);
            // str += ('#');
            str += ('~');
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]!='~' ){
                temp += s[i];
            }else{
                ans.push_back(temp);
                temp = "";
            }
        }
        return ans;
    }

};
