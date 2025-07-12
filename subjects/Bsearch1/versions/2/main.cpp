#include "function.h"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string tem_in=argv[1]; 
    string tem_out=argv[2]; 
//    std::string tem_in="tempfile_in.txt"; 
//    std::string tem_out="tempfile_out.txt";      
    string str;
    ifstream infile(tem_in.c_str());    
    if (!infile.is_open()) {
        cerr << "It can not open the infile" << std::endl;
        return 1;
    }
    int bi=0;
    int b[500];
    int dig;
    while(infile>>dig)
    {
        b[bi++] = dig;
    }
    int end=bi-2;
    int e=b[bi-1];
    infile.close(); 
    
    int m=BinSearch(b,e,0,end);
	int allmax=-1;
	int allmin=-1;
	if(m!=-1)
	{
	    int* temp=GetRange(b,m,end);	 
		allmin=temp[0];
		allmax=temp[1];
		if(temp!=NULL)
			delete []temp;  
	}
    
    ofstream outfile(tem_out.c_str());    
    if (!outfile.is_open()) {
        cerr << "It can not open the outfile" << std::endl;
        return 1;
    } 
	cout << allmin << " " << allmax <<endl; 
    outfile << allmin << " " << allmax;
    outfile.close();
    
    return 0;
}
