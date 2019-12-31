/***************************************
*1.some useful compatible mistake writings
****************************************/
#ifndef USF
#define USF
#define mian main
#define amin main
#define pirntf printf
#define pirtnf printf
#define scnaf scanf
#define sacnf scanf
#endif

 
/**********************
*2.self made funtions
***********************/
//(1) test which day of the year the date is. 
int whichdayofyear(int yea,int mon,int day )
{
    int jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec,mtadd=0,result;
	jan=0;feb=31;mar=31+28;apr=31+28+31;may=31+28+31+30;jun=31+28+31+30+31;jul=31+28+31+30+31+30;
	aug=31+28+31+30+31+30+31;sep=31+28+31+30+31+30+31+31;oct=31+28+31+30+31+30+31+31+30;
	nov=31+28+31+30+31+30+31+31+30+31;dec=31+28+31+30+31+30+31+31+30+31+30;
	if (!(yea%4==0&&yea%100!=0||yea%400==0))
	{
	switch (mon)
	{
		case 1:mtadd=jan;break;
		case 2:mtadd=feb;break;
		case 3:mtadd=mar;break;
		case 4:mtadd=feb;break;
		case 5:mtadd=may;break;
		case 6:mtadd=jun;break;
		case 7:mtadd=jul;break;
		case 8:mtadd=aug;break;
		case 9:mtadd=sep;break;
		case 10:mtadd=oct;break;
		case 11:mtadd=nov;break;
		case 12:mtadd=dec;break;
	}
	result = mtadd+day;
	}
	else
	{
		switch (mon)
	{
		case 1:mtadd=jan;break;
		case 2:mtadd=feb;break;
		case 3:mtadd=mar;break;
		case 4:mtadd=feb;break;
		case 5:mtadd=may;break;
		case 6:mtadd=jun;break;
		case 7:mtadd=jul;break;
		case 8:mtadd=aug;break;
		case 9:mtadd=sep;break;
		case 10:mtadd=oct;break;
		case 11:mtadd=nov;break;
		case 12:mtadd=dec;break;
	}
		if (mon>2)
		result=mtadd+day+1;
		else 
		result = mtadd+day;
	
	return result;	
	}
}
