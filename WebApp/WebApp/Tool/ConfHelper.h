#pragma once

/**************************************************************************
// �������ƣ�   ConfigFile.h
// ����˵����   �� ConfigFile �Ķ���
// �������ߣ�   ChenGL
// ����汾��   1.0
// ��ʼ���ڣ�   2016-12-19
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

    // д�������ļ�
    bool WriteInt(const string & strSection, const string & strKey, int iValue);
    bool WriteBool(const string & strSection, const string & strKey, bool bolValue);
    bool WriteFloat(const string & strSection, const string & strKey, float fltValue);
    bool WriteString(const string & strSection, const string & strKey, const string & strValue);

    // �������ļ�
    int GetIntValue(const string & strSection, const string & strKey, int iDefaultValue = 0);
    bool GetBoolValue(const string & strSection, const string & strKey, bool bolDefaultValue = false);
    float GetFloatValue(const string & strSection, const string & strKey, float fltDefaultValue = 0.0);
    string GetStringValue(const string & strSection, const string & strKey, const string & strDefaultValue = "");

private:
    // �����ļ���ȫ·��
    string  m_strFullPath;
};

#endif //__CONFIGFILE_H__
