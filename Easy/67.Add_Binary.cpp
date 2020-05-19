class Solution {
public:
string addBinary(string a, string b) {
	string res = "";
	char carry = '0';
	int i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 && j >= 0)
	{
		res.insert(res.begin(), (a[i]+b[j]+carry)%2+'0');
		carry = ((a[i]+b[j]+carry) == 146 || (a[i] + b[j] + carry) == 147) + '0';
		i--; j--;
	}
	if (i == j)
	{
		if (carry == '1') res.insert(res.begin(), carry);
		return res;
	}
	string* remain = i > j ? &a : &b;
	int k = i > j ? i : j;
	while(k >= 0)
	{
		res.insert(res.begin(), (remain->at(k) + carry) % 2 + '0');
		carry = ((remain->at(k) + carry) == 98) + '0';
		k--;
		if (carry == '0')
		{
			res = remain->substr(0, k+1) + res;
			break;
		}
	}
	if (carry == '1') res.insert(res.begin(), carry);
	return res;
}
};
