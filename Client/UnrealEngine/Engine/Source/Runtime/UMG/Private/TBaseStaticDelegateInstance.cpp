// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 33

// CreateCopy @ 1469b54c0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5540

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1469b5590

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5630

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b56b0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1469b5700

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__VFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469bfe80

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          FString *__return_storage_ptr__,UObject *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 1469bfeb0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          FString *__return_storage_ptr__,FName param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 1469c2a80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          UObject *param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// ExecuteIfSafe @ 1469c2ab0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          FName param_1)

{
  FString local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb10

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb20

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1469d2850

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2860

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1469d9250

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9260

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1469de9c0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1469de9d0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1469e2c70

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 1469e2c80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a2a9a0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a9b0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146a68600

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146a68680

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146a686d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUObject__W4ELatentActionChangeType___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146a70790

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::Execute(void *this,UObject *param_1,ELatentActionChangeType param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146a7079e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146a70b60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UObject *param_1,ELatentActionChangeType param_2)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146a73410

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 146a77470

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146a79690

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146a79f50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146a7c610

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146a99c70

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UObject_*,enum_ELatentActionChangeType),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

