#pragma once
#include "Adapter.h"
#include "Shaders.h"
#include "Vertex.h"

class Graphics
{
public:
	bool Initialize(HWND hwnd, int width, int height);
	void Render();

private:
	bool InitializeDX(HWND hwnd, int width, int height);
	bool InitializeShaders();
	bool InitializeScene();

	Microsoft::WRL::ComPtr<ID3D11Device> device;
	Microsoft::WRL::ComPtr<ID3D11DeviceContext> deviceContext;
	Microsoft::WRL::ComPtr<IDXGISwapChain> swapChain;
	Microsoft::WRL::ComPtr<ID3D11RenderTargetView> renderTargetView;

	Microsoft::WRL::ComPtr<ID3D11Buffer> vertexBuffer;

	VertexShader vshader;
	PixelShader pshader;
};

