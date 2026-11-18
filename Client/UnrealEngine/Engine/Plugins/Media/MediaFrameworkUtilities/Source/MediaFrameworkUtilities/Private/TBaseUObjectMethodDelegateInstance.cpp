// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 73

// TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs> @ 14d7d0100

TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this,TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__HUFCloseOutputArgs_UMediaProfilePlaybackManager____6B_
  ;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy__HUFCloseOutputArgs_1___6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 14d7d53e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAMediaBundleActorBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c28d591 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5470

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAMediaBundleActorBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c28d591 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d54c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAMediaBundleActorBase____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c28d591 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7d5570

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaBundle____A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b9a200dd *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5600

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaBundle____A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b9a200dd *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d5650

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaBundle____A6AXPEAVUMediaProfile__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b9a200dd *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7d5700

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5790

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d57e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7d5890

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5900

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14d7d5940

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
  *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7d59d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a1498537 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5a60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a1498537 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d5ac0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFDefaultDelegateUserPolicy__PEAVUMediaCapture____6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a1498537 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d7d5b70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d7d5c00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d7d5c50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMediaProfilePlaybackManager____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d7091d8a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d7d6950

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  AMediaBundleActorBase *pAVar1;
  AMediaBundleActorBase *local_res8;
  
  local_res8 = (AMediaBundleActorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AMediaBundleActorBase,AMediaBundleActorBase_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1);
  return;
}

// Execute @ 14d7d69a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
          *this,UMediaProfile *param_1,UMediaProfile *param_2)

{
  UMediaBundle *pUVar1;
  UMediaBundle *local_res8;
  
  local_res8 = (UMediaBundle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMediaBundle,UMediaBundle_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14d7d6a00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMediaProfilePlaybackManager *pUVar1;
  UMediaProfilePlaybackManager *local_res8 [4];
  
  local_res8[0] = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14d7d6a40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
          *this)

{
  pmf_3533c1bf pVar1;
  UMediaProfilePlaybackManager *pUVar2;
  UMediaProfilePlaybackManager *local_res8;
  undefined1 local_28 [8];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  local_res8 = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                     (&local_res8);
  local_28[0] = (undefined1)this->_padding_;
  pVar1 = this->MethodPtr;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*(code *)pVar1)(pUVar2,(int)this->_padding_,local_28);
  return;
}

// Execute @ 14d7d6ab0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
          *this)

{
  UMediaProfilePlaybackManager *pUVar1;
  UMediaProfilePlaybackManager *local_res8 [4];
  
  local_res8[0] = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1,this->_padding_);
  return;
}

// Execute @ 14d7d6af0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  UMediaProfilePlaybackManager *pUVar1;
  UMediaProfilePlaybackManager *local_res8 [4];
  
  local_res8[0] = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 14d7d6b70

/* WARNING: Removing unreachable block (ram,0x00014d7d6bdf) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AMediaBundleActorBase *pAVar3;
  AMediaBundleActorBase *pAVar4;
  UObject *pUVar5;
  AMediaBundleActorBase *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AMediaBundleActorBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AMediaBundleActorBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AMediaBundleActorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AMediaBundleActorBase *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AMediaBundleActorBase,AMediaBundleActorBase_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AMediaBundleActorBase *)0x0;
}

// ExecuteIfSafe @ 14d7d6c50

/* WARNING: Removing unreachable block (ram,0x00014d7d6cc6) */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
                *this,UMediaProfile *param_1,UMediaProfile *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaBundle *pUVar3;
  UMediaBundle *pUVar4;
  UObject *pUVar5;
  UMediaBundle *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaBundle *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaBundle *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMediaBundle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaBundle *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMediaBundle,UMediaBundle_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaBundle *)0x0;
}

// ExecuteIfSafe @ 14d7d6d40

/* WARNING: Removing unreachable block (ram,0x00014d7d6da6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaProfilePlaybackManager *pUVar3;
  UMediaProfilePlaybackManager *pUVar4;
  UObject *pUVar5;
  UMediaProfilePlaybackManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaProfilePlaybackManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaProfilePlaybackManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaProfilePlaybackManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaProfilePlaybackManager *)0x0;
}

// ExecuteIfSafe @ 14d7d6e10

/* WARNING: Removing unreachable block (ram,0x00014d7d6e76) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
                *this)

{
  pmf_3533c1bf pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UMediaProfilePlaybackManager *pUVar4;
  UMediaProfilePlaybackManager *pUVar5;
  UObject *pUVar6;
  UMediaProfilePlaybackManager *local_res8;
  undefined8 local_res10;
  undefined1 local_38 [8];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  
  pUVar6 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UMediaProfilePlaybackManager *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UMediaProfilePlaybackManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar4 = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UMediaProfilePlaybackManager *)0x0) {
    local_res8 = pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                       (&local_res8);
    local_38[0] = (undefined1)this->_padding_;
    pVar1 = this->MethodPtr;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_30,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
    (*(code *)pVar1)(pUVar5,(int)this->_padding_,local_38);
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return pUVar4 != (UMediaProfilePlaybackManager *)0x0;
}

// ExecuteIfSafe @ 14d7d6f00

/* WARNING: Removing unreachable block (ram,0x00014d7d6f66) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaProfilePlaybackManager *pUVar3;
  UMediaProfilePlaybackManager *pUVar4;
  UObject *pUVar5;
  UMediaProfilePlaybackManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaProfilePlaybackManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaProfilePlaybackManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaProfilePlaybackManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaProfilePlaybackManager *)0x0;
}

// ExecuteIfSafe @ 14d7d6fd0

/* WARNING: Removing unreachable block (ram,0x00014d7d7036) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMediaProfilePlaybackManager *pUVar3;
  UMediaProfilePlaybackManager *pUVar4;
  UObject *pUVar5;
  UMediaProfilePlaybackManager *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMediaProfilePlaybackManager *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMediaProfilePlaybackManager *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMediaProfilePlaybackManager *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMediaProfilePlaybackManager *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMediaProfilePlaybackManager,UMediaProfilePlaybackManager_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMediaProfilePlaybackManager *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14d7d8280

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7d8290

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7d82a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7d82b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7d82c0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d7d82d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d7d9890

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7d98a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7d98b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7d98c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7d98d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14d7d98e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db580

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db590

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db5a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db5b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db5c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d7db5d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d7db800

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7db830

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7db860

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7db890

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7db8c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14d7db8f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d7dbb10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7dbb30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7dbb50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7dbb70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7dbb90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14d7dbbb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc060

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc080

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc0a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc0c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc0e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14d7dc100

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14d7e1fc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AMediaBundleActorBase,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7e1fd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaBundle,void___cdecl(UMediaProfile_*,UMediaProfile_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7e1fe0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7e1ff0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,int,UMediaProfilePlaybackManager::FCloseOutputArgs>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7e2000

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FDefaultDelegateUserPolicy,UMediaCapture_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d7e2010

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMediaProfilePlaybackManager,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

