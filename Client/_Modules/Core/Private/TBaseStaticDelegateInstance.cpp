// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 220

// TryGetBoundFunctionName @ 14146ff00

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14146ff10

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14146ff20

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14146ff30

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14146ff40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14146ff50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14146ff60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141470000

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141470080

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 1414700d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001414700d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 1414700e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// CreateCopy @ 1416323f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141632470

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1416324c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141632560

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416325e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141632630

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1416326d0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141632750

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1416327a0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141638fc0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141638fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)();
  return;
}

// Execute @ 141638fd0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141638fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)();
  return;
}

// Execute @ 141638fe0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          float param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141638fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)(param_1);
  return bVar1;
}

// ExecuteIfSafe @ 141639920

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 141639940

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 141639960

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          float param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14163ec80

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14163ec90

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14163eca0

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141643ef0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643f00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141643f10

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1416472e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1416472f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141647300

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1416479c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1416479d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1416479e0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14164a330

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 14164a340

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 14164a350

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141665be0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665bf0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141665c00

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14166b880

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14166b890

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14166b8a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14166b8b0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14166b8c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14166b8d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 14166b8e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14166b980

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14166ba00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 14166ba50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,FOutputDevice *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014166ba57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 14166ba60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this,FOutputDevice *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// TryGetBoundFunctionName @ 1416c88e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1416c88f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1416c8900

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1416c8910

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 1416c8920

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1416c8930

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 1416c8940

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1416c89e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1416c8a60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 1416c8ab0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
           *this,IConsoleVariable *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416c8ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 1416c8ac0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
              *this,IConsoleVariable *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// CreateCopy @ 1417c0530

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1417c05c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1417c0630

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar3 + 1),(FString *)&this->_padding_);
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar3[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1417cbbc0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
          *this,TSharedRef<IMessageToken,1> *param_1)

{
  _func___cdecl_void_TSharedRef<IMessageToken,1>_ptr_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar2);
  return;
}

// ExecuteIfSafe @ 1417cbd20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
                *this,TSharedRef<IMessageToken,1> *param_1)

{
  _func___cdecl_void_TSharedRef<IMessageToken,1>_ptr_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,pFVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1417d1bc0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1417d4d50

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 1417d8950

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1417d99c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1417de690

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14180a1b0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141868450

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1418684d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141868520

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__AEBV__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_____ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14186c9b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
          *this,FString *param_1,
         TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014186c9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 14186cb60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,FString *param_1,
               TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141872b40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141874750

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141877560

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1418780c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14187ae40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1418944e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1419009e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1419009f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 141900a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 141900a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 141900a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141900a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 141900a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141900ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141900b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 141900bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141900bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 141900bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  (*this->StaticFuncPtr)(param_1,param_2,param_3);
  return true;
}

// CreateCopy @ 141930d90

void __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141930e10

void __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141930e60

void __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVIModuleInterface__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141930f00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141930f80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141930fd0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBUFTestFilterItem_TextFilterTests__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141931070

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419310f0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141931140

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEBUFTestFilterItem_TextFilterTests__AEBVFName__AEBVFTextFilterString__W4ETextFilterComparisonOperation__W4ETextFilterTextComparisonMode___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14193a280

IModuleInterface * __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  IModuleInterface *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014193a280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (*this->StaticFuncPtr)();
  return pIVar1;
}

// Execute @ 14193a290

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,FTestFilterItem *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014193a29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 14193a2b0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::Execute(void *this,FTestFilterItem *param_1,FName *param_2,FTextFilterString *param_3,
         ETextFilterComparisonOperation param_4,ETextFilterTextComparisonMode param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014193a2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14193a310

bool __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 14193a330

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,FTestFilterItem *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14193a350

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FTestFilterItem *param_1,FName *param_2,FTextFilterString *param_3,
               ETextFilterComparisonOperation param_4,ETextFilterTextComparisonMode param_5)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4,param_5);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141945a00

ulong64 __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141945a10

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141945a20

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 141948a30

void * __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141948a40

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141948a50

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14194bf70

UObject * __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14194bf80

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14194bf90

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14194d190

bool __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14194d1a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14194d1b0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141952dd0

bool __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 141952de0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141952df0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141976060

FName __thiscall
TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141976070

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TextFilterTests::FTestFilterItem_const_*,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141976080

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TextFilterTests::FTestFilterItem_const_*,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1419e8640

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e86d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1419e8740

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this,
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar3 + 1),(FString *)&this->_padding_);
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    puVar3[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e8800

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e8880

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1419e88d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1419e8970

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1419e8a00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1419e8a50

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AX_J_ZUFDefaultTSDelegateUserPolicy__M_N__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1419f6c00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  _func___cdecl_void_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(pFVar2);
  return;
}

// Execute @ 1419f6c30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
          long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419f6c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 1419f6c40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419f6c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)
            (param_1,*(float *)&this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  return;
}

// ExecuteIfSafe @ 1419f6e70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  _func___cdecl_void_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(pFVar2);
  return true;
}

// ExecuteIfSafe @ 1419f6ea0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
          long64 param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 1419f6ec0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
              *this,long64 param_1)

{
  (*this->StaticFuncPtr)
            (param_1,*(float *)&this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1419fc840

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc850

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1419fc860

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141a01310

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141a01320

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141a01330

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141a04740

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04750

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141a04760

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141a06350

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 141a06360

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 141a06370

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141a078c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  return true;
}

// IsSafeToExecute @ 141a078d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 141a078e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141a25910

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,FString> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a25920

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141a25930

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(__int64),FDefaultTSDelegateUserPolicy,float,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141aa26f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141aa2770

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141aa27c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141aa2860

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141aa28e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 141aa2930

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141aa62a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141aa62a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 141aa62b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::Execute(void *this,FName param_1,EModuleChangeReason param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141aa62bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_2,*(code **)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 141aa62d0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 141aa62f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,FName param_1,EModuleChangeReason param_2)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141aa7a30

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141aa7a40

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 141aac3f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141aac400

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 141aaeb60

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141aaeb70

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141ab1df0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 141ab1e00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141ab3220

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 141ab3230

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141ac31f0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(unsigned_int),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141ac3200

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141cfb3b0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141cfb430

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141cfb480

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_U__ISmoothie__00___00__V__TSharedRef_UIFruit___00__V__TSharedRef_UIBerry___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141cfb520

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141cfb5a0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141cfb5f0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIBerry___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141cfb690

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141cfb720

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar1 + 1) = (char)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141cfb770

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
CreateCopy(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_UIFruit___00__XZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141cfd570

TSharedRef<ISmoothie<1>,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ISmoothie<1>,1> *__return_storage_ptr__,TSharedRef<IFruit,1> *param_1,
         TSharedRef<IBerry,1> *param_2)

{
  _func___cdecl_TSharedRef<ISmoothie<1>,1>_TSharedRef<IFruit,1>_TSharedRef<IBerry,1> *p_Var1;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_28.Object = param_2->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 141cfd600

TSharedRef<IBerry,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TSharedRef<IBerry,1> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 141cfd630

TSharedRef<IFruit,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
Execute(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
        *this,TSharedRef<IFruit,1> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,SUB81(this->_padding_,0));
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 141cfd660

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<IFruit,1> *param_1,TSharedRef<IBerry,1> *param_2)

{
  _func___cdecl_TSharedRef<ISmoothie<1>,1>_TSharedRef<IFruit,1>_TSharedRef<IBerry,1> *p_Var1;
  TSharedRef<IBerry,1> local_38;
  TSharedRef<IFruit,1> local_28;
  TSharedRef<ISmoothie<1>,1> local_18;
  
  local_38.Object = param_2->Object;
  p_Var1 = this->StaticFuncPtr;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 141cfd6f0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  TSharedRef<IBerry,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 141cfd720

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
              *this)

{
  TSharedRef<IFruit,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18,SUB81(this->_padding_,0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141cfeb60

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141cfeb70

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 141cfeb80

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141d00a10

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141d00a20

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 141d00a30

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141d01ce0

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141d01cf0

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 141d01d00

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
GetUObject(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141d01d10

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141d01d20

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 141d01d30

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
HasSameObject(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141d030d0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 141d030e0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 141d030f0

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141d558b0

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141d558c0

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141d558d0

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

