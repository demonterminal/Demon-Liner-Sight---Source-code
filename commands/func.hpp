#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <fstream>

int FUNC_SET_ADMIN_SYMBOL(std::string symbol){
	
	std::string print_char = "func set_Admin_Symbol()->";
	std::string text = symbol.substr(print_char.length());
	set_Admin_Symbol(text);
	
}



int FUNC_CONFIGURE_ADMIN_SYMBOL(){
	
	configure_Admin_Symbol();
	
}




int FUNC_CLI_CLEAR(){
	
	std::system("clear");
	
}