// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 33

// CreateCopy @ 1472085b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassObserverManager____A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_454431ae *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 147208640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassObserverManager____A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_454431ae *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 147208690

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassObserverManager____A6AXV__TArrayView_QEAVUPackage__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_454431ae *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 147208740

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1472087d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 147208820

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassArchetypeHandle___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 1472088d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 147208960

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 1472089b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFMassProcessingPhaseManager____A6AXAEBUFMassEntityManager___ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// Execute @ 147215e70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
          *this,TArrayView<UPackage_*_const,int> *param_1)

{
  FMassObserverManager *pFVar1;
  FMassObserverManager *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMassObserverManager,FMassObserverManager_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return;
}

// Execute @ 147215ec0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
          *this,FMassArchetypeHandle *param_1)

{
  FMassProcessingPhaseManager *pFVar1;
  FMassProcessingPhaseManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)pFVar1->ProcessingPhases +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1);
  return;
}

// Execute @ 147215f10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
          *this,FMassEntityManager *param_1)

{
  FMassProcessingPhaseManager *pFVar1;
  FMassProcessingPhaseManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)pFVar1->ProcessingPhases +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1);
  return;
}

// ExecuteIfSafe @ 147217310

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                *this,TArrayView<UPackage_*_const,int> *param_1)

{
  FMassObserverManager *pFVar1;
  FMassObserverManager *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMassObserverManager,FMassObserverManager_*_&>
                     (&local_res8);
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (*(code *)this->MethodPtr)(pFVar1,&local_18);
  return true;
}

// ExecuteIfSafe @ 147217370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
                *this,FMassArchetypeHandle *param_1)

{
  FMassProcessingPhaseManager *pFVar1;
  FMassProcessingPhaseManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)pFVar1->ProcessingPhases +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1);
  return true;
}

// ExecuteIfSafe @ 1472173c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
                *this,FMassEntityManager *param_1)

{
  FMassProcessingPhaseManager *pFVar1;
  FMassProcessingPhaseManager *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FMassProcessingPhaseManager,FMassProcessingPhaseManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)pFVar1->ProcessingPhases +
             (longlong)*(int *)&(this->MethodPtr).field_0x8 + -0x20,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14721fc40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14721fc50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14721fc60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 147223830

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 147223840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 147223850

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 147228f70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 147228f80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 147228f90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14722ae50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14722ae60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14722ae70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 147232df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 147232e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 147232e10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 147252410

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMassObserverManager,void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 147252420

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 147252430

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMassProcessingPhaseManager,void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

