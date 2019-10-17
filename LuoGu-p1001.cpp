#include <stdio.h>
int main()
{
	int a=0;
	int b=0;	
    scanf("%d %d",&a,&b);
    printf("%d" ,a+b);
    return 0;
}
//此题犯的错误：
/*
		1.没有定义a, b的类型,直接使用 
		2.scanf里面 没有使用%d  即是转义字符
		3.%d与%d之间误加了“,” 
		4.忘记了 printf引号之间使用%d
		5.结尾分号的使用 
@LuoGu-p1001 
*/ 
