// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 33

// CreateCopy @ 14a082a80

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a082b00

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a082b50

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a082bf0

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a082c70

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a082cc0

void __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a091000

FRigVMDispatchFactory * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::Execute(void *this,FRigVMRegistryHandle *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FRigVMRegistry_NoLock *pFVar1;
  FRigVMDispatchFactory *pFVar2;
  
  pFVar1 = FRigVMRegistryHandle::operator->(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 400);
                    /* WARNING: Could not recover jumptable at 0x00014a091027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FRigVMDispatchFactory *)
           (*UNRECOVERED_JUMPTABLE)(pFVar1,(longlong)this + 0x18,UNRECOVERED_JUMPTABLE);
  return pFVar2;
}

// Execute @ 14a091030

FRigVMDispatchFactory * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::Execute(void *this,FRigVMRegistryHandle *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FRigVMRegistry_NoLock *pFVar1;
  FRigVMDispatchFactory *pFVar2;
  
  pFVar1 = FRigVMRegistryHandle::operator->(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 400);
                    /* WARNING: Could not recover jumptable at 0x00014a091057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FRigVMDispatchFactory *)
           (*UNRECOVERED_JUMPTABLE)(pFVar1,(longlong)this + 0x18,UNRECOVERED_JUMPTABLE);
  return pFVar2;
}

// ExecuteIfSafe @ 14a0914e0

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FRigVMRegistryHandle *param_1)

{
  FRigVMRegistry_NoLock *pFVar1;
  
  pFVar1 = FRigVMRegistryHandle::operator->(param_1);
  (**(code **)(pFVar1->_padding_ + 400))(pFVar1,(longlong)this + 0x18);
  return true;
}

// ExecuteIfSafe @ 14a091520

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,FRigVMRegistryHandle *param_1)

{
  FRigVMRegistry_NoLock *pFVar1;
  
  pFVar1 = FRigVMRegistryHandle::operator->(param_1);
  (**(code **)(pFVar1->_padding_ + 400))(pFVar1,(longlong)this + 0x18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a094450

ulong64 __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14a094460

ulong64 __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a096080

void * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14a096090

void * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14a09ba20

UObject * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a09ba30

UObject * __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a09d6b0

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14a09d6c0

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a09ea70

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14a09ea80

bool __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a0a7820

FName __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a0a7830

FName __thiscall
TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14a0d3bd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a0d3c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14a0d3ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::`6'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a0d6f60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::Execute(void *this)

{
  `FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14a0d7490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a0e1f90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14a0e89f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14a0f2960

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a0f4b40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14a0f9a80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a112260

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

