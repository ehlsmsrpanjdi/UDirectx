#pragma once
#include "Window.h"

class AppWindow : public Window
{
	// Window��(��) ���� ��ӵ�
	void onCreate() override;
	void onUpdate() override;
	void onDestroy() override;
};

