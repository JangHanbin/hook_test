#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	cout<<"String copy src : "<<argv[1]<<endl;
	char tmp[100];
	cout<<"Trying to string copy src to tmp buf..."<<endl;
	strcpy(tmp,argv[1]);
	
	cout<<"tmp buffer : "<<tmp<<endl;

	return 0;

}
