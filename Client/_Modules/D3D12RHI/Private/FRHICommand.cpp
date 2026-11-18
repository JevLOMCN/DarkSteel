// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ExecuteAndDestruct @ 145a65050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::
ExecuteAndDestruct(FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>
                   *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FD3D12RHICmdEndMultiUpdateTexture3D",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FD3D12RHICmdEndMultiUpdateTexture3D,FD3D12RHICmdEndMultiUpdateTexture3DString>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  FD3D12RHICmdEndMultiUpdateTexture3D::Execute((FD3D12RHICmdEndMultiUpdateTexture3D *)this,param_1);
  (**(code **)(*(longlong *)this + 8))(this,0);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145aa6bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::
ExecuteAndDestruct(FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandD3D12UpdateUniformBuffer::Execute
              ((FRHICommandD3D12UpdateUniformBuffer *)this,param_1);
    FRHICommandD3D12UpdateUniformBuffer::~FRHICommandD3D12UpdateUniformBuffer
              ((FRHICommandD3D12UpdateUniformBuffer *)this);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandD3D12UpdateUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandD3D12UpdateUniformBuffer,FRHICommandD3D12UpdateUniformBufferString114>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandD3D12UpdateUniformBuffer::Execute
              ((FRHICommandD3D12UpdateUniformBuffer *)this,param_1);
    FRHICommandD3D12UpdateUniformBuffer::~FRHICommandD3D12UpdateUniformBuffer
              ((FRHICommandD3D12UpdateUniformBuffer *)this);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

