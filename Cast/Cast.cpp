#include "stdafx.h"  //________________________________________ Cast.cpp
#include "Cast.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Cast app;
	return app.BeginDialog(IDI_Cast, hInstance);
}

void Cast::Window_Open(Win::Event& e)
{
	double distance = Sys::Convert::ToDouble(L"18.136 Km");
	wstring text;
	Sys::Format(text, L"%g", distance);
	this->MessageBoxW(text, text, MB_OK);
}

