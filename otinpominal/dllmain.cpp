// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "stdafx.h"

BOOL WINAPI OnAttachProcess(__in HINSTANCE hInstance)
{
	return TRUE;
}

BOOL WINAPI DllMain(
	__in HINSTANCE hInstance, 
	__in DWORD fdwReason, 
	__in __reserved LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		return OnAttachProcess(hInstance);
	}
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
