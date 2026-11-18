// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 66

// TryGetBoundFunctionName @ 14cf29330

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf29340

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf29350

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf29360

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf29370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf29380

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf29390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf29430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf294b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf294f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_24>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf29500

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_24>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14cf29590

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf295a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf295b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf295c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf295d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf295e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf295f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf29690

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf29710

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf29750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_25>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf297a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_25>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14cf29970

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf29980

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf29990

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf299a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf299b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf299c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf299d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf29a70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf29af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf29b30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_26>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf29b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_26>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14cf29c90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf29ca0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf29cb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf29cc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf29cd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf29ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf29cf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf29d90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf29e10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf29e90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_27>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf29ea0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_27>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14cf29fb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf29fc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf29fd0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf29fe0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf29ff0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf2a000

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf2a010

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf2a0b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf2a130

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf2a170

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_28>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf2a180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_28>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 14cf2a290

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14cf2a2a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14cf2a2b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14cf2a300

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this)

{
  return 0;
}

// HasSameObject @ 14cf2a310

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14cf2a320

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
                  *this)

{
  return true;
}

// CreateCopy @ 14cf2a330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
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
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14cf2a3d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
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
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cf2a450

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 14cf2a490

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_29>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 14cf2a4e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_29>::operator()(&this->Functor,param_1);
  return true;
}

