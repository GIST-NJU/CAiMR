#include "function.h"
#include <fstream>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    std::string tem_in=argv[1]; 
	std::string tem_out=argv[2]; 
	// std::string tem_in="tempfile_in.txt"; 
	// std::string tem_out="tempfile_out.txt";      
    std::string str;
    std::ifstream infile(tem_in.c_str());    
    if (!infile.is_open()) {
        std::cerr << "It can not open the infile" << std::endl;
        return 1;
    }
    int bi=0;
    int b[500];
    int dig;
	while(infile>>dig)
    {
		b[bi++] = dig;
    }
    int n=bi-1;
    int m=b[bi-1];
	int num[100];
	int dp[100];
	int count=0;
    for(int j=1;j<=n;j++)
	{
		dp[j]=0;
		num[j]=b[count++];
	}
	infile.close();	

    int d=solve(dp,num,n,m);
        
    std::ofstream outfile(tem_out.c_str());    
    if (!outfile.is_open()) {
        std::cerr << "It can not open the outfile" << std::endl;
        return 1;
    }  
    cout << d << endl;
    outfile << d;
    outfile.close();

    return 0;
}
