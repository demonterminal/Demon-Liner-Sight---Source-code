/*

Copyright (c) Demon Lined Sight (DLS) 2024
Written by ghgltgganer

*/
#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <fstream>
#include "sys_var.hpp"
#include "sys_func.hpp"
#include "sys_commands.hpp"

int main()
{
	// configuring evrtything at the startup
	std::cout<<"Configuring symbol..."<<std::endl;
	configure_Admin_Symbol();
	configure_Cli_Color();
	std::cout<<"Done"<<std::endl;
	std::system("clear");
	std::system(cli_color.c_str());
	
	
	
	
	// Creating an infinite loop
	while (1){
		std::cout<<admin_symbol<<" > ";
		// getting input as command
		std::getline(std::cin, command);
		
		
		// commands
		if (command.find("PRINT ")!=-1){
			PRINT(command);
		}// PRINT
		
		
		
		
		else if (command.find("OS ")!=-1){
			OS(command);
		}// OS
		
		
		
		
		
		
		else if (command.find("func set_Admin_Symbol()->")!=-1){
			FUNC_SET_ADMIN_SYMBOL(command);
		}// func/set_Admin_Symbol();
		
		
		
		
		
		
		
		else if (command.find("func configure_Admin_Symbol()")!=-1){
			FUNC_CONFIGURE_ADMIN_SYMBOL();
		}// func/configure_Admin_Symbol
		
		
		
		
		
		
		else if (command.find("func cli_Clear()")!=-1){
			FUNC_CLI_CLEAR();
		}
		
		
		
		
		
		
		else {
			
			std::cout<<"\n\n ERROR , Invalid command "<<command<<" , nothing command find in directory or it is not configured\n\n\n";
			
		}
		
		
		
	}
}