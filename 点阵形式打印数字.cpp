//gonna to be difficult
#include <stdio.h>  
int main()
{
	char all[7][50+1]=
	{
	    "*****    ************   **************************",	
	    "*   *    *    *    **   **    *        **   **   *",
	    "*   *    *    *    **   **    *        **   **   *",
	    "*   *    **************************    ***********",
	    "*   *    **        *    *    **   *    **   *    *",
	    "*   *    **        *    *    **   *    **   *    *",
	    "*****    ***********    ***********    ***********"
	};//in this way 0 1 2 3 4 5 6 7 8 9 each get 5bit.for example 0 gets all[i][0~0*5+5],1 all[i][1*5~1*5+5]
	int more;//more is times of loop
	scanf("%d",&more);
	for (;more>0;more--)
	{
		long long num;//input a number
		scanf("%lld",&num);
		printf("%lld:\n",num);
		int bit[100],numbit0=0;//bit array store each digit of num;numbit0 store how many digits num has;
		for (int i=1;;i++)
		{
			bit[i]=num%10;
			num/=10;
			numbit0++;
			if (num==0) break;
		}
		//now bit stored.bit[numbit0] is MSB,and num has numbit digits.
		for (int j=1;j<=7;j++)//7 lines
		{
			int numbit=numbit0;
			for (;numbit>0;numbit--)//num has numbit digits.and bit[numbit] is the MSB.
			{
				int m=5*bit[numbit];//each line each digit has 5 bit.
				for (int haha=1;haha<=5;haha++,m++)//bit[k] gets its 5*m+5,as told before.
				{
					printf("%c",all[j-1][m]);
				}
				printf("  "); 
			}
			printf("\n");
		}
	}	
}
