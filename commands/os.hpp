#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <fstream>

int OS(std::string os){
	
	std::string print_char = "OS ";
	std::string text = os.substr(print_char.length());
	std::system(text.c_str());
	
}