#include<stdio.h>
int main()
{
	int t;
	long long n, count;
	scanf("%d", &t);
	while(t--)
	{
		count=0;
		scanf("%lld", &n);
		if(n>=5)
		{
			count=count+n/5;
			if(n>=25)
			{
				count=count+n/25;
				if(n>=125)
				{
					count=count+n/125;
					if(n>=625)
					{
						count=count+n/625;
						if(n>=3125)
						{
							count=count+n/3125;
							if(n>=15625)
							{
								count=count+n/15625;
								if(n>=78125)
								{
									count=count+n/78125;
									if(n>=390625)
									{
										count=count+n/390625;
										if(n>=1953125)
										{
											count=count+n/1953125;
											if(n>=9765625)
											{
												count=count+n/9765625;
												if(n>=48828125)
												{		
													count=count+n/48828125;
													if(n>=244140625)
		 											{
															count=count+n/244140625;		
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}								
		}
		printf("%lld\n", count);
	}
	return 0;
}
