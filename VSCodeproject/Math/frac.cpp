#include<cstdio>
#include<cmath>
typedef long long ll;

struct Fraction{
	ll up,down;
};
//求最大公约数 
ll gcd(ll a, ll b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
//化简操作
Fraction reduction(Fraction result){
	if(a.down < 0){
		result.up = -result.up;
		result.down = -result.down;
	}
	if(result.up == 0){
		result.down = 1;
	}else{
		ll d = gcd(abs(result.up),abs(result.down));
		result.up /= d;
		result.down /= d;
	}
	return result;
}
 

//加法
Fraction add(Fraction a, Fraction b){
	Fraction result;
	result.up = a.up*b.down + a.down*a.up;
	result.down = a.down * b.down;
	return reduction(result);
}

//减法
Fraction minu(Fraction a, Fraction b){
	Fraction result;
	result.up = a.up*b.down - a.down*b.up;
	result.down = a.down*b.down;
	return reduction(result);
} 

//乘法
Fraction multi(Fraction a , Fraction b){
	Fraction result;
	result.up = a.up*b.up;
	result.down  = a.down*b.down;
	return reduction(result);
}

//除法
Fraction div(Fraction a, Fraction b){
	Fraction result;
	result.up = a.up*b.down;
	result.down = a.down*b.up;
	return reduction(result);
}

//打印
void showResult(Fraction r){
	r = reduction(r);
	if(r.down == 1)printf("%lld",r.up);
	else{
		if(abs(r.up)>abs(r.down)){
			printf("%d %d/%d",r.up/r.down,abs(r.up)%r.down,r.down);
		}else{
			printf("%d/%d",r.up,r.down);
		}
	}
	
} 
