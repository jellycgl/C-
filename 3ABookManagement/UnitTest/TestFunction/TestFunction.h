#pragma once

#include "..\TestedFiles\sqlite3.h"  
#include <iostream>  
using namespace std;

sqlite3 * pDB = NULL;

bool AddUser(const string& sName, const string& sAge);
 
bool DeleteUser(const string& sName);
  
bool ModifyUser(const string& sName, const string& sAge);
  
bool SelectUser();