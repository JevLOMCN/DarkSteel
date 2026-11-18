// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// ExecuteAndDestruct @ 145d23fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::
ExecuteAndDestruct(FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>
                   *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHIGpuHangCommandListCorruption::Execute((FRHIGpuHangCommandListCorruption *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHIGpuHangCommandListCorruption",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHIGpuHangCommandListCorruption,FRHIGpuHangCommandListCorruptionString2262>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHIGpuHangCommandListCorruption::Execute((FRHIGpuHangCommandListCorruption *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145db4330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandBeginUAVOverlap::Execute((FRHICommandBeginUAVOverlap *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandBeginUAVOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginUAVOverlap,FRHICommandBeginUAVOverlapString2133>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandBeginUAVOverlap::Execute((FRHICommandBeginUAVOverlap *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145db4470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct
          (FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandClearUAVFloat::Execute((FRHICommandClearUAVFloat *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandClearUAVFloat",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandClearUAVFloat,FRHICommandClearUAVFloatString2281>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandClearUAVFloat::Execute((FRHICommandClearUAVFloat *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145db45b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct
          (FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandEndUAVOverlap::Execute((FRHICommandEndUAVOverlap *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndUAVOverlap",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndUAVOverlap,FRHICommandEndUAVOverlapString2138>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandEndUAVOverlap::Execute((FRHICommandEndUAVOverlap *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145db46f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct
          (FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324> *this,
          FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    FRHICommandResummarizeHTile::Execute((FRHICommandResummarizeHTile *)this,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandResummarizeHTile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandResummarizeHTile,FRHICommandResummarizeHTileString2324>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
    FRHICommandResummarizeHTile::Execute((FRHICommandResummarizeHTile *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

