#include <dlfcn.h>
#include <iostream>
#include <cstring> //This header also contain _GNU_SOURCE
				   //_GNU_SOURCE needed by use RTLD Flags
using namespace std;


char* (*origin_strcpy)(char* dest, const char *src);


char* strcpy(char* dest, const char *src)
{
	char* rv;

	cout<<"strcpy hooked by hook_test.so!!!"<<endl;
	cout<<"Hooked src Contents : " <<src<<endl;
	
	origin_strcpy = (char * (*)(char*,const char*))dlsym(RTLD_NEXT, "strcpy");
	rv = (*origin_strcpy)(dest,src);

	return rv;
}



