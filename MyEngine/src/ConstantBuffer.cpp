#include "DX12LibPCH.h"

#include "../inc/dx12lib/ConstantBuffer.h"
#include "../inc/dx12lib/Device.h"
#include "../inc/dx12lib/d3dx12.h"

using namespace dx12lib;

ConstantBuffer::ConstantBuffer( Device& device, Microsoft::WRL::ComPtr<ID3D12Resource> resource )
: Buffer( device, resource )
{
    m_SizeInBytes = GetD3D12ResourceDesc().Width;
}

ConstantBuffer::~ConstantBuffer() {}
