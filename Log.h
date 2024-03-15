#include <iostream>
#include <string>
#ifndef LOG_H
#define LOG_H

void Log(std::string  message);
#endif //LOG_H

#ifdef LOG_IMPLEMENTATION
void Log(std::string  message){
	std::cout<<message<<std::endl;
}

#endif //LOG_IMPLEMENTATION
