// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 4

// ExecuteAndDestruct @ 14cf8acf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<`anonymous_namespace'::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
::ExecuteAndDestruct
          (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
           *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
  *pFVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
      ::ExecuteAndDestruct'::`2'::_TSS0) {
    _Init_thread_header(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                         ::ExecuteAndDestruct'::`2'::_TSS0);
    if (`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
        ::ExecuteAndDestruct'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                      ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,
                     L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                           ::ExecuteAndDestruct'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
             ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
              ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
               ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)(this + 1));
  pcVar1 = *(code **)(this + 1);
  pFVar4 = this + 2;
  if (*(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
        **)&this[3].field_0x8 !=
      (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
       *)0x0) {
    pFVar4 = *(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
               **)&this[3].field_0x8;
  }
  uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
  (*pcVar1)(uVar3,param_1);
  if (*(longlong *)(this + 1) != 0) {
    pFVar4 = this + 2;
    if (*(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
          **)&this[3].field_0x8 !=
        (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
         *)0x0) {
      pFVar4 = *(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                 **)&this[3].field_0x8;
    }
    (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14cf8ae80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<`anonymous_namespace'::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
::ExecuteAndDestruct
          (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
           *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
  *pFVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
      ::ExecuteAndDestruct'::`2'::_TSS0) {
    _Init_thread_header(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
                         ::ExecuteAndDestruct'::`2'::_TSS0);
    if (`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
        ::ExecuteAndDestruct'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
                      ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,
                     L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
                           ::ExecuteAndDestruct'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
             ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
              ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
                ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`FRHICommand<FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
               ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)(this + 1));
  pcVar1 = *(code **)(this + 1);
  pFVar4 = this + 2;
  if (*(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
        **)&this[3].field_0x8 !=
      (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
       *)0x0) {
    pFVar4 = *(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
               **)&this[3].field_0x8;
  }
  uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
  (*pcVar1)(uVar3);
  if (*(longlong *)(this + 1) != 0) {
    pFVar4 = this + 2;
    if (*(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
          **)&this[3].field_0x8 !=
        (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
         *)0x0) {
      pFVar4 = *(FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunction<void___cdecl(void)>_>,FUnnamedRhiCommand>
                 **)&this[3].field_0x8;
    }
    (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14cf8aff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<`anonymous_namespace'::FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
::ExecuteAndDestruct
          (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
      ::ExecuteAndDestruct'::`2'::_TSS0) {
    _Init_thread_header(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                         ::ExecuteAndDestruct'::`2'::_TSS0);
    if (`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
        ::ExecuteAndDestruct'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                      ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,
                     L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                           ::ExecuteAndDestruct'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
             ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
              ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    (**(code **)(this + 1))(*(undefined8 *)&this[1].field_0x8,param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
                ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(FRHICommandListImmediate_&)>_>,FUnnamedRhiCommand>
               ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617);
    (**(code **)(this + 1))(*(undefined8 *)&this[1].field_0x8,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExecuteAndDestruct @ 14cf8b130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommand<`anonymous_namespace'::FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
::ExecuteAndDestruct
          (FRHICommand<_anonymous_namespace_::FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
           *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res8 [5];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
      ::ExecuteAndDestruct'::`2'::_TSS0) {
    _Init_thread_header(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
                         ::ExecuteAndDestruct'::`2'::_TSS0);
    if (`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
        ::ExecuteAndDestruct'::`2'::_TSS0 == -1) {
      ::FName::FName(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
                      ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,
                     L"RHIMisc/CommandList/ExecuteAndDestruct");
      _Init_thread_footer(&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
                           ::ExecuteAndDestruct'::`2'::_TSS0);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
             ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
              ::ExecuteAndDestruct'::`2'::LLMScope_Name1616,true);
  if ((CpuChannel->Enabled < 0) || (RHICommandsChannel->Enabled < 0)) {
    (**(code **)(this + 1))(*(undefined8 *)&this[1].field_0x8);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
                ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617,L"FUnnamedRhiCommand",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
               ,0x651);
    FCpuProfilerTrace::OutputBeginEvent
              (`FRHICommand<FXRFunctionWrapperRHICommand<TFunctionRef<void___cdecl(void)>_>,FUnnamedRhiCommand>
               ::ExecuteAndDestruct'::`2'::__CpuProfilerEventSpecId1617);
    (**(code **)(this + 1))(*(undefined8 *)&this[1].field_0x8);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

