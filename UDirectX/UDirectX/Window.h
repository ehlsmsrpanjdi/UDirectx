#pragma once
#include <Windows.h>


class Window {
public:
	Window();
	bool init();
	bool broadcase();
	bool release();
	bool isRun();
	~Window();


	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();

private:
	HWND m_hwnd = NULL;
	bool m_is_run = false;;
};

