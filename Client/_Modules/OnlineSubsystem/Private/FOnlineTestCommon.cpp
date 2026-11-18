// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 29

// FOnlineTestCommon @ 14eb31100

FOnlineTestCommon * __thiscall FOnlineTestCommon::FOnlineTestCommon(FOnlineTestCommon *this)

{
  (this->SubsystemType).ComparisonIndex = 0;
  (this->SubsystemType).Number = 0;
  (this->AccountCredentials).Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountCredentials).Type.Data.ArrayNum = 0;
  (this->AccountCredentials).Type.Data.ArrayMax = 0;
  (this->AccountCredentials).Id.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountCredentials).Id.Data.ArrayNum = 0;
  (this->AccountCredentials).Id.Data.ArrayMax = 0;
  (this->AccountCredentials).Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountCredentials).Token.Data.ArrayNum = 0;
  (this->AccountCredentials).Token.Data.ArrayMax = 0;
  (this->OnlineIdentity).Object = (IOnlineIdentity *)0x0;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineFriends).Object = (IOnlineFriends *)0x0;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineMessage).Object = (IOnlineMessage *)0x0;
  (this->OnlineMessage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnlineAchievements).Object = (IOnlineAchievements *)0x0;
  (this->OnlineAchievements).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnLogoutCompleteDelegateHandle).ID = 0;
  (this->OnLoginCompleteDelegateHandle).ID = 0;
  (this->OnDeleteFriendCompleteDelegateHandle).ID = 0;
  (this->OnInviteAcceptedDelegateHandle).ID = 0;
  (this->OnRejectInviteCompleteDelegateHandle).ID = 0;
  (this->OnBlockedPlayerCompleteDelegateHandle).ID = 0;
  (this->OnUnblockedPlayerCompleteDelegateHandle).ID = 0;
  (this->OnSendMessageCompleteDelegateHandle).ID = 0;
  return this;
}

// ~FOnlineTestCommon @ 14eb35720

void __thiscall FOnlineTestCommon::~FOnlineTestCommon(FOnlineTestCommon *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineMessage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineFriends).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineIdentity).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AccountCredentials).Token.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccountCredentials).Id.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccountCredentials).Type.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14eb35dd0

FOnlineTestCommon * __thiscall
FOnlineTestCommon::operator=(FOnlineTestCommon *this,FOnlineTestCommon *param_1)

{
  TSharedPtr<IOnlineIdentity,1> *pTVar1;
  TSharedPtr<IOnlineFriends,1> *pTVar2;
  TSharedPtr<IOnlineMessage,1> *pTVar3;
  TSharedPtr<IOnlineAchievements,1> *pTVar4;
  
  this->SubsystemType = param_1->SubsystemType;
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&param_1->AccountCredentials);
  pTVar1 = &param_1->OnlineIdentity;
  if (&this->OnlineIdentity != pTVar1) {
    (this->OnlineIdentity).Object = pTVar1->Object;
    pTVar1->Object = (IOnlineIdentity *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineIdentity).SharedReferenceCount,
               &(param_1->OnlineIdentity).SharedReferenceCount);
  }
  pTVar2 = &param_1->OnlineFriends;
  if (&this->OnlineFriends != pTVar2) {
    (this->OnlineFriends).Object = pTVar2->Object;
    pTVar2->Object = (IOnlineFriends *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineFriends).SharedReferenceCount,
               &(param_1->OnlineFriends).SharedReferenceCount);
  }
  pTVar3 = &param_1->OnlineMessage;
  if (&this->OnlineMessage != pTVar3) {
    (this->OnlineMessage).Object = pTVar3->Object;
    pTVar3->Object = (IOnlineMessage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineMessage).SharedReferenceCount,
               &(param_1->OnlineMessage).SharedReferenceCount);
  }
  pTVar4 = &param_1->OnlineAchievements;
  if (&this->OnlineAchievements != pTVar4) {
    (this->OnlineAchievements).Object = pTVar4->Object;
    pTVar4->Object = (IOnlineAchievements *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineAchievements).SharedReferenceCount,
               &(param_1->OnlineAchievements).SharedReferenceCount);
  }
  (this->OnLogoutCompleteDelegateHandle).ID = (param_1->OnLogoutCompleteDelegateHandle).ID;
  (this->OnLoginCompleteDelegateHandle).ID = (param_1->OnLoginCompleteDelegateHandle).ID;
  (this->OnDeleteFriendCompleteDelegateHandle).ID =
       (param_1->OnDeleteFriendCompleteDelegateHandle).ID;
  (this->OnInviteAcceptedDelegateHandle).ID = (param_1->OnInviteAcceptedDelegateHandle).ID;
  (this->OnRejectInviteCompleteDelegateHandle).ID =
       (param_1->OnRejectInviteCompleteDelegateHandle).ID;
  (this->OnBlockedPlayerCompleteDelegateHandle).ID =
       (param_1->OnBlockedPlayerCompleteDelegateHandle).ID;
  (this->OnUnblockedPlayerCompleteDelegateHandle).ID =
       (param_1->OnUnblockedPlayerCompleteDelegateHandle).ID;
  (this->OnSendMessageCompleteDelegateHandle).ID = (param_1->OnSendMessageCompleteDelegateHandle).ID
  ;
  return this;
}

// operator() @ 14eb701b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineTestCommon::AddAchievementToTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  longlong local_a0;
  TReferenceControllerBase<1> *local_98;
  FString local_90;
  undefined8 local_80;
  longlong local_78;
  TReferenceControllerBase<1> *local_70;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x38) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x38);
  (**(code **)(*plVar2 + 0x110))(plVar2,&local_a0,0);
  if (local_a0 == 0) {
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl
                (&local_90,
                 L"OSS Automation: IsValid() check on TestAccountId failed after a call to OnlineIdentity->GetUniquePlayerId()"
                );
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x68) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar2 = *(longlong **)(lVar1 + 0x68);
    pcVar3 = *(code **)(*plVar2 + 0x10);
    local_80 = *(undefined8 *)this;
    local_78 = local_a0;
    local_70 = local_98;
    if (local_98 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_68,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_38);
    local_20 = &local_b0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x48,&local_b0);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy,``FOnlineTestCommon::AddAchievementToTestAccount'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar5[3] = local_80;
      puVar5[4] = local_78;
      puVar5[5] = local_70;
      local_70 = (TReferenceControllerBase<1> *)0x0;
      local_78 = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 6),&local_68)
      ;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if ((local_a0 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*pcVar3)(plVar2,local_a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_50);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  return;
}

// operator() @ 14eb70460

void __thiscall
`FOnlineTestCommon::AddFriendToTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  FName FVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  longlong local_a0;
  TReferenceControllerBase<1> *local_98;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined8 local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  FString local_18;
  
  FVar1 = **(FName **)this;
  pFVar6 = ::FString::FString(&local_18,L"FriendAccountCredentials");
  FOnlineTestCommon::GetSubsystemUniqueId(&local_80,FVar1,pFVar6);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x38) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x38);
  (**(code **)(*plVar3 + 0x120))(plVar3,&local_a0,&local_80);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x48);
  pcVar4 = *(code **)(*plVar3 + 0xf8);
  local_38 = *(undefined8 *)this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_30,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_58);
  local_40 = &local_b0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::AddFriendToTestAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_38;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_30);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  ::FString::FString(&local_90,L"default");
  if (local_a0 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(plVar3,0,local_a0,&local_90,&local_b8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_70);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14eb706d0

void __thiscall
`FOnlineTestCommon::BlockFriendOnTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  FName FVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  longlong local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined8 local_a0;
  longlong local_98;
  TReferenceControllerBase<1> *local_90;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_88;
  FString local_70;
  FString local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  FString local_18;
  
  FVar1 = **(FName **)this;
  pFVar6 = ::FString::FString(&local_18,L"FriendAccountCredentials");
  FOnlineTestCommon::GetSubsystemUniqueId(&local_60,FVar1,pFVar6);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x38) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x38);
  (**(code **)(*plVar3 + 0x120))(plVar3,&local_b0,&local_60);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x48);
  pcVar4 = *(code **)(*plVar3 + 0xf8);
  local_a0 = *(undefined8 *)this;
  local_98 = local_b0;
  local_90 = local_a8;
  if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_88,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_38);
  local_20 = &local_c0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x48,&local_c0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::BlockFriendOnTestAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a0;
    puVar7[4] = local_98;
    puVar7[5] = local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 6),&local_88);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  ::FString::FString(&local_70,L"default");
  if (local_b0 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(plVar3,0,local_b0,&local_70,&local_c8);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_50);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14eb70980

void __thiscall
`FOnlineTestCommon::RejectInviteOnFriendAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FString local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined8 local_28;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x48);
  pcVar3 = *(code **)(*plVar2 + 0xe8);
  local_28 = *(undefined8 *)this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_20,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_48);
  local_30 = &local_80;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_80);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::RejectInviteOnFriendAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_28;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 4),&local_20);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  ::FString::FString(&local_70,L"default");
  (*pcVar3)(plVar2,0,&local_70,&local_88);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_60);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  return;
}

// operator() @ 14eb70b40

void __thiscall
`FOnlineTestCommon::RemoveFriendFromTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FString local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined8 local_28;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_20;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x48);
  pcVar3 = *(code **)(*plVar2 + 0xe8);
  local_28 = *(undefined8 *)this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_20,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_48);
  local_30 = &local_80;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_80);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::RemoveFriendFromTestAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_28;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar5 + 4),&local_20);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  ::FString::FString(&local_70,L"default");
  (*pcVar3)(plVar2,0,&local_70,&local_88);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_60);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  return;
}

// operator() @ 14eb70d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineTestCommon::ResetTestAccountAchievements'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  if ((*(longlong *)(lVar1 + 0x38) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = *(longlong **)(lVar1 + 0x38);
  (**(code **)(*plVar4 + 0x110))(plVar4,&local_48,0);
  if (local_48 == 0) {
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl
                (&local_38,
                 L"OSS Automation: IsValid() check on TestAccountId failed after a call to OnlineIdentity->CreateUniquePlayerId()"
                );
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x68) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar4 = *(longlong **)(lVar1 + 0x68);
    pcVar2 = *(code **)(*plVar4 + 0x38);
    if ((local_48 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(plVar4,local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)((longlong)this + 0x10);
  }
  (**(code **)(*plVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FOnlineTestCommon::Cleanup(*(FOnlineTestCommon **)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// operator() @ 14eb70e90

void __thiscall
`FOnlineTestCommon::SendInviteToFriendAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  FName FVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  longlong local_a0;
  TReferenceControllerBase<1> *local_98;
  FString local_90;
  FString local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined8 local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_30;
  FString local_18;
  
  FVar1 = **(FName **)this;
  pFVar6 = ::FString::FString(&local_18,L"FriendAccountCredentials");
  FOnlineTestCommon::GetSubsystemUniqueId(&local_80,FVar1,pFVar6);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x38) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x38);
  (**(code **)(*plVar3 + 0x120))(plVar3,&local_a0,&local_80);
  lVar2 = *(longlong *)this;
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x48);
  pcVar4 = *(code **)(*plVar3 + 0xf8);
  local_38 = *(undefined8 *)this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_30,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_58);
  local_40 = &local_b0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::SendInviteToFriendAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_38;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_30);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  ::FString::FString(&local_90,L"default");
  if (local_a0 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(plVar3,0,local_a0,&local_90,&local_b8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_70);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14eb71100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FOnlineTestCommon::SendMessageToTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  uint uVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  longlong lVar10;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  FDelegateAllocation local_1a0;
  ForAnyElementType local_190;
  undefined8 local_188;
  TSharedRef<FUniqueNetId_const_,1> local_178;
  char local_168 [8];
  void *local_160;
  ulonglong uStack_158;
  undefined4 local_150;
  TPairInitializer<FString_const_&,FVariantData_const_&> local_148;
  FUniqueNetId *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  FString *local_128;
  char *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  undefined8 local_b0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a8;
  undefined1 local_90 [8];
  FString local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  FVar2 = **(FName **)this;
  pFVar7 = ::FString::FString(&local_88,L"TestAccountCredentials");
  FOnlineTestCommon::GetSubsystemUniqueId(&local_f8,FVar2,pFVar7);
  lVar10 = *(longlong *)this;
  if (*(longlong *)(lVar10 + 0x38) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar10 + 0x38);
  (**(code **)(*plVar3 + 0x120))(plVar3,&local_138,&local_f8);
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if (local_138 == (FUniqueNetId *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_178.Object = local_138;
  local_178.SharedReferenceCount.ReferenceController = pTStack_130;
  if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_138 == (FUniqueNetId *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((local_1b8.Data <= &local_178) &&
     (&local_178 <
      (TSharedRef<FUniqueNetId_const_,1> *)(local_1b8.Data + (longlong)iStack_1ac * 0x10))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_1b0 == iStack_1ac) {
    local_1b0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_1b8,&iStack_1ac);
  }
  lVar10 = (longlong)local_1b0;
  _local_1b0 = CONCAT44(iStack_1ac,local_1b0 + 1);
  *(FUniqueNetId **)&local_1b8.Data[lVar10 * 0x10].field_0x0 = local_178.Object;
  *(TReferenceControllerBase<1> **)(local_1b8.Data + lVar10 * 0x10 + 8) =
       local_178.SharedReferenceCount.ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,&local_190,(int *)((longlong)&local_188 + 4));
  _Src.Data = local_190.Data;
  local_150 = 0;
  local_160 = (void *)0x0;
  uStack_158 = 0;
  local_168[0] = '\b';
  uVar1 = iVar6 + 1;
  local_188 = CONCAT44(local_188._4_4_,uVar1);
  local_190.Data[iVar6] = (FScriptContainerElement)0xde;
  if (uVar1 != 0) {
    uStack_158 = (ulonglong)uVar1;
    local_160 = operator_new__((ulonglong)uVar1);
    memcpy(local_160,_Src.Data,(ulonglong)uVar1);
  }
  ::FString::FString(&local_118,L"STRINGValue");
  local_128 = &local_118;
  local_120 = local_168;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)local_78,&local_148,(bool *)&local_128);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (((local_168[0] == '\x06') || (local_168[0] == '\b')) || (local_168[0] == '\n')) {
    operator_delete__(local_160);
  }
  lVar10 = *(longlong *)this;
  local_168[0] = '\0';
  local_160 = (void *)0x0;
  uStack_158 = 0;
  local_150 = 0;
  if (*(longlong *)(lVar10 + 0x58) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar10 + 0x58);
  pcVar4 = *(code **)(*plVar3 + 0x88);
  local_b0 = *(undefined8 *)this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_a8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_d0);
  local_b8 = &local_1a0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_1a0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::SendMessageToTestAccount'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_b0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 4),&local_a8);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  puVar8 = (undefined8 *)(*pcVar4)(plVar3,local_90,0,&local_1a8);
  *(undefined8 *)(*(longlong *)this + 0xb0) = *puVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_e8);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a8);
  lVar10 = *(longlong *)this;
  if (*(longlong *)(lVar10 + 0x58) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)(lVar10 + 0x58);
  pcVar4 = *(code **)(*plVar3 + 0x80);
  ::FString::FString(&local_108,L"TEST");
  (*pcVar4)(plVar3,0,&local_1b8,&local_108);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar6 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)local_1b8.Data,local_1b0);
  if ((TSharedRef<FUniqueNetId_const_,1> *)local_1b8.Data !=
      (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_130);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14eb71730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOnlineTestCommon::UnblockFriendOnTestAccount'::__l2::<lambda_1>::operator()
          (void *this,int param_1,bool param_2,FUniqueNetId *param_3,FString *param_4)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  longlong local_e0;
  TReferenceControllerBase<1> *local_d8;
  FString local_d0;
  FString local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  undefined8 local_78;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70;
  FReadAccessScope local_58;
  FString local_40;
  
  FVar1 = **(FName **)this;
  pFVar5 = ::FString::FString(&local_40,L"FriendAccountCredentials");
  FOnlineTestCommon::GetSubsystemUniqueId(&local_c0,FVar1,pFVar5);
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x38) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar8 = *(longlong **)(lVar2 + 0x38);
  (**(code **)(*plVar8 + 0x120))(plVar8,&local_e0);
  if (local_e0 == 0) {
    if (1 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl
                (&local_d0,
                 L"OSS Automation: IsValid() check on FriendAccountId failed after a call to OnlineIdentity->CreateUniquePlayerId()"
                );
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               &local_58);
    if (*(int *)((longlong)this + 0x18) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)((longlong)this + 0x10);
    }
    (**(code **)(*plVar8 + 0x60))(plVar8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  else {
    lVar2 = *(longlong *)this;
    if ((*(longlong *)(lVar2 + 0x48) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar8 = *(longlong **)(lVar2 + 0x48);
    pcVar3 = *(code **)(*plVar8 + 0x188);
    local_78 = *(undefined8 *)this;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_70,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f8,(FWriteAccessScope *)&local_98);
    local_80 = &local_f0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy,``FOnlineTestCommon::UnblockFriendOnTestAccount'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar6[3] = local_78;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 4),&local_70)
      ;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    puVar6 = (undefined8 *)(*pcVar3)(plVar8,local_res8,0,&local_f8);
    *(undefined8 *)(*(longlong *)this + 0xa8) = *puVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_f8,(FWriteAccessScope *)&local_b0);
    if ((local_f0.DelegateSize != 0) &&
       (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f0,0,0,0x10);
      local_f0.DelegateSize = 0;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70);
    lVar2 = *(longlong *)this;
    if ((*(longlong *)(lVar2 + 0x48) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar8 = *(longlong **)(lVar2 + 0x48);
    pcVar3 = *(code **)(*plVar8 + 0x268);
    if ((local_e0 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*pcVar3)(plVar8,0,local_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// AddAchievementToTestAccount @ 14ebb6590

void __thiscall
FOnlineTestCommon::AddAchievementToTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineAchievements,1> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineAchievements *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FOnlineTestCommon *local_68;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  IOnlineIdentity *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  IOnlineAchievements *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (this->OnlineIdentity).Object;
  pTStack_40 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (this->OnlineAchievements).Object;
  pTStack_30 = (this->OnlineAchievements).SharedReferenceCount.ReferenceController;
  (this->OnlineAchievements).Object = pIVar3;
  (this->OnlineAchievements).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_68 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_60,param_3);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_88);
  local_70 = &local_b0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::AddAchievementToTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = local_68;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 4),&local_60);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  puVar8 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_b8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_a0);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddFriendToTestAccount @ 14ebb67e0

void __thiscall
FOnlineTestCommon::AddFriendToTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FOnlineTestCommon *local_a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a0;
  IOnlineIdentity *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  IOnlineFriends *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FOnlineAccountCredentials local_68;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (this->OnlineIdentity).Object;
  pTStack_80 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->OnlineFriends).Object;
  pTStack_70 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  this->SubsystemType = param_3;
  pFVar6 = ::FString::FString(&local_38,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_68,param_3,pFVar6);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_68);
  if (local_68.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Token.Data.AllocatorInstance.Data);
  }
  if (local_68.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Id.Data.AllocatorInstance.Data);
  }
  if (local_68.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Type.Data.AllocatorInstance.Data);
  }
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_a8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_a0,param_4);
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_c8);
  local_b0 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::AddFriendToTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_a0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  puVar9 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_f8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BlockFriendOnTestAccount @ 14ebb8340

void __thiscall
FOnlineTestCommon::BlockFriendOnTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulong64 *puVar10;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FOnlineTestCommon *local_e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_e0;
  IOnlineIdentity *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  IOnlineFriends *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FOnlineAccountCredentials local_a8;
  FOnlineAccountCredentials local_78;
  FString local_48;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = (this->OnlineIdentity).Object;
  pTStack_c0 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = (this->OnlineFriends).Object;
  pTStack_b0 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  this->SubsystemType = param_3;
  pFVar7 = ::FString::FString(&local_48,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_a8,param_3,pFVar7);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_a8);
  if (local_a8.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Token.Data.AllocatorInstance.Data);
  }
  if (local_a8.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Id.Data.AllocatorInstance.Data);
  }
  if (local_a8.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Type.Data.AllocatorInstance.Data);
  }
  FVar4 = this->SubsystemType;
  pFVar7 = ::FString::FString(&local_38,L"FriendAccountCredentials");
  GetSubsystemCredentials(&local_78,FVar4,pFVar7);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x98))(pIVar2,0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar5 = *(code **)(pIVar2->_padding_ + 0x90);
  local_e8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_e0,param_4);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_108);
  local_f0 = &local_130;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::BlockFriendOnTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_e8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 4),&local_e0);
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  puVar10 = (ulong64 *)(*pcVar5)(pIVar2,local_res8,0,&local_138);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_120);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  if (local_78.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Token.Data.AllocatorInstance.Data);
  }
  if (local_78.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Id.Data.AllocatorInstance.Data);
  }
  if (local_78.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Type.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Cleanup @ 14ebbbbb0

void __thiscall FOnlineTestCommon::Cleanup(FOnlineTestCommon *this)

{
  TSharedPtr<IOnlineIdentity,1> *pTVar1;
  TSharedPtr<IOnlineFriends,1> *pTVar2;
  IOnlineIdentity *pIVar3;
  IOnlineFriends *pIVar4;
  IOnlineMessage *pIVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  FName local_res8;
  FOnlineAccountCredentials local_b8;
  longlong local_88;
  FSharedReferencer<1> FStack_80;
  longlong local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar1 = &this->OnlineIdentity;
  pIVar3 = pTVar1->Object;
  if (pIVar3 != (IOnlineIdentity *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x98))(pIVar3,0,&this->OnLoginCompleteDelegateHandle);
    if (pTVar1->Object == (IOnlineIdentity *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(pTVar1->Object->_padding_ + 0xc0))
              (pTVar1->Object,0,&this->OnLogoutCompleteDelegateHandle);
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<IOnlineIdentity,1> *)&local_88) {
      pTVar1->Object = (IOnlineIdentity *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OnlineIdentity).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
  pIVar4 = (this->OnlineFriends).Object;
  pTVar2 = &this->OnlineFriends;
  if (pIVar4 != (IOnlineFriends *)0x0) {
    (**(code **)(pIVar4->_padding_ + 0x170))(pIVar4,0,&this->OnBlockedPlayerCompleteDelegateHandle);
    if (pTVar2->Object == (IOnlineFriends *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(pTVar2->Object->_padding_ + 400))
              (pTVar2->Object,0,&this->OnUnblockedPlayerCompleteDelegateHandle);
    if (pTVar2->Object == (IOnlineFriends *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(pTVar2->Object->_padding_ + 0x150))
              (pTVar2->Object,0,&this->OnDeleteFriendCompleteDelegateHandle);
    if (pTVar2->Object == (IOnlineFriends *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (**(code **)(pTVar2->Object->_padding_ + 0x128))
              (pTVar2->Object,0,&this->OnRejectInviteCompleteDelegateHandle);
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<IOnlineFriends,1> *)&local_78) {
      pTVar2->Object = (IOnlineFriends *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OnlineFriends).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
  }
  pIVar5 = (this->OnlineMessage).Object;
  if (pIVar5 != (IOnlineMessage *)0x0) {
    (**(code **)(pIVar5->_padding_ + 0x90))(pIVar5,0,&this->OnSendMessageCompleteDelegateHandle);
    local_68 = 0;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->OnlineMessage != (TSharedPtr<IOnlineMessage,1> *)&local_68) {
      (this->OnlineMessage).Object = (IOnlineMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OnlineMessage).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
  }
  if ((this->OnlineAchievements).Object != (IOnlineAchievements *)0x0) {
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->OnlineAchievements != (TSharedPtr<IOnlineAchievements,1> *)&local_58) {
      (this->OnlineAchievements).Object = (IOnlineAchievements *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OnlineAchievements).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  ::FName::FName(&local_res8,L"");
  this->SubsystemType = local_res8;
  ::FString::FString(&local_28,L"");
  ::FString::FString(&local_38,L"");
  ::FString::FString(&local_48,L"");
  FVar7.Data = local_48.Data.AllocatorInstance.Data;
  local_b8.Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_b8.Type.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_48.Data.ArrayNum,
               &local_b8.Type.Data.ArrayMax);
    memcpy(local_b8.Type.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_48.Data.ArrayNum * 2
          );
  }
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  local_b8.Id.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_b8.Id.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_b8.Id,local_38.Data.ArrayNum
               ,&local_b8.Id.Data.ArrayMax);
    memcpy(local_b8.Id.Data.AllocatorInstance.Data,FVar7.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  FVar7.Data = local_28.Data.AllocatorInstance.Data;
  local_b8.Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_b8.Token.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_b8.Token,
               local_28.Data.ArrayNum,&local_b8.Token.Data.ArrayMax);
    memcpy(local_b8.Token.Data.AllocatorInstance.Data,FVar7.Data,
           (longlong)local_28.Data.ArrayNum * 2);
  }
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_b8);
  if (local_b8.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Token.Data.AllocatorInstance.Data);
  }
  if (local_b8.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Id.Data.AllocatorInstance.Data);
  }
  if (local_b8.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Type.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetEnabledTestSubsystems @ 14ebffba0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FOnlineTestCommon::GetEnabledTestSubsystems
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  void *_Src;
  FName *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"OnlineSubsystemAutomation",L"EnabledTestSubsystem",&local_58,&GEngineIni);
  iVar3 = local_58.ArrayNum;
  pFVar11 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  FVar9.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar9.Data == pFVar11) break;
    local_40 = *(int *)(FVar9.Data + 8);
    lVar10 = (longlong)local_40;
    _Src = *(void **)FVar9.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,_Src,lVar10 * 2);
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40 != 0) {
      FVar8.Data = local_48.Data;
    }
    pFVar6 = ::FName::FName(&local_res10,(wchar_t *)FVar8.Data);
    pFVar1 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = *pFVar6;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSubsystemCredentials @ 14ec02c60

FOnlineAccountCredentials * __cdecl
FOnlineTestCommon::GetSubsystemCredentials
          (FOnlineAccountCredentials *__return_storage_ptr__,FName param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FName local_res10 [2];
  FString local_b8;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10[0] = param_1;
  pFVar4 = ::FName::ToString(local_res10,&local_b8);
  iVar7 = (pFVar4->Data).ArrayNum;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(param_2,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
  local_a0 = (param_2->Data).ArrayNum;
  lVar5 = (longlong)local_a0;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pFVar2,lVar5 * 2);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_a0 != 0) {
    FVar8.Data = local_a8.Data;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"OnlineSubsystemAutomation",(wchar_t *)FVar8.Data,&local_78,&GEngineIni);
  if (local_78.Data.ArrayNum < 2) {
    (__return_storage_ptr__->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Type).Data.ArrayNum = 0;
    (__return_storage_ptr__->Type).Data.ArrayMax = 0;
    (__return_storage_ptr__->Id).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Id).Data.ArrayNum = 0;
    (__return_storage_ptr__->Id).Data.ArrayMax = 0;
    (__return_storage_ptr__->Token).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Token).Data.ArrayNum = 0;
    (__return_storage_ptr__->Token).Data.ArrayMax = 0;
  }
  else {
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_b8,L":");
    bVar3 = ::FString::Split(&local_78,&local_b8,&local_58,&local_48);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      ::FString::FString(&local_b8,L":");
      bVar3 = ::FString::Split(&local_48,&local_b8,&local_68,&local_98);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        ::FString::FString(&local_b8,L":");
        bVar3 = ::FString::Split(&local_98,&local_b8,&local_88,&local_38);
        if ((bVar3) || (local_98.Data.ArrayNum < 2)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          iVar7 = local_98.Data.ArrayNum + -1;
          if (local_98.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          ::FString::AssignRange(&local_88,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar7);
        }
      }
    }
    FVar8.Data = local_88.Data.AllocatorInstance.Data;
    lVar5 = (longlong)local_88.Data.ArrayNum;
    piVar1 = &(__return_storage_ptr__->Type).Data.ArrayMax;
    (__return_storage_ptr__->Type).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Type).Data.ArrayNum = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_88.Data.ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->Type).Data.AllocatorInstance.Data,FVar8.Data,lVar5 * 2);
    }
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
    lVar5 = (longlong)local_58.Data.ArrayNum;
    pFVar4 = &__return_storage_ptr__->Id;
    piVar1 = &(__return_storage_ptr__->Id).Data.ArrayMax;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Id).Data.ArrayNum = local_58.Data.ArrayNum;
    if (local_58.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_58.Data.ArrayNum,
                 piVar1);
      memcpy((pFVar4->Data).AllocatorInstance.Data,FVar8.Data,lVar5 * 2);
    }
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
    lVar5 = (longlong)local_68.Data.ArrayNum;
    pFVar4 = &__return_storage_ptr__->Token;
    piVar1 = &(__return_storage_ptr__->Token).Data.ArrayMax;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Token).Data.ArrayNum = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_68.Data.ArrayNum,
                 piVar1);
      memcpy((pFVar4->Data).AllocatorInstance.Data,FVar8.Data,lVar5 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// GetSubsystemFriendAccountCredentials @ 14ec03020

FOnlineAccountCredentials * __cdecl
FOnlineTestCommon::GetSubsystemFriendAccountCredentials
          (FOnlineAccountCredentials *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"FriendAccountCredentials");
  GetSubsystemCredentials(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// GetSubsystemFriendAccountUniqueId @ 14ec03070

FString * __cdecl
FOnlineTestCommon::GetSubsystemFriendAccountUniqueId(FString *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"FriendAccountCredentials");
  GetSubsystemUniqueId(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// GetSubsystemTestAccountCredentials @ 14ec030e0

FOnlineAccountCredentials * __cdecl
FOnlineTestCommon::GetSubsystemTestAccountCredentials
          (FOnlineAccountCredentials *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"TestAccountCredentials");
  GetSubsystemCredentials(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// GetSubsystemTestAccountUniqueId @ 14ec03130

FString * __cdecl
FOnlineTestCommon::GetSubsystemTestAccountUniqueId(FString *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"TestAccountCredentials");
  GetSubsystemUniqueId(__return_storage_ptr__,param_1,pFVar1);
  return __return_storage_ptr__;
}

// GetSubsystemUniqueId @ 14ec03180

FString * __cdecl
FOnlineTestCommon::GetSubsystemUniqueId
          (FString *__return_storage_ptr__,FName param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  longlong lVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FName local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_28);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(param_2,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
  local_50 = (param_2->Data).ArrayNum;
  lVar4 = (longlong)local_50;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar2,lVar4 * 2);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_50 != 0) {
    FVar6.Data = local_58.Data;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"OnlineSubsystemAutomation",(wchar_t *)FVar6.Data,&local_48,&GEngineIni);
  if (1 < local_48.Data.ArrayNum) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_28,L":");
    ::FString::Split(&local_48,&local_28,&local_38,__return_storage_ptr__,IgnoreCase,FromEnd);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// RejectInviteOnFriendAccount @ 14ec0f870

void __thiscall
FOnlineTestCommon::RejectInviteOnFriendAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FOnlineTestCommon *local_a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a0;
  IOnlineIdentity *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  IOnlineFriends *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FOnlineAccountCredentials local_68;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (this->OnlineIdentity).Object;
  pTStack_80 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->OnlineFriends).Object;
  pTStack_70 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  this->SubsystemType = param_3;
  pFVar6 = ::FString::FString(&local_38,L"FriendAccountCredentials");
  GetSubsystemCredentials(&local_68,param_3,pFVar6);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x98))(pIVar2,0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_a8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_a0,param_4);
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_c8);
  local_b0 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::RejectInviteOnFriendAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_a0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  puVar9 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_f8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&local_68);
  if (local_68.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Token.Data.AllocatorInstance.Data);
  }
  if (local_68.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Id.Data.AllocatorInstance.Data);
  }
  if (local_68.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Type.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveFriendFromTestAccount @ 14ec10000

void __thiscall
FOnlineTestCommon::RemoveFriendFromTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FOnlineTestCommon *local_a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a0;
  IOnlineIdentity *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  IOnlineFriends *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FOnlineAccountCredentials local_68;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (this->OnlineIdentity).Object;
  pTStack_80 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->OnlineFriends).Object;
  pTStack_70 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  this->SubsystemType = param_3;
  pFVar6 = ::FString::FString(&local_38,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_68,param_3,pFVar6);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_68);
  if (local_68.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Token.Data.AllocatorInstance.Data);
  }
  if (local_68.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Id.Data.AllocatorInstance.Data);
  }
  if (local_68.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Type.Data.AllocatorInstance.Data);
  }
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x98))(pIVar2,0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_a8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_a0,param_4);
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_c8);
  local_b0 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::RemoveFriendFromTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_a0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  puVar9 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_f8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ResetTestAccountAchievements @ 14ec10fd0

void __thiscall
FOnlineTestCommon::ResetTestAccountAchievements
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineAchievements,1> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineAchievements *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FOnlineTestCommon *local_68;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  IOnlineIdentity *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  IOnlineAchievements *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (this->OnlineIdentity).Object;
  pTStack_40 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (this->OnlineAchievements).Object;
  pTStack_30 = (this->OnlineAchievements).SharedReferenceCount.ReferenceController;
  (this->OnlineAchievements).Object = pIVar3;
  (this->OnlineAchievements).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_68 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_60,param_3);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_88);
  local_70 = &local_b0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::ResetTestAccountAchievements'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = local_68;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 4),&local_60);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  puVar8 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_b8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_a0);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SendInviteToFriendAccount @ 14ec11310

void __thiscall
FOnlineTestCommon::SendInviteToFriendAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  ulong64 *puVar9;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FOnlineTestCommon *local_a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_a0;
  IOnlineIdentity *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  IOnlineFriends *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FOnlineAccountCredentials local_68;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (this->OnlineIdentity).Object;
  pTStack_80 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->OnlineFriends).Object;
  pTStack_70 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  this->SubsystemType = param_3;
  pFVar6 = ::FString::FString(&local_38,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_68,param_3,pFVar6);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_68);
  if (local_68.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Token.Data.AllocatorInstance.Data);
  }
  if (local_68.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Id.Data.AllocatorInstance.Data);
  }
  if (local_68.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Type.Data.AllocatorInstance.Data);
  }
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x90);
  local_a8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_a0,param_4);
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_c8);
  local_b0 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::SendInviteToFriendAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = local_a8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 4),&local_a0);
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  puVar9 = (ulong64 *)(*pcVar4)(pIVar2,local_res8,0,&local_f8);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_e0);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SendMessageToTestAccount @ 14ec115e0

void __thiscall
FOnlineTestCommon::SendMessageToTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,TSharedPtr<IOnlineMessage,1> *param_3,FName param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineMessage *pIVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulong64 *puVar10;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FOnlineTestCommon *local_e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_e0;
  IOnlineIdentity *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  IOnlineMessage *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FOnlineAccountCredentials local_a8;
  FOnlineAccountCredentials local_78;
  FString local_48;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = (this->OnlineIdentity).Object;
  pTStack_c0 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pIVar3 = param_3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = (this->OnlineMessage).Object;
  pTStack_b0 = (this->OnlineMessage).SharedReferenceCount.ReferenceController;
  (this->OnlineMessage).Object = pIVar3;
  (this->OnlineMessage).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  this->SubsystemType = param_4;
  pFVar7 = ::FString::FString(&local_48,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_a8,param_4,pFVar7);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_a8);
  if (local_a8.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Token.Data.AllocatorInstance.Data);
  }
  if (local_a8.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Id.Data.AllocatorInstance.Data);
  }
  if (local_a8.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Type.Data.AllocatorInstance.Data);
  }
  FVar4 = this->SubsystemType;
  pFVar7 = ::FString::FString(&local_38,L"FriendAccountCredentials");
  GetSubsystemCredentials(&local_78,FVar4,pFVar7);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar5 = *(code **)(pIVar2->_padding_ + 0x90);
  local_e8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_e0,param_5);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_108);
  local_f0 = &local_130;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::SendMessageToTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_e8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 4),&local_e0);
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  puVar10 = (ulong64 *)(*pcVar5)(pIVar2,local_res8,0,&local_138);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_120);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&local_78);
  if (local_78.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Token.Data.AllocatorInstance.Data);
  }
  if (local_78.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Id.Data.AllocatorInstance.Data);
  }
  if (local_78.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Type.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UnblockFriendOnTestAccount @ 14ec1ae60

void __thiscall
FOnlineTestCommon::UnblockFriendOnTestAccount
          (FOnlineTestCommon *this,TSharedPtr<IOnlineIdentity,1> *param_1,
          TSharedPtr<IOnlineFriends,1> *param_2,FName param_3,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IOnlineIdentity *pIVar2;
  IOnlineFriends *pIVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ulong64 *puVar10;
  undefined1 local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FOnlineTestCommon *local_e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_e0;
  IOnlineIdentity *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  IOnlineFriends *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FOnlineAccountCredentials local_a8;
  FOnlineAccountCredentials local_78;
  FString local_48;
  FString local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = (this->OnlineIdentity).Object;
  pTStack_c0 = (this->OnlineIdentity).SharedReferenceCount.ReferenceController;
  (this->OnlineIdentity).Object = pIVar2;
  (this->OnlineIdentity).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = (this->OnlineFriends).Object;
  pTStack_b0 = (this->OnlineFriends).SharedReferenceCount.ReferenceController;
  (this->OnlineFriends).Object = pIVar3;
  (this->OnlineFriends).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  this->SubsystemType = param_3;
  pFVar7 = ::FString::FString(&local_48,L"TestAccountCredentials");
  GetSubsystemCredentials(&local_a8,param_3,pFVar7);
  FOnlineAccountCredentials::operator=(&this->AccountCredentials,&local_a8);
  if (local_a8.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Token.Data.AllocatorInstance.Data);
  }
  if (local_a8.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Id.Data.AllocatorInstance.Data);
  }
  if (local_a8.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Type.Data.AllocatorInstance.Data);
  }
  FVar4 = this->SubsystemType;
  pFVar7 = ::FString::FString(&local_38,L"FriendAccountCredentials");
  GetSubsystemCredentials(&local_78,FVar4,pFVar7);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x98))(pIVar2,0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  pcVar5 = *(code **)(pIVar2->_padding_ + 0x90);
  local_e8 = this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_e0,param_4);
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_108);
  local_f0 = &local_130;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_130);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineTestCommon::UnblockFriendOnTestAccount'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = local_e8;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 4),&local_e0);
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  puVar10 = (ulong64 *)(*pcVar5)(pIVar2,local_res8,0,&local_138);
  (this->OnLoginCompleteDelegateHandle).ID = *puVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_120);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e0);
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pIVar2 = (this->OnlineIdentity).Object;
  (**(code **)(pIVar2->_padding_ + 0x88))(pIVar2,0,&this->AccountCredentials);
  if (local_78.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Token.Data.AllocatorInstance.Data);
  }
  if (local_78.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Id.Data.AllocatorInstance.Data);
  }
  if (local_78.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Type.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

