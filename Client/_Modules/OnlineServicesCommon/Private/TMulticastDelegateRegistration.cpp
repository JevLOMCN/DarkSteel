// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 12

// Add @ 14ee552a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55382;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55382:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee553c0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&,UE::Online::TOnlineResult<UE::Online::FBatchQueryPresence>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee554a2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee554a2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee554e0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&,UE::Online::TOnlineResult<UE::Online::FCreateSession>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee555c2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee555c2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55600

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&,UE::Online::TOnlineResult<UE::Online::FFindSessions>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee556e2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee556e2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55720

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&,UE::Online::TOnlineResult<UE::Online::FJoinSession>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55802;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55802:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55840

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&,UE::Online::TOnlineResult<UE::Online::FLeaveSession>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55922;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55922:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55960

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55a42;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55a42:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55a80

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&,UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55b62;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55b62:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55ba0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&,UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55c82;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55c82:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55cc0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&,UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55da2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55da2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14ee55de0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&,UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14ee55ec2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14ee55ec2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Add @ 14eff5d10

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
::Add(TMulticastDelegateRegistration<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
      *this,TDelegate<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&,UE::Online::TOnlineResult<UE::Online::FFunctionalTestLobbies>_const_&),FDefaultDelegateUserPolicy>
            *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res10 [8];
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  uVar5 = 0;
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
  if ((*(int *)&in_R8->field_0x10 != 0) && (*(longlong **)&in_R8->field_0x8 != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)&in_R8->field_0x8 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_20);
      if ((*(int *)&in_R8->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res10);
        uVar5 = *puVar4;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      iVar3 = *(int *)&this->field_0x10;
      *(undefined8 *)param_1 = uVar5;
      if (iVar3 == *(int *)&this->field_0x14) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
      }
      *(int *)&this->field_0x10 = iVar3 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((longlong)iVar3 * 0x10 + *(longlong *)&this->field_0x8),in_R8);
      goto LAB_14eff5df2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
LAB_14eff5df2:
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

