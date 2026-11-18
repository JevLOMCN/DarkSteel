// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 22

// CreateCopy @ 14cfd3bb0

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3c50

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3cc0

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cfd3d80

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14cfd3e40

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar4[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar4[6] = *(undefined8 *)&this->MethodPtr;
    puVar4[7] = uVar3;
  }
  return;
}

// CreateCopy @ 14cfd3ec0

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar8[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar8[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar8[3] = this->_padding_;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFAppleARKitSystem___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_UFAppleARKitFrame___00____6B_
    ;
    puVar8[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar8[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar6 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar8 + 0x34) = uVar4;
    *(undefined4 *)(puVar8 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar6;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14cfd5160

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
        *this,int param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FAppleARKitSystem *pFVar3;
  FAppleARKitSystem *pFVar4;
  bool bVar5;
  FAppleARKitSystem *local_res8;
  
  pFVar3 = (FAppleARKitSystem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FAppleARKitSystem *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FAppleARKitSystem *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cfd51a1;
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
LAB_14cfd51a1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cfd51f0

void __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
          *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  FAppleARKitSystem *pFVar5;
  FAppleARKitSystem *pFVar6;
  bool bVar7;
  FAppleARKitSystem *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pFVar5 = (FAppleARKitSystem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FAppleARKitSystem *)0x0;
  pFVar6 = pFVar5;
  if (pFVar5 != (FAppleARKitSystem *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar5->_padding_;
    do {
      pFVar6 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cfd5221;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar5->_padding_;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pFVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    pFVar6 = pFVar5;
  }
LAB_14cfd5221:
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  pFVar5 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                     (&local_res8);
  pcVar2 = local_18;
  iVar4 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)((longlong)&pFVar5->_padding_ + (longlong)iVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return;
}

// ExecuteIfSafe @ 14cfd57d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
              *this,int param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FAppleARKitSystem *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FAppleARKitSystem *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cfd5804;
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
    if (local_res8 != (FAppleARKitSystem *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cfd5804:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cfd5870

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
                *this)

{
  atomic<int> aVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  FAppleARKitSystem *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FAppleARKitSystem *local_res8;
  code *local_18;
  longlong lStack_10;
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cfd58a0;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar7);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FAppleARKitSystem *)0x0) {
      local_18 = *(code **)&this->MethodPtr;
      lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
      pFVar5 = UE::Core::Private::DereferenceIfNecessary<FAppleARKitSystem,FAppleARKitSystem_*_&>
                         (&local_res8);
      pcVar2 = local_18;
      iVar4 = (int)lStack_10;
      local_18 = (code *)this->_padding_;
      lStack_10 = this->_padding_;
      if (lStack_10 != 0) {
        LOCK();
        *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)((longlong)&pFVar5->_padding_ + (longlong)iVar4,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14cfd58a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14cfd5ab0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cfd5ac0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14cfd6ee0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FAppleARKitSystem *pFVar2;
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

// GetObjectForTimerManager @ 14cfd6f40

void * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FAppleARKitSystem *pFVar2;
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

// GetUObject @ 14cfd8bc0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cfd8bd0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cfd9280

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  FAppleARKitSystem *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FAppleARKitSystem *pFVar4;
  FAppleARKitSystem *pFVar5;
  bool bVar6;
  
  pFVar1 = (FAppleARKitSystem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FAppleARKitSystem *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FAppleARKitSystem *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cfd92b5;
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
LAB_14cfd92b5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cfd92e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
                *this,void *param_1)

{
  FAppleARKitSystem *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FAppleARKitSystem *pFVar4;
  FAppleARKitSystem *pFVar5;
  bool bVar6;
  
  pFVar1 = (FAppleARKitSystem *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FAppleARKitSystem *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FAppleARKitSystem *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cfd9315;
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
LAB_14cfd9315:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14cfd9db0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FAppleARKitSystem *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cfd9de0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FAppleARKitSystem *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14cfdf540

FName __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cfdf550

FName __thiscall
TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FAppleARKitSystem,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FAppleARKitFrame,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

