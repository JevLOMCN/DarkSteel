// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 44

// CreateCopy @ 14315a2c0

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a360

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a3d0

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__AEBVFString__1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a490

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a530

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a5a0

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__H_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a660

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a700

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a770

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a830

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a8d0

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14315a940

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFRequest_FHttpRetrySystem___00__A6AXV__TSharedPtr_VIHttpRequest___00___K1_ZUFDefaultTSDelegateUserPolicy____V__6B_
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

// Execute @ 14315d330

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,FString *param_2,FString *param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FRequest *pFVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar3 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = pFVar3;
  local_res8 = (FRequest *)0x0;
  if (pFVar3 != (FRequest *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = (FRequest *)0x0;
      local_res8 = (FRequest *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14315d385;
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
    pFVar4 = pFVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_14315d385:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pFVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14315d420

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,int param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FRequest *pFVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar3 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = pFVar3;
  local_res8 = (FRequest *)0x0;
  if (pFVar3 != (FRequest *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = (FRequest *)0x0;
      local_res8 = (FRequest *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14315d465;
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
    pFVar4 = pFVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_14315d465:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pFVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14315d500

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FRequest *pFVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar3 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = pFVar3;
  local_res8 = (FRequest *)0x0;
  if (pFVar3 != (FRequest *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = (FRequest *)0x0;
      local_res8 = (FRequest *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14315d555;
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
    pFVar4 = pFVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_14315d555:
  local_38 = param_2->Object;
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  param_2->Object = (IHttpResponse *)0x0;
  local_30 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pFVar3->_padding_ + (longlong)(int)uStack_10,&local_28,&local_38,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14315d610

void __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,ulong64 param_3)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FRequest *pFVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar3 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = pFVar3;
  local_res8 = (FRequest *)0x0;
  if (pFVar3 != (FRequest *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = (FRequest *)0x0;
      local_res8 = (FRequest *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14315d665;
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
    pFVar4 = pFVar3;
    local_res8 = (this->UserObject).Object;
  }
LAB_14315d665:
  local_18 = *(code **)&this->MethodPtr;
  uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                     (&local_res8);
  (*local_18)((longlong)&pFVar3->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14315de70

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,FString *param_2,FString *param_3)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FRequest *)0x0;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14315deb7;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pFVar4 = pFVar1;
  if (local_res8 == (FRequest *)0x0) {
LAB_14315deb7:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pFVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// ExecuteIfSafe @ 14315df70

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,int param_2)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FRequest *)0x0;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14315dfb1;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pFVar4 = pFVar1;
  if (local_res8 != (FRequest *)0x0) {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pFVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_14315dfb1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 14315e070

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpResponse *local_38;
  TReferenceControllerBase<1> *local_30;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FRequest *)0x0;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14315e0b6;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pFVar4 = pFVar1;
  if (local_res8 == (FRequest *)0x0) {
LAB_14315e0b6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_38 = param_2->Object;
    param_2->Object = (IHttpResponse *)0x0;
    local_30 = (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pFVar4->_padding_ + (longlong)(int)uStack_10,&local_28,&local_38,param_3)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// ExecuteIfSafe @ 14315e1a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,ulong64 param_3)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  bool bVar5;
  FRequest *local_res8;
  IHttpRequest *local_28;
  TReferenceControllerBase<1> *local_20;
  code *local_18;
  undefined8 uStack_10;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FRequest *)0x0;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14315e1e7;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
  }
  pFVar4 = pFVar1;
  if (local_res8 == (FRequest *)0x0) {
LAB_14315e1e7:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    local_18 = *(code **)&this->MethodPtr;
    uStack_10 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_28 = param_1->Object;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<FHttpRetrySystem::FRequest,FHttpRetrySystem::FRequest_*_&>
                       (&local_res8);
    (*local_18)((longlong)&pFVar4->_padding_ + (longlong)(int)uStack_10,&local_28,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// GetBoundProgramCounterForTimerManager @ 143161880

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 143161890

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1431618a0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1431618b0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 143164040

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FRequest *pFVar2;
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

// GetObjectForTimerManager @ 1431640a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FRequest *pFVar2;
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

// GetObjectForTimerManager @ 143164100

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FRequest *pFVar2;
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

// GetObjectForTimerManager @ 143164160

void * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FRequest *pFVar2;
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

// GetUObject @ 143164f20

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164f30

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164f40

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 143164f50

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 143168c60

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  FRequest *pFVar5;
  bool bVar6;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FRequest *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_143168c95;
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
LAB_143168c95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 143168cc0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  FRequest *pFVar5;
  bool bVar6;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FRequest *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_143168cf5;
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
LAB_143168cf5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 143168d20

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  FRequest *pFVar5;
  bool bVar6;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FRequest *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_143168d55;
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
LAB_143168d55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 143168d80

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  FRequest *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FRequest *pFVar4;
  FRequest *pFVar5;
  bool bVar6;
  
  pFVar1 = (FRequest *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FRequest *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FRequest *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_143168db5;
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
LAB_143168db5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14316c9f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FRequest *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14316ca20

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FRequest *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14316ca50

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FRequest *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14316ca80

bool __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FRequest *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 143188ba0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188bb0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188bc0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143188bd0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FHttpRetrySystem::FRequest,1,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

