#include <iostream>
#include <cstring>

// Auther Vishal Biswas a.k.a CyberKnight00 
// https://twitter.com/CyberKnight00

using namespace std;

int flag(){
	for(int i=0;i>=0;i++)
		if (i % 2 == 0) printf("%d");
		else printf("%x");
		return 0;
}

int Flag(int a){
	std::cout << "Not this one either.\n";
	return 0;
}


int print(){
	int flag[]={88, 46, 116, 93, 97, 112, 50, 50, 106, 49, 99, 93, 115, 102, 50, 93, 101, 106, 47, 117, 94, 46, 109, 97, 50, 93, 96, 101, 51, 47, 109};

	std::cout << "VIITCTF{";
	for(int i=0;i<31;i++)
	{	
		for(int j=0;j<256;j++)
		{	
			if(flag[i] == j)
			{
				std::cout << " " <<(char)(flag[i]+(i%2)+1)<<" ";
				break;
			}
			else if (i % 2 == 0) printf("%d ");
			else printf("%x ");
		}
	}
	printf("}\n");

	return 0;
	
}

int main(int argc, char const *argv[])
{	
	std::cout << "Find the hidden flag.\n";
	flag();
	print();
	return 0;
}
//VIITCTF{Y0u_br34k3d_th3_fl0w_0nc3_ag41n}