// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 22

// CreateCopy @ 148cf0c60

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionInfo___00__A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148cf0d00

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionInfo___00__A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148cf0d70

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionInfo___00__A6AXAEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148cf0e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionManager___00__A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148cf0ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionManager___00__A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 148cf0f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionManager___00__A6AXAEBV__TSharedRef_VISessionInfo___00__AEBV__TSharedRef_VISessionInstanceInfo___00__AEBV__TSharedRef_UFSessionLogMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 148cf1660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ISessionInstanceInfo,1> *param_1,
         TSharedRef<FSessionLogMessage,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionInfo *pFVar3;
  FSessionInfo *pFVar4;
  bool bVar5;
  FSessionInfo *local_res8;
  
  pFVar3 = (FSessionInfo *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSessionInfo *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSessionInfo *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148cf16a1;
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
LAB_148cf16a1:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FSessionInfo,FSessionInfo_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 148cf1700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ISessionInfo,1> *param_1,TSharedRef<ISessionInstanceInfo,1> *param_2,
         TSharedRef<FSessionLogMessage,1> *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionManager *pFVar3;
  FSessionManager *pFVar4;
  bool bVar5;
  FSessionManager *local_res8;
  
  pFVar3 = (FSessionManager *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSessionManager *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSessionManager *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148cf1742;
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
LAB_148cf1742:
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FSessionManager,FSessionManager_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// ExecuteIfSafe @ 148cf1a60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<ISessionInstanceInfo,1> *param_1,
               TSharedRef<FSessionLogMessage,1> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSessionInfo *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148cf1aa0;
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
    if (local_res8 != (FSessionInfo *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FSessionInfo,FSessionInfo_*_&>(&local_res8)
      ;
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148cf1aa0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 148cf1b10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<ISessionInfo,1> *param_1,
               TSharedRef<ISessionInstanceInfo,1> *param_2,TSharedRef<FSessionLogMessage,1> *param_3
               )

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionManager *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSessionManager *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148cf1b50;
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
    if (local_res8 != (FSessionManager *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FSessionManager,FSessionManager_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1,param_2,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148cf1b50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 148cf2090

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 148cf20a0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 148cf27b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionInfo *pFVar2;
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

// GetObjectForTimerManager @ 148cf2810

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionManager *pFVar2;
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

// GetUObject @ 148cf2bd0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 148cf2be0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 148cf4390

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FSessionInfo *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSessionInfo *pFVar4;
  FSessionInfo *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSessionInfo *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSessionInfo *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSessionInfo *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148cf43c5;
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
LAB_148cf43c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 148cf43f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FSessionManager *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSessionManager *pFVar4;
  FSessionManager *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSessionManager *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSessionManager *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSessionManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148cf4425;
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
LAB_148cf4425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 148cf4730

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSessionInfo *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 148cf4760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSessionManager *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 148cfa6d0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 148cfa6e0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

