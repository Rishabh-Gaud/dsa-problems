class Solution {
public:
    string trimSpace(string s) {
        while(s.size() && s[0] == ' ') {
            s.erase(0, 1);
        }
        while(s.size() && s[s.size() - 1] == ' '){
            s.erase(s.size() - 1, 1);
        }
        string str;
        int space = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' '){
                space++;
                if(space > 1) {
                    continue;
                }
                str += " ";
            }
            else {
                 str += s[i];
                 space = 0;
            }
        }
        return str;
    }
    string reverse(string s, int i, int j) {
        
        while(i <= j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
    string reverseWords(string s) {
        s = trimSpace(s);
        s = reverse(s, 0, s.size() - 1);
        int i = 0, j = 0;
        while(j < s.size()) {
            if(s[j] == ' '){
                s = reverse(s, i, j - 1);
                i =  j + 1;
            }
            j++;
        }
        return reverse(s, i, j - 1);

    }

};