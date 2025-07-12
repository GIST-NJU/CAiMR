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
    infile.close(); 
    
    int result=firstMissingPositive(b, bi);
    
    ofstream outfile(tem_out.c_str());    
    if (!outfile.is_open()) {
        cerr << "It can not open the outfile" << std::endl;
        return 1;
    } 
	cout << result <<endl; 
    outfile << result;
    outfile.close();
    
    return 0;
}
