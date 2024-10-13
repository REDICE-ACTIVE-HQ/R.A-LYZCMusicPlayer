#include <iostream>
#include <string>

// Compiler Constant Defines

#define MAX_CLI_ARGUMENTS 12


namespace Core
{
	std::string arguments[MAX_CLI_ARGUMENTS+1];
	int args = 0;

	void ParserInit(int &argc, const char* argv[]);
	 
	//
	
	void ParserInit(int &argc, const char* argv[])
	{
		int arrayindex = 0;
		args = argc;
		for(int i = 1; i < args; i++)
		{
			arguments[arrayindex] = argv[i];
			arrayindex++;
		}
	}









}

