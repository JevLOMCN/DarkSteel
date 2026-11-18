// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 88

// CreateCopy @ 146f3a9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3aa70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f3aac0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3ab60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_BehaviorTree___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_BehaviorTree__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3abe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_BehaviorTree___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_BehaviorTree__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f3ac30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_BehaviorTree___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_BehaviorTree__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3acd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_EQS___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_EQS__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3ad50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_EQS___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_EQS__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f3ada0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_EQS___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_EQS__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f3ae40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepDataPath_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepDataPath_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f3aec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepDataPath_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepDataPath_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f3af10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepDataPath_FGameplayDebuggerCategory_AI___FGameplayDebuggerCategory__IEAAHPEAUFRepDataPath_FGameplayDebuggerCategory_AI__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146f45fc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 146f45fd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FGameplayDebuggerCategory::
  SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 146f45fe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  undefined8 *puVar1;
  undefined8 local_18 [2];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_18) {
    DestructItems<EQSDebug::FQueryData,int>((FQueryData *)*puVar1,*(int *)(puVar1 + 1));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  DestructItems<EQSDebug::FQueryData,int>((FQueryData *)0x0,0);
  return;
}

// Execute @ 146f46030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  FRepDataPath local_28;
  
  local_28.PathCorridor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PathCorridor.ArrayNum = 0;
  local_28.PathCorridor.ArrayMax = 0;
  local_28.PathPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PathPoints.ArrayNum = 0;
  local_28.PathPoints.ArrayMax = 0;
  FGameplayDebuggerCategory_AI::FRepDataPath::operator=
            (*(FRepDataPath **)((longlong)this + 0x18),&local_28);
  if (local_28.PathPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PathPoints.AllocatorInstance.Data);
  }
  DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
            ((FPoly *)local_28.PathCorridor.AllocatorInstance.Data,local_28.PathCorridor.ArrayNum);
  if ((FPoly *)local_28.PathCorridor.AllocatorInstance.Data != (FPoly *)0x0) {
    FMemory::Free(local_28.PathCorridor.AllocatorInstance.Data);
    return;
  }
  return;
}

// ExecuteIfSafe @ 146f46a10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 146f46a30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FGameplayDebuggerCategory::
  SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 146f46a50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  undefined8 *puVar1;
  undefined8 local_18 [2];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_18) {
    DestructItems<EQSDebug::FQueryData,int>((FQueryData *)*puVar1,*(int *)(puVar1 + 1));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  DestructItems<EQSDebug::FQueryData,int>((FQueryData *)0x0,0);
  return true;
}

// ExecuteIfSafe @ 146f46aa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  FRepDataPath local_28;
  
  local_28.PathCorridor.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PathCorridor.ArrayNum = 0;
  local_28.PathCorridor.ArrayMax = 0;
  local_28.PathPoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PathPoints.ArrayNum = 0;
  local_28.PathPoints.ArrayMax = 0;
  FGameplayDebuggerCategory_AI::FRepDataPath::operator=
            (*(FRepDataPath **)((longlong)this + 0x18),&local_28);
  if (local_28.PathPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PathPoints.AllocatorInstance.Data);
  }
  DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>
            ((FPoly *)local_28.PathCorridor.AllocatorInstance.Data,local_28.PathCorridor.ArrayNum);
  if ((FPoly *)local_28.PathCorridor.AllocatorInstance.Data != (FPoly *)0x0) {
    FMemory::Free(local_28.PathCorridor.AllocatorInstance.Data);
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146f50320

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146f50330

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146f50340

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146f50350

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146f57180

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146f57190

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146f571a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146f571b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146f5a8e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a8f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a900

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146f5a910

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146f5b0a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146f5b0b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146f5b0c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146f5b0d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146f5b9f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146f5ba20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146f7c100

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c110

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_BehaviorTree::FRepData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c120

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_EQS::FRepData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146f7c130

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_AI::FRepDataPath>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 146f9eab0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFNavMeshSceneProxyData___FGameplayDebuggerCategory__IEAAHPEAUFNavMeshSceneProxyData__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9eb30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFNavMeshSceneProxyData___FGameplayDebuggerCategory__IEAAHPEAUFNavMeshSceneProxyData__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f9eb80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFNavMeshSceneProxyData___FGameplayDebuggerCategory__IEAAHPEAUFNavMeshSceneProxyData__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9ec20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9eca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f9ecf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepAgentData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9ed90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9ee10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f9ee60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_NavLocalGrid___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_NavLocalGrid__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146f9ef00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_Navmesh___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_Navmesh__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146f9ef80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_Navmesh___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_Navmesh__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146f9efd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
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
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1____SetDataPackReplication_UFRepData_FGameplayDebuggerCategory_Navmesh___FGameplayDebuggerCategory__IEAAHPEAUFRepData_FGameplayDebuggerCategory_Navmesh__W4EGameplayDebuggerDataPack___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146fa6be0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 146fa6bf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  undefined8 *puVar1;
  undefined8 local_28 [4];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_28) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}

// Execute @ 146fa6c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  undefined8 *puVar1;
  undefined8 local_28 [4];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_28) {
    DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
              ((FGridData *)*puVar1,*(int *)(puVar1 + 1));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  puVar1[2] = 0;
  DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>((FGridData *)0x0,0)
  ;
  return;
}

// Execute @ 146fa6ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::
  __l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 146fa73a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 146fa73c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  undefined8 *puVar1;
  undefined8 local_28 [4];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_28) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 *)(puVar1 + 2) = 0;
  return true;
}

// ExecuteIfSafe @ 146fa7410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  undefined8 *puVar1;
  undefined8 local_28 [4];
  
  puVar1 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar1 != local_28) {
    DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
              ((FGridData *)*puVar1,*(int *)(puVar1 + 1));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  puVar1[2] = 0;
  DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>((FGridData *)0x0,0)
  ;
  return true;
}

// ExecuteIfSafe @ 146fa7470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::
  __l2::<lambda_1>::operator()((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146fac1f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146fac200

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146fac210

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146fac220

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146fb2e50

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146fb2e60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146fb2e70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146fb2e80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146fb5b10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146fb5b40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146fb8050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146fb8060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146fb8070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146fb8080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146fb9d40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9d50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9d60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146fb9d70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146fd9a20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FNavMeshSceneProxyData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepAgentData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_NavLocalGrid::FRepData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146fd9a50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FGameplayDebuggerCategory::SetDataPackReplication<FGameplayDebuggerCategory_Navmesh::FRepData>'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

