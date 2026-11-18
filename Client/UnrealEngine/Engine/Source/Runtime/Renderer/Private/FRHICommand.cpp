// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 36

// ExecuteAndDestruct @ 14475a6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetShaderUnbinds<FRHIComputeShader>::Execute
              ((FRHICommandSetShaderUnbinds<FRHIComputeShader> *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetShaderUnbinds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIComputeShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetShaderUnbinds<FRHIComputeShader>::Execute
              ((FRHICommandSetShaderUnbinds<FRHIComputeShader> *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475a7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::
ExecuteAndDestruct(FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDispatchComputeShader::Execute((FRHICommandDispatchComputeShader *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDispatchComputeShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShader,FRHICommandDispatchComputeShaderString2025>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDispatchComputeShader::Execute((FRHICommandDispatchComputeShader *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475a920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::
ExecuteAndDestruct(FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDrawIndexedPrimitive::Execute((FRHICommandDrawIndexedPrimitive *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDrawIndexedPrimitive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitive,FRHICommandDrawIndexedPrimitiveString1841>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDrawIndexedPrimitive::Execute((FRHICommandDrawIndexedPrimitive *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475aa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct
          (FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDrawPrimitive::Execute((FRHICommandDrawPrimitive *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDrawPrimitive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitive,FRHICommandDrawPrimitiveString1827>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDrawPrimitive::Execute((FRHICommandDrawPrimitive *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475aba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetDepthBounds::Execute((FRHICommandSetDepthBounds *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetDepthBounds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetDepthBounds,FRHICommandSetDepthBoundsString2249>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetDepthBounds::Execute((FRHICommandSetDepthBounds *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475ace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetGPUMask::Execute((FRHICommandSetGPUMask *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetGPUMask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGPUMask,FRHICommandSetGPUMaskString1688>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetGPUMask::Execute((FRHICommandSetGPUMask *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475ae20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>
                   *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetStaticUniformBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffers,FRHICommandSetStaticUniformBuffersString2437>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  FRHICommandSetStaticUniformBuffers::Execute((FRHICommandSetStaticUniformBuffers *)this,param_1);
  if (*(void **)&this[6].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[6].field_0x8);
  }
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[1].field_0x8);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14475af80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetStreamSource::Execute((FRHICommandSetStreamSource *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetStreamSource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStreamSource,FRHICommandSetStreamSourceString1873>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetStreamSource::Execute((FRHICommandSetStreamSource *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144812840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::
ExecuteAndDestruct(FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCommitShaderBindingTable::Execute
              ((FRHICommandCommitShaderBindingTable *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCommitShaderBindingTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCommitShaderBindingTable,FRHICommandCommitShaderBindingTableString2574>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCommitShaderBindingTable::Execute
              ((FRHICommandCommitShaderBindingTable *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144812980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetBindingsOnShaderBindingTable::Execute
              ((FRHICommandSetBindingsOnShaderBindingTable *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetBindingsOnShaderBindingTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBindingsOnShaderBindingTable,FRHICommandSetBindingsOnShaderBindingTableString2686>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetBindingsOnShaderBindingTable::Execute
              ((FRHICommandSetBindingsOnShaderBindingTable *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144878ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDrawIndexedPrimitiveIndirect::Execute
              ((FRHICommandDrawIndexedPrimitiveIndirect *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDrawIndexedPrimitiveIndirect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawIndexedPrimitiveIndirect,FRHICommandDrawIndexedPrimitiveIndirectString2186>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDrawIndexedPrimitiveIndirect::Execute
              ((FRHICommandDrawIndexedPrimitiveIndirect *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144879130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetScissorRect::Execute((FRHICommandSetScissorRect *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetScissorRect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetScissorRect,FRHICommandSetScissorRectString1935>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetScissorRect::Execute((FRHICommandSetScissorRect *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1449180b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBeginRenderPass::Execute((FRHICommandBeginRenderPass *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandBeginRenderPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderPass,FRHICommandBeginRenderPassString1953>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBeginRenderPass::Execute((FRHICommandBeginRenderPass *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1449181f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct
          (FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandEndRenderPass::Execute((FRHICommandEndRenderPass *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndRenderPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderPass,FRHICommandEndRenderPassString1967>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandEndRenderPass::Execute((FRHICommandEndRenderPass *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144a7c5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBuildAccelerationStructures::Execute
              ((FRHICommandBuildAccelerationStructures *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBuildAccelerationStructures::Execute
              ((FRHICommandBuildAccelerationStructures *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144bc2000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetStaticUniformBuffer::Execute((FRHICommandSetStaticUniformBuffer *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetStaticUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStaticUniformBuffer,FRHICommandSetStaticUniformBufferString2448>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetStaticUniformBuffer::Execute((FRHICommandSetStaticUniformBuffer *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144d79620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct
          (FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandTransferResources::Execute((FRHICommandTransferResources *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandTransferResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResources,FRHICommandTransferResourcesString1698>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandTransferResources::Execute((FRHICommandTransferResources *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144e156b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct
          (FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCopyTexture::Execute((FRHICommandCopyTexture *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCopyTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyTexture,FRHICommandCopyTextureString2307>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCopyTexture::Execute((FRHICommandCopyTexture *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144e8d9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct
          (FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCopyBufferRegion::Execute((FRHICommandCopyBufferRegion *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCopyBufferRegion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyBufferRegion,FRHICommandCopyBufferRegionString2529>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCopyBufferRegion::Execute((FRHICommandCopyBufferRegion *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144f0b6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetStencilRef::Execute((FRHICommandSetStencilRef *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetStencilRef",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStencilRef,FRHICommandSetStencilRefString1779>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetStencilRef::Execute((FRHICommandSetStencilRef *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144f0b820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetUniformBufferDynamicOffset::Execute
              ((FRHICommandSetUniformBufferDynamicOffset *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetUniformBufferDynamicOffset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetUniformBufferDynamicOffset,FRHICommandSetUniformBufferDynamicOffsetString2461>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetUniformBufferDynamicOffset::Execute
              ((FRHICommandSetUniformBufferDynamicOffset *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144faa5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct
          (FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandClearUAVUint::Execute((FRHICommandClearUAVUint *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandClearUAVUint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVUint,FRHICommandClearUAVUintString2294>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandClearUAVUint::Execute((FRHICommandClearUAVUint *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144faa720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>
           *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDispatchComputeShaderBundle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchComputeShaderBundle,FRHICommandDispatchComputeShaderBundleString2054>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  FRHICommandDispatchComputeShaderBundle::Execute
            ((FRHICommandDispatchComputeShaderBundle *)this,param_1);
  if (*(void **)(this + 3) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 3));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144faa870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>
           *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDispatchGraphicsShaderBundle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchGraphicsShaderBundle,FRHICommandDispatchGraphicsShaderBundleString2084>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  FRHICommandDispatchGraphicsShaderBundle::Execute
            ((FRHICommandDispatchGraphicsShaderBundle *)this,param_1);
  if (*(void **)(this + 6) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 6));
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144faa9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct
          (FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandNextSubpass::Execute((FRHICommandNextSubpass *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandNextSubpass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandNextSubpass,FRHICommandNextSubpassString1976>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandNextSubpass::Execute((FRHICommandNextSubpass *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 144faab00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetStereoViewport::Execute((FRHICommandSetStereoViewport *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetStereoViewport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetStereoViewport,FRHICommandSetStereoViewportString1907>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetStereoViewport::Execute((FRHICommandSetStereoViewport *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1450cd3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::
ExecuteAndDestruct(FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandTransferResourceSignal::Execute((FRHICommandTransferResourceSignal *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandTransferResourceSignal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandTransferResourceSignal,FRHICommandTransferResourceSignalString1710>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandTransferResourceSignal::Execute((FRHICommandTransferResourceSignal *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14531f3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::
ExecuteAndDestruct(FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBeginSpecificUAVOverlap::Execute((FRHICommandBeginSpecificUAVOverlap *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandBeginSpecificUAVOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginSpecificUAVOverlap,FRHICommandBeginSpecificUAVOverlapString2143>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBeginSpecificUAVOverlap::Execute((FRHICommandBeginSpecificUAVOverlap *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14531f500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::
ExecuteAndDestruct(FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandEndSpecificUAVOverlap::Execute((FRHICommandEndSpecificUAVOverlap *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndSpecificUAVOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndSpecificUAVOverlap,FRHICommandEndSpecificUAVOverlapString2150>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandEndSpecificUAVOverlap::Execute((FRHICommandEndSpecificUAVOverlap *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145384be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBindAccelerationStructureMemory::Execute
              ((FRHICommandBindAccelerationStructureMemory *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBindAccelerationStructureMemory,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBindAccelerationStructureMemory::Execute
              ((FRHICommandBindAccelerationStructureMemory *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145384d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBuildSceneAccelerationStructures::Execute
              ((FRHICommandBuildSceneAccelerationStructures *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBuildSceneAccelerationStructures,FUnnamedRhiCommand>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBuildSceneAccelerationStructures::Execute
              ((FRHICommandBuildSceneAccelerationStructures *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1454ee780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct
          (FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCrossGPUTransfer::Execute((FRHICommandCrossGPUTransfer *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCrossGPUTransfer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransfer,FRHICommandCrossGPUTransferString1736>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCrossGPUTransfer::Execute((FRHICommandCrossGPUTransfer *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1454ee8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::
ExecuteAndDestruct(FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCrossGPUTransferSignal::Execute((FRHICommandCrossGPUTransferSignal *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCrossGPUTransferSignal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferSignal,FRHICommandCrossGPUTransferSignalString1752>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCrossGPUTransferSignal::Execute((FRHICommandCrossGPUTransferSignal *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1454eea00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::
ExecuteAndDestruct(FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCrossGPUTransferWait::Execute((FRHICommandCrossGPUTransferWait *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCrossGPUTransferWait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCrossGPUTransferWait,FRHICommandCrossGPUTransferWaitString1766>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCrossGPUTransferWait::Execute((FRHICommandCrossGPUTransferWait *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1454eeb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetBlendFactor::Execute((FRHICommandSetBlendFactor *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetBlendFactor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetBlendFactor,FRHICommandSetBlendFactorString1863>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetBlendFactor::Execute((FRHICommandSetBlendFactor *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1458f3990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::
ExecuteAndDestruct(FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandCopyToStagingBuffer::Execute((FRHICommandCopyToStagingBuffer *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandCopyToStagingBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandCopyToStagingBuffer,FRHICommandCopyToStagingBufferString2405>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandCopyToStagingBuffer::Execute((FRHICommandCopyToStagingBuffer *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

