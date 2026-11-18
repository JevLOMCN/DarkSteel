// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 33

// TryGetBoundFunctionName @ 14eac5ba0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14eac5bb0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14eac5bc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 14eac5bd0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// HasSameObject @ 14eac5be0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14eac5bf0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14eac5c00

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14eac5cb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14eac5d40

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessagingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// Execute @ 14eac5d90

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FTcpMessagingModule *pFVar1;
  FTcpMessagingModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FTcpMessagingModule,FTcpMessagingModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return;
}

// ExecuteIfSafe @ 14eac5dd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTcpMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FTcpMessagingModule *pFVar1;
  FTcpMessagingModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FTcpMessagingModule,FTcpMessagingModule_*_&>
                     (local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  return true;
}

// CreateCopy @ 14eac90f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
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

// CreateCopy @ 14eac91a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
    ;
    puVar3[4] = this->UserObject;
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14eac9210

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
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

// CreateCopy @ 14eac92d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14eac9360

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14eac93b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14eaca2c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::Execute(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
          *this)

{
  code *pcVar1;
  int iVar2;
  FTcpMessageTransport *pFVar3;
  FTcpMessageTransport *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FTcpMessageTransport,FTcpMessageTransport_*_&>
                     (local_res8);
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

// Execute @ 14eaca340

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
          *this,FSocket *param_1,FIPv4Endpoint *param_2)

{
  undefined1 uVar1;
  FTcpMessageTransport *pFVar2;
  FTcpMessageTransport *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FTcpMessageTransport,FTcpMessageTransport_*_&>
                     (&local_res8);
  uVar1 = (**(code **)&this->MethodPtr)
                    ((longlong)&pFVar2->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     param_1,param_2);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 14eaca3a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
                *this)

{
  code *pcVar1;
  int iVar2;
  FTcpMessageTransport *pFVar3;
  FTcpMessageTransport *local_res8 [4];
  code *local_18;
  longlong lStack_10;
  
  local_18 = *(code **)&this->MethodPtr;
  lStack_10 = *(longlong *)&(this->MethodPtr).field_0x8;
  local_res8[0] = this->UserObject;
  pFVar3 = UE::Core::Private::DereferenceIfNecessary<FTcpMessageTransport,FTcpMessageTransport_*_&>
                     (local_res8);
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

// ExecuteIfSafe @ 14eaca420

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
                *this,FSocket *param_1,FIPv4Endpoint *param_2)

{
  FTcpMessageTransport *pFVar1;
  FTcpMessageTransport *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FTcpMessageTransport,FTcpMessageTransport_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14eaca8a0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14eaca8b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14eacabc0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14eacabd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14eacaec0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14eacaed0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14eacb3b0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14eacb3c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14eacbe40

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14eacbe50

bool __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14eacf630

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FTcpMessageTransportConnection,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14eacf640

FName __thiscall
TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FTcpMessageTransport,bool___cdecl(FSocket_*,FIPv4Endpoint_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

