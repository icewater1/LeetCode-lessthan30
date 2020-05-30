class Solution {
public:
int reverse(int x)
{
	int dig = 1, result = 0;
	for(int tempRes = x; tempRes >= 10; dig++)
	{
		tempRes /= 10;
	}
	for (int i = dig; i > 0; i--)
	{
        int num = 0;
        num = (dig - i + 1 == 10)?x/(pow(10,9)): (x % int(pow(10,dig - i + 1))) / pow(10,dig - i);
        if(num>2 && i - 1 >= 9 ){return 0;}
		result += num * pow(10,i - 1);
	}
    return result;
}
bool isPalindrome(int x)
{
    if(x < 0)
    {
        return false;
    }
    
    return (reverse(x) == x);
}
    
};
