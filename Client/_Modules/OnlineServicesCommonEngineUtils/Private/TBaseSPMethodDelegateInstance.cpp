// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 33

// CreateCopy @ 14f005860

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// CreateCopy @ 14f005900

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// CreateCopy @ 14f005970

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_ZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// CreateCopy @ 14f005a30

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14f005ad0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14f005b40

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXPEAEH_K_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14f005c00

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// CreateCopy @ 14f005ca0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// CreateCopy @ 14f005d10

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___Online_UE____6B_
    ;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSessionsLAN_Online_UE___00__A6AXXZUFDefaultDelegateUserPolicy__V__TOnlineId_UFAccount_OnlineIdHandleTags_Online_UE___23___6B_
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

// Execute @ 14f006480

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::Execute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          *this,uchar *param_1,int param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  FSessionsLAN *pFVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pFVar3 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSessionsLAN *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSessionsLAN *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14f0064c1;
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
LAB_14f0064c1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,(int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14f006520

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
          *this,uchar *param_1,int param_2,ulong64 param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  FSessionsLAN *pFVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pFVar3 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSessionsLAN *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSessionsLAN *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14f006562;
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
LAB_14f006562:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14f0065c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::Execute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  FSessionsLAN *pFVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pFVar3 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSessionsLAN *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSessionsLAN *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14f0065f1;
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
LAB_14f0065f1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// ExecuteIfSafe @ 14f006640

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *this,uchar *param_1,int param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f006680;
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
    if (local_res8 != (FSessionsLAN *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1,param_2,(int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14f006680:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14f0066f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,uchar *param_1,int param_2,ulong64 param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f006730;
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
    if (local_res8 != (FSessionsLAN *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1,param_2,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14f006730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14f0067a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSessionsLAN *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSessionsLAN *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0067d0;
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
    if (local_res8 != (FSessionsLAN *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::Online::FSessionsLAN,UE::Online::FSessionsLAN_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14f0067d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14f007ad0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14f007ae0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14f007af0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14f007c30

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionsLAN *pFVar2;
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

// GetObjectForTimerManager @ 14f007c90

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionsLAN *pFVar2;
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

// GetObjectForTimerManager @ 14f007cf0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSessionsLAN *pFVar2;
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

// GetUObject @ 14f007f50

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14f007f60

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14f007f70

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14f007fd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *this,void *param_1)

{
  FSessionsLAN *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSessionsLAN *pFVar4;
  FSessionsLAN *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSessionsLAN *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSessionsLAN *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14f008005;
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
LAB_14f008005:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14f008030

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FSessionsLAN *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSessionsLAN *pFVar4;
  FSessionsLAN *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSessionsLAN *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSessionsLAN *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14f008065;
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
LAB_14f008065:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14f008090

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                *this,void *param_1)

{
  FSessionsLAN *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSessionsLAN *pFVar4;
  FSessionsLAN *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSessionsLAN *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSessionsLAN *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSessionsLAN *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14f0080c5;
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
LAB_14f0080c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14f0085e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSessionsLAN *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14f008610

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSessionsLAN *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14f008640

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSessionsLAN *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14f00a3c0

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f00a3d0

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14f00a3e0

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

