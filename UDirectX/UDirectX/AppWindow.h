#pragma once
#include "Window.h"
#include "SwapChain.h"
#include "DeviceContext.h"
#include "VertexBuffer.h"

class AppWindow : public Window
{
public:
	AppWindow();
	~AppWindow();

	// Window을(를) 통해 상속됨
	void onCreate() override;
	void onUpdate() override;
	void onDestroy() override;
private:
	SwapChain* m_swap_chain = nullptr;
	VertexBuffer* m_vb = nullptr;
};

