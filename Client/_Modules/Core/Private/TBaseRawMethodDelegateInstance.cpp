// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 319

// CreateCopy @ 14148eda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutoConsoleTaskPriority____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a62d3bab *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14148ee30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutoConsoleTaskPriority____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a62d3bab *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14148ee80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutoConsoleTaskPriority____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a62d3bab *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14148ef30

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherFilesystemStats_UE____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e86361a1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14148efc0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherFilesystemStats_UE____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e86361a1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14148f010

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherFilesystemStats_UE____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e86361a1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141493d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FAutoConsoleTaskPriority *pFVar1;
  FAutoConsoleTaskPriority *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAutoConsoleTaskPriority,FAutoConsoleTaskPriority_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 141493dd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FIoDispatcherFilesystemStats *pFVar2;
  FIoDispatcherFilesystemStats *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<UE::FIoDispatcherFilesystemStats,UE::FIoDispatcherFilesystemStats_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 141493ea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FAutoConsoleTaskPriority *pFVar1;
  FAutoConsoleTaskPriority *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FAutoConsoleTaskPriority,FAutoConsoleTaskPriority_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 141493ef0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FIoDispatcherFilesystemStats *pFVar1;
  FIoDispatcherFilesystemStats *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::FIoDispatcherFilesystemStats,UE::FIoDispatcherFilesystemStats_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141497570

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 141497580

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 141499790

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1414997a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14149a850

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14149a860

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14149adc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14149add0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14149e390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14149e3a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1414b6720

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAutoConsoleTaskPriority,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1414b6730

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::FIoDispatcherFilesystemStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1415b9d00

void __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  this_00 = &param_1->field_0x8;
  local_10 = this_00;
  if (*(int *)&param_1->field_0x10 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,3,0x10);
    *(undefined4 *)&param_1->field_0x10 = 3;
  }
  puVar1 = *(undefined8 **)this_00;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFFileCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5b5a6ce2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1415b9db0

void __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)&param_1->field_0x8 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,3,0x10);
    *(undefined4 *)&param_1->field_0x8 = 3;
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFFileCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5b5a6ce2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1415b9e30

void __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  if (*(int *)&param_1->field_0x30 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,3,0x10);
    *(undefined4 *)&param_1->field_0x30 = 3;
  }
  puVar1 = *(undefined8 **)&param_1->field_0x28;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFFileCache____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5b5a6ce2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1415b9f00

void __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  undefined1 *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  this_00 = &param_1->field_0x8;
  local_10 = this_00;
  if (*(int *)&param_1->field_0x10 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this_00,0,3,0x10);
    *(undefined4 *)&param_1->field_0x10 = 3;
  }
  puVar1 = *(undefined8 **)this_00;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTSTickerObjectBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e9fa60e3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1415b9fb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)&param_1->field_0x8 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)param_1,0,3,0x10);
    *(undefined4 *)&param_1->field_0x8 = 3;
  }
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTSTickerObjectBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e9fa60e3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1415ba030

void __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  if (*(int *)&param_1->field_0x30 != 3) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->field_0x28,0,3,0x10);
    *(undefined4 *)&param_1->field_0x30 = 3;
  }
  puVar1 = *(undefined8 **)&param_1->field_0x28;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTSTickerObjectBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e9fa60e3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1415c0f90

void __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FFileCache *pFVar1;
  FFileCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FFileCache,FFileCache_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 1415c0fd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FTSTickerObjectBase *pFVar2;
  FTSTickerObjectBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FTSTickerObjectBase,FTSTickerObjectBase_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 1415c1060

bool __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FFileCache *pFVar1;
  FFileCache *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FFileCache,FFileCache_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 1415c10a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FTSTickerObjectBase *pFVar1;
  FTSTickerObjectBase *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FTSTickerObjectBase,FTSTickerObjectBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1415c5080

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1415c5090

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1415c7a10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1415c7a20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1415c8340

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1415c8350

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1415c8390

bool __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1415c83a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1415c9b60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 1415c9b70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141606280

FName __thiscall
TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FFileCache,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141606290

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTSTickerObjectBase,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14160a700

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14160a710

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14160a720

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 14160a730

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 14160a740

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14160a750

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 14160a760

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_746e2dda *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14160a810

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_746e2dda *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14160a8a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_746e2dda *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 14160a8f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  undefined1 uVar1;
  FCPUTimeDump *pFVar2;
  FCPUTimeDump *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FCPUTimeDump,FCPUTimeDump_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14160a940

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  FCPUTimeDump *pFVar1;
  FCPUTimeDump *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCPUTimeDump,FCPUTimeDump_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14160a9c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14160a9d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14160a9e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 14160a9f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 14160aa00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14160aa10

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14160aa20

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b48d2b25 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14160aad0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b48d2b25 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14160ab60

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFCPUTimeDump____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b48d2b25 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 14160abb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FCPUTimeDump *pFVar1;
  FCPUTimeDump *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCPUTimeDump,FCPUTimeDump_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 14160ac00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCPUTimeDump,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FCPUTimeDump *pFVar1;
  FCPUTimeDump *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FCPUTimeDump,FCPUTimeDump_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// CreateCopy @ 141632260

void __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGenericProcessSentinel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6dbf194 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416322f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGenericProcessSentinel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6dbf194 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 141632340

void __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFGenericProcessSentinel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b6dbf194 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141638f80

void __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FGenericProcessSentinel *pFVar1;
  FGenericProcessSentinel *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGenericProcessSentinel,FGenericProcessSentinel_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 1416398e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FGenericProcessSentinel *pFVar1;
  FGenericProcessSentinel *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FGenericProcessSentinel,FGenericProcessSentinel_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14163ec70

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 141643ee0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1416472d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416479b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14164a320

bool __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141665bd0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FGenericProcessSentinel,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14168d1d0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14168d260

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14168d2c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14168d370

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14168d400

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14168d460

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLLMCsvWriter_LLMPrivate_UE____A6AXXZUFDefaultTSDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_6a4f051c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1416923a0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
          *this)

{
  FLLMCsvWriter *pFVar1;
  FLLMCsvWriter *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::LLMPrivate::FLLMCsvWriter,UE::LLMPrivate::FLLMCsvWriter_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,(char)this->_padding_);
  return;
}

// Execute @ 1416923e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::Execute(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
          *this)

{
  FLLMCsvWriter *pFVar1;
  FLLMCsvWriter *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::LLMPrivate::FLLMCsvWriter,UE::LLMPrivate::FLLMCsvWriter_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,(char)this->_padding_);
  return;
}

// ExecuteIfSafe @ 141692450

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  FLLMCsvWriter *pFVar1;
  FLLMCsvWriter *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::LLMPrivate::FLLMCsvWriter,UE::LLMPrivate::FLLMCsvWriter_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,(char)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 141692490

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
                *this)

{
  FLLMCsvWriter *pFVar1;
  FLLMCsvWriter *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::LLMPrivate::FLLMCsvWriter,UE::LLMPrivate::FLLMCsvWriter_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,(char)this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141699280

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 141699290

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 141699ab0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141699ac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1416a1d30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1416a1d40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416a21a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1416a21b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1416b0cb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1416b0cc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1416c33c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1416c33d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::LLMPrivate::FLLMCsvWriter,void___cdecl(void),FDefaultTSDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1416e7670

void __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFThreadManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2dff1dc5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416e7700

void __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFThreadManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2dff1dc5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1416e7750

void __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFThreadManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2dff1dc5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1416ed1b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FThreadManager *pFVar1;
  FThreadManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FThreadManager,FThreadManager_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 1416ed1f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FThreadManager *pFVar1;
  FThreadManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FThreadManager,FThreadManager_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1416f2890

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1416f97c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1416fc7a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416fd090

bool __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 141702a20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1417179c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FThreadManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14174e920

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_551e2e4d *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14174e9b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_551e2e4d *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14174ea00

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_551e2e4d *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14174eab0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d9c2f261 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14174eb40

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_d9c2f261 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14174eb90

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTextLocalizationManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_d9c2f261 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141754a10

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
          *this,IPakFile *param_1)

{
  FTextLocalizationManager *pFVar1;
  FTextLocalizationManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FTextLocalizationManager,FTextLocalizationManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 141754a60

void __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FTextLocalizationManager *pFVar1;
  FTextLocalizationManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FTextLocalizationManager,FTextLocalizationManager_*_&>(local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 141754aa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *this,IPakFile *param_1)

{
  FTextLocalizationManager *pFVar1;
  FTextLocalizationManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FTextLocalizationManager,FTextLocalizationManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 141754af0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FTextLocalizationManager *pFVar1;
  FTextLocalizationManager *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FTextLocalizationManager,FTextLocalizationManager_*_&>(local_res8)
  ;
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14175bac0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14175bad0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1417606f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141760700

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 141762210

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141762220

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141762b30

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141762b40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 141767070

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141767080

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141780270

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141780280

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1417c0210

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherImpl____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_66b5d7c5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417c02a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherImpl____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_66b5d7c5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1417c02f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoDispatcherImpl____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_66b5d7c5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1417c03a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoRequestStats____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23f47640 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417c0430

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoRequestStats____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23f47640 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1417c0480

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIoRequestStats____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_23f47640 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1417cbb30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FIoDispatcherImpl *pFVar1;
  FIoDispatcherImpl *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIoDispatcherImpl,FIoDispatcherImpl_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 1417cbb70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  undefined1 uVar1;
  FIoRequestStats *pFVar2;
  FIoRequestStats *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FIoRequestStats,FIoRequestStats_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 1417cbc90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FIoDispatcherImpl *pFVar1;
  FIoDispatcherImpl *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIoDispatcherImpl,FIoDispatcherImpl_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 1417cbcd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  FIoRequestStats *pFVar1;
  FIoRequestStats *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIoRequestStats,FIoRequestStats_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1417d1ba0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1417d1bb0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1417d4d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 1417d4d40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1417d8930

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1417d8940

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1417d99a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1417d99b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1417de670

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 1417de680

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14180a190

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FIoDispatcherImpl,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14180a1a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FIoRequestStats,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141867fa0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCVarIniHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c68dffc8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141868030

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCVarIniHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_c68dffc8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 141868080

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCVarIniHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0I_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_c68dffc8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141868130

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f999411f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418681c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f999411f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 141868210

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W00_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_f999411f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1418682c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_32b267fa *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141868350

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_32b267fa *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1418683a0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFConfigHistoryHelper_ConfigUtilities_UE____A6AXPEB_W0_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_32b267fa *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14186c870

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
          *this,wchar_t *param_1,wchar_t *param_2,uint param_3,bool param_4)

{
  FCVarIniHistoryHelper *pFVar1;
  FCVarIniHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FCVarIniHistoryHelper,UE::ConfigUtilities::FCVarIniHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14186c8e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
          *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FConfigHistoryHelper *pFVar1;
  FConfigHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FConfigHistoryHelper,UE::ConfigUtilities::FConfigHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14186c950

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
          *this,wchar_t *param_1,wchar_t *param_2)

{
  FConfigHistoryHelper *pFVar1;
  FConfigHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FConfigHistoryHelper,UE::ConfigUtilities::FConfigHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14186ca10

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
                *this,wchar_t *param_1,wchar_t *param_2,uint param_3,bool param_4)

{
  FCVarIniHistoryHelper *pFVar1;
  FCVarIniHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FCVarIniHistoryHelper,UE::ConfigUtilities::FCVarIniHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3,param_4);
  return true;
}

// ExecuteIfSafe @ 14186ca90

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FConfigHistoryHelper *pFVar1;
  FConfigHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FConfigHistoryHelper,UE::ConfigUtilities::FConfigHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 14186cb00

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                *this,wchar_t *param_1,wchar_t *param_2)

{
  FConfigHistoryHelper *pFVar1;
  FConfigHistoryHelper *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::ConfigUtilities::FConfigHistoryHelper,UE::ConfigUtilities::FConfigHistoryHelper_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141872b10

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 141872b20

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 141872b30

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 141874720

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141874730

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141874740

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 141877530

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141877540

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141877550

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141878090

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1418780a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 1418780b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14187ae10

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14187ae20

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14187ae30

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1418944b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FCVarIniHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,unsigned_int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418944c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1418944d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::ConfigUtilities::FConfigHistoryHelper,void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1418d40e0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEncryptionKeyManager_UE____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b5398f4c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418d4170

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEncryptionKeyManager_UE____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b5398f4c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1418d41c0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEncryptionKeyManager_UE____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b5398f4c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1418d9d60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
          *this,FGuid *param_1,FAESKey *param_2)

{
  FEncryptionKeyManager *pFVar1;
  FEncryptionKeyManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::FEncryptionKeyManager,UE::FEncryptionKeyManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 1418da0a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                *this,FGuid *param_1,FAESKey *param_2)

{
  FEncryptionKeyManager *pFVar1;
  FEncryptionKeyManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::FEncryptionKeyManager,UE::FEncryptionKeyManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1418dd980

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 1418e02f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1418e1cc0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1418e2380

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1418e3750

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1418fcdc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::FEncryptionKeyManager,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1419e7b30

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpMultiple____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bde167ba *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e7bc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpMultiple____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bde167ba *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1419e7c10

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpMultiple____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_bde167ba *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e7cc0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpSpam____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_29bd0c38 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e7d50

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpSpam____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_29bd0c38 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1419e7da0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDumpSpam____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_29bd0c38 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e7e50

void __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFHUDGroupManager____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e53c1297 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e7ee0

void __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFHUDGroupManager____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e53c1297 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1419e7f30

void __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFHUDGroupManager____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e53c1297 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e7fe0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_97664dd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e8070

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_97664dd7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1419e80d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFLatestGameThreadStatsData____A6AXXZUFDefaultDelegateUserPolicy__PEAUFGameThreadStatsData____6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_97664dd7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e8180

void __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
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
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRawStatsWriteFile____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1419e8210

void __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRawStatsWriteFile____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1419e8260

void __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
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
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFRawStatsWriteFile____A6AXPEBUFStatPacket___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1419e8310

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatGroupGameThreadNotifier____A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2bdb0edb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e83a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatGroupGameThreadNotifier____A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_2bdb0edb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1419e8400

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatGroupGameThreadNotifier____A6AXXZUFDefaultDelegateUserPolicy__VFStatNameAndInfo____6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_2bdb0edb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e84b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatsWriteFile____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1419e8540

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatsWriteFile____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1419e8590

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFStatsWriteFile____A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// Execute @ 1419f69f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
        *this,long64 param_1)

{
  FDumpMultiple *pFVar1;
  FDumpMultiple *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDumpMultiple,FDumpMultiple_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1419f6a40

void __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
          *this,FStatPacket *param_1)

{
  FDumpSpam *pFVar1;
  FDumpSpam *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDumpSpam,FDumpSpam_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1419f6a90

void __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
          *this,long64 param_1)

{
  FHUDGroupManager *pFVar1;
  FHUDGroupManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHUDGroupManager,FHUDGroupManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 1419f6ae0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::Execute(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
          *this)

{
  FLatestGameThreadStatsData *pFVar1;
  FLatestGameThreadStatsData *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLatestGameThreadStatsData,FLatestGameThreadStatsData_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return;
}

// Execute @ 1419f6b20

void __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
          *this,FStatPacket *param_1)

{
  FRawStatsWriteFile *pFVar1;
  FRawStatsWriteFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FRawStatsWriteFile,FRawStatsWriteFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 1419f6b70

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::Execute(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
          *this)

{
  FStatGroupGameThreadNotifier *pFVar1;
  FStatGroupGameThreadNotifier *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FStatGroupGameThreadNotifier,FStatGroupGameThreadNotifier_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return;
}

// Execute @ 1419f6bb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
          *this,long64 param_1)

{
  FStatsWriteFile *pFVar1;
  FStatsWriteFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FStatsWriteFile,FStatsWriteFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// ExecuteIfSafe @ 1419f6c60

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
              *this,long64 param_1)

{
  FDumpMultiple *pFVar1;
  FDumpMultiple *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDumpMultiple,FDumpMultiple_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1419f6cb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                *this,FStatPacket *param_1)

{
  FDumpSpam *pFVar1;
  FDumpSpam *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FDumpSpam,FDumpSpam_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1419f6d00

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                *this,long64 param_1)

{
  FHUDGroupManager *pFVar1;
  FHUDGroupManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FHUDGroupManager,FHUDGroupManager_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1419f6d50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
                *this)

{
  FLatestGameThreadStatsData *pFVar1;
  FLatestGameThreadStatsData *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLatestGameThreadStatsData,FLatestGameThreadStatsData_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return true;
}

// ExecuteIfSafe @ 1419f6d90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                *this,FStatPacket *param_1)

{
  FRawStatsWriteFile *pFVar1;
  FRawStatsWriteFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FRawStatsWriteFile,FRawStatsWriteFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// ExecuteIfSafe @ 1419f6de0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
                *this)

{
  FStatGroupGameThreadNotifier *pFVar1;
  FStatGroupGameThreadNotifier *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FStatGroupGameThreadNotifier,FStatGroupGameThreadNotifier_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,this->_padding_);
  return true;
}

// ExecuteIfSafe @ 1419f6e20

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                *this,long64 param_1)

{
  FStatsWriteFile *pFVar1;
  FStatsWriteFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FStatsWriteFile,FStatsWriteFile_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1419fc7d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc7e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc7f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc800

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc810

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc820

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc830

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 141a012a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a012b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a012c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a012d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a012e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a012f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 141a01300

void * __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 141a046d0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a046e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a046f0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04700

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::GetUObject(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04710

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04720

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::GetUObject(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04730

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141a062e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a062f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a06300

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a06310

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a06320

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a06330

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 141a06340

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 141a07850

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 141a07860

bool __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141a07870

bool __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141a07880

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141a07890

bool __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141a078a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141a078b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141a258a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDumpMultiple,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a258b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FDumpSpam,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a258c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FHUDGroupManager,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a258d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FLatestGameThreadStatsData,void___cdecl(void),FDefaultDelegateUserPolicy,FGameThreadStatsData_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a258e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FRawStatsWriteFile,void___cdecl(FStatPacket_const_*),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a258f0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FStatGroupGameThreadNotifier,void___cdecl(void),FDefaultDelegateUserPolicy,FStatNameAndInfo>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a25900

FName __thiscall
TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FStatsWriteFile,void___cdecl(__int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141a7caf0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTaskPriorityCVar_Tasks_UE____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bc6877a1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141a7cb80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTaskPriorityCVar_Tasks_UE____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_bc6877a1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 141a7cbd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTaskPriorityCVar_Tasks_UE____A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_bc6877a1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141a7e980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          *this,IConsoleVariable *param_1)

{
  FTaskPriorityCVar *pFVar1;
  FTaskPriorityCVar *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Tasks::FTaskPriorityCVar,UE::Tasks::FTaskPriorityCVar_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 141a7e9d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,IConsoleVariable *param_1)

{
  FTaskPriorityCVar *pFVar1;
  FTaskPriorityCVar *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Tasks::FTaskPriorityCVar,UE::Tasks::FTaskPriorityCVar_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141a80860

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 141a80ff0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 141a82a40

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141a82fe0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 141a84c90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141a98290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Tasks::FTaskPriorityCVar,void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a9a310

FName __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 141a9a320

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 141a9a330

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 141a9a340

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 141a9a350

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 141a9a360

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 141a9a370

void __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFCrashReportingThread____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_ad9497c9 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141a9a420

void __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFCrashReportingThread____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ad9497c9 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141a9a4b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFCrashReportingThread____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_ad9497c9 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 141a9a500

void __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FCrashReportingThread *pFVar1;
  FCrashReportingThread *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCrashReportingThread,FCrashReportingThread_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 141a9a540

bool __thiscall
TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FCrashReportingThread,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FCrashReportingThread *pFVar1;
  FCrashReportingThread *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FCrashReportingThread,FCrashReportingThread_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// CreateCopy @ 141bfc250

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`70'::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfc2e0

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`70'::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 141bfc330

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::`70'::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141bfc3e0

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`18'::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141bfc470

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`18'::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 141bfc4c0

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::`18'::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141c00690

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  FDelegateHolder *pFVar1;
  FDelegateHolder *local_res8 [4];
  
  local_res8[0] = *(FDelegateHolder **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder,_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1);
  return;
}

// Execute @ 141c006d0

void __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::Execute(void *this,int param_1)

{
  FDummy *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  FDummy *local_res8 [4];
  
  local_res8[0] = *(FDummy **)((longlong)this + 0x18);
  uVar3 = (ulonglong)(uint)param_1;
  pcVar2 = *(code **)((longlong)this + 0x20);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy,_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy_*_&>
                     (local_res8);
  (*pcVar2)(pFVar1,uVar3 & 0xffffffff);
  return;
}

// ExecuteIfSafe @ 141c00ba0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  FDelegateHolder *pFVar1;
  FDelegateHolder *local_res8 [4];
  
  local_res8[0] = *(FDelegateHolder **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder,_UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody_::__l70::FDelegateHolder_*_&>
                     (local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1);
  return true;
}

// ExecuteIfSafe @ 141c00be0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,int param_1)

{
  FDummy *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  FDummy *local_res8 [4];
  
  local_res8[0] = *(FDummy **)((longlong)this + 0x18);
  uVar3 = (ulonglong)(uint)param_1;
  pcVar2 = *(code **)((longlong)this + 0x20);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy,_UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody_::__l18::FDummy_*_&>
                     (local_res8);
  (*pcVar2)(pFVar1,uVar3 & 0xffffffff);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141c01580

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 141c01590

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 141c01c50

void * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 141c01c60

void * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 141c01f00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141c01f10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141c024f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// HasSameObject @ 141c02500

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 141c031d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 141c031e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141c594c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FUnicastDelegateBasicTest::TestBody'::__l70::FDelegateHolder,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141c594d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,`UE::TSDelegatesTest::FMulticastDelegateBasicTest::TestBody'::__l18::FDummy,void___cdecl(int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

