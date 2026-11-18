// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ExecuteAndDestruct @ 148108400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandSetShaderUnbinds<FRHIGraphicsShader>::Execute
              ((FRHICommandSetShaderUnbinds<FRHIGraphicsShader> *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetShaderUnbinds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetShaderUnbinds<FRHIGraphicsShader>,FRHICommandSetShaderUnbindsString1814>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandSetShaderUnbinds<FRHIGraphicsShader>::Execute
              ((FRHICommandSetShaderUnbinds<FRHIGraphicsShader> *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

