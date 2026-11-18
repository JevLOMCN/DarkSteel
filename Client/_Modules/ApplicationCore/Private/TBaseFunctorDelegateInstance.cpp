// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 33

// TryGetBoundFunctionName @ 1423b87f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1423b8800

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1423b8810

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1423b8820

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
           *this)

{
  return 0;
}

// HasSameObject @ 1423b8830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1423b8840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                  *this)

{
  return true;
}

// CreateCopy @ 1423b8850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1423b88f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1423b8970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 1423b89b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ::<lambda_3>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 1423b89c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_3>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  ::<lambda_3>::operator()(&this->Functor,param_1);
  return true;
}

// CreateCopy @ 1423d5dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1423d5e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1423d5e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1423d5f30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_PEAV4__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1423d5fb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_PEAV4__Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1423d6000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FConsoleWindow_FWindowsConsoleOutputDevice2__QEAA_PEAV4__Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1423db2b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::Execute(void *this,uint param_1,uint param_2)

{
  FDisplayMetrics local_88;
  
  *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x118) = param_1;
  *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x11c) = param_2;
  local_88.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MonitorInfo.ArrayNum = 0;
  local_88.MonitorInfo.ArrayMax = 0;
  local_88.PrimaryDisplayWorkAreaRect.Left = 0;
  local_88.PrimaryDisplayWorkAreaRect.Top = 0;
  local_88.PrimaryDisplayWorkAreaRect.Right = 0;
  local_88.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_88.VirtualDisplayRect.Left = 0;
  local_88.VirtualDisplayRect.Top = 0;
  local_88.VirtualDisplayRect.Right = 0;
  local_88.VirtualDisplayRect.Bottom = 0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  FNullPlatformDisplayMetrics::RebuildDisplayMetrics(&local_88);
  GenericApplication::BroadcastDisplayMetricsChanged
            (*(GenericApplication **)((longlong)this + 0x18),&local_88);
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data,
             local_88.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_88.MonitorInfo.AllocatorInstance.Data);
  }
  return;
}

// Execute @ 1423db350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::Execute(void *this)

{
  if (*(char *)(*(undefined8 **)((longlong)this + 0x18) + 0x61) != '\0') {
    FWindowsConsoleOutputDevice2::SaveToINI
              ((FWindowsConsoleOutputDevice2 *)**(undefined8 **)((longlong)this + 0x18));
    return;
  }
  return;
}

// ExecuteIfSafe @ 1423db5b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,uint param_1,uint param_2)

{
  FDisplayMetrics local_88;
  
  *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x118) = param_1;
  *(uint *)(*(longlong *)((longlong)this + 0x18) + 0x11c) = param_2;
  local_88.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.MonitorInfo.ArrayNum = 0;
  local_88.MonitorInfo.ArrayMax = 0;
  local_88.PrimaryDisplayWorkAreaRect.Left = 0;
  local_88.PrimaryDisplayWorkAreaRect.Top = 0;
  local_88.PrimaryDisplayWorkAreaRect.Right = 0;
  local_88.PrimaryDisplayWorkAreaRect.Bottom = 0;
  local_88.VirtualDisplayRect.Left = 0;
  local_88.VirtualDisplayRect.Top = 0;
  local_88.VirtualDisplayRect.Right = 0;
  local_88.VirtualDisplayRect.Bottom = 0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
  local_88.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
  FNullPlatformDisplayMetrics::RebuildDisplayMetrics(&local_88);
  GenericApplication::BroadcastDisplayMetricsChanged
            (*(GenericApplication **)((longlong)this + 0x18),&local_88);
  DestructItems<FMonitorInfo,int>
            ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data,
             local_88.MonitorInfo.ArrayNum);
  if ((FMonitorInfo *)local_88.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
    FMemory::Free(local_88.MonitorInfo.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1423db650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  if (*(char *)(*(undefined8 **)((longlong)this + 0x18) + 0x61) != '\0') {
    FWindowsConsoleOutputDevice2::SaveToINI
              ((FWindowsConsoleOutputDevice2 *)**(undefined8 **)((longlong)this + 0x18));
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1423ddde0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1423dddf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1423e0e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1423e0e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1423e4b20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1423e4b30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1423e7610

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1423e7620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1423eb2c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1423eb2d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14240a130

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy,`FNullApplication::FNullApplication'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14240a140

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FWindowsConsoleOutputDevice2::FConsoleWindow::FConsoleWindow'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

