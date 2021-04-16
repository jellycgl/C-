#pragma once

#include <map>
#include <list>
#include <string>

#include "..\DataModel\Member.h"

using namespace std;


// C++ 11 thread safety
class CMemberManager
{

public:
	static CMemberManager & GetInstance();

private:
	CMemberManager();
	~CMemberManager();
	CMemberManager(const CMemberManager & memberManager);
	const CMemberManager &operator=(const CMemberManager & memberManager);
};

