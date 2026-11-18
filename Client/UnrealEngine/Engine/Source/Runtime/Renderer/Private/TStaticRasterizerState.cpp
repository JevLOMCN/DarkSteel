// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CreateRHI @ 14490a3e0

TRefCountPtr<FRHIRasterizerState> __cdecl TStaticRasterizerState<2,0,0,1>::CreateRHI(void)

{
  FRHIRasterizerState *in_RCX;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                      ::__l2::LLMScope_Name1153,L"RHIMisc/CreateRasterizerState");
      _Init_thread_footer(&`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
             ::__l2::LLMScope_Name1153,false,None,Default,true);
  FMemScope::FMemScope
            (local_res10,
             &`class_TRefCountPtr<FRHIRasterizerState>___cdecl_RHICreateRasterizerState(FRasterizerStateInitializerRHI_const&___ptr64)'
              ::__l2::LLMScope_Name1153,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x50))();
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return (TRefCountPtr<FRHIRasterizerState>)in_RCX;
}

