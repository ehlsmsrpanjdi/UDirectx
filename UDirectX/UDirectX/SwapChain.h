#pragma once
#include <d3d11.h>

class DeviceContext;

class SwapChain
{
public:
	SwapChain();
	bool init(HWND hwnd, UINT width, UINT height);


	bool present(bool vsync);

	bool release();
	~SwapChain();
private:
	IDXGISwapChain* m_swap_chain = nullptr;
	ID3D11RenderTargetView* m_rtv = nullptr;
private:
	friend class DeviceContext;
};

