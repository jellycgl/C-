#pragma once

/**************************************************************************
// 程序名称：   ConfigFile.h
// 程序说明：   类 ConfigFile 的定义
// 程序作者：   ChenGL
// 程序版本：   1.0
// 开始日期：   2016-12-19
***************************************************************************/
#ifndef __CONFIGFILE_H__
#define __CONFIGFILE_H__

#include <string>

using namespace std;

class CConfHelper
{
public:
	CConfHelper(const string & strFullPath);
	~CConfHelper();

public:

    // 写入配置文件
    bool WriteInt(const string & strSection, const string & strKey, int iValue);
    bool WriteBool(const string & strSection, const string & strKey, bool bolValue);
    bool WriteFloat(const string & strSection, const string & strKey, float fltValue);
    bool WriteString(const string & strSection, const string & strKey, const string & strValue);

    // 读配置文件
    int GetIntValue(const string & strSection, const string & strKey, int iDefaultValue = 0);
    bool GetBoolValue(const string & strSection, const string & strKey, bool bolDefaultValue = false);
    float GetFloatValue(const string & strSection, const string & strKey, float fltDefaultValue = 0.0);
    string GetStringValue(const string & strSection, const string & strKey, const string & strDefaultValue = "");

private:
    // 配置文件的全路径
    string  m_strFullPath;
};

#endif //__CONFIGFILE_H__
