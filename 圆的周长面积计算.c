#include <stdio.h>

#define PI 3.14
#define PERIMETER(r) (2*PI*(r))
#define AREA(r) (PI*(r)*(r))

//本题关于宏的使用
//宏的格式：STH(r) ((r)*(r)*(sth)*(etc)),所有的宏一律大写！
//宏内部所有东西都要加括号，宏不需要等号=，不需要结尾；
double radius,perimeter,area;

int main(){
	printf("圆的周长和面积计算器：\n");
	printf("请输入半径：\n");
	scanf("%lf",&radius);
	if(radius<=0){
		printf("输入值有误，请输入大于0的半径\n");
		return 1;
	}
	perimeter=PERIMETER(radius);
	area=AREA(radius);
	//单精度浮点数用%f,双精度用%lf;
	printf("圆的周长是：%lf,面积是：%lf\n",perimeter,area);
	return 0;
}
