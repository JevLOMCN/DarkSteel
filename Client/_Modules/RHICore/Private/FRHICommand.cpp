// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 7

// ExecuteAndDestruct @ 1446d94b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetShaderParameters<FRHIComputeShader>::Execute
              ((FRHICommandSetShaderParameters<FRHIComputeShader> *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetShaderParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIComputeShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetShaderParameters<FRHIComputeShader>::Execute
              ((FRHICommandSetShaderParameters<FRHIComputeShader> *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d95f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetShaderParameters<FRHIGraphicsShader>::Execute
              ((FRHICommandSetShaderParameters<FRHIGraphicsShader> *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetShaderParameters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderParameters<FRHIGraphicsShader>,FRHICommandSetShaderParametersString1789>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetShaderParameters<FRHIGraphicsShader>::Execute
              ((FRHICommandSetShaderParameters<FRHIGraphicsShader> *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d9730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>
::ExecuteAndDestruct
          (FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDispatchIndirectComputeShader::Execute
              ((FRHICommandDispatchIndirectComputeShader *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDispatchIndirectComputeShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectComputeShader,FRHICommandDispatchIndirectComputeShaderString2039>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDispatchIndirectComputeShader::Execute
              ((FRHICommandDispatchIndirectComputeShader *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d9870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::
ExecuteAndDestruct(FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDispatchIndirectMeshShader::Execute
              ((FRHICommandDispatchIndirectMeshShader *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDispatchIndirectMeshShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDispatchIndirectMeshShader,FRHICommandDispatchIndirectMeshShaderString2236>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDispatchIndirectMeshShader::Execute
              ((FRHICommandDispatchIndirectMeshShader *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d99b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::
ExecuteAndDestruct(FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandDrawPrimitiveIndirect::Execute((FRHICommandDrawPrimitiveIndirect *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandDrawPrimitiveIndirect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandDrawPrimitiveIndirect,FRHICommandDrawPrimitiveIndirectString2157>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandDrawPrimitiveIndirect::Execute((FRHICommandDrawPrimitiveIndirect *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d9af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetShaderRootConstants::Execute((FRHICommandSetShaderRootConstants *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetShaderRootConstants",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderRootConstants,FRHICommandSetShaderRootConstantsString2117>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetShaderRootConstants::Execute((FRHICommandSetShaderRootConstants *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 1446d9c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetViewport::Execute((FRHICommandSetViewport *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetViewport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetViewport,FRHICommandSetViewportString1887>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetViewport::Execute((FRHICommandSetViewport *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

