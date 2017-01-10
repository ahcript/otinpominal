#pragma once

BOOL WINAPI DetourFunction(
	__in BOOL fStatus, 
	__in LPVOID* lppvFunction, 
	__in LPVOID lpvRedirection
);