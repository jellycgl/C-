#pragma once

#include <map>
#include <list>
#include <string>

#include "..\DataModel\Book.h"

using namespace std;

// C++ 11 thread safety
class CBookManager
{

public:
	static CBookManager & GetInstance();

private:
	CBookManager();
	~CBookManager();
	CBookManager(const CBookManager & bookManager);
	const CBookManager &operator=(const CBookManager & bookManager);
};

