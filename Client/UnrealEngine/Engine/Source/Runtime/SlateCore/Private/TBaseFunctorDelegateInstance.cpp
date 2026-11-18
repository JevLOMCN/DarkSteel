// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 319

// CreateCopy @ 142436950

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424369d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142436a10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14243b870

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14243c6d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14243e640

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14243f2c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14243fb40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1424448e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142445900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142454ae0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateApplicationBase::FSlateApplicationBase'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142483230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::`1'::<lambda_5_>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1424832b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::`1'::<lambda_5_>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142483300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::`1'::<lambda_5_>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142486a50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::Execute(void *this)

{
  FSlateSdfGeneratorImpl::UpdatePoolSize(*(FSlateSdfGeneratorImpl **)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 142486ae0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::ExecuteIfSafe(void *this)

{
  FSlateSdfGeneratorImpl::UpdatePoolSize(*(FSlateSdfGeneratorImpl **)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14248bdd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142492850

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142496e90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142497af0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14249b370

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1424a89a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl'::__l1::<lambda_5_>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1424c57e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1424c57f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1424c5800

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1424c5810

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return 0;
}

// HasSameObject @ 1424c5820

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1424c5890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                  *this)

{
  return true;
}

// CreateCopy @ 1424c58a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// CreateCopy @ 1424c5940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// CreateCopy @ 1424c59c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// Execute @ 1424c5a00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_5>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 1424c5a10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_5>::operator()(&this->Functor,param_1);
  return true;
}

// CreateCopy @ 142579a90

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`28'::<lambda_10>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142579b10

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`28'::<lambda_10>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142579b50

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`28'::<lambda_10>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142579bf0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`34'::<lambda_11>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142579c70

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`34'::<lambda_11>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142579cb0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`34'::<lambda_11>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142579d50

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`35'::<lambda_12>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142579dd0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`35'::<lambda_12>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142579e10

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`35'::<lambda_12>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142579eb0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`36'::<lambda_13>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142579f30

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`36'::<lambda_13>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 142579f70

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`36'::<lambda_13>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a010

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`37'::<lambda_14>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a090

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`37'::<lambda_14>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a0d0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`37'::<lambda_14>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a170

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`18'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a1f0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`18'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a230

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`18'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a2d0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`19'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a350

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`19'::<lambda_4>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a390

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`19'::<lambda_4>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a430

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`20'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a4b0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`20'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a4f0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`20'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a590

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`21'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a610

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`21'::<lambda_6>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a650

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`21'::<lambda_6>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a6f0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`22'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a770

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`22'::<lambda_7>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a7b0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`22'::<lambda_7>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a850

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`23'::<lambda_8>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257a8d0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`23'::<lambda_8>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257a910

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`23'::<lambda_8>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257a9b0

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`27'::<lambda_9>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257aa30

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`27'::<lambda_9>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257aa70

void __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFConstructionCounter_Private_Slate_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`27'::<lambda_9>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257ab10

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_15>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257ab90

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_15>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257abd0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_15>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257ac70

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_16>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257acf0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_16>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257ad30

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_16>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257add0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_17>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257ae50

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_17>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257ae90

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`51'::<lambda_17>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257af30

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257afb0

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
  }
  return;
}

// CreateCopy @ 14257b000

void __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    *(undefined4 *)(puVar6 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b0a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b120

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b160

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b200

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b280

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b2c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b3e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b4c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b540

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b620

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b6a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b6e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b780

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b800

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14257b840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257b8e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257b970

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
  }
  return;
}

// CreateCopy @ 14257b9c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`2'::<lambda_1>_>
               ::_vftable_;
    uVar2 = *(undefined4 *)((longlong)this + 0x1c);
    uVar3 = *(undefined4 *)((longlong)this + 0x20);
    uVar4 = *(undefined4 *)((longlong)this + 0x24);
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    uVar5 = *(undefined8 *)((longlong)this + 0x30);
    puVar7[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar7[6] = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257ba70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`13'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257bb10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`13'::<lambda_2>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  return;
}

// CreateCopy @ 14257bb70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`13'::<lambda_2>_>
               ::_vftable_;
    uVar2 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar2;
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar4[6] = uVar2;
    puVar4[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14257bc20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`35'::<lambda_3>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257bcc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`35'::<lambda_3>_>
               ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)this + 0x20);
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)((longlong)this + 0x30);
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  return;
}

// CreateCopy @ 14257bd20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXU__TObservableArrayChangedArgs_H_Containers_Slate_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::`35'::<lambda_3>_>
               ::_vftable_;
    uVar2 = *(undefined8 *)((longlong)this + 0x20);
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar4[4] = uVar2;
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar4[6] = uVar2;
    puVar4[7] = *(undefined8 *)((longlong)this + 0x38);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14257d240

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d260

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d280

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d2a0

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d2c0

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d2e0

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d300

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d320

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d340

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d360

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d380

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d3a0

FConstructionCounter __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::Execute(void *this)

{
  undefined4 *in_RDX;
  
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  *in_RDX = 1;
  return (FConstructionCounter)(int)in_RDX;
}

// Execute @ 14257d3c0

int __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::Execute(void *this)

{
  return 4;
}

// Execute @ 14257d3d0

int __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::Execute(void *this)

{
  return 5;
}

// Execute @ 14257d3e0

int __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::Execute(void *this)

{
  return 6;
}

// Execute @ 14257d3f0

int __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::Execute(void *this)

{
  **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  return **(int **)((longlong)this + 0x20);
}

// Execute @ 14257d410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::Execute(void *this,SWidget *param_1)

{
  param_1[1].FastPathProxyHandle.WidgetIndex =
       *(FSlateInvalidationWidgetIndex *)&param_1[1]._padding_;
  return;
}

// Execute @ 14257d430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::Execute(void *this,SWidget *param_1)

{
  *(int *)((longlong)&param_1[1]._padding_ + 4) = (int)param_1[1]._padding_;
  *(uint *)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot =
       *(int *)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot +
       param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return;
}

// Execute @ 14257d460

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::Execute(void *this,SWidget *param_1)

{
  param_1[1].FastPathProxyHandle.WidgetSortOrder.Order = (uint)param_1[1]._padding_;
  return;
}

// Execute @ 14257d480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::Execute(void *this,SWidget *param_1)

{
  int *piVar1;
  
  *(undefined4 *)&param_1[1]._padding_ = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  piVar1 = (int *)((longlong)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot
                  + 4);
  *piVar1 = *piVar1 + param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return;
}

// Execute @ 14257d4b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::Execute(void *this,SWidget *param_1)

{
  *(undefined4 *)&param_1[1].field_0x30 = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  return;
}

// Execute @ 14257d4d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::Execute(void *this,SWidget *param_1)

{
  int *piVar1;
  
  *(int *)((longlong)&param_1[1]._padding_ + 4) = (int)param_1[1]._padding_;
  piVar1 = &param_1[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId;
  *piVar1 = *piVar1 + param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return;
}

// Execute @ 14257d500

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::Execute(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return;
}

// Execute @ 14257d530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::Execute(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return;
}

// Execute @ 14257d560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::Execute(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return;
}

// ExecuteIfSafe @ 14257d620

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d630

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d640

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d650

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d660

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d670

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d680

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d690

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d6a0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d6b0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d6c0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d6d0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::ExecuteIfSafe(void *this)

{
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  return true;
}

// ExecuteIfSafe @ 14257d6e0

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14257d6f0

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14257d700

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 14257d710

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  return true;
}

// ExecuteIfSafe @ 14257d720

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  param_1[1].FastPathProxyHandle.WidgetIndex =
       *(FSlateInvalidationWidgetIndex *)&param_1[1]._padding_;
  return true;
}

// ExecuteIfSafe @ 14257d740

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  *(int *)((longlong)&param_1[1]._padding_ + 4) = (int)param_1[1]._padding_;
  *(uint *)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot =
       *(int *)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot +
       param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return true;
}

// ExecuteIfSafe @ 14257d770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  param_1[1].FastPathProxyHandle.WidgetSortOrder.Order = (uint)param_1[1]._padding_;
  return true;
}

// ExecuteIfSafe @ 14257d790

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  int *piVar1;
  
  *(undefined4 *)&param_1[1]._padding_ = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  piVar1 = (int *)((longlong)&param_1[1].FastPathProxyHandle.InvalidationRootHandle.InvalidationRoot
                  + 4);
  *piVar1 = *piVar1 + param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return true;
}

// ExecuteIfSafe @ 14257d7c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  *(undefined4 *)&param_1[1].field_0x30 = *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  return true;
}

// ExecuteIfSafe @ 14257d7e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  int *piVar1;
  
  *(int *)((longlong)&param_1[1]._padding_ + 4) = (int)param_1[1]._padding_;
  piVar1 = &param_1[1].FastPathProxyHandle.InvalidationRootHandle.UniqueId;
  *piVar1 = *piVar1 + param_1->bIsDeclarativeSyntaxConstructionCompleted;
  return true;
}

// ExecuteIfSafe @ 14257d810

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return true;
}

// ExecuteIfSafe @ 14257d840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::ExecuteIfSafe(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return true;
}

// ExecuteIfSafe @ 14257d870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::ExecuteIfSafe(void *this,TObservableArrayChangedArgs<int> *param_1)

{
  TObservableArrayChangedArgs<int> local_28;
  
  local_28.Array.DataPtr = (param_1->Array).DataPtr;
  local_28.Array.ArrayNum = (param_1->Array).ArrayNum;
  local_28.Array._12_4_ = *(undefined4 *)&(param_1->Array).field_0xc;
  local_28.StartIndex = param_1->StartIndex;
  local_28.MoveIndex = param_1->MoveIndex;
  local_28.Action = param_1->Action;
  local_28._25_7_ = *(undefined7 *)&param_1->field_0x19;
  `UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),&local_28);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14257e930

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e940

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e950

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e960

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e970

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e980

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e990

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257e9f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea00

ulong64 __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea10

ulong64 __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea20

ulong64 __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257ea90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257eaa0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14257eab0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142582030

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582040

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582050

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582060

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582070

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582080

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582090

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820a0

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820b0

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820c0

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820d0

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820e0

void * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425820f0

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582100

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582110

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582120

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582130

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582140

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582160

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582170

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142582190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425821a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1425821b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142589e50

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589e60

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589e70

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589e80

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589e90

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589ea0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589eb0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589ec0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589ed0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589ee0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589ef0

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f00

UObject * __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f10

UObject * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f20

UObject * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f30

UObject * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f40

UObject * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589f90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589fa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589fb0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589fc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142589fd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14258a520

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a530

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a540

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a550

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a560

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a570

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a580

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a590

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5a0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5b0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5c0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5d0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5e0

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a5f0

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a600

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a610

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a620

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a630

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a640

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a650

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a670

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a690

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14258a6a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14258bd90

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bda0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bdb0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bdc0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bdd0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bde0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bdf0

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be00

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be10

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be20

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be30

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be40

bool __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be50

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be60

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be70

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be80

bool __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258be90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bea0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258beb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bec0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bed0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bee0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bef0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bf00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14258bf10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1425a8fc0

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l28::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a8fd0

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l34::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a8fe0

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l35::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a8ff0

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l36::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9000

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l37::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9010

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l18::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9020

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l19::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9030

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l20::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9040

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l21::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9050

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l22::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9060

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l23::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9070

FName __thiscall
TBaseFunctorDelegateInstance<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l27::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9080

FName __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9090

FName __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_16>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90a0

FName __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l51::<lambda_17>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90b0

FName __thiscall
TBaseFunctorDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,`FSlateAttributeTest::RunTest'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90e0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a90f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9100

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationChild::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9110

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`UE::Slate::Private::SAttributeLeftWidget_OnInvalidationParent::PrivateRegisterAttributes'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9120

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9130

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l13::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1425a9140

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy,`UE::Test::FObservableArrayTest::RunTest'::__l35::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1425d9030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1425d90a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1425d90e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1425db060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::Execute(void *this,SWidget *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_&,SWidget_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_3> *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 1425db7b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::ExecuteIfSafe(void *this,SWidget *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_FSlateAttributeDescriptor::OverrideOnValueChanged_::__l20::<lambda_3>_&,SWidget_&>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_3> *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1425de2f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1425e1e80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1425e42c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1425e62e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1425e9a00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1426022d0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`FSlateAttributeDescriptor::OverrideOnValueChanged'::__l20::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

