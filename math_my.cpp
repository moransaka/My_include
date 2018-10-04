int Fact(int);

class Math
{
	public:
		int fact(int n)
		{
			if(n == 0)
			{
				return 1;
			}
			else
			{
				return Fact(n);
			}
		}

};

int Fact(int n)
{
	if (n != 1)
	{
		return n * Fact(n - 1);
	}
	else 
	{
		return n;
	}
}