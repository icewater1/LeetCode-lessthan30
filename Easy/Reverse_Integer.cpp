class Solution {
public:
int exp10(int n)
{
	int expRes = 1;
	while (n > 0)
	{
		expRes *= 10;
		n--;
	}
	return expRes;
}
int reverse(int x)
{
	int dig = 1;
    long result = 0;
    int max = 2147483647 ,min = -2147483648;
	bool neg = false;
    
    if(!cin ||x == min){ return 0; }
	if (x < 0) { neg = true; x = -x; }
    
	for(int tempRes = x; tempRes >= 10; dig++)
	{
		tempRes /= 10;
	}
    
	for (int i = dig; i > 0; i--)
	{
        int num = 0;
        num = (dig - i + 1 == 10)?x/exp10(9): x % exp10(dig - i + 1) / exp10(dig - i);
        if(num>2 && i - 1 >= 9 ){return 0;}
		result += num * exp10(i - 1);
	}
    if(result > max)
    {
        return 0;
    }
    result = neg? -result : result;
    return result;
}
}; 
