#pragma once
#include <iostream>
#include <deque>
#include <vector>
#include <string>
using namespace std;

class BracketsDetect
{
public:
	BracketsDetect();
	~BracketsDetect();

	// summary
	// take an array of strings 
	// detect each of them
	// if it is using brackets in a right way then return 'YES'
	// otherwise return 'NO'
	// 
	vector<string> Contents(vector<string>); 


	// summary
	// detect a string 
	// if it is using brackets correctly then return true
	// otherwise reutrn false
	//
	bool DetectString(string);

};

