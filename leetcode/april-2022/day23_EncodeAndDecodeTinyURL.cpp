class Solution {
public:
    string str = "abcdefghijklmnopqrstuvwxyz";
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        return str+longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortUrl.substr(26);
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
