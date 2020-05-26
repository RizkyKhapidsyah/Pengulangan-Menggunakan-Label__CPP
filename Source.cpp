#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main() {
	int i;
	i = 1;

awal:
	i = i + 1;
	
	cout << i << endl;


	if (i < 10)
	{
		goto awal;
	}
	else
	{
		goto akhir;
		cout << "Perintah ini tidak akan dieksekusi" << endl;
		cout << "Perintah ini juga tidak akan dieksekusi";
	}

akhir:
	cout << endl;

	_getch();
	return 0;
}