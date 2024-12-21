#pragma once
#include "Window.h"
#include "SwapChain.h"
class AppWindow : public Window
{
public:
	AppWindow();
	~AppWindow();

	// Window��(��) ���� ��ӵ�
	void onCreate() override;
	void onUpdate() override;
	void onDestroy() override;
private:
	SwapChain* m_swap_chain;
};

