#include <iostream>

using std::cout;
using std::endl;

int main()
{
	char s[] = "hello";
	*s = 'H';
	//printf("s = %s\n", s);
	cout << "s = " << s << endl;

	char *p = "hello"; //"hello" 在C中表示char *类型，在C++中表示的是const char *类型

	//*p = 'H';

	return 0;
}
