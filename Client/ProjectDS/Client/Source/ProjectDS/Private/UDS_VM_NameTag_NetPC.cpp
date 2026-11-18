// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b6a2e10

UClass * __cdecl UDS_VM_NameTag_NetPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_NetPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_NetPC,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_NetPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_NetPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton;
}

// UDS_VM_NameTag_NetPC @ 14b6a6610

UDS_VM_NameTag_NetPC * __thiscall
UDS_VM_NameTag_NetPC::UDS_VM_NameTag_NetPC(UDS_VM_NameTag_NetPC *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NetPC__6B_;
  FText::FText(&this->Name);
  this->NameAlpha = 1.0;
  this->HpPercent = 0.0;
  this->NameStyleID = 0;
  FVar1 = FLinearColor::White;
  this->PartyNumberStyleID = 0;
  this->Vis_HpPanel = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  this->Vis_Party = Collapsed;
  this->Vis_GuildPanel = Collapsed;
  this->Vis_Title = Collapsed;
  this->Vis_InterActionIcon = Collapsed;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatus).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DeathData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_NameTag_NetPC @ 14b6a6750

UDS_VM_NameTag_NetPC * __thiscall
UDS_VM_NameTag_NetPC::UDS_VM_NameTag_NetPC(UDS_VM_NameTag_NetPC *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NetPC__6B_;
  FText::FText(&this->Name);
  this->NameAlpha = 1.0;
  this->HpPercent = 0.0;
  this->NameStyleID = 0;
  FVar1 = FLinearColor::White;
  this->PartyNumberStyleID = 0;
  this->Vis_HpPanel = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  this->Vis_Party = Collapsed;
  this->Vis_GuildPanel = Collapsed;
  this->Vis_Title = Collapsed;
  this->Vis_InterActionIcon = Collapsed;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x34 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStatus).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DeathData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_NameTag_NetPC @ 14b6a7960

void __thiscall UDS_VM_NameTag_NetPC::~UDS_VM_NameTag_NetPC(UDS_VM_NameTag_NetPC *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NetPC__6B_;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameTagCollection).NameTagDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NameTagCollection).NameTagDataMap);
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameTagCollection).AlphaDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NameTagCollection).AlphaDataMap);
  pIVar2 = (this->Name).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a9be0

IClassDescriptor * __thiscall
UDS_VM_NameTag_NetPC::GetFieldNotificationDescriptor(UDS_VM_NameTag_NetPC *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_NetPC::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa940

UClass * __cdecl UDS_VM_NameTag_NetPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_NetPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_NetPC,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_NetPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_NetPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_NetPC.InnerSingleton;
}

// GetTickableTickType @ 14b6aaba0

ETickableTickType __thiscall UDS_VM_NameTag_NetPC::GetTickableTickType(UDS_VM_NameTag_NetPC *this)

{
  return Conditional;
}

// IsUpdate @ 14b6aabd0

bool __thiscall UDS_VM_NameTag_NetPC::IsUpdate(UDS_VM_NameTag_NetPC *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_NameTag_NetPC @ 14b6aade0

void __cdecl UDS_VM_NameTag_NetPC::StaticRegisterNativesUDS_VM_NameTag_NetPC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NameTag_NetPC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsInParty @ 14b6abe20

void __cdecl UDS_VM_NameTag_NetPC::execIsInParty(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = IsInParty((UDS_VM_NameTag_NetPC *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// BindModel @ 14bed8ce0

void __thiscall UDS_VM_NameTag_NetPC::BindModel(UDS_VM_NameTag_NetPC *this)

{
  bool bVar1;
  EDS_EntityType EVar2;
  UObject *pUVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  UDS_DataSetBase *this_01;
  UDS_PartyEvent *pUVar5;
  UDS_DungeonEvent *pUVar6;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->DeathData).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)&pUVar3[3].field_0x20,(UDS_VM_NameTag_NetPC *)&stack0x00000008,
               (pmf_9fec3512 *)this);
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_NetPC>
              (&pUVar3[4].field_0x18,(UDS_VM_NameTag_NetPC *)&stack0x00000008,(pmf_aa9ae81d *)this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->EntityData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
      if (pFVar4 != (FDS_StatusInfo *)0x0) {
        this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
        EVar2 = UDS_DataSetBase::GetEntityType(this_01);
        if (EVar2 != DummyCharacter) {
          TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_VM_NameTag_NetPC>
                    ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                      *)&pFVar4->ChangeStatusDelegate,(UDS_VM_NameTag_NetPC *)&stack0x00000008,
                     (pmf_fa4e1687 *)this);
        }
      }
    }
  }
  pUVar5 = UDS_PartyEvent::GetEvent();
  if (pUVar5 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnJoinedParty,(UDS_VM_NameTag_NetPC *)&stack0x00000008,(pmf_d70aad89 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnLeftParty,(UDS_VM_NameTag_NetPC *)&stack0x00000008,(pmf_d70aad89 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnJoinedPartyMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnJoinedPartyMember,(UDS_VM_NameTag_NetPC *)&stack0x00000008,
               (pmf_55a65d38 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLeftPartyMember,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnLeftPartyMember,(UDS_VM_NameTag_NetPC *)&stack0x00000008,
               (pmf_55a65d38 *)this);
  }
  pUVar6 = UDS_DungeonEvent::GetEvent();
  if (pUVar6 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_NetPC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangedRaidPartyInfo,(UDS_VM_NameTag_NetPC *)&stack0x00000008,
               (pmf_d70aad89 *)this);
  }
  return;
}

// IsInParty @ 14bef5430

int __thiscall UDS_VM_NameTag_NetPC::IsInParty(UDS_VM_NameTag_NetPC *this)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_RaidPartyRepo *pFVar6;
  FDS_RaidPartyMemberInfo *pFVar7;
  FDS_PartyRepo *pFVar8;
  atomic<unsigned_char> *paVar9;
  FWeakObjectPtr local_res8 [4];
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    UDS_PlayerData::GetData((ulong64)local_res8,*(ulong64 *)&pUVar5[0x11].field_0x20,false);
    bVar3 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(local_res8);
      lVar1 = *(long64 *)&pUVar5[6].field_0x8;
      pFVar6 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      pFVar7 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&pFVar6->RaidPartyInfo,lVar1);
      if (pFVar7->MemberState != DungeonInPlay) {
        pFVar8 = TDS_Singleton<FDS_PartyRepo>::GetInst();
        bVar3 = FDS_PartyInfo::IsPartyMemeber(&pFVar8->PartyInfo,lVar1);
        return (int)bVar3;
      }
      return 1;
    }
    iVar4 = 0x158;
    paVar9 = &bGEnsureHasExecuted<_1149887681442873000>;
  }
  else {
    iVar4 = 0x151;
    paVar9 = &bGEnsureHasExecuted<_1149887681442873007>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                     ,iVar4,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return 0;
}

// OnChangedHp @ 14bef79f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_NetPC::OnChangedHp(UDS_VM_NameTag_NetPC *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UDS_LogManager *pUVar4;
  FLinearColor *pFVar5;
  undefined1 auStackY_178 [32];
  FLinearColor_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (0.0 < param_2) {
    this->HpPercent = param_1 / param_2;
    local_148._s_0.B = (float)FFieldNotificationClassDescriptor::HpPercent.BitNumber;
    local_148._s_0.R =
         (float)FFieldNotificationClassDescriptor::HpPercent.FieldName.ComparisonIndex.Value;
    local_148._s_0.G = (float)FFieldNotificationClassDescriptor::HpPercent.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    pFVar5 = FDS_NameTagDataCollection::GetColor
                       (&this->NameTagCollection,(FLinearColor *)&local_148._s_0,Default,HpBar);
    fVar1 = (pFVar5->field0_0x0)._s_0.G;
    fVar2 = (pFVar5->field0_0x0)._s_0.B;
    fVar3 = (pFVar5->field0_0x0)._s_0.A;
    (this->HpColor).field0_0x0._s_0.R = (pFVar5->field0_0x0)._s_0.R;
    (this->HpColor).field0_0x0._s_0.G = fVar1;
    (this->HpColor).field0_0x0._s_0.B = fVar2;
    (this->HpColor).field0_0x0._s_0.A = fVar3;
    local_148._s_0.B = (float)FFieldNotificationClassDescriptor::HpColor.BitNumber;
    local_148._s_0.R =
         (float)FFieldNotificationClassDescriptor::HpColor.FieldName.ComparisonIndex.Value;
    local_148._s_0.G = (float)FFieldNotificationClassDescriptor::HpColor.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NameTag_NetPC::OnChangedHp",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x11f,L"MaxValue는 0보다 커야합니다.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnCloseInit @ 14befbfd0

void __thiscall UDS_VM_NameTag_NetPC::OnCloseInit(UDS_VM_NameTag_NetPC *this)

{
  this->bIsUpdate = false;
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnDeath @ 14befc1a0

void __thiscall
UDS_VM_NameTag_NetPC::OnDeath
          (UDS_VM_NameTag_NetPC *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Vis_HpPanel.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Vis_HpPanel.FieldName;
  if (this->Vis_HpPanel != Collapsed) {
    this->Vis_HpPanel = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  RefreshNameStyle(this);
  return;
}

// OnDungeonListChanged @ 14befc8d0

void __thiscall UDS_VM_NameTag_NetPC::OnDungeonListChanged(UDS_VM_NameTag_NetPC *this)

{
  RefreshPartyNumber(this);
  RefreshNameStyle(this);
  return;
}

// OnPartyInfoChanged @ 14bf027b0

void __thiscall UDS_VM_NameTag_NetPC::OnPartyInfoChanged(UDS_VM_NameTag_NetPC *this)

{
  RefreshPartyNumber(this);
  RefreshNameStyle(this);
  return;
}

// OnPartyMemberChanged @ 14bf02c70

void __thiscall
UDS_VM_NameTag_NetPC::OnPartyMemberChanged(UDS_VM_NameTag_NetPC *this,long64 param_1)

{
  RefreshPartyNumber(this);
  RefreshPartyNumber(this);
  RefreshNameStyle(this);
  return;
}

// OnResurrect @ 14bf035b0

void __thiscall
UDS_VM_NameTag_NetPC::OnResurrect
          (UDS_VM_NameTag_NetPC *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1,
          EDS_ResurrectType param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_PartyRepo *pFVar5;
  EDS_NameTagStateType EVar6;
  FWeakObjectPtr FStackX_8;
  FWeakObjectPtr FStackX_10;
  FName FStack_18;
  int iStack_10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    UDS_DeathData::GetData((ulong64)&FStackX_8,*(ulong64 *)&pUVar4[0x11].field_0x20,false);
    bVar2 = FWeakObjectPtr::IsValid(&FStackX_8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      UDS_PlayerData::GetData((ulong64)&FStackX_10,*(ulong64 *)&pUVar4[0x11].field_0x20,false);
      bVar2 = FWeakObjectPtr::IsValid(&FStackX_10);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&FStackX_8);
        if (pUVar4[3].field_0x18 == '\x01') {
          EVar6 = Death;
        }
        else {
          pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
          pUVar4 = FWeakObjectPtr::Get(&FStackX_10);
          bVar2 = FDS_PartyInfo::IsPartyMemeber(&pFVar5->PartyInfo,*(long64 *)&pUVar4[6].field_0x8);
          EVar6 = bVar2 + Default;
        }
        iVar3 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,EVar6,Name);
        this->NameStyleID = iVar3;
        iStack_10 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
        FStack_18 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873164>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0xb4,"OwnerActor.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bf07d40

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

void __thiscall
UDS_VM_NameTag_NetPC::OnSetViewModel
          (UDS_VM_NameTag_NetPC *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  EDS_EntityType EVar7;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar8;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar9;
  FDS_EntityBase *pFVar10;
  FWeakObjectPtr *this_01;
  UClass *pUVar11;
  TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> TVar12;
  TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> TVar13;
  FDS_NameTagDataCollection *pFVar14;
  UObject *pUVar15;
  FString *pFVar16;
  FText *pFVar17;
  UDS_DataSetBase *this_02;
  ulong64 local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  FFieldId local_78;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FText local_48 [2];
  
  pFVar1 = &param_1->SharedReferenceCount;
  pTVar3 = pFVar1->ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_68,&local_58);
  if (local_68.Object != (FDS_ViewModelContext_Entity *)0x0) {
    local_res10 = (local_68.Object)->EntityID;
    TVar8 = UDS_CharStatusData::GetData((ulong64)local_res20);
                    /* WARNING: Load size is inaccurate */
    (this->CharStatus).WeakPtr = *TVar8.WeakPtr;
    bVar6 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
    if (bVar6) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
      pFVar9 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
      if (pFVar9 == (FDS_StatusInfo *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1149887681442873303>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                           ,0x29,"hpStatus");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        goto LAB_14bf080ca;
      }
      pFVar10 = FDS_EntityBase::GetEntityBase(&local_res10);
      if (pFVar10 == (FDS_EntityBase *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1149887681442873297>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                           ,0x2f,"entityBase");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        goto LAB_14bf080ca;
      }
      this_01 = (FWeakObjectPtr *)(**(code **)(pFVar10->_padding_ + 0x150))(pFVar10,local_98);
      local_res18 = FWeakObjectPtr::Get(this_01);
      if (local_res18 == (UObject *)0x0) {
LAB_14bf07ef7:
        local_res18 = (UObject *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
        iVar2 = (int)pUVar11->_padding_;
        if ((*(int *)(*(longlong *)&local_res18->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar11->_padding_)) goto LAB_14bf07ef7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_res18);
      bVar6 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar6) {
        TVar12 = UDS_EntityDataSet::GetEntityDataSet((ulong64)local_90);
                    /* WARNING: Load size is inaccurate */
        (this->EntityData).WeakPtr = *TVar12.WeakPtr;
        bVar6 = FWeakObjectPtr::IsValid(&(this->EntityData).WeakPtr);
        if (bVar6) {
          TVar13 = UDS_DeathData::GetData((ulong64)local_88,local_res10,false);
                    /* WARNING: Load size is inaccurate */
          (this->DeathData).WeakPtr = *TVar13.WeakPtr;
          this->bIsUpdate = true;
          pFVar14 = UDS_NameTagDataAsset::GetNameTagDataCollection(NetPlayer);
          FDS_NameTagDataCollection::operator=(&this->NameTagCollection,pFVar14);
          iVar2 = FFieldNotificationClassDescriptor::Name.BitNumber;
          FVar5 = FFieldNotificationClassDescriptor::Name.FieldName;
          pUVar15 = FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
          pFVar16 = (FString *)(**(code **)(*(longlong *)pUVar15 + 0x2d0))(pUVar15);
          pFVar17 = FText::FromString(local_48,pFVar16);
          local_78.FieldName = FVar5;
          local_78.BitNumber = iVar2;
          UMVVMViewModelBase::SetPropertyValue
                    ((UMVVMViewModelBase *)this,&this->Name,pFVar17,&local_78);
          if (local_48[0].TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48[0].TextData.Reference + 0x10))();
          }
          this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->EntityData).WeakPtr);
          EVar7 = UDS_DataSetBase::GetEntityType(this_02);
          if (EVar7 != DummyCharacter) {
            OnChangedHp(this,(float)pFVar9->CurrentValue,pFVar9->MaxValue);
          }
          RefreshNameStyle(this);
          RefreshPartyNumber(this);
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1149887681442873285>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                             ,0x3b,"EntityData.IsValid()");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1149887681442873291>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                           ,0x35,"OwnerActor.IsValid()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      goto LAB_14bf080ca;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873309>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0x23,"CharStatus.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
LAB_14bf080ca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// OnUpdate @ 14bf0acf0

void __thiscall UDS_VM_NameTag_NetPC::OnUpdate(UDS_VM_NameTag_NetPC *this,float param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  FName local_28;
  int local_20;
  double local_18;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    lVar2 = *(longlong *)(pUVar5 + 0xb);
    if (lVar2 == 0) {
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
      uVar8 = auVar1._0_4_;
      uVar9 = auVar1._4_4_;
      dVar10 = auVar1._8_8_;
      local_18 = *(double *)(lVar2 + 0x220);
    }
    dVar7 = (double)CONCAT44(uVar9,uVar8) - ADS_CameraManager::CameraLocation.field0_0x0._s_0.X;
    fVar6 = UDS_NameTagDataAsset::GetAlphaByDistance
                      (NetPlayer,Name,
                       (float)((dVar10 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) *
                               (dVar10 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) +
                               dVar7 * dVar7 +
                              (local_18 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z) *
                              (local_18 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z)));
    local_20 = FFieldNotificationClassDescriptor::NameAlpha.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::NameAlpha.FieldName;
    if (fVar6 != this->NameAlpha) {
      this->NameAlpha = fVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873187>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0x9d,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RefreshNameStyle @ 14bf0faa0

void __thiscall UDS_VM_NameTag_NetPC::RefreshNameStyle(UDS_VM_NameTag_NetPC *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  FDS_PartyRepo *pFVar5;
  EDS_NameTagStateType EVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FName local_18;
  int local_10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    UDS_DeathData::GetData((ulong64)&local_res8,*(ulong64 *)&pUVar4[0x11].field_0x20,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      UDS_PlayerData::GetData((ulong64)&local_res10,*(ulong64 *)&pUVar4[0x11].field_0x20,false);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        if (pUVar4[3].field_0x18 == '\x01') {
          EVar6 = Death;
        }
        else {
          pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
          pUVar4 = FWeakObjectPtr::Get(&local_res10);
          bVar2 = FDS_PartyInfo::IsPartyMemeber(&pFVar5->PartyInfo,*(long64 *)&pUVar4[6].field_0x8);
          EVar6 = bVar2 + Default;
        }
        iVar3 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,EVar6,Name);
        this->NameStyleID = iVar3;
        local_10 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873164>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0xb4,"OwnerActor.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RefreshPartyNumber @ 14bf0fcf0

void __thiscall UDS_VM_NameTag_NetPC::RefreshPartyNumber(UDS_VM_NameTag_NetPC *this)

{
  FDS_PartyInfo *this_00;
  long64 lVar1;
  long64 lVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UObject *pUVar10;
  FDS_RaidPartyRepo *pFVar11;
  FDS_RaidPartyMemberInfo *this_01;
  FDS_RaidPartyMemberInfo *this_02;
  FDS_PartyRepo *pFVar12;
  longlong lVar13;
  FName *pFVar14;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873126>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0xda,"false");
    if (!bVar6) {
      return;
    }
code_r0x00014bf0fdf8:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  UDS_PlayerData::GetData((ulong64)&local_res8,*(ulong64 *)&pUVar10[0x11].field_0x20,false);
  bVar6 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873119>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0xe1,"false");
    if (!bVar6) {
      return;
    }
    goto code_r0x00014bf0fdf8;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1149887681442873112>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_NetPC.cpp"
                       ,0xe8,"false");
    if (!bVar6) {
      return;
    }
    goto code_r0x00014bf0fdf8;
  }
  pUVar10 = FWeakObjectPtr::Get(&local_res8);
  lVar1 = *(long64 *)&pUVar10[6].field_0x8;
  pUVar10 = FWeakObjectPtr::Get(&local_res10);
  lVar2 = *(long64 *)&pUVar10[6].field_0x8;
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  this_01 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&pFVar11->RaidPartyInfo,lVar1);
  this_02 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&pFVar11->RaidPartyInfo,lVar2);
  iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (this_01->MemberState == DungeonInPlay) {
    if (this->Vis_Party != HitTestInvisible) {
      this->Vis_Party = HitTestInvisible;
      local_c0 = iVar5;
      local_c8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    iVar5 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
    if (this->PartyNumber != this_01->SlotIndex) {
      this->PartyNumber = this_01->SlotIndex;
      local_b0 = iVar5;
      local_b8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    iVar7 = FDS_RaidPartyMemberInfo::GetPartyGroupID(this_02);
    iVar8 = FDS_RaidPartyMemberInfo::GetPartyGroupID(this_01);
    iVar5 = FFieldNotificationClassDescriptor::PartyNumberStyleID.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::PartyNumberStyleID.FieldName;
    if (iVar8 == iVar7) {
      iVar7 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Party,PartyNumber);
      if (this->PartyNumberStyleID == iVar7) {
        return;
      }
      pFVar14 = &local_a8;
      local_a8 = local_res18;
      this->PartyNumberStyleID = iVar7;
      local_a0 = iVar5;
    }
    else {
      iVar7 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,OtherParty,PartyNumber)
      ;
      if (this->PartyNumberStyleID == iVar7) {
        return;
      }
      pFVar14 = &local_98;
      local_98 = local_res18;
      this->PartyNumberStyleID = iVar7;
      local_90 = iVar5;
    }
  }
  else {
    pFVar12 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    this_00 = &pFVar12->PartyInfo;
    iVar7 = FDS_PartyInfo::GetPartyNumber(this_00,lVar1);
    iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
    if (iVar7 < 1) {
      if (this->Vis_Party == Collapsed) {
        return;
      }
      this->Vis_Party = Collapsed;
      local_80 = iVar5;
      pFVar14 = &local_88;
      lVar13 = this->_padding_;
      local_88 = FVar4;
      goto LAB_14bf100c9;
    }
    iVar8 = FDS_PartyInfo::GetPartyGroupNumber(this_00,lVar2);
    iVar9 = FDS_PartyInfo::GetPartyGroupNumber(this_00,lVar1);
    iVar5 = FFieldNotificationClassDescriptor::PartyNumberStyleID.BitNumber;
    local_res18 = FFieldNotificationClassDescriptor::PartyNumberStyleID.FieldName;
    if (iVar8 == iVar9) {
      iVar8 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Party,PartyNumber);
      if (this->PartyNumberStyleID != iVar8) {
        pFVar14 = &local_78;
        local_78 = local_res18;
        local_70 = iVar5;
LAB_14bf10052:
        this->PartyNumberStyleID = iVar8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar14);
      }
    }
    else {
      iVar8 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,OtherParty,PartyNumber)
      ;
      if (this->PartyNumberStyleID != iVar8) {
        pFVar14 = &local_68;
        local_68 = local_res18;
        local_60 = iVar5;
        goto LAB_14bf10052;
      }
    }
    iVar5 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
    if (this->Vis_Party != HitTestInvisible) {
      this->Vis_Party = HitTestInvisible;
      local_50 = iVar5;
      local_58 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    local_40 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
    if (this->PartyNumber == iVar7) {
      return;
    }
    this->PartyNumber = iVar7;
    pFVar14 = &local_48;
  }
  lVar13 = this->_padding_;
LAB_14bf100c9:
  (**(code **)(lVar13 + 0x38))(&this->_padding_,pFVar14);
  return;
}

// UnbindModel @ 14bf1e3d0

void __thiscall UDS_VM_NameTag_NetPC::UnbindModel(UDS_VM_NameTag_NetPC *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar3;
  UDS_PartyEvent *pUVar4;
  UDS_DungeonEvent *pUVar5;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->DeathData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[3].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x18,this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->EntityData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
      pFVar3 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
      if (pFVar3 != (FDS_StatusInfo *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar3->ChangeStatusDelegate,this);
      }
    }
  }
  pUVar4 = UDS_PartyEvent::GetEvent();
  if (pUVar4 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnLeftParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnJoinedPartyMember,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnLeftPartyMember,this
              );
  }
  pUVar5 = UDS_DungeonEvent::GetEvent();
  if (pUVar5 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnChangedRaidPartyInfo
               ,this);
  }
  return;
}

