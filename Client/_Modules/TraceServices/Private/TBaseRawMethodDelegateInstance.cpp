// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 11

// CreateCopy @ 14d3d6520

void __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnalysisSession_TraceServices____A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d3d65b0

void __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnalysisSession_TraceServices____A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14d3d6600

void __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAnalysisSession_TraceServices____A6AXW4EAnalysisMessageSeverity_Trace_UE__V__TStringView__W___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d3dd720

void __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::Execute(void *this,EAnalysisMessageSeverity param_1,TStringView<wchar_t> *param_2)

{
  FAnalysisSession *pFVar1;
  FAnalysisSession *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FAnalysisSession **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<TraceServices::FAnalysisSession,TraceServices::FAnalysisSession_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->Size;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,&local_18);
  return;
}

// ExecuteIfSafe @ 14d3dd780

bool __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EAnalysisMessageSeverity param_1,TStringView<wchar_t> *param_2)

{
  FAnalysisSession *pFVar1;
  FAnalysisSession *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = *(FAnalysisSession **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<TraceServices::FAnalysisSession,TraceServices::FAnalysisSession_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->Size;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d3e0370

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14d3e0ec0

void * __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 14d3e39b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d3e67b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 14d3e6b50

bool __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d4040e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,TraceServices::FAnalysisSession,void___cdecl(enum_UE::Trace::EAnalysisMessageSeverity,TStringView<wchar_t>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

