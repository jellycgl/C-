#pragma once

#include <string>

using namespace std;

enum ErrorCode
{
	EC_UNKNOWN = -1,
	EC_SUCCESS = 0,
	EC_FAILED  = 1,
};

struct Result
{
	Result();
	ErrorCode errCode;
	string    errDesc;
};