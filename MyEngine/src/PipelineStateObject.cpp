#include "DX12LibPCH.h"

#include "../inc/dx12lib/PipelineStateObject.h"

#include "../inc/dx12lib/Device.h"

using namespace dx12lib;

PipelineStateObject::PipelineStateObject(Device& device, const D3D12_PIPELINE_STATE_STREAM_DESC& desc)
    : m_Device(device)
{
    auto d3d12Device = device.GetD3D12Device();

    ThrowIfFailed( d3d12Device->CreatePipelineState( &desc, IID_PPV_ARGS( &m_d3d12PipelineState ) ) );
}