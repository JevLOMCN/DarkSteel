// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 457

// TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_> @ 14ec51110

TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
* __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this,TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
                 *param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AX_N_ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AX_N_ZUFDefaultDelegateUserPolicy______6B_
  ;
  (this->UserObject).WeakPtr = (param_1->UserObject).WeakPtr;
  this->MethodPtr = param_1->MethodPtr;
  return this;
}

// CreateCopy @ 14ec65e10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeacon____A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec65ea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeacon____A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec65ef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeacon____A6AXPEAVUWorld__PEAVUNetDriver__W4Type_ENetworkFailure__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec65fa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec66090

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar6[1] = this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ec66140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec661d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec66220

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ec662d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66360

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec663b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ec66460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec664f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec66550

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    puVar6[1] = this->_padding_;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ec66600

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    puVar2[1] = this->_padding_;
    ::FString::FString((FString *)(puVar2 + 2),(FString *)&this->_padding_);
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 5) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[6] = *(undefined8 *)&this->MethodPtr;
    puVar2[7] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec666a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    puVar2[1] = this->_padding_;
    ::FString::FString((FString *)(puVar2 + 2),(FString *)&this->_padding_);
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 5) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[6] = *(undefined8 *)&this->MethodPtr;
    puVar2[7] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec66720

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    puVar6[1] = this->_padding_;
    ::FString::FString((FString *)(puVar6 + 2),(FString *)&this->_padding_);
    puVar6[4] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 5) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar2;
    *(undefined4 *)(puVar6 + 7) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec667f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_061f3659 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_061f3659 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec668d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_061f3659 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec66980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c024bae0 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c024bae0 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec66a60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c024bae0 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec66b10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPartyBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66ba0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPartyBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ec66bf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPartyBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ec66ca0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementQueryCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d572e64f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66d30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementQueryCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d572e64f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec66d80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementQueryCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d572e64f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec66e30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementWriteCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6327e8c6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec66ec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementWriteCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6327e8c6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec66f10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAchievementWriteCallbackProxy____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_6327e8c6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec66fc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUConnectionCallbackProxy____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cc5074c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUConnectionCallbackProxy____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cc5074c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec670a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUConnectionCallbackProxy____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cc5074c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67150

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCreateSessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f83ca02e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec671e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCreateSessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f83ca02e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67230

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCreateSessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f83ca02e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec672e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDestroySessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d88dfe96 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDestroySessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d88dfe96 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec673c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDestroySessionCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d88dfe96 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67470

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b445100a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67500

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b445100a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67550

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_b445100a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67600

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndTurnCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e6ae0caa *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67690

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndTurnCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e6ae0caa *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec676e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUEndTurnCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e6ae0caa *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67790

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFindSessionsCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d4b0b08 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67820

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFindSessionsCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d4b0b08 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67870

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUFindSessionsCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3d4b0b08 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67920

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c0c9ee16 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec679b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c0c9ee16 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67a00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c0c9ee16 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67ab0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7ff30075 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67b40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7ff30075 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67b90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCallbackProxy2____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_7ff30075 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67c40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCheckoutCallbackProxy____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_003f7315 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67cd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCheckoutCallbackProxy____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_003f7315 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67d20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseCheckoutCallbackProxy____A6AXAEBUFOnlineError__AEBV__TSharedRef_VFPurchaseReceipt___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_003f7315 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67dd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseQueryCallbackProxy2____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_370a9c6c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec67e60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseQueryCallbackProxy2____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_370a9c6c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec67eb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseQueryCallbackProxy2____A6AX_NAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_370a9c6c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec67f60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    *(pmf_ac9378e5 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68010

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 4) = (this->UserObject).WeakPtr;
    *(pmf_ac9378e5 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
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
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseReceiptsCallbackProxy____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy__V__TWeakPtr___CBVFUniqueNetId___00____6B_
    ;
    *(FWeakObjectPtr *)(puVar4 + 4) = (this->UserObject).WeakPtr;
    *(pmf_ac9378e5 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseRestoreCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_44ab72b6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec681d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseRestoreCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_44ab72b6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68220

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUInAppPurchaseRestoreCallbackProxy2____A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_44ab72b6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec682d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUJoinSessionCallbackProxy____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68360

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUJoinSessionCallbackProxy____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14ec683b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUJoinSessionCallbackProxy____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardFlushCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ec1d2781 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec684f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardFlushCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ec1d2781 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68540

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardFlushCallbackProxy____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_ec1d2781 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec685f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3ab4b919 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68680

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3ab4b919 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec686d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3ab4b919 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68780

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_07bfeefd *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68810

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_07bfeefd *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68860

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULeaderboardQueryCallbackProxy____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_07bfeefd *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULogoutCallbackProxy____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a274189e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec689a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULogoutCallbackProxy____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a274189e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec689f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VULogoutCallbackProxy____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a274189e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68aa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = this->_padding_;
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 2),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 6) = (this->UserObject).WeakPtr;
    *(pmf_d181f7e7 *)(puVar1 + 7) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68b40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = this->_padding_;
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar1 + 2),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 6) = (this->UserObject).WeakPtr;
    *(pmf_d181f7e7 *)(puVar1 + 7) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68bc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = this->_padding_;
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               (puVar3 + 2),
               (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *)
               &this->_padding_);
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__VFName__V__TDelegate___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 6) = (this->UserObject).WeakPtr;
    *(pmf_d181f7e7 *)(puVar3 + 7) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68c90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V1_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = this->_padding_;
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
               (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V2_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 6) = (this->UserObject).WeakPtr;
    *(pmf_81c85a8d *)(puVar1 + 7) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68d30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V1_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = this->_padding_;
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(puVar1 + 2),
               (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar1[5] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V2_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 6) = (this->UserObject).WeakPtr;
    *(pmf_81c85a8d *)(puVar1 + 7) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec68db0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V1_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = this->_padding_;
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)(puVar3 + 2),
               (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineEngineInterfaceImpl____A6AXVFName___N_ZUFDefaultDelegateUserPolicy__V2_V__TDelegate___A6AXVFName___N_ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 6) = (this->UserObject).WeakPtr;
    *(pmf_81c85a8d *)(puVar3 + 7) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68e80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec68ef0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14ec68f30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
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
  this_00 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
       *)0x0) {
    TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec68fc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec69050

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14ec690a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec69150

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_01fb4275 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec691e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_01fb4275 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec69230

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_01fb4275 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ec692e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1ff3e64f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ec69370

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1ff3e64f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ec693c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1ff3e64f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ec6e750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,UNetDriver *param_2,Type param_3,FString *param_4)

{
  AOnlineBeacon *pAVar1;
  AOnlineBeacon *local_res8;
  
  local_res8 = (AOnlineBeacon *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeacon,AOnlineBeacon_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3,param_4);
  return;
}

// Execute @ 14ec6e7d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
          *this,FEncryptionKeyResponse *param_1)

{
  AOnlineBeaconClient *pAVar1;
  AOnlineBeaconClient *local_res8;
  
  local_res8 = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             this->_padding_);
  return;
}

// Execute @ 14ec6e830

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  AOnlineBeaconClient *pAVar1;
  AOnlineBeaconClient *local_res8 [4];
  
  local_res8[0] = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14ec6e870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  AOnlineBeaconClient *pAVar1;
  AOnlineBeaconClient *local_res8 [4];
  
  local_res8[0] = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14ec6e8b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
          *this,FEncryptionKeyResponse *param_1)

{
  AOnlineBeaconHost *pAVar1;
  AOnlineBeaconHost *local_res8;
  
  local_res8 = (AOnlineBeaconHost *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             this->_padding_);
  return;
}

// Execute @ 14ec6e910

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
          *this)

{
  code *pcVar1;
  undefined8 uVar2;
  AOnlineBeaconHost *pAVar3;
  FString *pFVar4;
  AOnlineBeaconHost *local_res8;
  int iStack_20;
  FString local_18;
  
  local_res8 = (AOnlineBeaconHost *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pAVar3 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&>
                     (&local_res8);
  iStack_20 = (int)uVar2;
  pFVar4 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*pcVar1)((longlong)&pAVar3->_padding_ + (longlong)iStack_20,this->_padding_,pFVar4);
  return;
}

// Execute @ 14ec6e990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
          *this,UNetConnection *param_1)

{
  AOnlineBeaconHostObject *pAVar1;
  AOnlineBeaconClient *pAVar2;
  AOnlineBeaconHostObject *local_res8;
  
  local_res8 = (AOnlineBeaconHostObject *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&>(&local_res8);
  pAVar2 = (AOnlineBeaconClient *)(*(code *)this->MethodPtr)(pAVar1,param_1);
  return pAVar2;
}

// Execute @ 14ec6e9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
          *this,AOnlineBeaconClient *param_1,UNetConnection *param_2)

{
  AOnlineBeaconHostObject *pAVar1;
  AOnlineBeaconHostObject *local_res8;
  
  local_res8 = (AOnlineBeaconHostObject *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pAVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6ea40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  APartyBeaconClient *pAVar1;
  APartyBeaconClient *local_res8 [4];
  
  local_res8[0] = (APartyBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::DereferenceIfNecessary<APartyBeaconClient,APartyBeaconClient_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14ec6ea80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
          *this,FUniqueNetId *param_1,bool param_2)

{
  UAchievementQueryCallbackProxy *pUVar1;
  UAchievementQueryCallbackProxy *local_res8;
  
  local_res8 = (UAchievementQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UAchievementQueryCallbackProxy,UAchievementQueryCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6eae0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
          *this,FUniqueNetId *param_1,bool param_2)

{
  UAchievementWriteCallbackProxy *pUVar1;
  UAchievementWriteCallbackProxy *local_res8;
  
  local_res8 = (UAchievementWriteCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UAchievementWriteCallbackProxy,UAchievementWriteCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6eb40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  UConnectionCallbackProxy *pUVar1;
  UConnectionCallbackProxy *local_res8;
  
  local_res8 = (UConnectionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UConnectionCallbackProxy,UConnectionCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3,param_4);
  return;
}

// Execute @ 14ec6ebc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
          *this,FName param_1,bool param_2)

{
  UCreateSessionCallbackProxy *pUVar1;
  UCreateSessionCallbackProxy *local_res8;
  
  local_res8 = (UCreateSessionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UCreateSessionCallbackProxy,UCreateSessionCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6ec20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
          *this,FName param_1,bool param_2)

{
  UDestroySessionCallbackProxy *pUVar1;
  UDestroySessionCallbackProxy *local_res8;
  
  local_res8 = (UDestroySessionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UDestroySessionCallbackProxy,UDestroySessionCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6ec80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
          *this,FString *param_1,bool param_2)

{
  pmf_b445100a pVar1;
  FScriptContainerElement *pFVar2;
  UEndMatchCallbackProxy *pUVar3;
  UEndMatchCallbackProxy *local_res8;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  local_res8 = (UEndMatchCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UEndMatchCallbackProxy,UEndMatchCallbackProxy_*_&>(&local_res8);
  local_18 = (param_1->Data).AllocatorInstance.Data;
  pVar1 = this->MethodPtr;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->Data).ArrayNum;
  local_c = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (*(code *)pVar1)(pUVar3,&local_18,param_2);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Execute @ 14ec6ed10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
          *this,FString *param_1,bool param_2)

{
  pmf_e6ae0caa pVar1;
  FScriptContainerElement *pFVar2;
  UEndTurnCallbackProxy *pUVar3;
  UEndTurnCallbackProxy *local_res8;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  local_res8 = (UEndTurnCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UEndTurnCallbackProxy,UEndTurnCallbackProxy_*_&>(&local_res8);
  local_18 = (param_1->Data).AllocatorInstance.Data;
  pVar1 = this->MethodPtr;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->Data).ArrayNum;
  local_c = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (*(code *)pVar1)(pUVar3,&local_18,param_2);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Execute @ 14ec6eda0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  UFindSessionsCallbackProxy *pUVar1;
  UFindSessionsCallbackProxy *local_res8;
  
  local_res8 = (UFindSessionsCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UFindSessionsCallbackProxy,UFindSessionsCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14ec6edf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *this,FOnlineError *param_1)

{
  UInAppPurchaseCallbackProxy2 *pUVar1;
  UInAppPurchaseCallbackProxy2 *local_res8;
  
  local_res8 = (UInAppPurchaseCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14ec6ee40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
          *this,FOnlineError *param_1,TSharedRef<FPurchaseReceipt,1> *param_2)

{
  UInAppPurchaseCallbackProxy2 *pUVar1;
  UInAppPurchaseCallbackProxy2 *local_res8;
  
  local_res8 = (UInAppPurchaseCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6eea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
          *this,FOnlineError *param_1,TSharedRef<FPurchaseReceipt,1> *param_2)

{
  UInAppPurchaseCheckoutCallbackProxy *pUVar1;
  UInAppPurchaseCheckoutCallbackProxy *local_res8;
  
  local_res8 = (UInAppPurchaseCheckoutCallbackProxy *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseCheckoutCallbackProxy,UInAppPurchaseCheckoutCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6ef00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *this,bool param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  UInAppPurchaseQueryCallbackProxy2 *pUVar1;
  UInAppPurchaseQueryCallbackProxy2 *local_res8;
  
  local_res8 = (UInAppPurchaseQueryCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseQueryCallbackProxy2,UInAppPurchaseQueryCallbackProxy2_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14ec6ef70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
          *this,FOnlineError *param_1)

{
  pmf_ac9378e5 pVar1;
  UInAppPurchaseReceiptsCallbackProxy *pUVar2;
  UInAppPurchaseReceiptsCallbackProxy *local_res8;
  longlong local_18;
  longlong local_10;
  
  local_res8 = (UInAppPurchaseReceiptsCallbackProxy *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseReceiptsCallbackProxy,UInAppPurchaseReceiptsCallbackProxy_*_&>
                     (&local_res8);
  local_10 = this->_padding_;
  local_18 = this->_padding_;
  pVar1 = this->MethodPtr;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  (*(code *)pVar1)(pUVar2,param_1,&local_18);
  return;
}

// Execute @ 14ec6efe0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *this,FOnlineError *param_1)

{
  UInAppPurchaseRestoreCallbackProxy2 *pUVar1;
  UInAppPurchaseRestoreCallbackProxy2 *local_res8;
  
  local_res8 = (UInAppPurchaseRestoreCallbackProxy2 *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UInAppPurchaseRestoreCallbackProxy2,UInAppPurchaseRestoreCallbackProxy2_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14ec6f030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FName param_1,Type param_2)

{
  UJoinSessionCallbackProxy *pUVar1;
  UJoinSessionCallbackProxy *local_res8;
  
  local_res8 = (UJoinSessionCallbackProxy *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UJoinSessionCallbackProxy,UJoinSessionCallbackProxy_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6f090

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
          *this,FName param_1,bool param_2)

{
  ULeaderboardFlushCallbackProxy *pUVar1;
  ULeaderboardFlushCallbackProxy *local_res8;
  
  local_res8 = (ULeaderboardFlushCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULeaderboardFlushCallbackProxy,ULeaderboardFlushCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6f0f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  ULeaderboardQueryCallbackProxy *pUVar1;
  ULeaderboardQueryCallbackProxy *local_res8 [4];
  
  local_res8[0] = (ULeaderboardQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr)
  ;
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14ec6f130

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
          *this,bool param_1)

{
  ULeaderboardQueryCallbackProxy *pUVar1;
  ULeaderboardQueryCallbackProxy *local_res8;
  
  local_res8 = (ULeaderboardQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14ec6f180

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
          *this,int param_1,bool param_2)

{
  ULogoutCallbackProxy *pUVar1;
  ULogoutCallbackProxy *local_res8;
  
  local_res8 = (ULogoutCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<ULogoutCallbackProxy,ULogoutCallbackProxy_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6f1e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
          *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  pmf_d181f7e7 pVar1;
  UOnlineEngineInterfaceImpl *pUVar2;
  TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *pTVar3;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                       *)&this->_padding_);
  (*(code *)pVar1)(pUVar2,param_1,param_2,param_3,param_4,this->_padding_,pTVar3);
  return;
}

// Execute @ 14ec6f290

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
          *this,FName param_1,bool param_2)

{
  pmf_81c85a8d pVar1;
  UOnlineEngineInterfaceImpl *pUVar2;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *pTVar3;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> local_38;
  
  local_res8 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pTVar3 = TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                     (&local_38,
                      (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
                      &this->_padding_);
  (*(code *)pVar1)(pUVar2,param_1,param_2,this->_padding_,pTVar3);
  return;
}

// Execute @ 14ec6f310

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
          *this,bool param_1)

{
  pmf_44c1e794 pVar1;
  UOnlineEngineInterfaceImpl *pUVar2;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> local_28;
  
  local_res8 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)&this->_padding_)
  ;
  (*(code *)pVar1)(pUVar2,param_1,&local_28);
  return;
}

// Execute @ 14ec6f3a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FName param_1,Type param_2)

{
  UOnlineSessionClient *pUVar1;
  UOnlineSessionClient *local_res8;
  
  local_res8 = (UOnlineSessionClient *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6f400

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
          *this,FName param_1,bool param_2)

{
  UOnlineSessionClient *pUVar1;
  UOnlineSessionClient *local_res8;
  
  local_res8 = (UOnlineSessionClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14ec6f460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
          *this,bool param_1,int param_2,TSharedPtr<FUniqueNetId_const_,1> *param_3,
         FOnlineSessionSearchResult *param_4)

{
  pmf_1ff3e64f pVar1;
  UOnlineSessionClient *pUVar2;
  UOnlineSessionClient *local_res8;
  FUniqueNetId *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = (UOnlineSessionClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>
                     (&local_res8);
  local_18 = param_3->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_3->SharedReferenceCount).ReferenceController;
  (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_3->Object = (FUniqueNetId *)0x0;
  (*(code *)pVar1)(pUVar2,param_1,param_2,&local_18,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14ec6f9b0

/* WARNING: Removing unreachable block (ram,0x00014ec6fa2b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,UNetDriver *param_2,Type param_3,FString *param_4)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeacon *pAVar3;
  AOnlineBeacon *pAVar4;
  UObject *pUVar5;
  AOnlineBeacon *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeacon *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeacon *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AOnlineBeacon *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pAVar3 != (AOnlineBeacon *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeacon,AOnlineBeacon_*_&>(&local_res8)
    ;
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2,param_3,param_4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeacon *)0x0;
}

// ExecuteIfSafe @ 14ec6fac0

/* WARNING: Removing unreachable block (ram,0x00014ec6fb2e) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this,FEncryptionKeyResponse *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconClient *pAVar3;
  AOnlineBeaconClient *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconClient *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconClient *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconClient *)0x0;
}

// ExecuteIfSafe @ 14ec6fba0

/* WARNING: Removing unreachable block (ram,0x00014ec6fc06) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconClient *pAVar3;
  AOnlineBeaconClient *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconClient *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconClient *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconClient *)0x0;
}

// ExecuteIfSafe @ 14ec6fc70

/* WARNING: Removing unreachable block (ram,0x00014ec6fcd6) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconClient *pAVar3;
  AOnlineBeaconClient *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconClient *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AOnlineBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconClient *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconClient,AOnlineBeaconClient_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconClient *)0x0;
}

// ExecuteIfSafe @ 14ec6fd40

/* WARNING: Removing unreachable block (ram,0x00014ec6fdae) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this,FEncryptionKeyResponse *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconHost *pAVar3;
  AOnlineBeaconHost *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconHost *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconHost *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconHost *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AOnlineBeaconHost *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconHost *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,this->_padding_);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconHost *)0x0;
}

// ExecuteIfSafe @ 14ec6fe20

/* WARNING: Removing unreachable block (ram,0x00014ec6fe86) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
                *this)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  AOnlineBeaconHost *pAVar5;
  AOnlineBeaconHost *pAVar6;
  FString *pFVar7;
  UObject *pUVar8;
  AOnlineBeaconHost *local_res8;
  undefined8 local_res10;
  int iStack_30;
  FString local_28;
  
  pUVar8 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (AOnlineBeaconHost *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar8 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (AOnlineBeaconHost *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar5 = (AOnlineBeaconHost *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar5 != (AOnlineBeaconHost *)0x0) {
    pcVar1 = *(code **)&this->MethodPtr;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    local_res8 = pAVar5;
    pAVar6 = UE::Core::Private::DereferenceIfNecessary<AOnlineBeaconHost,AOnlineBeaconHost_*_&>
                       (&local_res8);
    iStack_30 = (int)uVar2;
    pFVar7 = ::FString::FString(&local_28,(FString *)&this->_padding_);
    (*pcVar1)((longlong)&pAVar6->_padding_ + (longlong)iStack_30,this->_padding_,pFVar7);
  }
  if (pUVar8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar8);
  }
  return pAVar5 != (AOnlineBeaconHost *)0x0;
}

// ExecuteIfSafe @ 14ec6ff20

/* WARNING: Removing unreachable block (ram,0x00014ec6ff8e) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                *this,UNetConnection *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconHostObject *pAVar3;
  AOnlineBeaconHostObject *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconHostObject *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconHostObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconHostObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AOnlineBeaconHostObject *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconHostObject *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconHostObject *)0x0;
}

// ExecuteIfSafe @ 14ec70000

/* WARNING: Removing unreachable block (ram,0x00014ec70076) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                *this,AOnlineBeaconClient *param_1,UNetConnection *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AOnlineBeaconHostObject *pAVar3;
  AOnlineBeaconHostObject *pAVar4;
  UObject *pUVar5;
  AOnlineBeaconHostObject *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AOnlineBeaconHostObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AOnlineBeaconHostObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pAVar3 = (AOnlineBeaconHostObject *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AOnlineBeaconHostObject *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AOnlineBeaconHostObject,AOnlineBeaconHostObject_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AOnlineBeaconHostObject *)0x0;
}

// ExecuteIfSafe @ 14ec700f0

/* WARNING: Removing unreachable block (ram,0x00014ec70156) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  APartyBeaconClient *pAVar3;
  APartyBeaconClient *pAVar4;
  UObject *pUVar5;
  APartyBeaconClient *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (APartyBeaconClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (APartyBeaconClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (APartyBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (APartyBeaconClient *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::DereferenceIfNecessary<APartyBeaconClient,APartyBeaconClient_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (APartyBeaconClient *)0x0;
}

// ExecuteIfSafe @ 14ec701c0

/* WARNING: Removing unreachable block (ram,0x00014ec70237) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this,FUniqueNetId *param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAchievementQueryCallbackProxy *pUVar3;
  UAchievementQueryCallbackProxy *pUVar4;
  UObject *pUVar5;
  UAchievementQueryCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAchievementQueryCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAchievementQueryCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAchievementQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAchievementQueryCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UAchievementQueryCallbackProxy,UAchievementQueryCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAchievementQueryCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec702b0

/* WARNING: Removing unreachable block (ram,0x00014ec70327) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this,FUniqueNetId *param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UAchievementWriteCallbackProxy *pUVar3;
  UAchievementWriteCallbackProxy *pUVar4;
  UObject *pUVar5;
  UAchievementWriteCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UAchievementWriteCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UAchievementWriteCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UAchievementWriteCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UAchievementWriteCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UAchievementWriteCallbackProxy,UAchievementWriteCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UAchievementWriteCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec703a0

/* WARNING: Removing unreachable block (ram,0x00014ec7041c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UConnectionCallbackProxy *pUVar3;
  UConnectionCallbackProxy *pUVar4;
  UObject *pUVar5;
  UConnectionCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UConnectionCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UConnectionCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UConnectionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UConnectionCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UConnectionCallbackProxy,UConnectionCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3,param_4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UConnectionCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec704b0

/* WARNING: Removing unreachable block (ram,0x00014ec704ed) */
/* WARNING: Removing unreachable block (ram,0x00014ec70531) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,FName param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UCreateSessionCallbackProxy *pUVar3;
  UCreateSessionCallbackProxy *pUVar4;
  UObject *pUVar5;
  UCreateSessionCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UCreateSessionCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UCreateSessionCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UCreateSessionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UCreateSessionCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UCreateSessionCallbackProxy,UCreateSessionCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UCreateSessionCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec705b0

/* WARNING: Removing unreachable block (ram,0x00014ec705ed) */
/* WARNING: Removing unreachable block (ram,0x00014ec70631) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,FName param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UDestroySessionCallbackProxy *pUVar3;
  UDestroySessionCallbackProxy *pUVar4;
  UObject *pUVar5;
  UDestroySessionCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UDestroySessionCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UDestroySessionCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UDestroySessionCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UDestroySessionCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UDestroySessionCallbackProxy,UDestroySessionCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UDestroySessionCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec706b0

/* WARNING: Removing unreachable block (ram,0x00014ec7071c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,FString *param_1,bool param_2)

{
  pmf_b445100a pVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UEndMatchCallbackProxy *pUVar5;
  UObject *pUVar6;
  UEndMatchCallbackProxy *local_res8;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UEndMatchCallbackProxy *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UEndMatchCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UEndMatchCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UEndMatchCallbackProxy *)0x0) {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UEndMatchCallbackProxy,UEndMatchCallbackProxy_*_&>(&local_res8);
    local_38 = (param_1->Data).AllocatorInstance.Data;
    pVar1 = this->MethodPtr;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30 = (param_1->Data).ArrayNum;
    local_2c = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    (*(code *)pVar1)(pUVar5,&local_38,param_2);
    if (pUVar6 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return true;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ExecuteIfSafe @ 14ec707d0

/* WARNING: Removing unreachable block (ram,0x00014ec7083c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,FString *param_1,bool param_2)

{
  pmf_e6ae0caa pVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UEndTurnCallbackProxy *pUVar5;
  UObject *pUVar6;
  UEndTurnCallbackProxy *local_res8;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UEndTurnCallbackProxy *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UEndTurnCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UEndTurnCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UEndTurnCallbackProxy *)0x0) {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UEndTurnCallbackProxy,UEndTurnCallbackProxy_*_&>(&local_res8);
    local_38 = (param_1->Data).AllocatorInstance.Data;
    pVar1 = this->MethodPtr;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30 = (param_1->Data).ArrayNum;
    local_2c = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    (*(code *)pVar1)(pUVar5,&local_38,param_2);
    if (pUVar6 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return true;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ExecuteIfSafe @ 14ec708f0

/* WARNING: Removing unreachable block (ram,0x00014ec7095f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UFindSessionsCallbackProxy *pUVar3;
  UFindSessionsCallbackProxy *pUVar4;
  UObject *pUVar5;
  UFindSessionsCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UFindSessionsCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UFindSessionsCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UFindSessionsCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UFindSessionsCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UFindSessionsCallbackProxy,UFindSessionsCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UFindSessionsCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec709d0

/* WARNING: Removing unreachable block (ram,0x00014ec70a3e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,FOnlineError *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInAppPurchaseCallbackProxy2 *pUVar3;
  UInAppPurchaseCallbackProxy2 *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseCallbackProxy2 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInAppPurchaseCallbackProxy2 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInAppPurchaseCallbackProxy2 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInAppPurchaseCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInAppPurchaseCallbackProxy2 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInAppPurchaseCallbackProxy2 *)0x0;
}

// ExecuteIfSafe @ 14ec70ab0

/* WARNING: Removing unreachable block (ram,0x00014ec70b26) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this,FOnlineError *param_1,TSharedRef<FPurchaseReceipt,1> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInAppPurchaseCallbackProxy2 *pUVar3;
  UInAppPurchaseCallbackProxy2 *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseCallbackProxy2 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInAppPurchaseCallbackProxy2 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInAppPurchaseCallbackProxy2 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInAppPurchaseCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInAppPurchaseCallbackProxy2 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseCallbackProxy2,UInAppPurchaseCallbackProxy2_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInAppPurchaseCallbackProxy2 *)0x0;
}

// ExecuteIfSafe @ 14ec70ba0

/* WARNING: Removing unreachable block (ram,0x00014ec70c16) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this,FOnlineError *param_1,TSharedRef<FPurchaseReceipt,1> *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInAppPurchaseCheckoutCallbackProxy *pUVar3;
  UInAppPurchaseCheckoutCallbackProxy *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseCheckoutCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInAppPurchaseCheckoutCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInAppPurchaseCheckoutCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInAppPurchaseCheckoutCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInAppPurchaseCheckoutCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseCheckoutCallbackProxy,UInAppPurchaseCheckoutCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInAppPurchaseCheckoutCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec70c90

/* WARNING: Removing unreachable block (ram,0x00014ec70d0f) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,bool param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
               FString *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInAppPurchaseQueryCallbackProxy2 *pUVar3;
  UInAppPurchaseQueryCallbackProxy2 *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseQueryCallbackProxy2 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInAppPurchaseQueryCallbackProxy2 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInAppPurchaseQueryCallbackProxy2 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInAppPurchaseQueryCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInAppPurchaseQueryCallbackProxy2 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseQueryCallbackProxy2,UInAppPurchaseQueryCallbackProxy2_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInAppPurchaseQueryCallbackProxy2 *)0x0;
}

// ExecuteIfSafe @ 14ec70d90

/* WARNING: Removing unreachable block (ram,0x00014ec70dfe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
                *this,FOnlineError *param_1)

{
  pmf_ac9378e5 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UInAppPurchaseReceiptsCallbackProxy *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseReceiptsCallbackProxy *local_res8;
  longlong local_28;
  longlong local_20;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UInAppPurchaseReceiptsCallbackProxy *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UInAppPurchaseReceiptsCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = (UInAppPurchaseReceiptsCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 == (UInAppPurchaseReceiptsCallbackProxy *)0x0) {
    bVar2 = false;
  }
  else {
    local_res8 = pUVar4;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseReceiptsCallbackProxy,UInAppPurchaseReceiptsCallbackProxy_*_&>
                       (&local_res8);
    local_28 = this->_padding_;
    pVar1 = this->MethodPtr;
    local_20 = this->_padding_;
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    (*(code *)pVar1)(pUVar4,param_1,&local_28);
    bVar2 = true;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar2;
}

// ExecuteIfSafe @ 14ec70e90

/* WARNING: Removing unreachable block (ram,0x00014ec70efe) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,FOnlineError *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UInAppPurchaseRestoreCallbackProxy2 *pUVar3;
  UInAppPurchaseRestoreCallbackProxy2 *pUVar4;
  UObject *pUVar5;
  UInAppPurchaseRestoreCallbackProxy2 *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UInAppPurchaseRestoreCallbackProxy2 *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UInAppPurchaseRestoreCallbackProxy2 *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UInAppPurchaseRestoreCallbackProxy2 *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UInAppPurchaseRestoreCallbackProxy2 *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UInAppPurchaseRestoreCallbackProxy2,UInAppPurchaseRestoreCallbackProxy2_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UInAppPurchaseRestoreCallbackProxy2 *)0x0;
}

// ExecuteIfSafe @ 14ec70f70

/* WARNING: Removing unreachable block (ram,0x00014ec70fac) */
/* WARNING: Removing unreachable block (ram,0x00014ec70ff0) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FName param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UJoinSessionCallbackProxy *pUVar3;
  UJoinSessionCallbackProxy *pUVar4;
  UObject *pUVar5;
  UJoinSessionCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UJoinSessionCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UJoinSessionCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UJoinSessionCallbackProxy *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UJoinSessionCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UJoinSessionCallbackProxy,UJoinSessionCallbackProxy_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UJoinSessionCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec71070

/* WARNING: Removing unreachable block (ram,0x00014ec710ad) */
/* WARNING: Removing unreachable block (ram,0x00014ec710f1) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,FName param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULeaderboardFlushCallbackProxy *pUVar3;
  ULeaderboardFlushCallbackProxy *pUVar4;
  UObject *pUVar5;
  ULeaderboardFlushCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULeaderboardFlushCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULeaderboardFlushCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULeaderboardFlushCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULeaderboardFlushCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULeaderboardFlushCallbackProxy,ULeaderboardFlushCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULeaderboardFlushCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec71170

/* WARNING: Removing unreachable block (ram,0x00014ec711d6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULeaderboardQueryCallbackProxy *pUVar3;
  ULeaderboardQueryCallbackProxy *pUVar4;
  UObject *pUVar5;
  ULeaderboardQueryCallbackProxy *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULeaderboardQueryCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULeaderboardQueryCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (ULeaderboardQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULeaderboardQueryCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULeaderboardQueryCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec71240

/* WARNING: Removing unreachable block (ram,0x00014ec712af) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,bool param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULeaderboardQueryCallbackProxy *pUVar3;
  ULeaderboardQueryCallbackProxy *pUVar4;
  UObject *pUVar5;
  ULeaderboardQueryCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULeaderboardQueryCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULeaderboardQueryCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULeaderboardQueryCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULeaderboardQueryCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULeaderboardQueryCallbackProxy,ULeaderboardQueryCallbackProxy_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULeaderboardQueryCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec71320

/* WARNING: Removing unreachable block (ram,0x00014ec71397) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                *this,int param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ULogoutCallbackProxy *pUVar3;
  ULogoutCallbackProxy *pUVar4;
  UObject *pUVar5;
  ULogoutCallbackProxy *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ULogoutCallbackProxy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ULogoutCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (ULogoutCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (ULogoutCallbackProxy *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<ULogoutCallbackProxy,ULogoutCallbackProxy_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (ULogoutCallbackProxy *)0x0;
}

// ExecuteIfSafe @ 14ec71410

/* WARNING: Removing unreachable block (ram,0x00014ec71498) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
                *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  pmf_d181f7e7 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UOnlineEngineInterfaceImpl *pUVar4;
  UOnlineEngineInterfaceImpl *pUVar5;
  TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> *pTVar6;
  UObject *pUVar7;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy> local_40;
  
  pUVar7 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UOnlineEngineInterfaceImpl *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UOnlineEngineInterfaceImpl *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UOnlineEngineInterfaceImpl *)0x0) {
    local_res8 = pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pTVar6 = TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                       (&local_40,
                        (TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
                         *)&this->_padding_);
    (*(code *)pVar1)(pUVar5,param_1,param_2,param_3,param_4,this->_padding_,pTVar6);
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  return pUVar4 != (UOnlineEngineInterfaceImpl *)0x0;
}

// ExecuteIfSafe @ 14ec71550

/* WARNING: Removing unreachable block (ram,0x00014ec715d7) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
                *this,FName param_1,bool param_2)

{
  pmf_81c85a8d pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UOnlineEngineInterfaceImpl *pUVar4;
  UOnlineEngineInterfaceImpl *pUVar5;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *pTVar6;
  UObject *pUVar7;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> local_48;
  
  pUVar7 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UOnlineEngineInterfaceImpl *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UOnlineEngineInterfaceImpl *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UOnlineEngineInterfaceImpl *)0x0) {
    local_res8 = pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pTVar6 = TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                       (&local_48,
                        (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
                        &this->_padding_);
    (*(code *)pVar1)(pUVar5,param_1,param_2,this->_padding_,pTVar6);
  }
  if (pUVar7 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
  }
  return pUVar4 != (UOnlineEngineInterfaceImpl *)0x0;
}

// ExecuteIfSafe @ 14ec71670

/* WARNING: Removing unreachable block (ram,0x00014ec716e4) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
                *this,bool param_1)

{
  pmf_44c1e794 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UOnlineEngineInterfaceImpl *pUVar4;
  UOnlineEngineInterfaceImpl *pUVar5;
  UObject *pUVar6;
  UOnlineEngineInterfaceImpl *local_res8;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> local_48;
  
  pUVar6 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UOnlineEngineInterfaceImpl *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UOnlineEngineInterfaceImpl *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar4 = (UOnlineEngineInterfaceImpl *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 != (UOnlineEngineInterfaceImpl *)0x0) {
    local_res8 = pUVar4;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineEngineInterfaceImpl,UOnlineEngineInterfaceImpl_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    local_48._0_8_ = 0;
    local_48._8_8_ = 0;
    local_48._16_4_ = 0;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_48,
               (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)&this->_padding_);
    (*(code *)pVar1)(pUVar5,param_1,&local_48);
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  return pUVar4 != (UOnlineEngineInterfaceImpl *)0x0;
}

// ExecuteIfSafe @ 14ec71780

/* WARNING: Removing unreachable block (ram,0x00014ec717bc) */
/* WARNING: Removing unreachable block (ram,0x00014ec71800) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FName param_1,Type param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOnlineSessionClient *pUVar3;
  UOnlineSessionClient *pUVar4;
  UObject *pUVar5;
  UOnlineSessionClient *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOnlineSessionClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOnlineSessionClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOnlineSessionClient *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UOnlineSessionClient *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>(&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOnlineSessionClient *)0x0;
}

// ExecuteIfSafe @ 14ec71880

/* WARNING: Removing unreachable block (ram,0x00014ec718bd) */
/* WARNING: Removing unreachable block (ram,0x00014ec71901) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,FName param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UOnlineSessionClient *pUVar3;
  UOnlineSessionClient *pUVar4;
  UObject *pUVar5;
  UOnlineSessionClient *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UOnlineSessionClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UOnlineSessionClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UOnlineSessionClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UOnlineSessionClient *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UOnlineSessionClient *)0x0;
}

// ExecuteIfSafe @ 14ec71980

/* WARNING: Removing unreachable block (ram,0x00014ec719f4) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
                *this,bool param_1,int param_2,TSharedPtr<FUniqueNetId_const_,1> *param_3,
               FOnlineSessionSearchResult *param_4)

{
  pmf_1ff3e64f pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UOnlineSessionClient *pUVar4;
  UObject *pUVar5;
  UOnlineSessionClient *local_res8;
  FUniqueNetId *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UOnlineSessionClient *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UOnlineSessionClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_38 = (FUniqueNetId *)0x0;
  }
  pUVar4 = (UOnlineSessionClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 == (UOnlineSessionClient *)0x0) {
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar2 = false;
  }
  else {
    local_res8 = pUVar4;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UOnlineSessionClient,UOnlineSessionClient_*_&>(&local_res8);
    local_38 = param_3->Object;
    pVar1 = this->MethodPtr;
    local_30 = (param_3->SharedReferenceCount).ReferenceController;
    (param_3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_3->Object = (FUniqueNetId *)0x0;
    (*(code *)pVar1)(pUVar4,param_1,param_2,&local_38,param_4);
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar2 = true;
  }
  return bVar2;
}

// GetBoundProgramCounterForTimerManager @ 14ec73ac0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14ec73ad0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73ae0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73af0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73b90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73ba0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73bb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73bc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73bd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73be0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73bf0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14ec73c40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c70

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73c90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73ca0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73cb0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14ec73cc0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ec73cd0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14ec760f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76100

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76110

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76120

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76130

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76140

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76160

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76180

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76190

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec761f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76220

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76230

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76240

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76250

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76260

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76270

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76280

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec762f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ec76300

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79330

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec79340

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79350

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79360

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79370

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79380

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79390

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec793f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79400

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79410

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79420

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79430

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79440

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79450

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79460

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79470

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79480

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79490

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec794a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec794b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec794c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec794d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec794e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec794f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79500

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79510

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79520

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14ec79530

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ec79540

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14ec7de50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7de80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7deb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7dee0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7df10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7df40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7df70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7dfa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7dfd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e000

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e060

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e090

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e0c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e0f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e120

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e150

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e180

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e1b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e1e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e240

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e270

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e2a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e2d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e300

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e330

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e360

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e390

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e3c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e3f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e420

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e450

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ec7e480

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14ec80fc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec80fe0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81000

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81020

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81040

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81060

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81080

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec810a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec810c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec810e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81100

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81120

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81140

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81160

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81180

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec811a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec811c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec811e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81200

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81220

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81240

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81260

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81280

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec812a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec812c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec812e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81300

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81320

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81340

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81360

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec81380

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec813a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec813c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ec813e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81b40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81b60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81b80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ba0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81bc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81be0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81c00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81c20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81c40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81c60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81c80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ca0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81cc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ce0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81d00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81d20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81d40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81d60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81d80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81da0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81dc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81de0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81e00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81e20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81e40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81e60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81e80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ea0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81ee0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81f00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81f20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81f40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ec81f60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14ec9ef70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeacon,void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9ef80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9ef90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9efa0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9efb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy,TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9efc0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHost,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,UNetConnection_*,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9efd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9efe0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconHostObject,void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9eff0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,APartyBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f000

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAchievementQueryCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f010

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UAchievementWriteCallbackProxy,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f020

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UConnectionCallbackProxy,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f030

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UCreateSessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f040

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UDestroySessionCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f050

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UEndMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f060

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UEndTurnCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f070

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UFindSessionsCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f080

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f090

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCallbackProxy2,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0a0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseCheckoutCallbackProxy,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0b0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseQueryCallbackProxy2,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseReceiptsCallbackProxy,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,TWeakPtr<FUniqueNetId_const_,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0d0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UInAppPurchaseRestoreCallbackProxy2,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0e0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UJoinSessionCallbackProxy,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f0f0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardFlushCallbackProxy,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f100

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f110

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULeaderboardQueryCallbackProxy,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f120

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ULogoutCallbackProxy,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f130

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f140

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(FName,bool),FDefaultDelegateUserPolicy,FName,TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f150

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,void___cdecl(bool),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f160

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f170

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14ec9f180

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UOnlineSessionClient,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14ecb4140

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VASpectatorBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ecb41d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VASpectatorBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ecb4220

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VASpectatorBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// CreateCopy @ 14ecb42d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUQuitMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16461eac *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ecb4360

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUQuitMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16461eac *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ecb43b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUQuitMatchCallbackProxy____A6AXVFString___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_16461eac *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14ecb4460

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUShowLoginUICallbackProxy____A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1a46d9d6 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ecb44f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUShowLoginUICallbackProxy____A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1a46d9d6 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14ecb4540

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUShowLoginUICallbackProxy____A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1a46d9d6 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ecb7ff0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *this)

{
  ASpectatorBeaconClient *pAVar1;
  ASpectatorBeaconClient *local_res8 [4];
  
  local_res8[0] = (ASpectatorBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<ASpectatorBeaconClient,ASpectatorBeaconClient_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pAVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 14ecb8030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
          *this,FString *param_1,bool param_2)

{
  pmf_16461eac pVar1;
  FScriptContainerElement *pFVar2;
  UQuitMatchCallbackProxy *pUVar3;
  UQuitMatchCallbackProxy *local_res8;
  FScriptContainerElement *local_18;
  int local_10;
  int local_c;
  
  local_res8 = (UQuitMatchCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UQuitMatchCallbackProxy,UQuitMatchCallbackProxy_*_&>(&local_res8);
  local_18 = (param_1->Data).AllocatorInstance.Data;
  pVar1 = this->MethodPtr;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10 = (param_1->Data).ArrayNum;
  local_c = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (*(code *)pVar1)(pUVar3,&local_18,param_2);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Execute @ 14ecb80c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,int param_2,FOnlineError *param_3)

{
  pmf_1a46d9d6 pVar1;
  UShowLoginUICallbackProxy *pUVar2;
  UShowLoginUICallbackProxy *local_res8;
  FUniqueNetId *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = (UShowLoginUICallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UShowLoginUICallbackProxy,UShowLoginUICallbackProxy_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FUniqueNetId *)0x0;
  (*(code *)pVar1)(pUVar2,&local_18,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteIfSafe @ 14ecb8850

/* WARNING: Removing unreachable block (ram,0x00014ecb88b6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  ASpectatorBeaconClient *pAVar3;
  ASpectatorBeaconClient *pAVar4;
  UObject *pUVar5;
  ASpectatorBeaconClient *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (ASpectatorBeaconClient *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (ASpectatorBeaconClient *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (ASpectatorBeaconClient *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (ASpectatorBeaconClient *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<ASpectatorBeaconClient,ASpectatorBeaconClient_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pAVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (ASpectatorBeaconClient *)0x0;
}

// ExecuteIfSafe @ 14ecb8920

/* WARNING: Removing unreachable block (ram,0x00014ecb898c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,FString *param_1,bool param_2)

{
  pmf_16461eac pVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UQuitMatchCallbackProxy *pUVar5;
  UObject *pUVar6;
  UQuitMatchCallbackProxy *local_res8;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pUVar6 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UQuitMatchCallbackProxy *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar6 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UQuitMatchCallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UQuitMatchCallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 != (UQuitMatchCallbackProxy *)0x0) {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UQuitMatchCallbackProxy,UQuitMatchCallbackProxy_*_&>
                       (&local_res8);
    local_38 = (param_1->Data).AllocatorInstance.Data;
    pVar1 = this->MethodPtr;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30 = (param_1->Data).ArrayNum;
    local_2c = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    (*(code *)pVar1)(pUVar5,&local_38,param_2);
    if (pUVar6 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return true;
  }
  if (pUVar6 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar6);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ExecuteIfSafe @ 14ecb8a40

/* WARNING: Removing unreachable block (ram,0x00014ecb8ab3) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,int param_2,FOnlineError *param_3)

{
  pmf_1a46d9d6 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UShowLoginUICallbackProxy *pUVar4;
  UObject *pUVar5;
  UShowLoginUICallbackProxy *local_res8;
  FUniqueNetId *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UShowLoginUICallbackProxy *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UShowLoginUICallbackProxy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_38 = (FUniqueNetId *)0x0;
  }
  pUVar4 = (UShowLoginUICallbackProxy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 == (UShowLoginUICallbackProxy *)0x0) {
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  local_res8 = pUVar4;
  pUVar4 = UE::Core::Private::
           DereferenceIfNecessary<UShowLoginUICallbackProxy,UShowLoginUICallbackProxy_*_&>
                     (&local_res8);
  local_38 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FUniqueNetId *)0x0;
  (*(code *)pVar1)(pUVar4,&local_38,param_2,param_3);
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ecb9190

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ecb91a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14ecb91b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14ecba150

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ecba160

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14ecba170

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ecbc8f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ecbc900

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ecbc910

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14ecbce60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ecbce90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14ecbcec0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14ecbd5d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ecbd5f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14ecbd610

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14ecbd8d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ecbd8f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14ecbd910

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14eccfd20

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,ASpectatorBeaconClient,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14eccfd30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UQuitMatchCallbackProxy,void___cdecl(FString,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14eccfd40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UShowLoginUICallbackProxy,void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14ece14f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUVOIPTalker____A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ece1580

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUVOIPTalker____A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14ece15d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUVOIPTalker____A6AXPEBVUAudioComponent__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
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

// Execute @ 14ece57f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
          *this,UAudioComponent *param_1,float param_2)

{
  UVOIPTalker *pUVar1;
  UVOIPTalker *local_res8;
  
  local_res8 = (UVOIPTalker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UVOIPTalker,UVOIPTalker_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// ExecuteIfSafe @ 14ece6470

/* WARNING: Removing unreachable block (ram,0x00014ece64e6) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
                *this,UAudioComponent *param_1,float param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UVOIPTalker *pUVar3;
  UVOIPTalker *pUVar4;
  UObject *pUVar5;
  UVOIPTalker *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UVOIPTalker *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UVOIPTalker *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UVOIPTalker *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UVOIPTalker *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UVOIPTalker,UVOIPTalker_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UVOIPTalker *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14ece78f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14ece8370

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14ece8b90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14ece9630

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14ecea590

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14eceab40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14ed07ac0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

