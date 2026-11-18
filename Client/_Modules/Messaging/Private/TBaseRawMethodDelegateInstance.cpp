// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 110

// TryGetBoundFunctionName @ 142d36e70

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 142d36e80

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 142d36e90

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 142d36ea0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// HasSameObject @ 142d36eb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 142d36ec0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 142d36ed0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 142d36f80

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 142d37010

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// Execute @ 142d37060

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FMessagingModule *pFVar1;
  FMessagingModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessagingModule,FMessagingModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 142d370a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FMessagingModule *pFVar1;
  FMessagingModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessagingModule,FMessagingModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// CreateCopy @ 142d42550

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 142d425e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 142d42630

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageBridge____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 142d426e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    lVar1 = this->_padding_;
    puVar3[1] = this->_padding_;
    puVar3[2] = lVar1;
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d42770

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    lVar1 = this->_padding_;
    puVar3[1] = this->_padding_;
    puVar3[2] = lVar1;
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142d427d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    lVar5 = this->_padding_;
    puVar7[1] = this->_padding_;
    puVar7[2] = lVar5;
    puVar7[3] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress____6B_
    ;
    puVar7[4] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar2;
    *(undefined4 *)(puVar7 + 6) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d42880

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    lVar1 = this->_padding_;
    puVar3[1] = this->_padding_;
    puVar3[2] = lVar1;
    puVar3[3] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d42930

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    lVar1 = this->_padding_;
    puVar3[1] = this->_padding_;
    puVar3[2] = lVar1;
    puVar3[3] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  return;
}

// CreateCopy @ 142d429b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    lVar1 = this->_padding_;
    puVar7[1] = this->_padding_;
    puVar7[2] = lVar1;
    puVar7[3] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar7[5] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__UFMessageAddress__V__TWeakPtr_VIMessageReceiver___00____6B_
    ;
    puVar7[6] = this->UserObject;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar3;
    *(undefined4 *)(puVar7 + 8) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d42a80

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d42b30

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142d42ba0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar7[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar7[3] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageContext___00____6B_
    ;
    puVar7[4] = this->UserObject;
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

// CreateCopy @ 142d42c60

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar3[3] = this->_padding_;
    puVar3[4] = lVar1;
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d42d10

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar3[3] = this->_padding_;
    puVar3[4] = lVar1;
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  return;
}

// CreateCopy @ 142d42d90

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar7[3] = this->_padding_;
    puVar7[4] = lVar1;
    puVar7[5] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageInterceptor___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[6] = this->UserObject;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar3;
    *(undefined4 *)(puVar7 + 8) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d42e60

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d42f10

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142d42f80

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar7[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar7[3] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VIMessageSubscription___00____6B_
    ;
    puVar7[4] = this->UserObject;
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

// CreateCopy @ 142d43040

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d430f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 142d43160

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar7[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar7[3] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIBusListener___00____6B_
    ;
    puVar7[4] = this->UserObject;
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

// CreateCopy @ 142d43220

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar3[3] = this->_padding_;
    puVar3[4] = lVar1;
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d432d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar3[3] = this->_padding_;
    puVar3[4] = lVar1;
    puVar3[5] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar3[6] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[7] = *(undefined8 *)&this->MethodPtr;
    puVar3[8] = uVar2;
  }
  return;
}

// CreateCopy @ 142d43350

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar7[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar1 = this->_padding_;
    puVar7[3] = this->_padding_;
    puVar7[4] = lVar1;
    puVar7[5] = this->_padding_;
    *puVar7 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageRouter____A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VIMessageReceiver___00__UFTopLevelAssetPath____6B_
    ;
    puVar7[6] = this->UserObject;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 7) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar3;
    *(undefined4 *)(puVar7 + 8) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142d43420

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageTracer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a24fee84 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142d434b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageTracer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a24fee84 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142d43500

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageTracer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a24fee84 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142d44fd0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FMessageBridge *pFVar1;
  FMessageBridge *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessageBridge,FMessageBridge_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// Execute @ 142d45010

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
          *this)

{
  FMessageRouter *pFVar1;
  FMessageRouter *local_res8 [4];
  longlong local_18;
  longlong lStack_10;
  
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return;
}

// Execute @ 142d45060

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 0xc) = *(int *)(lStack_20 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18,&local_28);
  return;
}

// Execute @ 142d450f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return;
}

// Execute @ 142d45170

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 8) = *(int *)(lStack_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_28,&local_18);
  return;
}

// Execute @ 142d45200

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return;
}

// Execute @ 142d45280

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 0xc) = *(int *)(lStack_10 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return;
}

// Execute @ 142d45300

void __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::Execute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
          *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 0xc) = *(int *)(lStack_20 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_28,&local_18);
  return;
}

// Execute @ 142d45390

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  undefined1 uVar1;
  FMessageTracer *pFVar2;
  FMessageTracer *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FMessageTracer,FMessageTracer_*_&>(local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 142d453e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FMessageBridge *pFVar1;
  FMessageBridge *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessageBridge,FMessageBridge_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// ExecuteIfSafe @ 142d45420

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
                *this)

{
  FMessageRouter *pFVar1;
  FMessageRouter *local_res8 [4];
  longlong local_18;
  longlong lStack_10;
  
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,&local_18
            );
  return true;
}

// ExecuteIfSafe @ 142d45470

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 0xc) = *(int *)(lStack_20 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18,&local_28);
  return true;
}

// ExecuteIfSafe @ 142d45500

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return true;
}

// ExecuteIfSafe @ 142d45580

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 8) = *(int *)(lStack_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_28,&local_18);
  return true;
}

// ExecuteIfSafe @ 142d45610

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 8) = *(int *)(lStack_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return true;
}

// ExecuteIfSafe @ 142d45690

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_18;
  iVar2 = (int)lStack_10;
  local_18 = (code *)this->_padding_;
  lStack_10 = this->_padding_;
  if (lStack_10 != 0) {
    LOCK();
    *(int *)(lStack_10 + 0xc) = *(int *)(lStack_10 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_18);
  return true;
}

// ExecuteIfSafe @ 142d45710

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
                *this)

{
  code *pcVar1;
  int iVar2;
  FMessageRouter *pFVar3;
  FMessageRouter *local_res8 [4];
  code *local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *(code **)&this->MethodPtr;
  lStack_20 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FMessageRouter,FMessageRouter_*_&>(local_res8);
  pcVar1 = local_28;
  iVar2 = (int)lStack_20;
  local_18 = this->_padding_;
  lStack_10 = this->_padding_;
  local_28 = (code *)this->_padding_;
  lStack_20 = this->_padding_;
  if (lStack_20 != 0) {
    LOCK();
    *(int *)(lStack_20 + 0xc) = *(int *)(lStack_20 + 0xc) + 1;
    UNLOCK();
  }
  (*pcVar1)((longlong)&pFVar3->_padding_ + (longlong)iVar2,&local_28,&local_18);
  return true;
}

// ExecuteIfSafe @ 142d457a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  FMessageTracer *pFVar1;
  FMessageTracer *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FMessageTracer,FMessageTracer_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142d474d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d474e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d474f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47500

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47510

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47520

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47530

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47540

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142d47550

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 142d47a00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a60

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142d47a80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 142d47ed0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47ee0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47ef0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f30

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f40

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::GetUObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142d47f50

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142d4a250

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a260

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a270

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a280

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a290

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a2a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a2b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a2c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142d4a2d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 142d4a5e0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a5f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a600

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a610

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a620

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a630

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a640

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a650

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142d4a660

bool __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142d50520

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50530

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50540

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50550

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50560

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50570

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50580

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d50590

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142d505a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

