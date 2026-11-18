// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// Call @ 14b86a120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ADS_AI_GYM_SyncActor::AddDamageWidget'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<ADS_AI_GYM_SyncActor,FWeakObjectPtr>::UEOpEquals(param_1,(void *)0x0);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)((longlong)param_1 + 8),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 8));
      if (pUVar2 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b86a165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0,*(code **)(*(longlong *)pUVar2 + 0x4a0))
        ;
        return;
      }
    }
  }
  return;
}

// Call @ 14b86a180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  undefined8 auStackX_18 [2];
  FReadAccessScope FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 0x430) != 0) {
    auStackX_8[0] = 0x42;
    auStackX_18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&FStackX_10,(EDS_AbilityTagType *)auStackX_18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &FStackX_10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&FStackX_10);
      auStackX_8[0] = 6;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&FStack_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,auStackX_8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
  }
  return;
}

// Call @ 14b86a190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  undefined8 auStackX_18 [2];
  FReadAccessScope FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 0x430) != 0) {
    auStackX_8[0] = 0x42;
    auStackX_18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&FStackX_10,(EDS_AbilityTagType *)auStackX_18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &FStackX_10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&FStackX_10);
      auStackX_8[0] = 2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&FStack_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,auStackX_8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
  }
  return;
}

// Call @ 14b86a1a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  undefined8 auStackX_18 [2];
  FReadAccessScope FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 0x430) != 0) {
    auStackX_8[0] = 0x42;
    auStackX_18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&FStackX_10,(EDS_AbilityTagType *)auStackX_18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &FStackX_10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&FStackX_10);
      auStackX_8[0] = 3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&FStack_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,auStackX_8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
  }
  return;
}

// Call @ 14b86a1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined1 auStackX_8 [8];
  FWeakObjectPtr FStackX_10;
  undefined8 auStackX_18 [2];
  FReadAccessScope FStack_28;
  
  if (*(longlong *)(*(longlong *)param_1 + 0x430) != 0) {
    auStackX_8[0] = 0x42;
    auStackX_18[0] = *(undefined8 *)(*(longlong *)(*(longlong *)param_1 + 0x430) + 8);
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
              ((ulong64 *)&FStackX_10,(EDS_AbilityTagType *)auStackX_18);
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *)
                       &FStackX_10,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(&FStackX_10);
      auStackX_8[0] = 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),&FStack_28);
      if ((*(int *)&pUVar3[4].field_0x10 != 0) &&
         (plVar1 = *(longlong **)&pUVar3[4].field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,auStackX_8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
  }
  return;
}

// Call @ 14b86a1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  FDS_EntityBase *this;
  UObject *pUVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  EDS_AbilityTagType aEStack_a8 [8];
  UObject *pUStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(longlong *)(*(longlong *)param_1 + 0x430) != 0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_MountAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar2);
    auStack_98._8_8_ = pUVar1;
    pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar3 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    pUVar1[1].field_0x1 = 1;
    this = *(FDS_EntityBase **)(*(longlong *)param_1 + 0x430);
    pUStack_a0 = pUVar1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(pUVar1);
    }
    aEStack_a8[0] = Mount;
    FDS_EntityBase::TryActivateAbility(this,aEStack_a8,(TObjectPtr<UWN_AbilityContext>)&pUStack_a0);
  }
  return;
}

// Call @ 14b9e24f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  int iVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UDS_LogManager *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 auStackY_1b8 [32];
  void *apvStack_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da080;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    plVar2 = *(longlong **)param_1;
    if (plVar2 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)param_1 + 0x10);
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      if ((iVar1 != 0) && (pUVar5 = UDS_LogManager::GetInst(), pUVar5 != (UDS_LogManager *)0x0)) {
        pUVar5 = UDS_LogManager::GetInst();
        (**(code **)(*plVar2 + 0x10))(plVar2,apvStack_168);
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"DS_ChatHelper::OnError",0x16,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_158.Ptr,0x1bb,L"[TCC][%s] %d, %s");
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
        if (apvStack_168[0] != (void *)0x0) {
          FMemory::Free(apvStack_168[0]);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      (**(code **)(*plVar2 + 0x20))
                (plVar2,*(undefined4 *)((longlong)param_1 + 0x10),(longlong)param_1 + 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
LAB_14b9da080:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14b9e2500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  UDS_TencentCloudChatManager *this_00;
  __uint64 _Var4;
  V2TIMConversation *pVVar5;
  __uint64 _Var6;
  TReferenceControllerBase<1> *pTVar7;
  ulonglong uVar8;
  TXV2TIMConversationVector *this_01;
  bool bVar9;
  undefined1 auStackY_1e8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FDS_ChatConversation FStack_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar7->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da27a;
      }
      LOCK();
      aVar2 = pTVar7->SharedReferenceCount;
      bVar9 = aVar1 == aVar2;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar9);
    if (*(longlong *)param_1 != 0) {
      this = UDS_ChattingManager::GetInst();
      if (this == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9da27a;
        pUVar3 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,
                   "FDS_V2TIMConversationListener::OnConversationChanged::<lambda_1>::operator ()",
                   0x4d,Yes);
        pwVar11 = L"chattingManager == nullptr";
        uVar10 = 0x3e;
      }
      else {
        if ((char)this->_padding_ == '\x01') goto LAB_14b9da27a;
        this_00 = UDS_TencentCloudChatManager::GetInst();
        if (this_00 != (UDS_TencentCloudChatManager *)0x0) {
          this_01 = (TXV2TIMConversationVector *)((longlong)param_1 + 0x10);
          _Var6 = 0;
          _Var4 = TXV2TIMConversationVector::Size(this_01);
          uVar8 = _Var6;
          if (_Var4 != 0) {
            do {
              pVVar5 = TXV2TIMConversationVector::operator[](this_01,_Var6);
              FStack_1b8.ConversationID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              FStack_1b8.WhisperPlayerUID = 0;
              FStack_1b8.ShowName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FStack_1b8.ConversationID.Data.ArrayNum = 0;
              FStack_1b8.ConversationID.Data.ArrayMax = 0;
              FStack_1b8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FStack_1b8.GroupID.Data.ArrayNum = 0;
              FStack_1b8.GroupID.Data.ArrayMax = 0;
              FStack_1b8.WhisperUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FStack_1b8.WhisperUserID.Data.ArrayNum = 0;
              FStack_1b8.WhisperUserID.Data.ArrayMax = 0;
              FStack_1b8.ShowName.Data.ArrayNum = 0;
              FStack_1b8.ShowName.Data.ArrayMax = 0;
              FStack_1b8.OrderKey = 0;
              FStack_1b8.UnreadCount = 0;
              FStack_1b8.bIsBookmark = false;
              FDS_ChatConversation::SetChatConversation(&FStack_1b8,pVVar5);
              UDS_ChattingManager::OnRecvConversation(this,&FStack_1b8);
              if (0 < FStack_1b8.WhisperPlayerUID) {
                UDS_TencentCloudChatManager::Request_UserInfoList
                          (this_00,FStack_1b8.WhisperPlayerUID);
              }
              if (FStack_1b8.ShowName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(FStack_1b8.ShowName.Data.AllocatorInstance.Data);
              }
              if (FStack_1b8.WhisperUserID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_1b8.WhisperUserID.Data.AllocatorInstance.Data);
              }
              if (FStack_1b8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(FStack_1b8.GroupID.Data.AllocatorInstance.Data);
              }
              if (FStack_1b8.ConversationID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_1b8.ConversationID.Data.AllocatorInstance.Data);
              }
              uVar10 = (int)uVar8 + 1;
              _Var6 = (__uint64)(int)uVar10;
              _Var4 = TXV2TIMConversationVector::Size(this_01);
              uVar8 = (ulonglong)uVar10;
            } while (_Var6 < _Var4);
          }
          goto LAB_14b9da27a;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9da27a;
        pUVar3 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,
                   "FDS_V2TIMConversationListener::OnConversationChanged::<lambda_1>::operator ()",
                   0x4d,Yes);
        pwVar11 = L"tencentChatManager == nullptr";
        uVar10 = 0x4a;
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_158.Ptr,uVar10,pwVar11);
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
LAB_14b9da27a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14b9e2510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_TencentCloudChatManager *this;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  char *pcVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackY_178 [32];
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar7->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da4f0;
      }
      LOCK();
      aVar2 = pTVar7->SharedReferenceCount;
      bVar8 = aVar1 == aVar2;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar8);
    if (*(longlong *)param_1 != 0) {
      this = UDS_TencentCloudChatManager::GetInst();
      if (this == (UDS_TencentCloudChatManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,
                     "FDS_V2TIMGroupListener::OnGroupInfoChanged::<lambda_1>::operator ()",0x43,Yes)
          ;
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_138.Ptr,0x115,L"tencentChatManager == nullptr");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
      else if (((char)this->_padding_ != '\x01') &&
              (_Var4 = TXV2TIMGroupChangeInfoVector::Size
                                 ((TXV2TIMGroupChangeInfoVector *)((longlong)param_1 + 0x20)),
              _Var4 != 0)) {
        pcVar5 = V2TIMString::CString((V2TIMString *)((longlong)param_1 + 0x10));
        pFVar6 = DS_Util::ConvertUTF8ToFString(&FStack_148,pcVar5);
        UDS_TencentCloudChatManager::Request_GetGroupInfo(this,pFVar6,false);
        if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9da4f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// Call @ 14b9e2520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  V2TIMGroupMemberInfo *this_00;
  char *pcVar5;
  longlong lVar6;
  __uint64 _Var7;
  ForAnyElementType FVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_1d8 [32];
  int iStack_198;
  int iStack_194;
  FString FStack_190;
  FString FStack_180;
  FString FStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar10->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da67b;
      }
      LOCK();
      aVar2 = pTVar10->SharedReferenceCount;
      bVar11 = aVar1 == aVar2;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar11);
    if (*(longlong *)param_1 != 0) {
      this = UDS_ChattingManager::GetInst();
      if (this == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_158,"FDS_V2TIMGroupListener::OnMemberEnter::<lambda_1>::operator ()",
                     0x3e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_158.Ptr,0x71,L"chattingManager == nullptr");
          if ((void *)TStack_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_158._padding_);
          }
        }
      }
      else if ((char)this->_padding_ != '\x01') {
        iVar9 = 0;
        _Var4 = TXV2TIMGroupMemberInfoVector::Size
                          ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20));
        if (_Var4 != 0) {
          _Var4 = 0;
          do {
            this_00 = TXV2TIMGroupMemberInfoVector::operator[]
                                ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20),_Var4);
            pcVar5 = V2TIMString::CString(&this_00->userID);
            DS_Util::ConvertUTF8ToFString(&FStack_180,pcVar5);
            pcVar5 = V2TIMString::CString(&this_00->nickName);
            DS_Util::ConvertUTF8ToFString(&FStack_170,pcVar5);
            pcVar5 = V2TIMString::CString(&this_00->faceURL);
            DS_Util::ConvertUTF8ToFString(&FStack_190,pcVar5);
            FVar8.Data = (FScriptContainerElement *)L"";
            if (FStack_180.Data.ArrayNum != 0) {
              FVar8.Data = FStack_180.Data.AllocatorInstance.Data;
            }
            lVar6 = _wtoi64((wchar_t *)FVar8.Data);
            iStack_194 = 0;
            FVar8.Data = (FScriptContainerElement *)L"";
            if (FStack_190.Data.ArrayNum != 0) {
              FVar8.Data = FStack_190.Data.AllocatorInstance.Data;
            }
            iStack_198 = 0;
            FParse::Value((wchar_t *)FVar8.Data,L"CharID=",&iStack_194);
            FVar8.Data = (FScriptContainerElement *)L"";
            if (FStack_190.Data.ArrayNum != 0) {
              FVar8.Data = FStack_190.Data.AllocatorInstance.Data;
            }
            FParse::Value((wchar_t *)FVar8.Data,L"CharLevel=",&iStack_198);
            UDS_ChattingManager::OnAddGroupMember
                      (this,(FString *)((longlong)param_1 + 0x10),lVar6,&FStack_170,iStack_194,
                       iStack_198,true);
            if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
            }
            if (FStack_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_170.Data.AllocatorInstance.Data);
            }
            if (FStack_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_180.Data.AllocatorInstance.Data);
            }
            iVar9 = iVar9 + 1;
            _Var4 = (__uint64)iVar9;
            _Var7 = TXV2TIMGroupMemberInfoVector::Size
                              ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20));
          } while (_Var4 < _Var7);
        }
      }
    }
  }
LAB_14b9da67b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 14b9e2530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  TXV2TIMGroupMemberChangeInfoVector *this;
  int *piVar1;
  code *pcVar2;
  atomic<int> aVar3;
  ForAnyElementType FVar4;
  FDS_V2TIMRequestGetGroupMembersInfo *pFVar5;
  atomic<int> aVar6;
  int iVar7;
  UDS_ChattingManager *pUVar8;
  UDS_LogManager *pUVar9;
  UDS_TencentCloudChatManager *this_00;
  __uint64 _Var10;
  V2TIMGroupMemberChangeInfo *this_01;
  char *pcVar11;
  FScriptContainerElement *pFVar12;
  __uint64 _Var13;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStackY_418 [32];
  ForAnyElementType FStack_3d8;
  undefined8 uStack_3d0;
  TSharedPtr<FDS_V2TIMRequestGetGroupMembersInfo,1> TStack_3c8;
  UDS_TencentCloudChatManager *pUStack_3b8;
  FString FStack_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pTVar15 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  TStack_3c8.Object = param_1;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar15->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da910;
      }
      LOCK();
      aVar6 = pTVar15->SharedReferenceCount;
      bVar18 = aVar3 == aVar6;
      if (bVar18) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar18);
    if (*(longlong *)param_1 != 0) {
      pUVar8 = UDS_ChattingManager::GetInst();
      if (pUVar8 == (UDS_ChattingManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          TStack_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_398,
                     "FDS_V2TIMGroupListener::OnMemberInfoChanged::<lambda_1>::operator ()",0x44,Yes
                    );
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,TStack_398.Ptr,0xe5,L"chattingManager == nullptr");
          if ((void *)TStack_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_398._padding_);
          }
        }
      }
      else if ((char)pUVar8->_padding_ != '\x01') {
        this_00 = UDS_TencentCloudChatManager::GetInst();
        pUStack_3b8 = this_00;
        if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            TStack_278._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_278,
                       "FDS_V2TIMGroupListener::OnMemberInfoChanged::<lambda_1>::operator ()",0x44,
                       Yes);
            UDS_LogManager::PrintLog
                      (pUVar9,1,Warning,TStack_278.Ptr,0xf1,L"tencentChatManager == nullptr");
            if ((void *)TStack_278._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_278._padding_);
            }
          }
        }
        else {
          _Var13 = 0;
          this = (TXV2TIMGroupMemberChangeInfoVector *)((longlong)param_1 + 0x20);
          FStack_3d8.Data = (FScriptContainerElement *)0x0;
          uStack_3d0 = 0;
          _Var10 = TXV2TIMGroupMemberChangeInfoVector::Size(this);
          uVar17 = _Var13;
          if (_Var10 != 0) {
            do {
              this_01 = TXV2TIMGroupMemberChangeInfoVector::operator[](this,_Var13);
              pcVar11 = V2TIMString::CString(&this_01->userID);
              DS_Util::ConvertUTF8ToFString(&FStack_3b0,pcVar11);
              iVar7 = (int)uStack_3d0;
              if ((int)uStack_3d0 == uStack_3d0._4_4_) {
                iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&FStack_3d8,(int *)((longlong)&uStack_3d0 + 4));
              }
              FVar4.Data = FStack_3b0.Data.AllocatorInstance.Data;
              pFVar12 = FStack_3d8.Data + (longlong)iVar7 * 0x10;
              uStack_3d0 = CONCAT44(uStack_3d0._4_4_,iVar7 + 1);
              *(FScriptContainerElement **)pFVar12 = (FScriptContainerElement *)0x0;
              iVar7 = FStack_3b0.Data.ArrayNum;
              *(int *)(pFVar12 + 8) = iVar7;
              if (iVar7 == 0) {
                *(int *)(pFVar12 + 0xc) = 0;
              }
              else {
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar7,0,(ForAnyElementType *)pFVar12,iVar7,(int *)(pFVar12 + 0xc));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar12,FVar4.Data,(longlong)iVar7 * 2);
              }
              if (FStack_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_3b0.Data.AllocatorInstance.Data);
              }
              uVar16 = (int)uVar17 + 1;
              _Var13 = (__uint64)(int)uVar16;
              _Var10 = TXV2TIMGroupMemberChangeInfoVector::Size(this);
              this_00 = pUStack_3b8;
              param_1 = TStack_3c8.Object;
              uVar17 = (ulonglong)uVar16;
            } while (_Var13 < _Var10);
          }
          if (0 < (int)uStack_3d0) {
            if (this_00->ChatState == LoggedIn) {
              UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetGroupMembersInfo>
                        (this_00,&TStack_3c8);
              pFVar5 = TStack_3c8.Object;
              if ((TStack_3c8.Object == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              ::FString::operator=
                        (&pFVar5->GroupID,
                         (FString *)&((FDS_V2TIMRequestGetGroupMembersInfo *)param_1)->_padding_);
              if ((pFVar5 == (FDS_V2TIMRequestGetGroupMembersInfo *)0x0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar18)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar14 = &pFVar5->UserIDs;
              if (pTVar14 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&FStack_3d8) {
                DestructItems<FString,int>
                          ((FString *)(pTVar14->AllocatorInstance).Data,(pFVar5->UserIDs).ArrayNum);
                FVar4.Data = FStack_3d8.Data;
                iVar7 = (int)uStack_3d0;
                piVar1 = &(pFVar5->UserIDs).ArrayMax;
                (pFVar5->UserIDs).ArrayNum = (int)uStack_3d0;
                if (((int)uStack_3d0 == 0) && (*piVar1 == 0)) {
                  *piVar1 = 0;
                }
                else {
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(int)uStack_3d0,*piVar1,&pTVar14->AllocatorInstance,
                             (int)uStack_3d0,piVar1);
                  ConstructItems<FString,FString,int>
                            ((pTVar14->AllocatorInstance).Data,(FString *)FVar4.Data,iVar7);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_3c8.SharedReferenceCount.ReferenceController);
            }
            else {
              pUVar9 = UDS_LogManager::GetInst();
              if (pUVar9 != (UDS_LogManager *)0x0) {
                pUVar9 = UDS_LogManager::GetInst();
                TStack_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&TStack_158,"UDS_TencentCloudChatManager::Request_GetGroupMemberInfo",
                           0x37,Yes);
                UDS_LogManager::PrintLog
                          (pUVar9,1,Warning,TStack_158.Ptr,0x34a,L"[TCC] IsLoggedIn() == false");
                if ((void *)TStack_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)TStack_158._padding_);
                }
              }
            }
          }
          DestructItems<FString,int>((FString *)FStack_3d8.Data,(int)uStack_3d0);
          if (FStack_3d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3d8.Data);
          }
        }
      }
    }
  }
LAB_14b9da910:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// Call @ 14b9e2540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  __uint64 _Var4;
  V2TIMGroupMemberInfo *this_00;
  char *pcVar5;
  longlong lVar6;
  ForAnyElementType _Str;
  __uint64 _Var7;
  TReferenceControllerBase<1> *pTVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStackY_198 [32];
  FString FStack_168;
  FString FStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar8->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9dadbd;
      }
      LOCK();
      aVar2 = pTVar8->SharedReferenceCount;
      bVar11 = aVar1 == aVar2;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar11);
    if (*(longlong *)param_1 != 0) {
      this = UDS_ChattingManager::GetInst();
      if (this == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_148,"FDS_V2TIMGroupListener::OnMemberKicked::<lambda_1>::operator ()",
                     0x3f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_148.Ptr,0xbf,L"chattingManager == nullptr");
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
      }
      else if ((char)this->_padding_ != '\x01') {
        _Var7 = 0;
        _Var4 = TXV2TIMGroupMemberInfoVector::Size
                          ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20));
        uVar10 = _Var7;
        if (_Var4 != 0) {
          do {
            this_00 = TXV2TIMGroupMemberInfoVector::operator[]
                                ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20),_Var7);
            pcVar5 = V2TIMString::CString(&this_00->userID);
            DS_Util::ConvertUTF8ToFString(&FStack_168,pcVar5);
            pcVar5 = V2TIMString::CString(&this_00->nickName);
            DS_Util::ConvertUTF8ToFString(&FStack_158,pcVar5);
            _Str.Data = (FScriptContainerElement *)L"";
            if (FStack_168.Data.ArrayNum != 0) {
              _Str.Data = FStack_168.Data.AllocatorInstance.Data;
            }
            lVar6 = _wtoi64((wchar_t *)_Str.Data);
            UDS_ChattingManager::OnRemoveGroupMember
                      (this,(FString *)((longlong)param_1 + 0x10),lVar6,&FStack_158,true);
            if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
            }
            if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
            }
            uVar9 = (int)uVar10 + 1;
            _Var7 = (__uint64)(int)uVar9;
            _Var4 = TXV2TIMGroupMemberInfoVector::Size
                              ((TXV2TIMGroupMemberInfoVector *)((longlong)param_1 + 0x20));
            uVar10 = (ulonglong)uVar9;
          } while (_Var7 < _Var4);
        }
      }
    }
  }
LAB_14b9dadbd:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Call @ 14b9e2550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  char *pcVar4;
  longlong lVar5;
  ForAnyElementType _Str;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 auStackY_188 [32];
  FString FStack_158;
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar6->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9dafb0;
      }
      LOCK();
      aVar2 = pTVar6->SharedReferenceCount;
      bVar7 = aVar1 == aVar2;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar7);
    if (*(longlong *)param_1 != 0) {
      this = UDS_ChattingManager::GetInst();
      if (this == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_138._padding_ = (longlong)this;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"FDS_V2TIMGroupListener::OnMemberLeave::<lambda_1>::operator ()",
                     0x3e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_138.Ptr,0x9d,L"chattingManager == nullptr");
          if ((UDS_ChattingManager *)TStack_138._padding_ != (UDS_ChattingManager *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
      else if ((char)this->_padding_ != '\x01') {
        pcVar4 = V2TIMString::CString((V2TIMString *)((longlong)param_1 + 0x20));
        DS_Util::ConvertUTF8ToFString(&FStack_158,pcVar4);
        pcVar4 = V2TIMString::CString((V2TIMString *)((longlong)param_1 + 0x30));
        DS_Util::ConvertUTF8ToFString(&FStack_148,pcVar4);
        _Str.Data = (FScriptContainerElement *)L"";
        if (FStack_158.Data.ArrayNum != 0) {
          _Str.Data = FStack_158.Data.AllocatorInstance.Data;
        }
        lVar5 = _wtoi64((wchar_t *)_Str.Data);
        UDS_ChattingManager::OnRemoveGroupMember
                  (this,(FString *)((longlong)param_1 + 0x10),lVar5,&FStack_148,false);
        if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
        }
        if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9dafb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 14b9e2560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStackY_208 [32];
  FDS_ChatMessageInfo FStack_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db165;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    if (*(longlong *)param_1 != 0) {
      this = UDS_ChattingManager::GetInst();
      if (this == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,
                     "FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage::<lambda_1>::operator ()",0x47,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_138.Ptr,0x18,L"chattingManager == nullptr");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
      else if ((char)this->_padding_ != '\x01') {
        FStack_1d8.ConversationType = 0;
        FStack_1d8.SendTime = 0.0;
        FStack_1d8.MessageID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.MessageID.Data.ArrayNum = 0;
        FStack_1d8.MessageID.Data.ArrayMax = 0;
        FStack_1d8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.GroupID.Data.ArrayNum = 0;
        FStack_1d8.GroupID.Data.ArrayMax = 0;
        FStack_1d8.SenderUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.SenderUserID.Data.ArrayNum = 0;
        FStack_1d8.SenderUserID.Data.ArrayMax = 0;
        FStack_1d8.SenderNickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.SenderNickname.Data.ArrayNum = 0;
        FStack_1d8.SenderNickname.Data.ArrayMax = 0;
        FStack_1d8.SenderPlayerUID = 0;
        FStack_1d8.ReceiverUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.ReceiverUserID.Data.ArrayNum = 0;
        FStack_1d8.ReceiverUserID.Data.ArrayMax = 0;
        FStack_1d8.ReceiverPlayerUID = 0;
        FStack_1d8.MessageText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.MessageText.Data.ArrayNum = 0;
        FStack_1d8.MessageText.Data.ArrayMax = 0;
        FStack_1d8.MetaData.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_1d8.MetaData.Data.ArrayNum = 0;
        FStack_1d8.MetaData.Data.ArrayMax = 0;
        FStack_1d8.Sequence = 0;
        FStack_1d8.IsRead = false;
        bVar5 = FDS_ChatMessageInfo::SetChatMessageInfo
                          (&FStack_1d8,(V2TIMMessage *)((longlong)param_1 + 0x10));
        if (bVar5) {
          UDS_ChattingManager::SetDataByChatResponse(this,&FStack_1d8);
        }
        if (FStack_1d8.MetaData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.MetaData.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.MessageText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.MessageText.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.ReceiverUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(FStack_1d8.ReceiverUserID.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.SenderNickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(FStack_1d8.SenderNickname.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.SenderUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.SenderUserID.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.GroupID.Data.AllocatorInstance.Data);
        }
        if (FStack_1d8.MessageID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.MessageID.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9db165:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db385:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db385;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db415:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db415;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db4a5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db4a5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db535:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db535;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db5c5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db5c5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db655:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db655;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db6e5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db6e5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db775:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db775;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e25f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db805:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db805;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db895:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db895;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db930:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db930;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14b9e2620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14b9db9b5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db9b5;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    plVar1 = *(longlong **)param_1;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)param_1 + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 14bb53a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  longlong *plVar4;
  FReadAccessScope FStack_28;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  plVar4 = (longlong *)0x0;
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(param_1);
    LOCK();
    pUVar3[2].field_0x20 = 0;
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 8),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x18) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 8),
                 &FStack_28);
      if (*(int *)((longlong)param_1 + 0x18) != 0) {
        plVar4 = *(longlong **)((longlong)param_1 + 0x10);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,bVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// Call @ 14bb53a50

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>,bool>::Call(void *param_1)

{
  bool bVar1;
  UDS_NTPClient *this;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (!bVar1) {
    return false;
  }
  this = (UDS_NTPClient *)FWeakObjectPtr::Get(param_1);
  bVar1 = UDS_NTPClient::UpdateNTPDataInternal(this);
  return bVar1;
}

// Call @ 14bb53a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_NTPClient::UpdateNTPDataInternal'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UDS_NTPClient *this;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    this = (UDS_NTPClient *)FWeakObjectPtr::Get(param_1);
    UDS_NTPClient::ApplyNTPResult
              (this,(time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                     *)((longlong)param_1 + 8),
               (time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                *)((longlong)param_1 + 0x10),*(uchar **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Call @ 14bb53ad0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Async<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  SetPromise<bool,TUniqueFunction<bool___cdecl(void)>_&>
            ((TPromise<bool> *)((longlong)param_1 + 0x30),param_1);
  return false;
}

// Call @ 14bb53af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>,void>::Call(void *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel FStack_78;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  int iStack_48;
  code *apcStack_38 [5];
  undefined8 *puStack_10;
  
  uStack_60 = *(undefined8 *)param_1;
  iStack_48 = 0;
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)auStack_58,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 8));
  apcStack_38[0] = (code *)0x0;
  puStack_10 = FMemory::Malloc(0x28,8);
  *puStack_10 = &TFunction_OwnedObject<``UDS_NTPClient::UpdateNTPDataAsync'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
  puVar1 = puStack_10 + 1;
  *puVar1 = uStack_60;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puStack_10 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_58);
  if (puVar1 != (undefined8 *)0x0) {
    apcStack_38[0] =
         TFunctionRefCaller<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)apcStack_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&FStack_78);
  if ((iStack_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    iStack_48 = 0;
  }
  if (FStack_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  return;
}

// Call @ 14bc2ff80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc2ff8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x2c0) + 0x1f0))
            ((longlong *)(*(longlong *)param_1 + 0x2c0),0);
  return;
}

// Call @ 14bc8bc40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_CommonLazyImage *this;
  TVector2<double> local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(param_1);
    if (*(char *)(pUVar2 + 0x20) != '\0') {
      pUVar2 = FWeakObjectPtr::Get(param_1);
      if (pUVar2[0x1f].field_0xc == '\0') {
        this = (UDS_CommonLazyImage *)FWeakObjectPtr::Get(param_1);
        UDS_CommonLazyImage::GetTextureSize(this,&local_18);
        UImage::SetDesiredSizeOverride((UImage *)this,&local_18);
      }
    }
  }
  return;
}

// Call @ 14c06e1c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DS_Util::FindWidget'::__l2::<lambda_1>,void,UWidget_*>::Call
          (void *param_1,UWidget **param_2)

{
  `DS_Util::FindWidget'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

