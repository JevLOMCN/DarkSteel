// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ProcessError @ 14bc02450

bool __cdecl FDS_ItemEnchantService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestItemEnchant @ 14bc0f530

void __cdecl
FDS_ItemEnchantService::RequestItemEnchant(ulong64 param_1,long64 param_2,int param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5314093267892043811>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemEnchantService.cpp"
                       ,0x23,"false");
    if (bVar4) {
code_r0x00014bc0f66d:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_68.Object;
    if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4f5e) {
      client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                (&(local_68.Object)->clientMsg);
      (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4f5e;
      pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
      if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
        pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
      }
      pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::ItemEnchantRequest>
                         (pAVar9);
      (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
    }
    pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
    if (pMVar6 == (Message *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5314093267892043814>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemEnchantService.cpp"
                         ,0x26,"false");
      if (bVar4) goto code_r0x00014bc0f66d;
    }
    else {
      *(ulong64 *)&pMVar6[1].field_0x8 = param_1;
      uVar1 = *(uint *)(pMVar6 + 1);
      *(long64 *)(pMVar6 + 2) = param_2;
      *(int *)&pMVar6[2].field_0x8 = param_3;
      *(int *)&pMVar6[2].field_0xc = param_4;
      *(uint *)(pMVar6 + 1) = uVar1 | 0xf;
      if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
      local_30 = &(pFVar3->SuccessDel).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[3] = ResponseItemEnchant;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
      local_10 = &(pFVar3->FailDel).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[3] = ProcessError;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      this = UDS_NetworkManager::GetInst();
      if (this != (UDS_NetworkManager *)0x0) {
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// ResponseItemActionCasting @ 14bc19bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FDS_ItemEnchantService::ResponseItemActionCasting(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *this;
  UObject *pUVar3;
  UClass *pUVar4;
  FDS_EntityBase *this_00;
  longlong *plVar5;
  ItemActionCastingResponseDefaultTypeInternal *pIVar6;
  undefined1 auStackY_f8 [32];
  EDS_AbilityTagType local_c8 [8];
  ulong64 local_c0 [2];
  UObject *local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_1->_impl_)._oneof_case_[0] == 0xad) {
    pIVar6 = *(ItemActionCastingResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pIVar6 = &server_msg::_ItemActionCastingResponse_default_instance_;
  }
  local_c0[0] = *(ulong64 *)&((Message *)((longlong)pIVar6 + 0x10))->field_0x8;
  this = FDS_EntityBase::GetEntityBase(local_c0);
  if (this == (FDS_EntityBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5314093267892043842>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\Item\\DS_ItemEnchantService.cpp"
                       ,0x42,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_ItemUseAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = pUVar3;
    pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined8 *)(pUVar3 + 1) = *(undefined8 *)&((Message *)((longlong)pIVar6 + 0x10))->field_0x8;
    *(undefined8 *)&pUVar3[1].field_0x8 = *(undefined8 *)((longlong)pIVar6 + 0x20);
    *(undefined4 *)&pUVar3[1].field_0x10 =
         *(undefined4 *)&((Message *)((longlong)pIVar6 + 0x20))->field_0x8;
    if (this->EntityType == MainCharacter) {
      local_c0[1] = 20000;
      this_00 = FDS_EntityBase::GetEntityBase(local_c0 + 1);
      if (this_00 != (FDS_EntityBase *)0x0) {
        local_b0 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        local_c8[0] = ItemUse;
        FDS_EntityBase::TryActivateAbility
                  (this_00,local_c8,(TObjectPtr<UWN_AbilityContext>)&local_b0);
      }
    }
    local_a8[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_c8[1] = 0x68;
    FDS_EntityBase::TryActivateAbility(this,local_c8 + 1,(TObjectPtr<UWN_AbilityContext>)local_a8);
  }
  return;
}

// ResponseItemEnchant @ 14bc19e20

void __cdecl FDS_ItemEnchantService::ResponseItemEnchant(ServerMessagesTwoway *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&OnRecvDelegateItemEnchant);
  return;
}

