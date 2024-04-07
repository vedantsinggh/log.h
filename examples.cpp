// LOG_INPLEMENTATION must be defined to use log functions
#define LOG_IMPLEMENTATION 
#include "./Log.h"

int main(){
	// use Log(string) to simple log directly to terminal
	Log("Hellow World!");

	// use Log(CODE, string) with different CODE enums to display different kinds of colored log messages 
	Log(SUCCESS ,"Test case passed!");
	Log(INFO, "I inform you!");
	Log(WARN ,"I warn you!");
	Log(ERROR ,"An error occured!");
	
	// use ColorLog(COLOR, string) with COLOE enum to print different colers onto terminal
	ColorLog(CYAN ,"This is colored text.");


	// use Log(CODE, string) with different CODE enums to display different kinds of colored log messages 
	Log(SUCCESS ,45);
}
