// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 176

// CreateCopy @ 146911120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFWidgetAnimationState___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_dd17ee1e *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469111c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFWidgetAnimationState___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_dd17ee1e *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 146911230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFWidgetAnimationState___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_dd17ee1e *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469165d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWidgetAnimationState *pFVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  FWidgetAnimationState *local_res8;
  
  pFVar3 = (FWidgetAnimationState *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FWidgetAnimationState *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FWidgetAnimationState *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146916601;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_146916601:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FWidgetAnimationState,FWidgetAnimationState_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// ExecuteIfSafe @ 146916f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FWidgetAnimationState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FWidgetAnimationState *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146916f40;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FWidgetAnimationState *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FWidgetAnimationState,FWidgetAnimationState_*_&>(&local_res8);
      (*(code *)this->MethodPtr)(pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146916f40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14691dc80

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14691ff40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetAnimationState *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 146925140

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146928ed0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FWidgetAnimationState *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  FWidgetAnimationState *pFVar5;
  bool bVar6;
  
  pFVar1 = (FWidgetAnimationState *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FWidgetAnimationState *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146928f05;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_146928f05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14692cc30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FWidgetAnimationState *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 146949400

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FWidgetAnimationState,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1469b3980

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3a20

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b3a90

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3b50

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3bf0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b3c60

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3d20

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3dc0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b3e30

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b3ef0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b3f90

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4000

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b40c0

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4160

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b41d0

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4290

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4340

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b43b0

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4470

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4510

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4580

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4640

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b46e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4750

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4810

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b48b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4920

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b49e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4a80

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4af0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_PEAVUObject_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4bb0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4c50

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4cc0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AV__TSharedRef_VITableRow___00__VFName__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4d80

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4e20

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b4e90

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6A_AVFReply__AEBUFGeometry__AEBUFKeyEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b4f50

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b4ff0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b5060

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AXVFName__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5120

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b51c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b5230

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SComboBox_VFName_____00__A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b52f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SObjectTableRow_PEAVUObject_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5390

void __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SObjectTableRow_PEAVUObject_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 1469b5400

void __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SObjectTableRow_PEAVUObject_____00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469bf590

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<UObject_*> *pSVar3;
  STableRow<UObject_*> *pSVar4;
  bool bVar5;
  STableRow<UObject_*> *local_res8;
  
  pSVar3 = (STableRow<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf5d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf5d1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bf620

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<UObject_*> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<UObject_*> *pSVar5;
  bool bVar6;
  STableRow<UObject_*> *local_res8;
  
  pSVar3 = (STableRow<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<UObject_*> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf651;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_1469bf651:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 1469bf6a0

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<FName> *pSVar3;
  STableRow<FName> *pSVar4;
  bool bVar5;
  STableRow<FName> *local_res8;
  
  pSVar3 = (STableRow<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<FName> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf6e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf6e1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bf730

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<FName> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<FName> *pSVar5;
  bool bVar6;
  STableRow<FName> *local_res8;
  
  pSVar3 = (STableRow<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<FName> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf761;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_1469bf761:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 1469bf7b0

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf7f1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf7f1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 1469bf840

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf881;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf881:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 1469bf8e0

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,UObject *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  SComboBox<UObject_*> *pSVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pSVar3 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf922;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf922:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bf980

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  SComboBox<UObject_*> *pSVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pSVar3 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bf9c2;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bf9c2:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bfa20

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,UObject *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  SComboBox<UObject_*> *pSVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pSVar3 = *(SComboBox<UObject_*> **)((longlong)this + 0x20);
  local_res8 = (SComboBox<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfa61;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SComboBox<UObject_*> **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_1469bfa61:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 1469bfac0

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  SComboBox<UObject_*> *pSVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pSVar3 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<UObject_*> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<UObject_*> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfb01;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bfb01:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 1469bfb50

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,FName param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  SComboBox<FName> *pSVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pSVar3 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<FName> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfb92;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bfb92:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bfbf0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  SComboBox<FName> *pSVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pSVar3 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<FName> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfc32;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bfc32:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 1469bfc90

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FName param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  SComboBox<FName> *pSVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pSVar3 = *(SComboBox<FName> **)((longlong)this + 0x20);
  local_res8 = (SComboBox<FName> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfcd1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SComboBox<FName> **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_1469bfcd1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 1469bfd30

void __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
        *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  SComboBox<FName> *pSVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pSVar3 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SComboBox<FName> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SComboBox<FName> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1469bfd71;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_1469bfd71:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 1469bfdc0

EActiveTimerReturnType __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  EActiveTimerReturnType EVar4;
  atomic<int> aVar5;
  SObjectTableRow<UObject_*> *pSVar6;
  SObjectTableRow<UObject_*> *pSVar7;
  bool bVar8;
  SObjectTableRow<UObject_*> *local_res8;
  
  pSVar6 = *(SObjectTableRow<UObject_*> **)((longlong)this + 0x20);
  local_res8 = (SObjectTableRow<UObject_*> *)0x0;
  pSVar7 = pSVar6;
  if (pSVar6 != (SObjectTableRow<UObject_*> *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar7 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469bfe07;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    local_res8 = *(SObjectTableRow<UObject_*> **)((longlong)this + 0x18);
    pSVar7 = pSVar6;
  }
LAB_1469bfe07:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar6 = UE::Core::Private::
           DereferenceIfNecessary<SObjectTableRow<UObject_*>,SObjectTableRow<UObject_*>_*_&>
                     (&local_res8);
  EVar4 = (*pcVar1)((longlong)&pSVar6->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return EVar4;
}

// ExecuteIfSafe @ 1469c20b0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<UObject_*> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c20e0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c20e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2140

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2170;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2170:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c21d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<FName> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2200;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2200:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2260

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<FName> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2290;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2290:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c22f0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2320;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res10 = (this->UserObject).Object;
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2390

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c23c0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res10 = (this->UserObject).Object;
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c23c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2430

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,UObject *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2470;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2470:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c24e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2520;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8,param_1,param_2);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2520:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c25a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UObject *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c25e0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SComboBox<UObject_*> **)((longlong)this + 0x18);
    if (local_res8 != (SComboBox<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c25e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2650

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<UObject_*> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<UObject_*> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2685;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<UObject_*> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2685:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c26f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,FName param_1,TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2730;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c27a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,FGeometry *param_1,FKeyEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c27e0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8,param_1,param_2);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c27e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2860

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FName param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c28a0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SComboBox<FName> **)((longlong)this + 0x18);
    if (local_res8 != (SComboBox<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c28a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c2910

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
              *this,bool param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SComboBox<FName> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SComboBox<FName> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c2945;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SComboBox<FName> *)0x0) {
      pSVar3 = UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_1469c2945:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 1469c29b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SObjectTableRow<UObject_*> *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SObjectTableRow<UObject_*> *local_res8 [4];
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469c29f0;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = *(SObjectTableRow<UObject_*> **)((longlong)this + 0x18);
    if (local_res8[0] != (SObjectTableRow<UObject_*> *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SObjectTableRow<UObject_*>,SObjectTableRow<UObject_*>_*_&>
                         (local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_1469c29f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 1469cda20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda80

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cda90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdaa0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 1469cdab0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdac0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdad0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdae0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 1469cdaf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb00

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetObjectForTimerManager @ 1469d22b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<UObject_*> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2310

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<UObject_*> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2370

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<FName> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d23d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<FName> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2430

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2490

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d24f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<UObject_*> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2550

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<UObject_*> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d25b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2610

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<UObject_*> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2670

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<FName> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d26d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<FName> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2730

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d2790

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SComboBox<FName> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1469d27f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 1469d9160

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9170

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9180

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9190

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d91f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9200

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9210

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9220

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9230

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1469d9240

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1469de420

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<UObject_*> *pSVar4;
  STableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de455;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de455:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de480

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<UObject_*> *pSVar4;
  STableRow<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de4b5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de4b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de4e0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<FName> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<FName> *pSVar4;
  STableRow<FName> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<FName> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<FName> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de515;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de515:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de540

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<FName> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<FName> *pSVar4;
  STableRow<FName> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<FName> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<FName> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de575;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de575:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de5a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de5d5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de5d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de600

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de635;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de635:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de660

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SComboBox<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<UObject_*> *pSVar4;
  SComboBox<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de695;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de695:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de6c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SComboBox<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<UObject_*> *pSVar4;
  SComboBox<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de6f5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de6f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de720

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de755;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_1469de755:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 1469de780

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SComboBox<UObject_*> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<UObject_*> *pSVar4;
  SComboBox<UObject_*> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<UObject_*> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<UObject_*> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<UObject_*> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de7b5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de7b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de7e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SComboBox<FName> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<FName> *pSVar4;
  SComboBox<FName> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<FName> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de815;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de815:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de840

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SComboBox<FName> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<FName> *pSVar4;
  SComboBox<FName> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<FName> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de875;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de875:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de8a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de8d5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_1469de8d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 1469de900

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  SComboBox<FName> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SComboBox<FName> *pSVar4;
  SComboBox<FName> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SComboBox<FName> *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SComboBox<FName> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SComboBox<FName> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de935;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_1469de935:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 1469de960

bool __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469de995;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_1469de995:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 1469e29a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e29d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2a00

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<FName> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2a30

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (STableRow<FName> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2a60

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2a90

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2ac0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2af0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2b20

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2b50

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<UObject_*> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2b80

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<FName> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2bb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<FName> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2be0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2c10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SComboBox<FName> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 1469e2c40

bool __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 146a2a8b0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a8c0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<UObject_*>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a8d0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a8e0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<FName>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a8f0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a900

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<UObject_*>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a910

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a920

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a930

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a940

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<UObject_*>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a950

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,TSharedRef<ITableRow,1>___cdecl(FName,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a960

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a970

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(FName,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a980

FName __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SComboBox<FName>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a990

FName __thiscall
TBaseSPMethodDelegateInstance<0,SObjectTableRow<UObject_*>,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

