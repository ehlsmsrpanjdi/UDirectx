#pragma once
#include "Window.h"

class AppWindow : public Window
{
public:
	AppWindow();
	~AppWindow();

	// Window을(를) 통해 상속됨
	void onCreate() override;
	void onUpdate() override;
	void onDestroy() override;
};

