#pragma once

#include <string>

using namespace std;

enum ErrorCode
{
	EC_UNKNOWN    = -1,
	EC_SUCCESS    = 0,
	EC_FAILED     = 1,

	// DB Error, 10 ~ 50
	EC_DBINITFAIL     = 10,
	EC_LOADUSERFAIL   = 11,
	EC_ADDUSERFAIL    = 12,
	EC_DELUSERFAIL    = 13,
	EC_ModifyUSERFAIL = 14,
	EC_GetUSERFAIL    = 15,
};

struct Result
{
	Result();
	ErrorCode errCode;
	string    errDesc;
};