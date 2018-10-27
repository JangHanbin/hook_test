#include <dlfcn.h>
#include <iostream>
#include <cstring> //This header also contain _GNU_SOURCE
				   //_GNU_SOURCE needed by use RTLD Flags
using namespace std;


char* (*origin_strcpy)(char* dest, const char *src);


char* strcpy(char* dest, const char *src)
{
	char* rv;

	cout<<"strcpy hooked !!!"<<endl;
	cout<<"dest : "<<dest<<endl;
	cout<<"src : " <<src<<endl;
	
	//dlsym(RTLD_NEXT, "strcpy")`
	rv = (*origin_strcpy)(dest,src);

	return rv;
}



