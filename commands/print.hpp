#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <fstream>

int PRINT(std::string print){
	
	std::string print_char = "PRINT ";
	std::string text = print.substr(print_char.length());
	std::cout<<text<<std::endl;
	
}