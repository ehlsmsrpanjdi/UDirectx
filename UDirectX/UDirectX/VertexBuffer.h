#pragma once
#include <d3d11.h>

class DeviceContext;

class VertexBuffer
{
public:
	VertexBuffer();
	bool load(void* list_vertics, UINT size_vertex, UINT size_list, void* shader_byte_code, UINT size_byte_shader);
	UINT getSizeVertexList();
	bool release();
	~VertexBuffer();
private:
	UINT m_size_vertex = UINT();
	UINT m_size_list = UINT();

private:
	ID3D11Buffer* m_buffer = nullptr;
	ID3D11InputLayout* m_layout = nullptr;

private:
	friend class DeviceContext;
};

