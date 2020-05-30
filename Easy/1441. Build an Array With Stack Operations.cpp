public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        for(int i = 1, loc = 0; i<=n && i <= target.back(); i++)
        {
            res.push_back("Push");
            if(target[loc] != i) res.push_back("Pop");
            else loc++;
        }
        return res;
    }
};
