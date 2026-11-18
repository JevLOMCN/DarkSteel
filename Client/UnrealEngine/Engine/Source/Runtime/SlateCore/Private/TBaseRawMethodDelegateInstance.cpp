// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 484

// CreateCopy @ 142436ab0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142436b40

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 142436b90

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142436c40

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_96a846fc *)(puVar1 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142436ce0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[4] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = this->UserObject;
    *(pmf_96a846fc *)(puVar1 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142436d50

void __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[4] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCurveSequence____A6A_NM_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NM_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = this->UserObject;
    *(pmf_96a846fc *)(puVar3 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142436e10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFSlateCrashReporterHandler_Private_Slate_UE____A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5025532d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142436ea0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFSlateCrashReporterHandler_Private_Slate_UE____A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5025532d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142436ef0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFSlateCrashReporterHandler_Private_Slate_UE____A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5025532d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142436fa0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_98bd0071 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437030

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_98bd0071 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437080

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingCursorQueryEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_98bd0071 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437130

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7037b8fa *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424371c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7037b8fa *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437210

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingExecuteNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7037b8fa *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424372c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c231952b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437350

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c231952b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424373a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingFocusEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c231952b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437450

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c23a39f9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424374e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c23a39f9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437530

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingInputEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c23a39f9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424375e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3f7f5eb4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437670

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3f7f5eb4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424376c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingMouseCaptureEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3f7f5eb4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437770

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7fcdc461 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437800

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7fcdc461 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437850

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingNavigationEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7fcdc461 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437900

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_445a1c27 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437990

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_445a1c27 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424379e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBUFSlateDebuggingWarningEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_445a1c27 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437a90

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ac5ac24c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437b20

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ac5ac24c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437b70

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ac5ac24c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437c20

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23883679 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437cb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23883679 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437d00

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_23883679 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437db0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_70cddb1b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437e40

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_70cddb1b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142437e90

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebugger____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_70cddb1b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142437f40

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b0cd9de5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142437fd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b0cd9de5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438020

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b0cd9de5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424380d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ac478f4d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438160

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ac478f4d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424381b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ac478f4d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438260

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_570cb17e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424382f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_570cb17e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438340

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFPaintArgs__AEBUFGeometry__AEBVFSlateRect__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_570cb17e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424383f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7b03d560 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438480

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7b03d560 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424384d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7b03d560 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438580

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_774e59cc *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438610

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_774e59cc *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438660

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerBreak____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_774e59cc *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438710

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5df08f3f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424387a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5df08f3f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424387f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBUFSlateDebuggingInvalidateArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5df08f3f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424388a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8933bd5b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438930

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8933bd5b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438980

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8933bd5b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438a30

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_39de65f2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438ac0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_39de65f2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438b10

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_39de65f2 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438bc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cd809fc8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438c50

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_cd809fc8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438ca0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_cd809fc8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438d50

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ffc87156 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438de0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ffc87156 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438e30

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ffc87156 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142438ee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7bc18fb7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142438f70

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7bc18fb7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142438fc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7bc18fb7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439070

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_55e09ff9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439100

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_55e09ff9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439150

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_55e09ff9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439200

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_36975c9b *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439290

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_36975c9b *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1424392e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerInvalidationRoot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_36975c9b *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439390

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_64e0b1e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439420

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_64e0b1e1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439470

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_64e0b1e1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439520

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_38a42201 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424395b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_38a42201 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439600

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXPEBVSWidget__AEBVFSlateWindowElementList__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_38a42201 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424396b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3940a72d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439740

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3940a72d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439790

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPaint____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3940a72d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439840

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5b8e7d99 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424398d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5b8e7d99 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439920

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5b8e7d99 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1424399d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3209357d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439a60

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_3209357d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439ab0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPassBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_3209357d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439b60

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_be452ccb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439bf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_be452ccb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439c40

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_be452ccb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439cf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c4210563 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439d80

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c4210563 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439dd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXPEBVSWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c4210563 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142439e80

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_13951b57 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142439f10

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_13951b57 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142439f60

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerPrepass____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_13951b57 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a010

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0701aed5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a0a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0701aed5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14243a0f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBUFSlateDebuggingWidgetUpdatedEventArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_0701aed5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a1a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_56967671 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a230

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_56967671 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14243a280

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_56967671 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a330

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_636b54c0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a3c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_636b54c0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14243a410

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXAEBVFPaintArgs__AEBUFGeometry__AEAVFSlateWindowElementList__AEAH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_636b54c0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a4c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7374905e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a550

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_7374905e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14243a5a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_7374905e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a650

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_807c9924 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a6e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_807c9924 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14243a730

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConsoleSlateDebuggerUpdate____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_807c9924 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14243a7e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateInvalidationRoot____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14243a870

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateInvalidationRoot____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14243a8c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateInvalidationRoot____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14243b880

EActiveTimerReturnType __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  EActiveTimerReturnType EVar1;
  FCurveSequence *pFVar2;
  FCurveSequence *local_res8 [4];
  
  local_res8[0] = *(FCurveSequence **)((longlong)this + 0x18);
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&>(local_res8);
  EVar1 = (**(code **)((longlong)this + 0x20))(pFVar2,SUB84(param_1,0),param_2);
  return EVar1;
}

// Execute @ 14243b8e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::Execute(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
          *this,float param_1)

{
  pmf_96a846fc pVar1;
  undefined1 uVar2;
  FCurveSequence *pFVar3;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *pTVar4;
  FCurveSequence *local_res8;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> local_38 [2];
  
  local_res8 = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&>(&local_res8)
  ;
  pVar1 = this->MethodPtr;
  pTVar4 = TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
                     (local_38,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)
                               &this->_padding_);
  uVar2 = (*(code *)pVar1)(pFVar3,param_1,pTVar4);
  return (bool)uVar2;
}

// Execute @ 14243b950

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
          *this,FCrashContextExtendedWriter *param_1)

{
  FSlateCrashReporterHandler *pFVar1;
  FSlateCrashReporterHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::Private::FSlateCrashReporterHandler,UE::Slate::Private::FSlateCrashReporterHandler_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243b9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingCursorQueryEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243b9f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingExecuteNavigationEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243ba40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingFocusEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243ba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingInputEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bae0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingMouseCaptureEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingNavigationEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bb80

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingWarningEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bbd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bc20

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bc70

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243bcb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingInvalidateArgs *param_1)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bd00

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
          *this,SWidget *param_1,FPaintArgs *param_2,FGeometry *param_3,FSlateRect *param_4,
         FSlateWindowElementList *param_5,int param_6)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// Execute @ 14243bde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
          *this,SWidget *param_1,FSlateWindowElementList *param_2,int param_3)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14243be50

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243be90

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingInvalidateArgs *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
          *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int *param_4
         )

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14243bfa0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243bff0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
          *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int *param_4
         )

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14243c0a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c0f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c130

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
          *this,SWidget *param_1,FSlateWindowElementList *param_2,int param_3)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14243c1f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
          *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int *param_4
         )

{
  FConsoleSlateDebuggerPassBase *pFVar1;
  FConsoleSlateDebuggerPassBase *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14243c2a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerPassBase *pFVar1;
  FConsoleSlateDebuggerPassBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c330

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
          *this,SWidget *param_1)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c380

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c3c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingWidgetUpdatedEventArgs *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c410

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
          *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,int *param_4
         )

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14243c4d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 14243c520

void __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 14243c560

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  FSlateInvalidationRoot *pFVar1;
  FSlateInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSlateInvalidationRoot,FSlateInvalidationRoot_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 14243c6f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  FCurveSequence *pFVar1;
  FCurveSequence *local_res8 [4];
  
  local_res8[0] = *(FCurveSequence **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&>(local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,SUB84(param_1,0),param_2);
  return true;
}

// ExecuteIfSafe @ 14243c750

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
                *this,float param_1)

{
  pmf_96a846fc pVar1;
  FCurveSequence *pFVar2;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *pTVar3;
  FCurveSequence *local_res8;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> local_38 [2];
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FCurveSequence,FCurveSequence_*_&>(&local_res8)
  ;
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
                     (local_38,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)
                               &this->_padding_);
  (*(code *)pVar1)(pFVar2,param_1,pTVar3);
  return true;
}

// ExecuteIfSafe @ 14243c7c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                *this,FCrashContextExtendedWriter *param_1)

{
  FSlateCrashReporterHandler *pFVar1;
  FSlateCrashReporterHandler *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Slate::Private::FSlateCrashReporterHandler,UE::Slate::Private::FSlateCrashReporterHandler_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingCursorQueryEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c860

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingExecuteNavigationEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c8b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingFocusEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingInputEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c950

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingMouseCaptureEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c9a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingNavigationEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243c9f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingWarningEventArgs *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243ca40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243ca90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cae0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebugger *pFVar1;
  FConsoleSlateDebugger *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebugger,FConsoleSlateDebugger_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243cb20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingInvalidateArgs *param_1)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cb70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cbc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,SWidget *param_1,FPaintArgs *param_2,FGeometry *param_3,FSlateRect *param_4,
               FSlateWindowElementList *param_5,int param_6)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return true;
}

// ExecuteIfSafe @ 14243cc50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,SWidget *param_1,FSlateWindowElementList *param_2,int param_3)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14243ccc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerBreak *pFVar1;
  FConsoleSlateDebuggerBreak *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerBreak,FConsoleSlateDebuggerBreak_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243cd00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingInvalidateArgs *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cd50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cda0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,
               int *param_4)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14243ce20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243ce70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerInvalidate *pFVar1;
  FConsoleSlateDebuggerInvalidate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidate,FConsoleSlateDebuggerInvalidate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243ceb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,
               int *param_4)

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14243cf30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243cf80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerInvalidationRoot *pFVar1;
  FConsoleSlateDebuggerInvalidationRoot *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerInvalidationRoot,FConsoleSlateDebuggerInvalidationRoot_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243cfc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d010

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,SWidget *param_1,FSlateWindowElementList *param_2,int param_3)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14243d080

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerPaint *pFVar1;
  FConsoleSlateDebuggerPaint *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPaint,FConsoleSlateDebuggerPaint_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243d0c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,
               int *param_4)

{
  FConsoleSlateDebuggerPassBase *pFVar1;
  FConsoleSlateDebuggerPassBase *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14243d140

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerPassBase *pFVar1;
  FConsoleSlateDebuggerPassBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPassBase,FConsoleSlateDebuggerPassBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243d180

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d1d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
                *this,SWidget *param_1)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d220

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerPrepass *pFVar1;
  FConsoleSlateDebuggerPrepass *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerPrepass,FConsoleSlateDebuggerPrepass_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243d260

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateDebuggingWidgetUpdatedEventArgs *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d2b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,FPaintArgs *param_1,FGeometry *param_2,FSlateWindowElementList *param_3,
               int *param_4)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14243d380

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 14243d3d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FConsoleSlateDebuggerUpdate *pFVar1;
  FConsoleSlateDebuggerUpdate *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FConsoleSlateDebuggerUpdate,FConsoleSlateDebuggerUpdate_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 14243d410

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  FSlateInvalidationRoot *pFVar1;
  FSlateInvalidationRoot *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FSlateInvalidationRoot,FSlateInvalidationRoot_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14243e650

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14243e660

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e670

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e680

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e690

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e6f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e700

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e710

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e720

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e730

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e740

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e750

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e760

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e770

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e780

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e790

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e7f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e800

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e810

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e820

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e830

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e840

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e850

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e860

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e870

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e880

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e890

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e8a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e8b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14243e8c0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14243f2d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 14243f2e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f2f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f300

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f310

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f320

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f330

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f340

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f350

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f360

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f370

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f380

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f390

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f3f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f400

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f410

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f420

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f430

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f440

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f450

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f460

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f470

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f480

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f490

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f4f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f500

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f510

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f520

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f530

void * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14243f540

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14243fb50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fb60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fb70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fb80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fb90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fba0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fbb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fbc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fbd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fbe0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fbf0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fc90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fca0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fcb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fcc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fcd0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fce0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fcf0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd60

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd70

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fd90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fda0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fdb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14243fdc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1424448f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 142444900

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444910

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444920

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444930

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444940

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444950

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444960

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444970

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444980

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444990

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1424449f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444a90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444aa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444ab0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444ac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444ad0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444ae0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142444b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 142445910

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142445920

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445930

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445940

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445950

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445960

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445970

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445980

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445990

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1424459f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445a90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445aa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445ab0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445ac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445ad0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445ae0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142445b80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142454af0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b00

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCurveSequence,bool___cdecl(float),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b10

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Slate::Private::FSlateCrashReporterHandler,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingCursorQueryEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingExecuteNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b50

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingNavigationEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(FSlateDebuggingWarningEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454b90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454ba0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454bb0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebugger,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454bc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454bd0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454be0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454bf0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c00

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerBreak,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c10

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c50

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c80

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerInvalidationRoot,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454c90

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454ca0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454cb0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPaint,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454cc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454cd0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPassBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454ce0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454cf0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d00

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerPrepass,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d10

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d20

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d40

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d50

FName __thiscall
TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FConsoleSlateDebuggerUpdate,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142454d60

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSlateInvalidationRoot,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1424833a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_441c3d64 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142483430

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_441c3d64 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142483480

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_441c3d64 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142483530

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424835c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 142483610

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142486a60

void __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FCompositeFontCache *pFVar1;
  FCompositeFontCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCompositeFontCache,FCompositeFontCache_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 142486aa0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FSlateFontCache *pFVar1;
  FSlateFontCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateFontCache,FSlateFontCache_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 142486b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FCompositeFontCache *pFVar1;
  FCompositeFontCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCompositeFontCache,FCompositeFontCache_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 142486b40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FSlateFontCache *pFVar1;
  FSlateFontCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateFontCache,FSlateFontCache_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14248bde0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14248bdf0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 142492860

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142492870

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 142496ea0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142496eb0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142497b00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142497b10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14249b380

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14249b390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1424a89b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCompositeFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1424a89c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSlateFontCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142505d70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontServices____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_719b9969 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142505e00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontServices____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_719b9969 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142505e50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateFontServices____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_719b9969 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142505f00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateRenderer____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_483de2f3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142505f90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateRenderer____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_483de2f3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142505fe0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateRenderer____A6AXAEBVFSlateFontCache___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_483de2f3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142508660

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateFontCache *param_1)

{
  FSlateFontServices *pFVar1;
  FSlateFontServices *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateFontServices,FSlateFontServices_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1425086b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateFontCache *param_1)

{
  FSlateRenderer *pFVar1;
  FSlateRenderer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateRenderer,FSlateRenderer_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 142508770

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateFontCache *param_1)

{
  FSlateFontServices *pFVar1;
  FSlateFontServices *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateFontServices,FSlateFontServices_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1425087c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *this,FSlateFontCache *param_1)

{
  FSlateRenderer *pFVar1;
  FSlateRenderer *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FSlateRenderer,FSlateRenderer_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14250bf00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14250bf10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14250e660

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14250e670

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14250fa20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14250fa30

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1425103d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1425103e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 142511810

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142511820

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1425225d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSlateFontServices,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425225e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FSlateRenderer,void___cdecl(FSlateFontCache_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

