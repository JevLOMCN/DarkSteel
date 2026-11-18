// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 31

// TOnlineEventCallable<void___cdecl(void)> @ 14ee09c30

TOnlineEventCallable<void___cdecl(void)> * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(void)>::TOnlineEventCallable<void___cdecl(void)>
          (TOnlineEventCallable<void___cdecl(void)> *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOnlineEventCallable<void___cdecl(void)> *pTVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->DelegateRef).Object =
         (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x10;
    (this->DelegateRef).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXXZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->DelegateRef).Object =
         (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar3 + 1);
    (this->DelegateRef).SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOnlineEventCallable<void___cdecl(void)> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return this;
}

// Broadcast @ 14ee5bc00

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)> *this,
         FLobbyAttributesChanged *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5bd30

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>::Broadcast
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)> *this,
          FLobbyLeaderChanged *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5be60

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)>::Broadcast
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)> *this,
          FLobbyLeft *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5bf90

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>
          *this,FLobbyMemberAttributesChanged *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c0c0

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>::Broadcast
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)> *this,
          FLobbyMemberJoined *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c1f0

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::Broadcast
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)> *this,
          FLobbyMemberLeft *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c320

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>::Broadcast
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)> *this,
          FLobbySchemaChanged *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c450

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FAddSessionMember> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c580

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c6b0

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>_const_&)>
          *this,TOnlineAsyncOp<UE::Online::FCreateSession> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c7e0

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>_const_&)>
          *this,TOnlineAsyncOp<UE::Online::FFindSessions> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5c910

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>_const_&)>
          *this,TOnlineAsyncOp<UE::Online::FJoinSession> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5ca40

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&)>::
Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>_const_&)>
          *this,TOnlineAsyncOp<UE::Online::FLeaveSession> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5cb70

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5cca0

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5cdd0

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FSendSessionInvite> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5cf00

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FStartMatchmaking> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5d030

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 14ee5d160

void __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(void)>::Broadcast
          (TOnlineEventCallable<void___cdecl(void)> *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_28;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_28);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyAttributesChanged_const_&)> @ 14efd32c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyAttributesChanged_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_24084665 *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_24084665 pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_24084665 *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_24084665)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd3470;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd3470:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationAdded_const_&)> @ 14efd35e0

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationAdded_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_e709175b *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_e709175b pVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FOnlineEventDelegateHandle *pFVar10;
  ulong64 *puVar11;
  FDelegateHandle FVar12;
  undefined1 local_res8 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  FVar12.ID = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_c0;
  puVar8 = Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationAdded_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pFVar2;
    *(pmf_e709175b *)(puVar8 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_e709175b)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FOnlineEventDelegateHandle *)(*pcVar4)();
        return pFVar10;
      }
    }
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,&local_60);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar6 = (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,&local_48);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar11 = (ulong64 *)
                  (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x40))
                            (local_c0.DelegateAllocator,local_res8);
        FVar12.ID = *puVar11;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      iVar7 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      (this_00->InvocationList).ArrayNum = iVar7 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 ((this_00->InvocationList).AllocatorInstance.Data + (longlong)iVar7 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      goto LAB_14efd3774;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
LAB_14efd3774:
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_98);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  FOnlineEventDelegateHandle::
  FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&)>
            (__return_storage_ptr__,FVar12,&this->DelegateRef);
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationRemoved_const_&)> @ 14efd3830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyInvitationRemoved_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_468d55fb *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_468d55fb pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyInvitationRemoved_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_468d55fb *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_468d55fb)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd39e0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd39e0:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyInvitationRemoved_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyJoined_const_&)> @ 14efd3b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyJoined_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyJoined_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyJoined_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_08a7bb5b *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_08a7bb5b pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_08a7bb5b *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_08a7bb5b)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd3d00;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd3d00:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyJoined_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeaderChanged_const_&)> @ 14efd3e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeaderChanged_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_34ec1e17 *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_34ec1e17 pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeaderChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_34ec1e17 *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_34ec1e17)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4020;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4020:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeaderChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeft_const_&)> @ 14efd4190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyLeft_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyLeft_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_2782191d *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_2782191d pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_2782191d *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_2782191d)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4340;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4340:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyLeft_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberAttributesChanged_const_&)> @ 14efd44b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberAttributesChanged_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>
           *this,FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_62a43fdf *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_62a43fdf pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberAttributesChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_62a43fdf *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_62a43fdf)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4660;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4660:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberJoined_const_&)> @ 14efd47d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberJoined_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_6288ea21 *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_6288ea21 pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberJoined_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_6288ea21 *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_6288ea21)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4980;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4980:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberJoined_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberJoined_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberLeft_const_&)> @ 14efd4af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbyMemberLeft_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_4b4c4163 *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_4b4c4163 pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbyMemberLeft_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_4b4c4163 *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_4b4c4163)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4ca0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4ca0:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbyMemberLeft_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbyMemberLeft_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbySchemaChanged_const_&)> @ 14efd4e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOnlineEventDelegateHandle * __thiscall
UE::Online::TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>::
Add<UE::Online::FLobbyEventCapture_*,void_(__cdecl_UE::Online::FLobbyEventCapture::*)(UE::Online::FLobbySchemaChanged_const_&)>
          (TOnlineEventCallable<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)> *this,
          FOnlineEventDelegateHandle *__return_storage_ptr__,FLobbyEventCapture **param_1,
          pmf_52f6d4af *param_2)

{
  int *piVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FLobbyEventCapture *pFVar2;
  pmf_52f6d4af pVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FOnlineEventDelegateHandle *pFVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined1 local_b0 [8];
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  uVar22 = 0;
  pFVar2 = *param_1;
  pVar3 = *param_2;
  local_118 = (undefined1  [8])0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar18 = Core::Private::DelegateAllocate(0x28,&local_110);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFLobbyEventCapture_Online_UE____A6AXAEBUFLobbySchemaChanged_23__ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pFVar2;
    *(pmf_52f6d4af *)(puVar18 + 4) = pVar3;
    if ((pFVar2 == (FLobbyEventCapture *)0x0) || (pVar3 == (pmf_52f6d4af)0x0)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InUserObject != nullptr && MethodPtr != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                          ,0x1d8,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FOnlineEventDelegateHandle *)(*pcVar7)();
        return pFVar20;
      }
    }
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_100);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_a8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    cVar16 = (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x38))();
    if (cVar16 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,&local_90);
      if ((local_110.DelegateSize != 0) &&
         (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        puVar18 = (undefined8 *)
                  (**(code **)(*(longlong *)local_110.DelegateAllocator + 0x40))
                            (local_110.DelegateAllocator,local_b0);
        uVar22 = *puVar18;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      iVar17 = (this_00->InvocationList).ArrayNum;
      piVar1 = &(this_00->InvocationList).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
      }
      pFVar4 = (this_00->InvocationList).AllocatorInstance.Data;
      (this_00->InvocationList).ArrayNum = iVar17 + 1;
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
      TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                 (pFVar4 + (longlong)iVar17 * 0x10),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      goto LAB_14efd4fc0;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14efd4fc0:
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  *(undefined8 *)&__return_storage_ptr__->DelegateUnbinder = 0;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = 0;
  pTVar5 = (this->DelegateRef).SharedReferenceCount.ReferenceController;
  pTVar6 = (this->DelegateRef).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  puVar18 = FMemory::Malloc(0x20,8);
  *puVar18 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__A6AXAEBUFLobbySchemaChanged_Online_UE___Z_FOnlineEventDelegateHandle_Online_UE__QEAA_VFDelegateHandle__AEAV__TSharedRef_V__TMulticastDelegate___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00___Z__00_00_Function_Private_Core_UE__6B_
  ;
  puVar18[1] = uVar22;
  puVar18[2] = pTVar6;
  puVar18[3] = pTVar5;
  lVar13 = *(longlong *)&__return_storage_ptr__->DelegateUnbinder;
  uVar14 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8;
  uVar8 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10;
  uVar9 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14;
  uVar10 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18;
  uVar11 = *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c;
  uVar22 = *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20;
  plVar12 = *(longlong **)&(__return_storage_ptr__->DelegateUnbinder).field_0x28;
  if (puVar18 + 1 != (undefined8 *)0x0) {
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Online::FOnlineEventDelegateHandle::FOnlineEventDelegateHandle<void___cdecl(UE::Online::FLobbySchemaChanged_const_&)>'::__l2::<lambda_1>,void>
               ::Call;
  }
  *(code **)&__return_storage_ptr__->DelegateUnbinder = local_78;
  *(undefined8 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x8 = uStack_70;
  uStack_50._0_4_ = SUB84(puVar18,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x10 = local_68;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x14 = uStack_64;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x18 = uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x1c = uStack_5c;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x28 = (undefined4)uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->DelegateUnbinder).field_0x2c = uStack_50._4_4_;
  local_68 = uVar8;
  uStack_64 = uVar9;
  uStack_60 = uVar10;
  uStack_5c = uVar11;
  local_58 = uVar22;
  uStack_50 = plVar12;
  if (lVar13 != 0) {
    plVar21 = (longlong *)&local_68;
    if (plVar12 != (longlong *)0x0) {
      plVar21 = plVar12;
    }
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    (**(code **)(*plVar21 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Broadcast @ 14eff6670

void __thiscall
UE::Online::
TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&)>
::Broadcast(TOnlineEventCallable<void___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_const_&)>
            *this,TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->DelegateRef).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

