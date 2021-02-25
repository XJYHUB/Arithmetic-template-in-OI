
/*
By XJY
2021/2/25
*/

#include <bits/stdc++.h>
using namespace std;

int read(){ // character ans bitwise operation and the fastest
	bool flag=0;
	int num=0;
	char c=getchar();
	if(c=='-')flag=1;
	else num=(num<<3)+(num<<1)+c-'0'; // (num<<3)+(num<<1) means num*10
	c=getchar();
	while(c>='0'&&c<='9'){
		num=(num<<3)+(num<<1)+c-'0';
		c=getchar();
	}
	return flag?-num:num;
}

int main(){
	int n=read();
	
	for(int i=1;i<=n;i++)cout << read() <<endl;
	
	return 0;
}
