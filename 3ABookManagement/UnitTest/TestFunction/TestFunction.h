#pragma once

#include <string>
#include <iostream>

using namespace std;

void TestSqlite3();

bool AddUser(const string& sName, const string& sAge);
 
bool DeleteUser(const string& sName);
  
bool ModifyUser(const string& sName, const string& sAge);
  
bool SelectUser();