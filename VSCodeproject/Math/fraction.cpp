#include<iostream>
using namespace std;
void reduce(int &, int &); // 声明简化函数 
int gcd(int , int ); // 声明求最大公约数函数 
struct Fraction{ // 结构体分数 
	int up, down; //分子和分母 
	Fraction(){up = 0; down = 1; reduce(up, down);} //默认构造函数，默认为0，分母为1，即视为整数
	Fraction(int u, int d){ //构造函数，注意简化函数 
		reduce(u, d);
		up = u; down = d;
	}
	Fraction operator + (Fraction );//四则运算，均作为成员函数 
	Fraction operator - (Fraction );
	Fraction operator * (Fraction );
	Fraction operator / (Fraction );
	friend istream & operator >>(istream &, Fraction & ); //必须声明友元 ，且输入时，需要地址传递 
	friend ostream & operator <<(ostream &, Fraction ); 
};
void reduce(int &up, int &down){
	if(down < 0){ // 令分母始终为正 
		up = - up;
		down = -down;
	}
	if(up == 0) down = 1; //当为0时，令分母为 1， 表示为整数 
	else{
		int g = gcd(abs(up), abs(down)); // 求最大公约数时，要取绝对值 
		up /= g;
		down /= g;
	}
}
int gcd(int a, int b){
	return !b? a : gcd(b, a%b);
}
Fraction Fraction :: operator +(Fraction a){
	return Fraction(up * a.down + a.up * down, down * a.down);
}
Fraction Fraction :: operator - (Fraction a){
	return Fraction(up*a.down - a.up * down, down * a.down);
}
Fraction Fraction :: operator *(Fraction a){
	return Fraction(up*a.up, down * a.down);
}
Fraction Fraction:: operator /(Fraction a){
	return Fraction(up*a.down, down * a.up);
}
istream &  operator >>(istream & input, Fraction &a){
	input >> a.up >> a.down;
	reduce(a.up, a.down); // 输入时要记得简化 
	return input;
}
ostream & operator << (ostream & output, Fraction a){
	if(!a.down) return output << "INF\n"; //当分母为0时，视为无穷大 
	if(a.down == 1) return output<<a.up<<endl; //当分母为1时，视为整数  
	if(a.up/a.down) return output<<a.up/a.down << " " <<abs(a.up%a.down) << "/" << a.down << endl; //假分数输出 
	return output << a.up << "/" << a.down << endl; //真分数输出 
}
int main(){
	Fraction a, b;
	cin >> a >> b;
	cout << a << b;
	cout << a + b << a - b <<a * b << a / b;
	return 0;                                
}