#include "stdafx.h"
#include "ConfHelper.h"
#include <sstream>   

CConfHelper::CConfHelper(const string & strFullPath)
: m_strFullPath(strFullPath)
{
}

CConfHelper::~CConfHelper()
{

}

bool CConfHelper::WriteInt(const string & strSection, const string & strKey, int iValue)
{
    ostringstream ostr;
    ostr << iValue;
    string strValue = ostr.str();
    return WritePrivateProfileString(strSection.c_str(), strKey.c_str(), strValue.c_str(), m_strFullPath.c_str());
}

bool CConfHelper::WriteBool(const string & strSection, const string & strKey, bool bolValue)
{
    string strValue = bolValue ? "True" : "False";
    return WritePrivateProfileString(strSection.c_str(), strKey.c_str(), strValue.c_str(), m_strFullPath.c_str());
}

bool CConfHelper::WriteFloat(const string & strSection, const string & strKey, float fltValue)
{
    ostringstream ostr;
    ostr << fltValue;
    string strValue = ostr.str();
    return WritePrivateProfileString(strSection.c_str(), strKey.c_str(), strValue.c_str(), m_strFullPath.c_str());
}

bool CConfHelper::WriteString(const string & strSection, const string & strKey, const string & strValue)
{
    return WritePrivateProfileString(strSection.c_str(), strKey.c_str(), strValue.c_str(), m_strFullPath.c_str());
}

int CConfHelper::GetIntValue(const string & strSection, const string & strKey, int iDefaultValue)
{
    int iResult = GetPrivateProfileInt(strSection.c_str(), strKey.c_str(), iDefaultValue, m_strFullPath.c_str());
    return iResult;
}

bool CConfHelper::GetBoolValue(const string & strSection, const string & strKey, bool bolDefaultValue)
{
    TCHAR szResult[6];
    ZeroMemory(szResult, 6);

    string strDefaultValue = bolDefaultValue ? "True" : "False";
    GetPrivateProfileString(strSection.c_str(), strKey.c_str(), strDefaultValue.c_str(), szResult, 255, m_strFullPath.c_str());

    bool bolResult = (_tcscmp(szResult, TEXT("True")) == 0 || _tcscmp(szResult, TEXT("true")) == 0) ? true : false;
    return bolResult;
}

float CConfHelper::GetFloatValue(const string & strSection, const string & strKey, float fltDefaultValue)
{
    TCHAR szResult[255];
    ZeroMemory(szResult, 255);

    ostringstream ostr;
    ostr << fltDefaultValue;
    string strDefaultValue = ostr.str();

    GetPrivateProfileString(strSection.c_str(), strKey.c_str(), strDefaultValue.c_str(), szResult, 255, m_strFullPath.c_str());

    float fltResult = (float)_tstof(szResult);
    return fltResult;
}

string CConfHelper::GetStringValue(const string & strSection, const string & strKey, const string & strDefaultValue)
{
    TCHAR szResult[255];
    ZeroMemory(szResult, 255);

    GetPrivateProfileString(strSection.c_str(), strKey.c_str(), strDefaultValue.c_str(), szResult, 255, m_strFullPath.c_str());

    string strResult = szResult;
    return strResult;
}