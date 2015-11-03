#include "BracketsDetect.h"

BracketsDetect::BracketsDetect()
{
}


BracketsDetect::~BracketsDetect()
{
}


vector<string> BracketsDetect::Contents(vector <string> values)
{
	vector<string> res;

	try
	{
		for (auto v : values)
		{
			if (DetectString(v))
			{
				res.push_back("YES");
			}
			else
			{
				res.push_back("NO");
			}
		}
		//throw "error"; // if error throw 1
	}
	catch (char * e)
	{
		cerr << e << endl;
	}

	return res;
}

bool BracketsDetect::DetectString(string value)
{
	bool res(true);
	deque<char> q;	// charachter queue like : { [ (
	deque<char> nq; // used to store the character needed like: } ] )
	try
	{
		char tempC;
		for (auto c : value)
		{
			switch (c)
			{
			case '(': q.push_back(c); nq.push_back(')');

				break; 
			case '[': q.push_back(c); nq.push_back(']');

				break; 
			case '{': q.push_back(c); nq.push_back('}');

				break;

			case '}': 
				tempC = nq.back();
				if ( tempC != '}')
				{
					return false;
				}
				nq.pop_back();
				break;

			case ']':
				tempC = nq.back();
				if (tempC != ']')
				{
					return false;
				}
				nq.pop_back();
				break;

			case ')':
				tempC = nq.back();
				if (tempC != ')')
				{
					return false;
				}
				nq.pop_back();
				break;

			default: break;
			}
		}
		return true; 
	}
	catch (char * e)
	{
		cerr << e;
	}
	/*
	// test-1 - display the q
	for (auto x : q)
	{
		cout << x;
	}
	cout << endl;
	// test-1 end
	*/
	return res;
}