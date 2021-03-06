/**********************************************************************/
/*                                                                    */
/*      DATA.C                                                        */
/*                                                                    */
/*      Copyright (c) 1995 - 2000  Microsoft Corporation                */
/*                                                                    */
/**********************************************************************/
#include "stdafx.h"
#include <windows.h>
#include <imm.h>
#include "wapi.h"
#include "tsfread.h"

HINSTANCE hInst      = NULL;
HWND hWndMain     = NULL;
HWND hWndCompStr  = NULL;
HWND hWndToolBar  = NULL;
HWND hWndStatus   = NULL;
HWND hWndCandList = NULL;

LOGFONT lf = {0};
HFONT hFont = NULL;

int nStatusHeight = 0;
int nToolBarHeight = 0;
DWORD fdwProperty = 0;

DWORD  dwCompStrLen      = 0;
DWORD  dwCompAttrLen     = 0;
DWORD  dwCompClsLen      = 0;
DWORD  dwCompReadStrLen  = 0;
DWORD  dwCompReadAttrLen = 0;
DWORD  dwCompReadClsLen  = 0;
DWORD  dwResultStrLen      = 0;
DWORD  dwResultClsLen      = 0;
DWORD  dwResultReadStrLen  = 0;
DWORD  dwResultReadClsLen  = 0;

TCHAR szCompStr[512]         = {0};
BYTE   bCompAttr[512]         = {0};
DWORD  dwCompCls[128]         = {0};
TCHAR szCompReadStr[512]     = {0};
BYTE   bCompReadAttr[512]     = {0};
DWORD  dwCompReadCls[128]     = {0};
TCHAR szResultStr[512]       = {0};
DWORD  dwResultCls[128]       = {0};
TCHAR szResultReadStr[512]   = {0};
DWORD  dwResultReadCls[128]   = {0};
TCHAR szPaintResult[512]     = {0};
TCHAR szPaintResultRead[512] = {0};
TCHAR szCursor[32] = {0};
TCHAR szDelta[32] = {0};
TCHAR szGuideLine[64] = {0};
LPCANDIDATELIST lpCandList = NULL;
DWORD dwConversionMode;
DWORD dwSentenceMode;
POINT ptImeUIPos = {0};

CTSFRead g_tsfReader;

