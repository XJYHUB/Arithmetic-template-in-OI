
/*
By XJY 
PLUS:2021/21/24
*/

#include <bits/stdc++.h>
using namespace std;

struct large_num{ // The large number 
	int num[5000];
};

void change(string num,int array[]){  // string -> number_array 
	int digit=num.size();
	for(int i=1;i<=digit;i++){
		array[i]=num[digit-i]-'0';
	}
	array[0]=digit;
}

void out(large_num num){ // OUTPUT
	for(int i=num.num[0];i>=1;i--){
		printf("%d",num.num[i]);
	}
	return;
}

large_num operator + (large_num a,large_num b){ // PLUS
	int digit=max(a.num[0],b.num[0]);
	for(int i=1;i<=digit;i++){
		a.num[i]+=b.num[i];
		a.num[i+1]+=a.num[i]/10;
		a.num[i]%=10;
	}
	if(a.num[digit+1]>0)digit++;
	a.num[0]=digit;
	return a;
}

int main(){
	string a,b;
	large_num num_a,num_b;
	
	cin >> a >> b;
	
	change(a,num_a.num);
	change(b,num_b.num);
	
	printf("A+B:");
	large_num sum=num_a+num_b;
	out(sum);
	cout << endl;
	
	return 0;
} 
