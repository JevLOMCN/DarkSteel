// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b6a03d0

UClass * __cdecl UDS_VM_NameTag_PC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_PC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_PC,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_PC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_PC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton;
}

// UDS_VM_NameTag_PC @ 14b6a6890

UDS_VM_NameTag_PC * __thiscall
UDS_VM_NameTag_PC::UDS_VM_NameTag_PC(UDS_VM_NameTag_PC *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_PC__6B_;
  FText::FText(&this->Name);
  this->Vis_Name = Collapsed;
  this->NameStyleID = 0;
  this->HpPercent = 0.0;
  FVar1 = FLinearColor::White;
  this->HpVisibility = Collapsed;
  this->Vis_Party = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->TimeHandle).Handle = 0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  this->Vis_GuildPanel = Collapsed;
  this->Vis_Title = Collapsed;
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
  (this->CharStatus).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DeathData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfo).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_NameTag_PC @ 14b6a69c0

UDS_VM_NameTag_PC * __thiscall
UDS_VM_NameTag_PC::UDS_VM_NameTag_PC(UDS_VM_NameTag_PC *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_PC__6B_;
  FText::FText(&this->Name);
  this->Vis_Name = Collapsed;
  this->NameStyleID = 0;
  this->HpPercent = 0.0;
  FVar1 = FLinearColor::White;
  this->HpVisibility = Collapsed;
  this->Vis_Party = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->TimeHandle).Handle = 0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  this->Vis_GuildPanel = Collapsed;
  this->Vis_Title = Collapsed;
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
  (this->CharStatus).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DeathData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharInfo).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_NameTag_PC @ 14b6a7a10

void __thiscall UDS_VM_NameTag_PC::~UDS_VM_NameTag_PC(UDS_VM_NameTag_PC *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_PC__6B_;
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

// GetFieldNotificationDescriptor @ 14b6a9c50

IClassDescriptor * __thiscall
UDS_VM_NameTag_PC::GetFieldNotificationDescriptor(UDS_VM_NameTag_PC *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_PC::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aaa00

UClass * __cdecl UDS_VM_NameTag_PC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_PC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_PC,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_PC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_PC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_PC.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NameTag_PC @ 14b6aae20

void __cdecl UDS_VM_NameTag_PC::StaticRegisterNativesUDS_VM_NameTag_PC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NameTag_PC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnBattleStateChanged @ 14b6abe60

void __cdecl
UDS_VM_NameTag_PC::execOnBattleStateChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnBattleStateChanged((UDS_VM_NameTag_PC *)param_1,local_res10[0] != 0);
  return;
}

// BindModel @ 14bed8f70

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_NameTag_PC::BindModel(UDS_VM_NameTag_PC *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  char *pcVar6;
  UFunction *pUVar7;
  UDS_PartyEvent *pUVar8;
  UDS_DungeonEvent *pUVar9;
  char *pcVar10;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_NameTag_PC *local_res20;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FWeakObjectPtr local_150;
  FName local_148;
  undefined1 local_138 [32];
  FMRSWRecursiveAccessDetector *local_118;
  char local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [136];
  FReadAccessScope local_60;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
    pFVar3 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
    if (pFVar3 != (FDS_StatusInfo *)0x0) {
      local_138._8_4_ = 0;
      local_138._0_8_ = OnChangedHp;
      local_e8._24_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
      local_e8._16_8_ = OnChangedHp;
      TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_NameTag_PC>
                ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>
                  *)&pFVar3->ChangeStatusDelegate,(UDS_VM_NameTag_PC *)local_108,
                 (pmf_fc782d02 *)this);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->DeathData).WeakPtr);
  if (bVar2) {
    local_138._8_4_ = 0;
    local_138._0_8_ = OnDeath;
    local_e8._40_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
    local_e8._32_8_ = OnDeath;
    pUVar4 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_PC>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)&pUVar4[3].field_0x20,(UDS_VM_NameTag_PC *)(local_108 + 8),(pmf_b89e4f75 *)this);
    local_138._8_4_ = 0;
    local_138._0_8_ = OnResurrect;
    local_e8._56_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
    local_e8._48_8_ = OnResurrect;
    pUVar4 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>,enum_EDS_ResurrectType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_PC>
              (&pUVar4[4].field_0x18,(UDS_VM_NameTag_PC *)local_f8,(pmf_7eb144d8 *)this);
  }
  pFVar5 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (pFVar5 == (FDS_EntityBase *)0x0) goto LAB_14bed92ee;
  pcVar6 = strstr("&UDS_VM_NameTag_PC::OnBattleStateChanged","::");
  if (pcVar6 == (char *)0x0) {
LAB_14bed90fb:
    pcVar10 = &DAT_00000002;
LAB_14bed9100:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar6;
      pcVar6 = strstr(pcVar10 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14bed90fb;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14bed9100;
  }
  ::FName::FName(&local_res18,pcVar10);
  if ((this == (UDS_VM_NameTag_PC *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_res10 = local_res18;
  if ((this == (UDS_VM_NameTag_PC *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_NameTag_PC *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_res20);
  local_148 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_158,(FReadAccessScope *)(local_e8 + 0x70));
  if ((local_148 == (FName)0x0) ||
     (pUVar4 = FWeakObjectPtr::Get(&local_150), pUVar4 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_e8 + 0x70));
LAB_14bed923f:
    local_138._16_8_ = &local_res10;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
    __Internal_BindDynamic<UDS_VM_NameTag_PC>'::__l2::<lambda_1>::operator()(local_138 + 0x10);
  }
  else {
    pUVar7 = UObject::FindFunction(pUVar4,local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_e8 + 0x70));
    if (pUVar7 == (UFunction *)0x0) goto LAB_14bed923f;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_60);
  local_168.Object = local_150;
  local_168.FunctionName = local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar5->DataPropertyDelegate_BattleState,(FWriteAccessScope *)(local_138 + 0x18));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pFVar5->DataPropertyDelegate_BattleState).field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pFVar5->DataPropertyDelegate_BattleState,&local_168);
  if (local_110 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_118,(FDestructionSentinel *)(local_138 + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
  OnBattleStateChanged(this,pFVar5->BattleState);
LAB_14bed92ee:
  pUVar8 = UDS_PartyEvent::GetEvent();
  if (pUVar8 != (UDS_PartyEvent *)0x0) {
    local_168.FunctionName = (FName)((ulonglong)local_168.FunctionName & 0xffffffff00000000);
    local_168.Object = (FWeakObjectPtr)OnPartyInfoChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->OnJoinedParty,this);
    local_e8._64_4_ = local_168.Object.ObjectIndex;
    local_e8._68_4_ = local_168.Object.ObjectSerialNumber;
    local_e8._72_4_ = local_168.FunctionName.ComparisonIndex.Value;
    local_e8._76_4_ = local_168.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_PC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar8->OnJoinedParty,(UDS_VM_NameTag_PC *)(local_f8 + 8),(pmf_095483fc *)this);
    local_168.Object = (FWeakObjectPtr)OnPartyInfoChanged;
    local_168.FunctionName = (FName)((ulonglong)local_168.FunctionName & 0xffffffff00000000);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->OnLeftParty,this);
    local_e8._80_4_ = local_168.Object.ObjectIndex;
    local_e8._84_4_ = local_168.Object.ObjectSerialNumber;
    local_e8._88_4_ = local_168.FunctionName.ComparisonIndex.Value;
    local_e8._92_4_ = local_168.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_PC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar8->OnLeftParty,(UDS_VM_NameTag_PC *)local_e8,(pmf_095483fc *)this);
  }
  pUVar9 = UDS_DungeonEvent::GetEvent();
  if (pUVar9 != (UDS_DungeonEvent *)0x0) {
    local_168.FunctionName = (FName)((ulonglong)local_168.FunctionName & 0xffffffff00000000);
    local_168.Object = (FWeakObjectPtr)OnDungeonListChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9->OnChangedRaidPartyInfo
               ,this);
    local_e8._96_4_ = local_168.Object.ObjectIndex;
    local_e8._100_4_ = local_168.Object.ObjectSerialNumber;
    local_e8._104_4_ = local_168.FunctionName.ComparisonIndex.Value;
    local_e8._108_4_ = local_168.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_PC>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar9->OnChangedRaidPartyInfo,(UDS_VM_NameTag_PC *)local_138,(pmf_095483fc *)this);
  }
  return;
}

// OnBattleStateChanged @ 14bef7540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_NameTag_PC::OnBattleStateChanged(UDS_VM_NameTag_PC *this,bool param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *this_00;
  FTimerData *pFVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FWeakObjectPtr local_res18;
  UDS_VM_NameTag_PC *local_res20;
  FName local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FDelegateAllocation local_48 [2];
  
  UDS_NameTagDataAsset::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    if ((this->TimeHandle).Handle != 0) {
      pFVar4 = FTimerManager::FindTimer(this_00,&this->TimeHandle);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimeHandle).Handle);
      }
      (this->TimeHandle).Handle = 0;
    }
    iStack_50 = FFieldNotificationClassDescriptor::HpVisibility.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::HpVisibility.FieldName;
    if (param_1) {
      if (this->HpVisibility != HitTestInvisible) {
        this->HpVisibility = HitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&local_res18);
      iStack_50 = 0;
      fVar1 = *(float *)&pUVar5[1].field_0x14;
      local_58 = (FName)OnHPBarCollapseTimer;
      uStack_4c = local_48[0]._12_4_;
      local_48[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_48[0].DelegateSize = 0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,local_48);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NameTag_PC____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_NameTag_PC *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_NameTag_PC *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
        *(FName *)(puVar6 + 4) = local_58;
        puVar6[5] = CONCAT44(uStack_4c,iStack_50);
      }
      FTimerManager::SetTimer
                (this_00,&this->TimeHandle,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 local_48,fVar1,false,__real_bf800000);
      if (local_48[0].DelegateSize != 0) {
        if (local_48[0].DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_48[0].DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)local_48,0,0,0x10);
        local_48[0].DelegateSize = 0;
      }
      if (local_48[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_48[0].DelegateAllocator);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7448811706152648497>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                       ,0xcf,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnChangedHp @ 14bef7b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_NameTag_PC::OnChangedHp(UDS_VM_NameTag_PC *this,float param_1,float param_2)

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
                (&local_138,"UDS_VM_NameTag_PC::OnChangedHp",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0xb3,L"MaxValue는 0보다 커야합니다.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnDeath @ 14befc200

void __thiscall
UDS_VM_NameTag_PC::OnDeath
          (UDS_VM_NameTag_PC *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  FDS_PartyRepo *this_00;
  EDS_NameTagStateType EVar6;
  FWeakObjectPtr aFStackX_10 [3];
  FName FStack_18;
  int iStack_10;
  
  uVar4 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_DeathData::GetData((ulong64)aFStackX_10,uVar4,false);
  bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)aFStackX_10,(void *)0x0);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(aFStackX_10);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7448811706152648403>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                         ,0x12d,"deathData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(aFStackX_10);
    if (pUVar5[3].field_0x18 == '\x01') {
      EVar6 = Death;
    }
    else {
      this_00 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      bVar2 = FDS_PartyRepo::IsPartyJoined(this_00);
      EVar6 = bVar2 + Default;
    }
    iVar3 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,EVar6,Name);
    this->NameStyleID = iVar3;
    iStack_10 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnDungeonListChanged @ 14befc900

void __thiscall UDS_VM_NameTag_PC::OnDungeonListChanged(UDS_VM_NameTag_PC *this)

{
  long64 lVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  FDS_PartyRepo *pFVar10;
  FName *pFVar11;
  FWeakObjectPtr FStackX_10;
  FName FStackX_18;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  FName FStack_58;
  int iStack_50;
  FName FStack_48;
  int iStack_40;
  FName FStack_38;
  int iStack_30;
  FName FStack_28;
  int iStack_20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&FStackX_10);
  iVar4 = FFieldNotificationClassDescriptor::PartyNumberStyleID.BitNumber;
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7448811706152648439>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                       ,0x109,"false");
    if (!bVar5) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStackX_18 = FFieldNotificationClassDescriptor::PartyNumberStyleID.FieldName;
  iVar6 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Party,PartyNumber);
  if (this->PartyNumberStyleID != iVar6) {
    this->PartyNumberStyleID = iVar6;
    FStack_78 = FStackX_18;
    iStack_70 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
  }
  pUVar7 = FWeakObjectPtr::Get(&FStackX_10);
  lVar1 = *(long64 *)&pUVar7[6].field_0x8;
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar9 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&pFVar8->RaidPartyInfo,lVar1);
  iVar4 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (pFVar9->MemberState == DungeonInPlay) {
    if (this->Vis_Party != HitTestInvisible) {
      this->Vis_Party = HitTestInvisible;
      iStack_60 = iVar4;
      FStack_68 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
    }
    iStack_50 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
    FStack_58 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
    if (this->PartyNumber == pFVar9->SlotIndex) {
      return;
    }
    this->PartyNumber = pFVar9->SlotIndex;
    pFVar11 = &FStack_58;
    goto LAB_14bf10326;
  }
  pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  iVar6 = FDS_PartyInfo::GetPartyNumber(&pFVar10->PartyInfo,lVar1);
  iVar4 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (iVar6 < 1) {
    if (this->Vis_Party != Collapsed) {
      this->Vis_Party = Collapsed;
      pFVar11 = &FStack_38;
      FStack_38 = FVar3;
      iStack_30 = iVar4;
      goto LAB_14bf102e7;
    }
  }
  else if (this->Vis_Party != HitTestInvisible) {
    this->Vis_Party = HitTestInvisible;
    pFVar11 = &FStack_48;
    FStack_48 = FVar3;
    iStack_40 = iVar4;
LAB_14bf102e7:
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar11);
  }
  iStack_20 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
  if (this->PartyNumber == iVar6) {
    return;
  }
  this->PartyNumber = iVar6;
  pFVar11 = &FStack_28;
LAB_14bf10326:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar11);
  return;
}

// OnHPBarCollapseTimer @ 14befdc00

void __thiscall UDS_VM_NameTag_PC::OnHPBarCollapseTimer(UDS_VM_NameTag_PC *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::HpVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HpVisibility.FieldName;
  if (this->HpVisibility != Collapsed) {
    this->HpVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnNametagOptionChanged @ 14beff1a0

void __thiscall
UDS_VM_NameTag_PC::OnNametagOptionChanged
          (UDS_VM_NameTag_PC *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName local_18;
  int local_10;
  
  iVar4 = UDS_GameOptionData::GetGameOptionValue(param_1,0);
  iVar3 = FFieldNotificationClassDescriptor::Vis_Name.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Vis_Name.FieldName;
  if (iVar4 == 1) {
    if (this->Vis_Name == SelfHitTestInvisible) goto LAB_14beff204;
    this->Vis_Name = SelfHitTestInvisible;
  }
  else {
    if (this->Vis_Name == Collapsed) goto LAB_14beff204;
    this->Vis_Name = Collapsed;
  }
  local_10 = iVar3;
  local_18 = FVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
LAB_14beff204:
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnPartyInfoChanged @ 14bf027e0

void __thiscall UDS_VM_NameTag_PC::OnPartyInfoChanged(UDS_VM_NameTag_PC *this)

{
  RefreshPartyNumber(this);
  RefreshNameStyle(this);
  return;
}

// OnResurrect @ 14bf035c0

void __thiscall
UDS_VM_NameTag_PC::OnResurrect
          (UDS_VM_NameTag_PC *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1,
          EDS_ResurrectType param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  FDS_PartyRepo *this_00;
  EDS_NameTagStateType EVar6;
  FWeakObjectPtr aFStackX_10 [3];
  FName FStack_18;
  int iStack_10;
  
  uVar4 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_DeathData::GetData((ulong64)aFStackX_10,uVar4,false);
  bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)aFStackX_10,(void *)0x0);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(aFStackX_10);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7448811706152648403>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                         ,0x12d,"deathData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(aFStackX_10);
    if (pUVar5[3].field_0x18 == '\x01') {
      EVar6 = Death;
    }
    else {
      this_00 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      bVar2 = FDS_PartyRepo::IsPartyJoined(this_00);
      EVar6 = bVar2 + Default;
    }
    iVar3 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,EVar6,Name);
    this->NameStyleID = iVar3;
    iStack_10 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_18);
  }
  return;
}

// OnSetViewModel @ 14bf080f0

void __thiscall
UDS_VM_NameTag_PC::OnSetViewModel
          (UDS_VM_NameTag_PC *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> TVar6;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar7;
  TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> TVar8;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar9;
  UDS_GameOptionManager *this_01;
  UObject *pUVar10;
  FText *pFVar11;
  FDS_NameTagDataCollection *pFVar12;
  UDS_GameOptionData *this_02;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  TReferenceControllerBase<1> *local_70;
  FString local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  code *local_48;
  ulonglong uStack_40;
  FText local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>
            ((TSharedPtr<FDS_ViewModelContext_Entity,1> *)(local_80 + 8),&local_58);
  if (local_80._8_8_ == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  else {
    if ((local_80._8_8_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(ulong64 *)(local_80._8_8_ + 0x20);
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      TVar6 = UDS_CharStatusData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
      (this->CharStatus).WeakPtr = *TVar6.WeakPtr;
      bVar4 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
      if (bVar4) {
        this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
        pFVar7 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
        if (pFVar7 == (FDS_StatusInfo *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7448811706152648653>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                             ,0x33,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          TVar8 = UDS_DeathData::GetData((ulong64)local_res20,uVar2,false);
                    /* WARNING: Load size is inaccurate */
          (this->DeathData).WeakPtr = *TVar8.WeakPtr;
          bVar4 = FWeakObjectPtr::IsValid(&(this->DeathData).WeakPtr);
          if (bVar4) {
            TVar9 = UDS_CharInfoData::GetData((ulong64)local_88);
                    /* WARNING: Load size is inaccurate */
            (this->CharInfo).WeakPtr = *TVar9.WeakPtr;
            bVar4 = FWeakObjectPtr::IsValid(&(this->CharInfo).WeakPtr);
            if (bVar4) {
              this_01 = UDS_GameOptionManager::GetInst();
              if (this_01 == (UDS_GameOptionManager *)0x0) {
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_7448811706152648632>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                                   ,0x48,"false");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                this->EntityID = uVar2;
                pUVar10 = FWeakObjectPtr::Get(&local_res10);
                pFVar11 = FText::FromString(&local_38,(FString *)&pUVar10[7].field_0x20);
                FText::operator=(&this->Name,pFVar11);
                if (local_38.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
                }
                pFVar12 = UDS_NameTagDataAsset::GetNameTagDataCollection(Player);
                FDS_NameTagDataCollection::operator=(&this->NameTagCollection,pFVar12);
                this_02 = UDS_GameOptionManager::GetGameOptionData(this_01,GamOptionVisibleMyname);
                if (this_02 != (UDS_GameOptionData *)0x0) {
                  uStack_40 = uStack_40 & 0xffffffff00000000;
                  local_48 = OnNametagOptionChanged;
                  TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  ::AddUObject<UDS_VM_NameTag_PC>
                            ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                              *)&this_02->GameOptionDataChangedFromVM,(UDS_VM_NameTag_PC *)local_80,
                             (pmf_33f91f3e *)this);
                  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_68.Data.ArrayNum = 0;
                  local_68.Data.ArrayMax = 0;
                  iVar5 = UDS_GameOptionData::GetGameOptionValue(this_02,0);
                  OnNametagOptionChanged(this,this_02,0,iVar5,&local_68);
                }
                OnChangedHp(this,(float)pFVar7->CurrentValue,pFVar7->MaxValue);
                RefreshPartyNumber(this);
                RefreshNameStyle(this);
              }
            }
            else {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_7448811706152648639>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                                 ,0x41,"false");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          else {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7448811706152648646>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                               ,0x3a,"false");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70);
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7448811706152648660>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                           ,0x2c,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7448811706152648668>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                         ,0x24,"playerData.IsValid()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshNameStyle @ 14bf0fc00

void __thiscall UDS_VM_NameTag_PC::RefreshNameStyle(UDS_VM_NameTag_PC *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  UObject *pUVar5;
  FDS_PartyRepo *this_00;
  EDS_NameTagStateType EVar6;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  uVar4 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_DeathData::GetData((ulong64)local_res10,uVar4,false);
  bVar2 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid(local_res10);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7448811706152648403>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                         ,0x12d,"deathData.IsValid()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(local_res10);
    if (pUVar5[3].field_0x18 == '\x01') {
      EVar6 = Death;
    }
    else {
      this_00 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      bVar2 = FDS_PartyRepo::IsPartyJoined(this_00);
      EVar6 = bVar2 + Default;
    }
    iVar3 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,EVar6,Name);
    this->NameStyleID = iVar3;
    local_10 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// RefreshPartyNumber @ 14bf10110

void __thiscall UDS_VM_NameTag_PC::RefreshPartyNumber(UDS_VM_NameTag_PC *this)

{
  long64 lVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  FDS_RaidPartyRepo *pFVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  FDS_PartyRepo *pFVar10;
  FName *pFVar11;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  iVar4 = FFieldNotificationClassDescriptor::PartyNumberStyleID.BitNumber;
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7448811706152648439>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NameTag\\DS_VM_NameTag_PC.cpp"
                       ,0x109,"false");
    if (!bVar5) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = FFieldNotificationClassDescriptor::PartyNumberStyleID.FieldName;
  iVar6 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Party,PartyNumber);
  if (this->PartyNumberStyleID != iVar6) {
    this->PartyNumberStyleID = iVar6;
    local_78 = local_res18;
    local_70 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  lVar1 = *(long64 *)&pUVar7[6].field_0x8;
  pFVar8 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar9 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&pFVar8->RaidPartyInfo,lVar1);
  iVar4 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (pFVar9->MemberState == DungeonInPlay) {
    if (this->Vis_Party != HitTestInvisible) {
      this->Vis_Party = HitTestInvisible;
      local_60 = iVar4;
      local_68 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    local_50 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
    if (this->PartyNumber == pFVar9->SlotIndex) {
      return;
    }
    this->PartyNumber = pFVar9->SlotIndex;
    pFVar11 = &local_58;
    goto LAB_14bf10326;
  }
  pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  iVar6 = FDS_PartyInfo::GetPartyNumber(&pFVar10->PartyInfo,lVar1);
  iVar4 = FFieldNotificationClassDescriptor::Vis_Party.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Vis_Party.FieldName;
  if (iVar6 < 1) {
    if (this->Vis_Party != Collapsed) {
      this->Vis_Party = Collapsed;
      pFVar11 = &local_38;
      local_38 = FVar3;
      local_30 = iVar4;
      goto LAB_14bf102e7;
    }
  }
  else if (this->Vis_Party != HitTestInvisible) {
    this->Vis_Party = HitTestInvisible;
    pFVar11 = &local_48;
    local_48 = FVar3;
    local_40 = iVar4;
LAB_14bf102e7:
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar11);
  }
  local_20 = FFieldNotificationClassDescriptor::PartyNumber.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::PartyNumber.FieldName;
  if (this->PartyNumber == iVar6) {
    return;
  }
  this->PartyNumber = iVar6;
  pFVar11 = &local_28;
LAB_14bf10326:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar11);
  return;
}

// UnbindModel @ 14bf1e4e0

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

void __thiscall UDS_VM_NameTag_PC::UnbindModel(UDS_VM_NameTag_PC *this)

{
  bool bVar1;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_PartyEvent *pUVar5;
  UDS_DungeonEvent *pUVar6;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStatus).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&(this->CharStatus).WeakPtr);
    pFVar2 = UDS_CharStatusData::GetStatusInfo(this_00,Hp);
    if (pFVar2 != (FDS_StatusInfo *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->ChangeStatusDelegate
                 ,this);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->DeathData).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[3].field_0x20,this);
    pUVar3 = FWeakObjectPtr::Get(&(this->DeathData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x18,this);
  }
  pFVar4 = FDS_EntityBase::GetEntityBase(&this->EntityID);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pFVar4->DataPropertyDelegate_BattleState,(UObject *)this);
  }
  pUVar5 = UDS_PartyEvent::GetEvent();
  if (pUVar5 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnLeftParty,this);
  }
  pUVar6 = UDS_DungeonEvent::GetEvent();
  if (pUVar6 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnChangedRaidPartyInfo
               ,this);
  }
  return;
}

