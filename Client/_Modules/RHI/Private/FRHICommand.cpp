// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 12

// ExecuteAndDestruct @ 145ca0930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474> *this,
          FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHICommandContext *pIVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandBeginRenderQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginRenderQuery,FRHICommandBeginRenderQueryString2474>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar2 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar2->_padding_ + 0x180))(pIVar2,*(undefined8 *)(this + 1));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca0a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct
          (FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335> *this,
          FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  ERHIPipeline EVar2;
  ERHIPipeline EVar3;
  FRHITransition *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ERHIPipeline EVar7;
  IRHIComputeContext *pIVar8;
  undefined8 *puVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandBeginTransitions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandBeginTransitions,FRHICommandBeginTransitionsString2335>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar8 = FRHICommandListBase::GetComputeContext(param_1);
  local_38 = *(undefined4 *)(this + 1);
  uStack_34 = *(undefined4 *)&this[1].field_0x4;
  uStack_30 = *(undefined4 *)&this[1].field_0x8;
  uStack_2c = *(undefined4 *)&this[1].field_0xc;
  (**(code **)(pIVar8->_padding_ + 0x48))(pIVar8,&local_38);
  puVar9 = *(undefined8 **)(this + 1);
  puVar1 = puVar9 + *(int *)&this[1].field_0x8;
  while( true ) {
    if (puVar9 == puVar1) {
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res8);
      return;
    }
    EVar3 = param_1->ActivePipelines;
    this_00 = (FRHITransition *)*puVar9;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar3 = param_1->ActivePipelines;
    if (((this_00->AllowedSrc & EVar3) != EVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(AllowedSrc, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x213,
                           L"Transition is being used on a source pipeline that it wasn\'t created for."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar7 = this_00->State;
    do {
      LOCK();
      EVar2 = this_00->State;
      bVar6 = EVar7 == EVar2;
      if (bVar6) {
        this_00->State = EVar7 & ~EVar3;
        EVar2 = EVar7;
      }
      EVar7 = EVar2;
      UNLOCK();
    } while (!bVar6);
    if (((EVar7 & EVar3) != EVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(PreviousValue & Mask) == Mask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x218,
                           L"RHIBeginTransitions has been called twice on this transition for at least one pipeline."
                          ), bVar6)) break;
    if (EVar7 == EVar3) {
      FRHITransition::Cleanup(this_00);
    }
    puVar9 = puVar9 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ExecuteAndDestruct @ 145ca0d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::
ExecuteAndDestruct(FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>
                   *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHICommandContext *pIVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndDrawingViewport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndDrawingViewport,FRHICommandEndDrawingViewportString2514>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar2 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar2->_padding_ + 400))
            (pIVar2,*(undefined8 *)(this + 1),this[1].field_0x8,this[1].field_0x9);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca0e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct
          (FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485> *this,
          FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHICommandContext *pIVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndRenderQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndRenderQuery,FRHICommandEndRenderQueryString2485>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar2 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar2->_padding_ + 0x188))(pIVar2,*(undefined8 *)(this + 1));
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca0ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct
          (FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347> *this,
          FRHICommandListBase *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  ERHIPipeline EVar3;
  FRHITransition *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  IRHIComputeContext *pIVar8;
  byte bVar9;
  undefined8 *puVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandEndTransitions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandEndTransitions,FRHICommandEndTransitionsString2347>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar8 = FRHICommandListBase::GetComputeContext(param_1);
  local_38 = *(undefined4 *)(this + 1);
  uStack_34 = *(undefined4 *)&this[1].field_0x4;
  uStack_30 = *(undefined4 *)&this[1].field_0x8;
  uStack_2c = *(undefined4 *)&this[1].field_0xc;
  (**(code **)(pIVar8->_padding_ + 0x50))(pIVar8,&local_38);
  puVar10 = *(undefined8 **)(this + 1);
  puVar1 = puVar10 + *(int *)&this[1].field_0x8;
  while( true ) {
    if (puVar10 == puVar1) {
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res8);
      return;
    }
    EVar3 = param_1->ActivePipelines;
    this_00 = (FRHITransition *)*puVar10;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar3 = param_1->ActivePipelines;
    if (((this_00->AllowedDst & EVar3) != EVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(AllowedDst, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x223,
                           L"Transition is being used on a destination pipeline that it wasn\'t created for."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar9 = EVar3 << 2;
    bVar7 = this_00->State;
    do {
      LOCK();
      bVar2 = this_00->State;
      bVar6 = bVar7 == bVar2;
      if (bVar6) {
        this_00->State = bVar7 & ~bVar9;
        bVar2 = bVar7;
      }
      bVar7 = bVar2;
      UNLOCK();
    } while (!bVar6);
    if (((bVar9 & bVar7) != bVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(PreviousValue & Mask) == Mask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransition.h"
                           ,0x228,
                           L"RHIEndTransitions has been called twice on this transition for at least one pipeline."
                          ), bVar6)) break;
    if (bVar7 == bVar9) {
      FRHITransition::Cleanup(this_00);
    }
    puVar10 = puVar10 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ExecuteAndDestruct @ 145ca1290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct
          (FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124> *this,
          FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  FTaskBase *this_00;
  undefined8 *puVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandRHIThreadFence",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandRHIThreadFence,FRHICommandRHIThreadFenceString124>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  this_00 = *(FTaskBase **)(this + 1);
  if (this_00 != (FTaskBase *)0x0) {
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
    puVar3 = *(undefined8 **)(this + 1);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(this + 1) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = *(undefined8 **)(this + 1);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca1430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct
          (FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623> *this,
          FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  IRHIComputeContext *pIVar7;
  undefined8 uVar8;
  code *pcVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  ulonglong uVar10;
  undefined4 uVar11;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandRayTraceDispatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandRayTraceDispatch,FRHICommandRayTraceDispatchString2623>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  lVar3 = *(longlong *)(this + 1);
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4687553501859939675>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x55b,"PipelineState->RHIPipeline");
      if (bVar6) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar3 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x20);
  }
  if (*(longlong *)(this + 100) == 0) {
    pIVar7 = FRHICommandListBase::GetComputeContext(param_1);
    pcVar9 = *(code **)(pIVar7->_padding_ + 0x20);
    uVar11 = *(undefined4 *)(this + 0x65);
    uVar10 = (ulonglong)*(uint *)&this[100].field_0xc;
  }
  else {
    pIVar7 = FRHICommandListBase::GetComputeContext(param_1);
    pcVar9 = *(code **)(pIVar7->_padding_ + 0x28);
    uVar11 = *(undefined4 *)&this[100].field_0x8;
    uVar10 = *(ulonglong *)(this + 100);
  }
  (*pcVar9)(pIVar7,uVar8,*(undefined8 *)&this[99].field_0x8,*(undefined8 *)(this + 2),
            &this[2].field_0x8,uVar10,uVar11);
  if (*(void **)&this[0x62].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0x62].field_0x8);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca1670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::
ExecuteAndDestruct(FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>
                   *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  IRHIComputeContext *pIVar2;
  FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359> *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359> *local_18;
  undefined4 uStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandResourceTransition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandResourceTransition,FRHICommandResourceTransitionString2359>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar2 = FRHICommandListBase::GetComputeContext(param_1);
  pFVar3 = this + 1;
  uStack_10 = 1;
  local_18 = pFVar3;
  (**(code **)(pIVar2->_padding_ + 0x48))(pIVar2,&local_18);
  pIVar2 = FRHICommandListBase::GetComputeContext(param_1);
  uStack_10 = 1;
  local_18 = pFVar3;
  (**(code **)(pIVar2->_padding_ + 0x50))(pIVar2,&local_18);
  FRHITransition::Cleanup(*(FRHITransition **)pFVar3);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca1820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>
                   *this,FRHICommandListBase *param_1)

{
  bool bVar1;
  FRHIComputePipelineState *pFVar2;
  IRHIComputeContext *pIVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetComputePipelineState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetComputePipelineState,FRHICommandSetComputePipelineStateString1985>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pFVar2 = ExecuteSetComputePipelineState(*(FComputePipelineState **)(this + 1));
  pIVar3 = FRHICommandListBase::GetComputeContext(param_1);
  (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3,pFVar2);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca1980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::
ExecuteAndDestruct(FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>
                   *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  IRHICommandContext *pIVar8;
  FLLMScope local_res8 [8];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetGraphicsPipelineState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetGraphicsPipelineState,FRHICommandSetGraphicsPipelineStateString1995>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  lVar3 = *(longlong *)(this + 1);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  FPipelineStateStats::UpdateStats(*(FPipelineStateStats **)(lVar3 + 8));
  LOCK();
  piVar1 = (int *)(lVar3 + 0x40);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0x4e5,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar8 = FRHICommandListBase::GetContext(param_1);
  (**(code **)(pIVar8->_padding_ + 0x1b8))
            (pIVar8,uVar4,*(undefined4 *)&this[1].field_0x8,this[1].field_0xc);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 145ca1b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct
          (FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371> *this,
          FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
    _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandSetTrackedAccess",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandSetTrackedAccess,FRHICommandSetTrackedAccessString2371>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  lVar6 = *(longlong *)(this + 1);
  lVar5 = (longlong)*(int *)&this[1].field_0x8 * 0x10 + lVar6;
  while( true ) {
    if (lVar6 == lVar5) {
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(local_res18);
      FLLMScope::~FLLMScope(local_res8);
      return;
    }
    EVar1 = param_1->ActivePipelines;
    if (((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSingleRHIPipeline(ActivePipelines)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b7,
                           L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                          ), bVar4)) break;
    if ((param_1->ComputeContext == (IRHIComputeContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComputeContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2b8,
                           L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(param_1->ComputeContext->_padding_ + 0x150))(param_1->ComputeContext,lVar6);
    lVar6 = lVar6 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ExecuteAndDestruct @ 145ca1cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct
          (FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422> *this,
          FRHICommandListBase *param_1)

{
  int *piVar1;
  bool bVar2;
  IRHIComputeContext *pIVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name1616,L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
             ::__l2::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
              ::__l2::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1617,L"FRHICommandWriteGPUFence",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FRHICommand<FRHICommandWriteGPUFence,FRHICommandWriteGPUFenceString2422>::ExecuteAndDestruct(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1617);
  }
  pIVar3 = FRHICommandListBase::GetComputeContext(param_1);
  (**(code **)(pIVar3->_padding_ + 0xe0))(pIVar3,*(undefined8 *)(this + 1));
  if (*(longlong *)(this + 1) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(this + 1) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

