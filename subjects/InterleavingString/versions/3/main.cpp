#include "function.h"
#include <fstream>
#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
    std::string tem_in=argv[1]; 
    std::string tem_out=argv[2]; 
//    string tem_in="tempfile_in.txt"; 
//    string tem_out="tempfile_out.txt";  
	
	//open the input file    
    ifstream infile(tem_in.c_str());    
    if (!infile.is_open()) {
        cerr << "It can not open the infile" << std::endl;
        return 1;
    }
    
    string ss[3];
    string line;
    int i=0;
    // use the function getline to read the input file line by line
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
        if(i>=3){
        	cout << "There are errors in the infile"<<endl;
        	return 1;
		}
        ss[i++] = line;
    }
    // close the input file
    infile.close();
    
    char* A = &ss[0][0];
	char* B = &ss[1][0];
	char* C = &ss[2][0];
	
	//invoke the function isInterleaved 
    int res=isInterleaved(A,B,C);
    
    //save the result to ouput file 
    std::ofstream outfile(tem_out.c_str());    
    if (!outfile.is_open()) {
        std::cerr << "It can not open the outfile" << std::endl;
        return 1;
    } 
	cout << res <<endl; 
    outfile << res;
    outfile.close();
    
    return 0;
}
