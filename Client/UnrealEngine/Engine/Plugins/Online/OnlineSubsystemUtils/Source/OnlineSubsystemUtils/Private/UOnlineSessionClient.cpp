// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 28

// StaticClass @ 14ec429a0

UClass * __cdecl UOnlineSessionClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineSessionClient",
               &Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton,
               StaticRegisterNativesUOnlineSessionClient,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UOnlineSessionClient>,
               InternalVTableHelperCtorCaller<UOnlineSessionClient>,local_res8,
               UOnlineSession::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton;
}

// UOnlineSessionClient @ 14ec54d90

UOnlineSessionClient * __thiscall
UOnlineSessionClient::UOnlineSessionClient(UOnlineSessionClient *this,FVTableHelper *param_1)

{
  UOnlineSession::UOnlineSession((UOnlineSession *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlineSessionClient__6B_;
  *(undefined8 *)&this->OnEndForJoinSessionCompleteDelegate = 0;
  (this->CachedSessionResult).Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  *(undefined8 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroyForJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroyForMainMenuCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionUserInviteAcceptedDelegate = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x10 = 0;
  (this->OnSessionInviteAcceptedDelegateHandle).ID = 0;
  (this->OnEndForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroyForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroyForMainMenuCompleteDelegateHandle).ID = 0;
  (this->OnJoinSessionCompleteDelegateHandle).ID = 0;
  (this->StartSessionCompleteHandle).ID = 0;
  (this->EndSessionCompleteHandle).ID = 0;
  (this->OnSessionUserInviteAcceptedDelegateHandle).ID = 0;
  (this->CachedSessionResult).Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayNum = 0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  (this->CachedSessionResult).Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.NumOpenPrivateConnections = 0;
  (this->CachedSessionResult).Session.NumOpenPublicConnections = 0;
  (this->CachedSessionResult).PingInMs = 9999;
  return this;
}

// UOnlineSessionClient @ 14ec54ea0

UOnlineSessionClient * __thiscall
UOnlineSessionClient::UOnlineSessionClient(UOnlineSessionClient *this,FObjectInitializer *param_1)

{
  UOnlineSession::UOnlineSession((UOnlineSession *)this,param_1);
  this->_padding_ = (longlong)&___7UOnlineSessionClient__6B_;
  *(undefined8 *)&this->OnEndForJoinSessionCompleteDelegate = 0;
  (this->CachedSessionResult).Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  *(undefined8 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroyForJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroyForMainMenuCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionUserInviteAcceptedDelegate = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x10 = 0;
  (this->OnSessionInviteAcceptedDelegateHandle).ID = 0;
  (this->OnEndForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroyForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroyForMainMenuCompleteDelegateHandle).ID = 0;
  (this->OnJoinSessionCompleteDelegateHandle).ID = 0;
  (this->StartSessionCompleteHandle).ID = 0;
  (this->EndSessionCompleteHandle).ID = 0;
  (this->OnSessionUserInviteAcceptedDelegateHandle).ID = 0;
  (this->CachedSessionResult).Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayNum = 0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  (this->CachedSessionResult).Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.NumOpenPrivateConnections = 0;
  (this->CachedSessionResult).Session.NumOpenPublicConnections = 0;
  (this->CachedSessionResult).PingInMs = 9999;
  this->bIsFromInvite = false;
  this->bHandlingDisconnect = false;
  return this;
}

// ~UOnlineSessionClient @ 14ec57820

void __thiscall UOnlineSessionClient::~UOnlineSessionClient(UOnlineSessionClient *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UOnlineSessionClient__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.
             ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  pFVar1 = (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.
             ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSessionUserInviteAcceptedDelegate
            );
  pvVar2 = *(void **)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionUserInviteAcceptedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForMainMenuCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroyForMainMenuCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroyForMainMenuCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroyForJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndForJoinSessionCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndForJoinSessionCompleteDelegate);
  UOnlineSession::~UOnlineSession((UOnlineSession *)this);
  return;
}

// ClearOnlineDelegates @ 14ec62560

void __thiscall UOnlineSessionClient::ClearOnlineDelegates(UOnlineSessionClient *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_18);
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_18 + 0x338))(local_18,&this->OnSessionUserInviteAcceptedDelegateHandle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// DestroyExistingSession @ 14ec6c3a0

void __thiscall
UOnlineSessionClient::DestroyExistingSession
          (UOnlineSessionClient *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  FDelegateHandle local_res20;
  
  DestroyExistingSession_Impl(this,&local_res20,param_1,param_2);
  return;
}

// DestroyExistingSession_Impl @ 14ec6c3c0

void __thiscall
UOnlineSessionClient::DestroyExistingSession_Impl
          (UOnlineSessionClient *this,FDelegateHandle *param_1,FName param_2,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType local_60;
  ulonglong local_58;
  FDestructionSentinel local_50;
  FReadAccessScope local_38;
  
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_78);
  if (local_78 == (longlong *)0x0) {
    param_1->ID = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2,1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  else {
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar4 = (ulong64 *)(**(code **)(*local_78 + 0xf0))(local_78,local_res8,param_3);
    param_1->ID = *puVar4;
    if ((local_78 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_58 = 0;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.Data = (FScriptContainerElement *)0x0;
    (**(code **)(*local_78 + 0xe8))(local_78,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (((int)local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return;
}

// EndExistingSession @ 14ec6d810

void __thiscall
UOnlineSessionClient::EndExistingSession
          (UOnlineSessionClient *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  undefined1 local_res20 [8];
  
  EndExistingSession_Impl
            (this,(FName)local_res20,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)param_1);
  return;
}

// EndExistingSession_Impl @ 14ec6d830

FDelegateHandle __thiscall
UOnlineSessionClient::EndExistingSession_Impl
          (UOnlineSessionClient *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  longlong lVar1;
  atomic<unsigned___int64> aVar2;
  code *pcVar3;
  bool bVar4;
  FDelegateHandle FVar5;
  undefined8 *puVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R9;
  undefined1 local_res8 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  lVar1 = this->_padding_;
  *(undefined8 *)param_1 = 0;
  (**(code **)(lVar1 + 0x2e8))(this,&local_38);
  if (local_38 == (longlong *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R9,&local_28);
    if ((*(int *)&in_R9[2].AccessDetector.State != 0) &&
       (aVar2 = in_R9[1].AccessDetector.State, aVar2 != (atomic<unsigned___int64>)0x0)) {
      (**(code **)(*(longlong *)aVar2 + 0x68))(aVar2,param_2,1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar5.ID = (*pcVar3)();
      return (FDelegateHandle)FVar5.ID;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_38 + 200))(local_38,local_res8);
    *(undefined8 *)param_1 = *puVar6;
    if ((local_38 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar5.ID = (*pcVar3)();
      return (FDelegateHandle)FVar5.ID;
    }
    (**(code **)(*local_38 + 0xc0))(local_38,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return (FDelegateHandle)param_1;
}

// EndOnlineSession @ 14ec6dad0

void __thiscall UOnlineSessionClient::EndOnlineSession(UOnlineSessionClient *this,FName param_1)

{
  longlong *plVar1;
  code *pcVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName local_res8;
  undefined1 local_res18 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(this->_padding_ + 0x180))();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_78);
    plVar1 = (longlong *)*plVar4;
    pTVar9 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_70.DelegateAllocator);
    if (((plVar1 != (longlong *)0x0) &&
        (lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), lVar5 != 0)) &&
       (*(int *)(lVar5 + 0x148) == 4)) {
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      pcVar2 = *(code **)(*plVar1 + 200);
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
        puVar6[4] = _vcall__768__flat______;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      puVar8 = (ulong64 *)(*pcVar2)(plVar1,local_res18);
      (this->EndSessionCompleteHandle).ID = *puVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// GetGameInstance @ 14ec754c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall UOnlineSessionClient::GetGameInstance(UOnlineSessionClient *this)

{
  int iVar1;
  UGameInstance *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UGameInstance *)this->_padding_;
  if (pUVar2 == (UGameInstance *)0x0) {
    pFVar4 = GetTypeName<UGameInstance>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UGameInstance_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UGameInstance>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 14ec789f0

UClass * __cdecl UOnlineSessionClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineSessionClient",
               &Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton,
               StaticRegisterNativesUOnlineSessionClient,0x208,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UOnlineSessionClient>,
               InternalVTableHelperCtorCaller<UOnlineSessionClient>,local_res8,
               UOnlineSession::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineSessionClient.InnerSingleton;
}

// GetSessionInt @ 14ec78d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IOnlineSession,1> * __thiscall
UOnlineSessionClient::GetSessionInt
          (UOnlineSessionClient *this,TSharedPtr<IOnlineSession,1> *__return_storage_ptr__)

{
  UWorld *pUVar1;
  FString local_18;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (pUVar1 == (UWorld *)0x0) {
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl
                (&local_18,L"UOnlineSessionClient::GetSessionInt: Called with NULL world.");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IOnlineSession *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  Online::GetSessionInterface(__return_storage_ptr__,pUVar1,(FName)0x0);
  return __return_storage_ptr__;
}

// GetWorld @ 14ec79b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UOnlineSessionClient::GetWorld(UOnlineSessionClient *this)

{
  UGameInstance *this_00;
  UWorld *pUVar1;
  
  this_00 = (UGameInstance *)(**(code **)(this->_padding_ + 0x2e0))();
  pUVar1 = UGameInstance::GetWorld(this_00);
  return pUVar1;
}

// HandleDisconnect @ 14ec7c940

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
UOnlineSessionClient::HandleDisconnect
          (UOnlineSessionClient *this,UWorld *param_1,UNetDriver *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2f0))();
  if (cVar1 == '\0') {
    UEngine::HandleDisconnect(GEngine,param_1,param_2);
  }
  return;
}

// HandleDisconnectInternal @ 14ec7c980

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
UOnlineSessionClient::HandleDisconnectInternal
          (UOnlineSessionClient *this,UWorld *param_1,UNetDriver *param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  UWorld *pUVar3;
  undefined4 extraout_var;
  uint local_res8 [2];
  
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (pUVar3 == param_1) {
    if (this->bHandlingDisconnect == false) {
      this->bHandlingDisconnect = true;
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      DestroyExistingSession_Impl
                (this,&this->OnDestroyForMainMenuCompleteDelegateHandle,FVar1,
                 &this->OnDestroyForMainMenuCompleteDelegate);
    }
    return true;
  }
  return false;
}

// JoinSession @ 14ec820c0

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
UOnlineSessionClient::JoinSession
          (UOnlineSessionClient *this,FName param_1,FOnlineSessionSearchResult *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDelegateHandle FVar4;
  longlong *plVar5;
  UGameInstance *this_00;
  ULocalPlayer *pUVar6;
  undefined1 local_res8 [8];
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_18);
  if (local_18 != (longlong *)0x0) {
    if ((local_18 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (**(code **)(*local_18 + 0x38))(local_18,param_1);
    if (iVar3 == 0) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(this);
      pcVar1 = *(code **)(*plVar5 + 0x300);
      this_00 = (UGameInstance *)(**(code **)(this->_padding_ + 0x2e0))(this);
      pUVar6 = UGameInstance::GetFirstGamePlayer(this_00);
      (*pcVar1)(plVar5,pUVar6,param_2);
    }
    else {
      FOnlineSessionSearchResult::operator=(&this->CachedSessionResult,param_2);
      FVar4 = EndExistingSession_Impl
                        (this,(FName)local_res8,
                         (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)param_1);
                    /* WARNING: Load size is inaccurate */
      (this->OnEndForJoinSessionCompleteDelegateHandle).ID = *FVar4.ID;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// OnDestroyForJoinSessionComplete @ 14ec86dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnlineSessionClient::OnDestroyForJoinSessionComplete
          (UOnlineSessionClient *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res10 [3];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnDestroyForJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_38);
  if (local_38 != (longlong *)0x0) {
    if ((local_38 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_38 + 0xf8))(local_38,&this->OnDestroyForJoinSessionCompleteDelegateHandle);
  }
  if (param_2) {
    (**(code **)(this->_padding_ + 0x308))(this,local_res10[0],&this->CachedSessionResult);
  }
  this->bHandlingDisconnect = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// OnDestroyForMainMenuComplete @ 14ec86f10

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
UOnlineSessionClient::OnDestroyForMainMenuComplete
          (UOnlineSessionClient *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UNetDriver *pUVar4;
  FName local_res10 [3];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnDestroyForMainMenuComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_38);
  if (local_38 != (longlong *)0x0) {
    if ((local_38 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_38 + 0xf8))(local_38,&this->OnDestroyForMainMenuCompleteDelegateHandle);
  }
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (pUVar3 == (UWorld *)0x0) {
    pUVar4 = (UNetDriver *)0x0;
  }
  else {
    pUVar4 = (pUVar3->NetDriver).field0_0x0.DebugPtr;
  }
  UEngine::HandleDisconnect(GEngine,pUVar3,pUVar4);
  this->bHandlingDisconnect = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// OnEndForJoinSessionComplete @ 14ec87430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnlineSessionClient::OnEndForJoinSessionComplete
          (UOnlineSessionClient *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res10 [3];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnEndForJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_38);
  if (local_38 != (longlong *)0x0) {
    if ((local_38 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_38 + 0xd0))(local_38,&this->OnEndForJoinSessionCompleteDelegateHandle);
  }
  DestroyExistingSession_Impl
            (this,&this->OnDestroyForJoinSessionCompleteDelegateHandle,local_res10[0],
             &this->OnDestroyForJoinSessionCompleteDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

// OnEndSessionComplete @ 14ec876b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnlineSessionClient::OnEndSessionComplete(UOnlineSessionClient *this,FName param_1,bool param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res8;
  FName local_res10;
  FString local_38;
  undefined1 local_28 [16];
  
  local_res10 = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(&local_res10,(FString *)local_28);
    ::FString::PrintfImpl(&local_38,L"OnEndSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(this->_padding_ + 0x180))(this);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,local_28);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xd0))(plVar1,&this->EndSessionCompleteHandle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// OnJoinSessionComplete @ 14ec887a0

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
UOnlineSessionClient::OnJoinSessionComplete(UOnlineSessionClient *this,FName param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UGameInstance *this_00;
  UWorld *pUVar4;
  APlayerController *this_01;
  longlong *plVar5;
  undefined1 local_res8 [8];
  FName local_res10;
  longlong *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  FString local_38;
  
  local_res10 = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(&local_res10,&local_58);
    ::FString::PrintfImpl(&local_78,L"OnJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_a8);
  if (local_a8 != (longlong *)0x0) {
    if ((local_a8 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_a8 + 0x220))(local_a8,&this->OnJoinSessionCompleteDelegateHandle);
    if (param_2 == Success) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      plVar5 = local_a8;
      if ((local_a8 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), plVar5 = local_a8, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = *(code **)(*plVar5 + 0x378);
      FNameEntryId::FromValidEName((EName)local_res8);
      cVar3 = (*pcVar1)(plVar5,local_res10);
      if (cVar3 == '\0') {
        if (2 < (byte)LogOnline._0_1_) {
          ::FName::ToString(&local_res10,&local_38);
          ::FString::PrintfImpl(&local_68,L"Failed to join session %s");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        this_00 = (UGameInstance *)(**(code **)(this->_padding_ + 0x2e0))(this);
        pUVar4 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        this_01 = UGameInstance::GetFirstLocalPlayerController(this_00,pUVar4);
        if (this_01 != (APlayerController *)0x0) {
          if (this->bIsFromInvite != false) {
            ::FString::AppendChars(&local_98,L"?bIsFromInvite",0xe);
            this->bIsFromInvite = false;
          }
          local_88 = 0;
          uStack_80 = 0;
          local_48.A = 0;
          local_48.B = 0;
          local_48.C = 0;
          local_48.D = 0;
          APlayerController::ClientTravel(this_01,&local_98,TRAVEL_Absolute,false,&local_48);
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  return;
}

// OnSessionUserInviteAccepted @ 14ec8a930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnlineSessionClient::OnSessionUserInviteAccepted
          (UOnlineSessionClient *this,bool param_1,int param_2,
          TSharedPtr<FUniqueNetId_const_,1> *param_3,FOnlineSessionSearchResult *param_4)

{
  FOnlineSessionInfo *pFVar1;
  code *pcVar2;
  char cVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined1 local_res10 [16];
  undefined4 local_res20;
  undefined4 uStackX_24;
  FString local_28;
  
  if (5 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_28,L"OnSessionUserInviteAccepted LocalUserNum: %d bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_1) {
    if ((((param_4->Session).OwningUserId.Object == (FUniqueNetId *)0x0) ||
        (pFVar1 = (param_4->Session).SessionInfo.Object, pFVar1 == (FOnlineSessionInfo *)0x0)) ||
       (cVar3 = (**(code **)((longlong)*pFVar1 + 0x20))(), cVar3 == '\0')) {
      if (2 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_28,L"Invite accept returned no search result.");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this->bIsFromInvite = true;
      pcVar2 = *(code **)(this->_padding_ + 0x308);
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      uStackX_24 = 0;
      local_res20 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
      (*pcVar2)(this,local_res20,param_4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnStartSessionComplete @ 14ec8adf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnlineSessionClient::OnStartSessionComplete(UOnlineSessionClient *this,FName param_1,bool param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  FName local_res8;
  FName local_res10;
  FString local_38;
  undefined1 local_28 [16];
  
  local_res10 = param_1;
  if (5 < (byte)LogOnline._0_1_) {
    ::FName::ToString(&local_res10,(FString *)local_28);
    ::FString::PrintfImpl(&local_38,L"OnStartSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(this->_padding_ + 0x180))(this);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,local_28);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,&this->StartSessionCompleteHandle);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// RegisterOnlineDelegates @ 14ec8ffd0

void __thiscall UOnlineSessionClient::RegisterOnlineDelegates(UOnlineSessionClient *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulong64 *puVar5;
  UOnlineSessionClient *local_res8;
  UOnlineSessionClient *local_res10;
  UOnlineSessionClient *local_res18;
  UOnlineSessionClient *local_res20;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  undefined1 local_1a0 [8];
  FDelegateAllocation local_198;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  longlong *local_170;
  TReferenceControllerBase<1> *local_168;
  UOnlineSessionClient *local_160;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined1 local_40 [8];
  
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_e0);
  local_c8 = &local_1e0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_1e0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = OnJoinSessionComplete;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnJoinSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_158);
  if ((local_1e0.DelegateSize != 0) &&
     (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1e0,0,0,0x10);
    local_1e0.DelegateSize = 0;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  local_1d0 = (undefined1  [8])0x0;
  local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
             (FWriteAccessScope *)&local_c0);
  local_a8 = &local_1c8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_1c8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = OnEndForJoinSessionComplete;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndForJoinSessionCompleteDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
             (FWriteAccessScope *)&local_140);
  if ((local_1c8.DelegateSize != 0) &&
     (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1c8,0,0,0x10);
    local_1c8.DelegateSize = 0;
  }
  if (local_140.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
  }
  if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d0);
  local_1b8 = (undefined1  [8])0x0;
  local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (FWriteAccessScope *)&local_a0);
  local_88 = &local_1b0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_1b0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res18);
    puVar3[4] = OnDestroyForJoinSessionComplete;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForJoinSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (FWriteAccessScope *)&local_128);
  if ((local_1b0.DelegateSize != 0) &&
     (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b0,0,0,0x10);
    local_1b0.DelegateSize = 0;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b8);
  local_1a0 = (undefined1  [8])0x0;
  local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_198.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_198;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_198);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res20);
    puVar3[4] = OnDestroyForMainMenuComplete;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForMainMenuCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (FWriteAccessScope *)&local_110);
  if ((local_198.DelegateSize != 0) &&
     (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_198.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_198,0,0,0x10);
    local_198.DelegateSize = 0;
  }
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  if (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_198.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a0);
  local_188 = (undefined1  [8])0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_60);
  local_48 = &local_180;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_160 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UOnlineSessionClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_160);
    puVar3[4] = _vcall__728__flat______;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSessionUserInviteAcceptedDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_f8);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_188);
  (**(code **)(this->_padding_ + 0x2e8))(this,&local_170);
  if (local_170 != (longlong *)0x0) {
    if ((local_170 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar5 = (ulong64 *)
             (**(code **)(*local_170 + 0x330))
                       (local_170,local_40,&this->OnSessionUserInviteAcceptedDelegate);
    (this->OnSessionUserInviteAcceptedDelegateHandle).ID = *puVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168);
  return;
}

// SetInviteFlags @ 14ec97900

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
UOnlineSessionClient::SetInviteFlags
          (UOnlineSessionClient *this,UWorld *param_1,FJoinabilitySettings *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  FName local_res20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,local_18);
  plVar1 = (longlong *)*plVar4;
  pTVar2 = (TReferenceControllerBase<1> *)plVar4[1];
  plVar4[1] = 0;
  *plVar4 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x380))(plVar1,param_2->SessionName);
    if (lVar5 != 0) {
      *(bool *)(lVar5 + 0x10) = param_2->bPublicSearchable;
      *(bool *)(lVar5 + 0x15) = param_2->bAllowInvites;
      if ((param_2->bJoinViaPresence == false) || (param_2->bJoinViaPresenceFriendsOnly != false)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(lVar5 + 0x17) = uVar6;
      *(bool *)(lVar5 + 0x18) = param_2->bJoinViaPresenceFriendsOnly;
      *(int *)(lVar5 + 8) = param_2->MaxPlayers;
      (**(code **)(*plVar1 + 0x98))(plVar1,param_2->SessionName,lVar5,0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// StartOnlineSession @ 14ec98e60

void __thiscall UOnlineSessionClient::StartOnlineSession(UOnlineSessionClient *this,FName param_1)

{
  longlong *plVar1;
  code *pcVar2;
  IOnlineSubsystem *pIVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  FName local_res8;
  undefined1 local_res18 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (**(code **)(this->_padding_ + 0x180))();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar3 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar4 = (longlong *)(**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,&local_78);
    plVar1 = (longlong *)*plVar4;
    pTVar9 = (TReferenceControllerBase<1> *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_70.DelegateAllocator);
    if (((plVar1 != (longlong *)0x0) &&
        (lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1), lVar5 != 0)) &&
       ((*(int *)(lVar5 + 0x148) == 2 || (*(int *)(lVar5 + 0x148) == 6)))) {
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      pcVar2 = *(code **)(*plVar1 + 0x78);
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUOnlineSessionClient____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res8 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
        puVar6[4] = _vcall__760__flat______;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      puVar8 = (ulong64 *)(*pcVar2)(plVar1,local_res18);
      (this->StartSessionCompleteHandle).ID = *puVar8;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_60);
      if ((local_70.DelegateSize != 0) &&
         (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_70,0,0,0x10);
        local_70.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_70.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// StaticRegisterNativesUOnlineSessionClient @ 14ec99af0

void __cdecl UOnlineSessionClient::StaticRegisterNativesUOnlineSessionClient(void)

{
  return;
}

