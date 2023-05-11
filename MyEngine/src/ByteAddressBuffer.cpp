#include "DX12LibPCH.h"

#include "../inc/dx12lib/ByteAddressBuffer.h"
#include "../inc/dx12lib/Device.h"

using namespace dx12lib;

ByteAddressBuffer::ByteAddressBuffer( Device& device, const D3D12_RESOURCE_DESC& resDesc )
: Buffer( device, resDesc )
{}

ByteAddressBuffer::ByteAddressBuffer( Device& device, ComPtr<ID3D12Resource> resource )
: Buffer( device, resource )
{}

