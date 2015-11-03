#include <iostream>
#include "BracketsDetect.h"
using namespace std;


int main()
{
	BracketsDetect bd; 
	vector<string> v;
	
	
	v.push_back("{{{}}}");		// YES
	v.push_back("{[({[]})]}");	// YES
	v.push_back("{({[(({}}");	// NO


	vector<string> res = bd.Contents(v);

	for (auto r : res)
	{
		cout << r << endl;
	}

	return 0;
}