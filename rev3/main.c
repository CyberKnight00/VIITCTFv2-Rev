#include<stdio.h>
#include <time.h>

// Auther Vishal Biswas a.k.a CyberKnight00 
// https://twitter.com/CyberKnight00

int flag(){
	for(int i=0;i>=0;i++)
		if (i % 2 == 0) printf("%d");
		else printf("%x");
}

int Flag(int a){
	printf("Not this one either.\n");
}

int print(char a[]){
	char flag[]="oe34x_gu3_sy0j";
	printf("VIITCTF{");
	if(a[1] == 'A'){
		printf("H_=70b9E0<cbC3");
	}
	else 
		printf("13 ->");
	
	printf("%s",flag );
	printf("}\n");
}

int main(int argc, char const *argv[])
{	
	printf("Find the hidden flag\n");
	flag(0);
	return 0;
	print("flag");
}
//VIITCTF{br34k_th3_fl0w}