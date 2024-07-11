#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <fstream>

int set_Admin_Symbol(std::string symbol){
	// opening the config file
	std::string config_path = "./config/boot/admin.symbol";
	std::ifstream get_Config(config_path);
	
	// checking file existance
	if (get_Config.is_open()){
		std::ofstream make_Config(config_path);
		make_Config<<symbol;
	}
	else {
		
		std::ofstream make_Config(config_path);
		make_Config<<"dls@dls";
		
	}
}


int configure_Admin_Symbol(){
	std::string config_path = "./config/boot/admin.symbol";
	std::ifstream get_Config(config_path);
	std::getline(get_Config, admin_symbol);
}











int set_Cli_Color(std::string color){
	// opening the config file
	std::string config_path = "./config/boot/cli.color";
	std::ifstream get_Config(config_path);
	
	// checking file existance
	if (get_Config.is_open()){
		std::ofstream make_Config(config_path);
		make_Config<<color;
	}
	else {
		
		std::ofstream make_Config(config_path);
		make_Config<<"color a";
		
	}
}


int configure_Cli_Color(){
	std::string config_path = "./config/boot/cli.color";
	std::ifstream get_Config(config_path);
	std::getline(get_Config, cli_color);
}