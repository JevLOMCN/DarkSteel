// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b4f5860

UClass * __cdecl UDS_MountAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAnim",
               &Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton,
               StaticRegisterNativesUDS_MountAnim,0x7a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAnim>,
               InternalVTableHelperCtorCaller<UDS_MountAnim>,local_res8,UDS_BattleAnim::StaticClass,
               USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton;
}

// UDS_MountAnim @ 14b4f8000

UDS_MountAnim * __thiscall UDS_MountAnim::UDS_MountAnim(UDS_MountAnim *this,FVTableHelper *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  this->MountState = None;
  this->bIsMount = false;
  *(undefined ***)this = &___7UDS_MountAnim__6B_;
  this->CurRotation = 0.0;
  this->CurRotationZ = 0.0;
  (this->AnimFootTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimFootTraceInfoList).ArrayNum = 0;
  (this->AnimFootTraceInfoList).ArrayMax = 0;
  this->MountHeadRotateConst = 4.0;
  return this;
}

// ~UDS_MountAnim @ 14b4f86f0

void __thiscall UDS_MountAnim::~UDS_MountAnim(UDS_MountAnim *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UDS_MountAnim__6B_;
  pFVar1 = (this->AnimFootTraceInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_BattleAnim::~UDS_BattleAnim((UDS_BattleAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa430

UClass * __cdecl UDS_MountAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAnim",
               &Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton,
               StaticRegisterNativesUDS_MountAnim,0x7a0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAnim>,
               InternalVTableHelperCtorCaller<UDS_MountAnim>,local_res8,UDS_BattleAnim::StaticClass,
               USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_MountAnim @ 14b4fa8e0

void __cdecl UDS_MountAnim::StaticRegisterNativesUDS_MountAnim(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_MountAnim_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurRotation @ 14b4fb7f0

void __cdecl UDS_MountAnim::execGetCurRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2f].field_0x1c;
  return;
}

// execGetCurRotationZ @ 14b4fb820

void __cdecl UDS_MountAnim::execGetCurRotationZ(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2f].field_0x20;
  return;
}

// execGetIsMountState @ 14b4fb8d0

void __cdecl UDS_MountAnim::execGetIsMountState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x2f].field_0x19;
  return;
}

// UDS_MountAnim @ 14b8651f0

UDS_MountAnim * __thiscall
UDS_MountAnim::UDS_MountAnim(UDS_MountAnim *this,FObjectInitializer *param_1)

{
  UDS_BattleAnim::UDS_BattleAnim((UDS_BattleAnim *)this,param_1);
  this->MountState = None;
  this->bIsMount = false;
  *(undefined ***)this = &___7UDS_MountAnim__6B_;
  this->CurRotation = 0.0;
  this->CurRotationZ = 0.0;
  (this->AnimFootTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimFootTraceInfoList).ArrayNum = 0;
  (this->AnimFootTraceInfoList).ArrayMax = 0;
  this->MountHeadRotateConst = 4.0;
  return this;
}

// ActorMountedEvent @ 14b867af0

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

void __thiscall UDS_MountAnim::ActorMountedEvent(UDS_MountAnim *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UObject *pUVar3;
  FDS_MountBaseTableRow *this_00;
  undefined1 local_res8;
  FWeakObjectPtr local_res18 [2];
  
  this->MountHeadRotateConst = 4.0;
  if ((*(longlong *)&this->field_0x430 != 0) &&
     (*(ulong64 *)(*(longlong *)&this->field_0x430 + 8) != *param_1)) {
    pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      local_res8 = 0x4a;
      UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
                ((ulong64 *)local_res18,(EDS_AbilityTagType *)param_1);
      bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)local_res18,
                         (void *)0x0);
      if (!bVar1) {
        pUVar3 = FWeakObjectPtr::Get(local_res18);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[2].field_0x8,this);
        pUVar3 = FWeakObjectPtr::Get(local_res18);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_MountAnimState_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_MountAnim>
                  (&pUVar3[2].field_0x8,(UDS_MountAnim *)&local_res8,(pmf_1006075c)this);
        this_00 = FDS_MountBaseTableRow::GetRefByEntityID(*param_1,true);
        bVar1 = FDS_MountBaseTableRow::IsValid(this_00);
        if (bVar1) {
          this->MountHeadRotateConst = this_00->MountHeadRotateConst;
        }
      }
    }
  }
  return;
}

// OnAnimNotifyEvent @ 14b880e90

void __thiscall UDS_MountAnim::OnAnimNotifyEvent(UDS_MountAnim *this,EDS_MountAnimState *param_1)

{
  return;
}

// OnBindAnimationEvents @ 14b881570

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

void __thiscall UDS_MountAnim::OnBindAnimationEvents(UDS_MountAnim *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr aFStackX_10 [3];
  
  UDS_AnimInstanceBase::OnBindAnimationEvents((UDS_AnimInstanceBase *)this);
  (**(code **)(**(longlong **)&this->field_0x430 + 0x1b8))
            (*(longlong **)&this->field_0x430,&FStackX_8);
  bVar2 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x3e0);
    pUVar3 = FWeakObjectPtr::Get(&FStackX_8);
    (*pcVar1)(this,pUVar3[6].field_0x11);
    pcVar1 = *(code **)(*(longlong *)this + 1000);
    pUVar3 = FWeakObjectPtr::Get(&FStackX_8);
    (*pcVar1)(this,pUVar3[6].field_0x10);
    pUVar3 = FWeakObjectPtr::Get(&FStackX_8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x10,(UDS_CharacterAnimBase *)(aFStackX_10 + 1),(pmf_381e4520)this);
    pUVar3 = FWeakObjectPtr::Get(&FStackX_8);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_CharacterAnimBase>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[5].field_0x8,(UDS_CharacterAnimBase *)(aFStackX_10 + 1),(pmf_381e4520)this);
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x75c);
  TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_BattleAnim>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_AbnormalInfo_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar3[7].field_0x8,(UDS_BattleAnim *)&FStackX_8,(pmf_0cbe4a72)this);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x764);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x764);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x10,this);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar3[4].field_0x10,(UDS_BattleAnim *)&FStackX_8,(pmf_da5969f4)this);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x764);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[5].field_0x8,this);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                *)&pUVar3[5].field_0x8,(UDS_BattleAnim *)&FStackX_8,(pmf_da5969f4)this);
  }
  if (*(longlong *)&this->field_0x430 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong64 *)(*(longlong *)&this->field_0x430 + 8);
  }
  UDS_EntityData::GetData((ulong64)aFStackX_10,uVar4);
  bVar2 = FWeakObjectPtr::IsValid(aFStackX_10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(aFStackX_10);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_HeightMoveState,enum_EDS_HeightConditionType,enum_EDS_HeightConditionType,float),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_BattleAnim>
              (&pUVar3[6].field_0x18,(UDS_BattleAnim *)&FStackX_8,(pmf_3ec060d4)this);
  }
  return;
}

// OnChangedCharState @ 14b8862d0

void __thiscall
UDS_MountAnim::OnChangedCharState
          (UDS_MountAnim *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  int iVar2;
  UDS_CharStateData *pUVar3;
  FGameplayTag *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  EDS_CharState local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_BattleAnim::OnChangedCharState((UDS_BattleAnim *)this,param_1,&local_38);
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res8 = Mount;
  bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_res8);
  this->bIsMount = bVar1;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
  local_res8 = CONCAT44(local_res8._4_4_,0xf);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res8 = CONCAT71(local_res8._1_7_,0x14);
  }
  else {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x438);
    local_res8 = CONCAT71(local_res8._1_7_,0x15);
  }
  pFVar4 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  pTVar5 = UDS_CharStateData::GetAniIndexList(pUVar3,pFVar4);
  if (&local_48 != pTVar5) {
    iVar2 = pTVar5->ArrayNum;
    _Src = (pTVar5->AllocatorInstance).Data;
    local_48.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar7 = 0, local_48.ArrayMax == 0)) goto LAB_14b8863f6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,local_48.ArrayMax,&local_48.AllocatorInstance,iVar2,&local_48.ArrayMax);
    if (iVar2 != 0) {
      memcpy(local_48.AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
    }
  }
  iVar7 = local_48.ArrayNum;
LAB_14b8863f6:
  iVar2 = -1;
  if (iVar7 < 1) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)local_48.AllocatorInstance.Data + -1;
  }
  *(int *)&this->field_0x74c = iVar6;
  if (iVar7 < 2) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(local_48.AllocatorInstance.Data + 4) + -1;
  }
  *(int *)&this->field_0x750 = iVar6;
  if (2 < iVar7) {
    iVar2 = *(int *)(local_48.AllocatorInstance.Data + 8) + -1;
  }
  *(int *)&this->field_0x754 = iVar2;
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// OnNativeInitializeAnimation @ 14b88a770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_MountAnim::OnNativeInitializeAnimation(UDS_MountAnim *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_EventManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_MountEvent *pUVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  undefined1 local_140 [264];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_BattleAnim::OnNativeInitializeAnimation((UDS_BattleAnim *)this);
  local_140._0_8_ = UAnimInstance::GetOwningActor((UAnimInstance *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AActor *)local_140._0_8_ != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140._0_8_);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((AActor *)local_140._0_8_ != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140._0_8_);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)local_140);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_148,(void *)0x0);
  if (((!bVar1) &&
      (pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_148),
      pFVar2 != (FDS_EntityBase *)0x0)) &&
     (this_00 = UDS_EventManager::GetInst(), this_00 != (UDS_EventManager *)0x0)) {
    if ((char)this_00->_padding_ == '\x01') {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_140 + 8),
                   "UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_30,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
    else {
      pUVar4 = UDS_EventManager::GetEventInternal<UDS_MountEvent>(this_00);
      if (pUVar4 != (UDS_MountEvent *)0x0) {
        FDS_FilteredEventDelegate<unsigned___int64_const_,unsigned___int64_const_&>::
        Remove<UDS_MountAnim>(&pUVar4->OnMountOwnerChanged_Filtered,this);
        this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<unsigned___int64_const_&>
                            ((TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
                              *)&(pUVar4->OnMountOwnerChanged_Filtered).Subscriptions,
                             (int)(pFVar2->EntityID >> 0x20) * 0x17 + (int)pFVar2->EntityID,
                             &pFVar2->EntityID);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_MountAnim>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
                    *)this_01,(UDS_MountAnim *)local_140,(pmf_2038e35f)this);
      }
    }
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88b860

void __thiscall UDS_MountAnim::OnNativeThreadSafeUpdateAnimation(UDS_MountAnim *this,float param_1)

{
  UObject *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UDS_BattleAnim::OnNativeThreadSafeUpdateAnimation((UDS_BattleAnim *)this,param_1);
  fVar3 = this->MountHeadRotateConst;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6c0);
  fVar4 = *(float *)&pUVar1[0xb].field_0x4;
  if (0.0 < fVar3) {
    fVar2 = fVar4 - this->CurRotationZ;
    if (__real_322bcc77 <= fVar2 * fVar2) {
      fVar3 = fVar3 * param_1;
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar4 = fVar3 * fVar2 + this->CurRotationZ;
    }
  }
  if (__real_42b40000 <= fVar4) {
    fVar4 = __real_42b40000;
  }
  if (fVar4 <= __real_c2b40000) {
    fVar4 = __real_c2b40000;
  }
  this->CurRotationZ = fVar4;
  if (0.0 < this->MountHeadRotateConst) {
    fVar3 = *(float *)&this->field_0x4d0 - this->CurRotation;
    if (__real_322bcc77 <= fVar3 * fVar3) {
      fVar4 = this->MountHeadRotateConst * param_1;
      if (__real_3f800000 <= fVar4) {
        fVar4 = __real_3f800000;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      this->CurRotation = fVar4 * fVar3 + this->CurRotation;
      return;
    }
  }
  this->CurRotation = *(float *)&this->field_0x4d0;
  return;
}

// OnNativeUpdateAnimation @ 14b88be10

void __thiscall UDS_MountAnim::OnNativeUpdateAnimation(UDS_MountAnim *this,float param_1)

{
  return;
}

// OnUnBindAnimationEvents @ 14b894490

void __thiscall UDS_MountAnim::OnUnBindAnimationEvents(UDS_MountAnim *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  lVar1 = *(longlong *)&this->field_0x430;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) != '\x05')) {
    UDS_AbilityDataSet::GetAbilityData<UDS_MountAbilityData>
              ((ulong64 *)local_res10,(EDS_AbilityTagType *)(lVar1 + 8));
    bVar2 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)local_res10,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[2].field_0x8,this);
    }
  }
  UDS_BattleAnim::OnUnBindAnimationEvents((UDS_BattleAnim *)this);
  return;
}

// UpdateRotateStateTick @ 14b8a3630

void __thiscall UDS_MountAnim::UpdateRotateStateTick(UDS_MountAnim *this,float param_1)

{
  UObject *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = this->MountHeadRotateConst;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x6c0);
  fVar4 = *(float *)&pUVar1[0xb].field_0x4;
  if (0.0 < fVar3) {
    fVar2 = fVar4 - this->CurRotationZ;
    if (__real_322bcc77 <= fVar2 * fVar2) {
      fVar3 = fVar3 * param_1;
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar4 = fVar3 * fVar2 + this->CurRotationZ;
    }
  }
  if (__real_42b40000 <= fVar4) {
    fVar4 = __real_42b40000;
  }
  if (fVar4 <= __real_c2b40000) {
    fVar4 = __real_c2b40000;
  }
  this->CurRotationZ = fVar4;
  if (0.0 < this->MountHeadRotateConst) {
    fVar3 = *(float *)&this->field_0x4d0 - this->CurRotation;
    if (__real_322bcc77 <= fVar3 * fVar3) {
      fVar4 = this->MountHeadRotateConst * param_1;
      if (__real_3f800000 <= fVar4) {
        fVar4 = __real_3f800000;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      this->CurRotation = fVar4 * fVar3 + this->CurRotation;
      return;
    }
  }
  this->CurRotation = *(float *)&this->field_0x4d0;
  return;
}

