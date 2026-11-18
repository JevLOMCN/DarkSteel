// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 143

// TryGetBoundFunctionName @ 14d77b700

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14d77b710

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14d77b720

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d77b730

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14d77b740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d77b750

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14d77b760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d77b800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d77b8c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14d77b940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
          *this)

{
  MediaIOCorePlayerDetail::bLogTimecode = true;
  return;
}

// ExecuteIfSafe @ 14d77b950

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_28>_>
                *this)

{
  MediaIOCorePlayerDetail::bLogTimecode = true;
  return true;
}

// TryGetBoundFunctionName @ 14d77b990

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14d77b9a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14d77b9b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d77b9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14d77b9d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d77b9e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14d77b9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d77ba90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d77bb10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14d77bb50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
          *this)

{
  MediaIOCorePlayerDetail::bLogTimecode = false;
  return;
}

// ExecuteIfSafe @ 14d77bb60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,MediaIOCorePlayerDetail::<lambda_29>_>
                *this)

{
  MediaIOCorePlayerDetail::bLogTimecode = false;
  return true;
}

// TryGetBoundFunctionName @ 14d77c3b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14d77c3c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::GetUObject
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14d77c3d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d77c3e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14d77c440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d77c450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
                *this)

{
  return true;
}

// CreateCopy @ 14d77c460

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d77c500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d77c580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::CreateCopy
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14d77c5c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::Execute
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  bSimulateError = true;
  return;
}

// ExecuteIfSafe @ 14d77c5d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>::
ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_24>_>
              *this)

{
  bSimulateError = true;
  return true;
}

// CreateCopy @ 14d79f070

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f0f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f130

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f1d0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f250

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f290

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f330

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f3b0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f3f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f490

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f510

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f550

void __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f5f0

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f670

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f6b0

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`5'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f750

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`7'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f7d0

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`7'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79f810

void __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TVariant_V__TRefCountPtr_UIPooledRenderTarget____V__TRefCountPtr_VFRDGPooledBuffer______AEBUFInitializePassOutputArgs_MediaCapture_UE__I_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`7'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79f8b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::`2'::<lambda_1>_>
               ::_vftable_;
    FOpenColorIORenderPassResources::FOpenColorIORenderPassResources
              ((FOpenColorIORenderPassResources *)(puVar1 + 3),
               (FOpenColorIORenderPassResources *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79f940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::`2'::<lambda_1>_>
               ::_vftable_;
    FOpenColorIORenderPassResources::FOpenColorIORenderPassResources
              ((FOpenColorIORenderPassResources *)(puVar1 + 3),
               (FOpenColorIORenderPassResources *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 14d79f9a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::`2'::<lambda_1>_>
               ::_vftable_;
    FOpenColorIORenderPassResources::FOpenColorIORenderPassResources
              ((FOpenColorIORenderPassResources *)(puVar3 + 3),
               (FOpenColorIORenderPassResources *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79fa40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79fac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79fb00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79fba0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`10'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79fc20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`10'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79fc60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`10'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d79fd00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`12'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d79fd80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`12'::<lambda_4>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d79fdc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFCaptureFrameArgs_MediaCaptureData_UE__V__TSharedPtr_VFCaptureFrame_MediaCaptureData_UE___00__PEAVFRDGViewableResource__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::`12'::<lambda_4>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7a4250

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::Execute(void *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d7a42a0

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::Execute(void *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d7a42f0

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::Execute(void *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d7a4340

TSharedPtr<FMediaIOCoreTextureSampleBase,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::Execute(void *this,TSharedPtr<FMediaIOCoreTextureSampleBase,1> *__return_storage_ptr__)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  __return_storage_ptr__->Object = local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d7a4390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::Execute(void *this,
         TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>
         *__return_storage_ptr__,FInitializePassOutputArgs *param_1,uint param_2)

{
  void *local_res8;
  
  local_res8 = this;
  AllocatePooledTexture
            ((FRDGTextureDesc *)&local_res8,
             (wchar_t *)&param_1->MediaCapture->DesiredOutputTextureDescription);
  __return_storage_ptr__->_padding_ = (longlong)local_res8;
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// Execute @ 14d7a43e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::Execute(void *this,
         TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>
         *__return_storage_ptr__,FInitializePassOutputArgs *param_1,uint param_2)

{
  void *local_res8 [4];
  
  local_res8[0] = this;
  AllocatePooledBuffer
            ((FRDGBufferDesc *)local_res8,
             (wchar_t *)&param_1->MediaCapture->DesiredOutputBufferDescription,0xe8);
  __return_storage_ptr__->_padding_ = (longlong)local_res8[0];
  __return_storage_ptr__->TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// Execute @ 14d7a4430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::Execute(void *this,FCaptureFrameArgs *param_1,
         TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
         FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d7a4460

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::Execute(void *this,FCaptureFrameArgs *param_1,
         TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
         FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d7a4490

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::Execute(void *this,FCaptureFrameArgs *param_1,
         TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
         FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d7a44c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::Execute(void *this,FCaptureFrameArgs *param_1,
         TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGViewableResource *param_3,
         FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14d7a6370

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a63a0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a63d0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a6400

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TSharedRef<FMediaIOCoreTextureSampleBase,1> local_18;
  
  MakeShared<FMediaIOCoreTextureSampleBase,1>(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a6430

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,FInitializePassOutputArgs *param_1,uint param_2)

{
  longlong *local_18 [3];
  
  AllocatePooledTexture
            ((FRDGTextureDesc *)local_18,
             (wchar_t *)&param_1->MediaCapture->DesiredOutputTextureDescription);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x38))();
  }
  return true;
}

// ExecuteIfSafe @ 14d7a6470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::ExecuteIfSafe(void *this,FInitializePassOutputArgs *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *local_18 [3];
  
  AllocatePooledBuffer
            ((FRDGBufferDesc *)local_18,
             (wchar_t *)&param_1->MediaCapture->DesiredOutputBufferDescription,0xe8);
  if (local_18[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_18[0] + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_18[0])(local_18[0],1);
    }
  }
  return true;
}

// ExecuteIfSafe @ 14d7a64d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FCaptureFrameArgs *param_1,
               TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,
               FRDGViewableResource *param_3,FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a6510

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FCaptureFrameArgs *param_1,
               TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,
               FRDGViewableResource *param_3,FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a6550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::ExecuteIfSafe(void *this,FCaptureFrameArgs *param_1,
               TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,
               FRDGViewableResource *param_3,FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 14d7a6590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::ExecuteIfSafe(void *this,FCaptureFrameArgs *param_1,
               TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,
               FRDGViewableResource *param_3,FRDGViewableResource *param_4)

{
  `UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>::operator()
            ((void *)((longlong)this + 0x18),param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9230

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9240

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9250

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9260

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9270

ulong64 __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9280

ulong64 __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a9290

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a92a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a92b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d7a92c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d7ac350

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac360

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac370

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac380

void * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac390

void * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac3a0

void * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac3b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac3c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac3d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d7ac3e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d7aea20

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea30

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea40

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea50

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea60

UObject * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea70

UObject * __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aea90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aeaa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d7aeab0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d7aedf0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee00

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee10

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee20

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee30

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee40

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d7aee80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d7b17f0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1800

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1810

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1820

bool __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1830

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1840

bool __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1860

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d7b1880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d7c1aa0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1ab0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1ac0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1ad0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1ae0

FName __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1af0

FName __thiscall
TBaseFunctorDelegateInstance<TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>___cdecl(UE::MediaCapture::FInitializePassOutputArgs_const_&,unsigned_int),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l7::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateColorConversionPass'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateResamplePass'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l10::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7c1b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::MediaCaptureData::FCaptureFrameArgs_const_&,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource_*,FRDGViewableResource_*),FDefaultDelegateUserPolicy,`UE::MediaCapture::FRenderPass::CreateFormatConversionPass'::__l12::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

