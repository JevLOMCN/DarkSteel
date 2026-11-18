// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 39

// StaticClass @ 14b78a620

UClass * __cdecl UDS_VM_NameTag_Stuff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_Stuff",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_Stuff,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_Stuff>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_Stuff>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton;
}

// UDS_VM_NameTag_Stuff @ 14b78c990

UDS_VM_NameTag_Stuff * __thiscall
UDS_VM_NameTag_Stuff::UDS_VM_NameTag_Stuff(UDS_VM_NameTag_Stuff *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameAlpha = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_Stuff__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  this->GatherCurrentCount = 0.0;
  this->GatherMaxCount = 0.0;
  (this->Text_RemainTime).StringTableType = None;
  (this->Text_RemainTime).StringTableID = 0;
  (this->Text_RemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_RemainTime).StringEnumTableNameID.Number = 0;
  (this->Text_RemainTime).DateTime.Ticks = 0;
  (this->Text_RemainTime).TimeSpan.Ticks = 0;
  (this->Text_RemainTime).TimeExpressionType = None;
  (this->Text_RemainTime).IsExpression = false;
  (this->Text_RemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_RemainTime).UniqueString.Data.ArrayNum = 0;
  (this->Text_RemainTime).UniqueString.Data.ArrayMax = 0;
  (this->Text_RemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_RemainTime).FormatArgs.ArrayNum = 0;
  (this->Text_RemainTime).FormatArgs.ArrayMax = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->SymbolIconID = 0;
  this->GatheringCurrentTime = 0.0;
  this->GatheringTimeMax = 0.0;
  this->OwnerEntityID = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NameTagData).ID_GaugeDefaultColor = 0;
  (this->Name).StringTableType = None;
  this->NameVisibility = Collapsed;
  this->Vis_GaugePanel = Collapsed;
  this->GatheringCountVisibility = Collapsed;
  this->IconPanelVisibility = Collapsed;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->IsStuffGather = false;
  this->QuestIconVisibility = Collapsed;
  this->bIsInNametagTrigger = false;
  this->bIsUserFocused = false;
  this->bIsShowNameTag = true;
  this->bIsInInteractionTrigger = false;
  this->bIsDetected = true;
  return this;
}

// UDS_VM_NameTag_Stuff @ 14b78cb10

UDS_VM_NameTag_Stuff * __thiscall
UDS_VM_NameTag_Stuff::UDS_VM_NameTag_Stuff(UDS_VM_NameTag_Stuff *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameAlpha = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_Stuff__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  this->GatherCurrentCount = 0.0;
  this->GatherMaxCount = 0.0;
  (this->Text_RemainTime).StringTableType = None;
  (this->Text_RemainTime).StringTableID = 0;
  (this->Text_RemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_RemainTime).StringEnumTableNameID.Number = 0;
  (this->Text_RemainTime).DateTime.Ticks = 0;
  (this->Text_RemainTime).TimeSpan.Ticks = 0;
  (this->Text_RemainTime).TimeExpressionType = None;
  (this->Text_RemainTime).IsExpression = false;
  (this->Text_RemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_RemainTime).UniqueString.Data.ArrayNum = 0;
  (this->Text_RemainTime).UniqueString.Data.ArrayMax = 0;
  (this->Text_RemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_RemainTime).FormatArgs.ArrayNum = 0;
  (this->Text_RemainTime).FormatArgs.ArrayMax = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->SymbolIconID = 0;
  this->GatheringCurrentTime = 0.0;
  this->GatheringTimeMax = 0.0;
  this->OwnerEntityID = 0;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NameTagData).ID_GaugeDefaultColor = 0;
  (this->Name).StringTableType = None;
  this->NameVisibility = Collapsed;
  this->Vis_GaugePanel = Collapsed;
  this->GatheringCountVisibility = Collapsed;
  this->IconPanelVisibility = Collapsed;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->IsStuffGather = false;
  this->QuestIconVisibility = Collapsed;
  this->bIsInNametagTrigger = false;
  this->bIsUserFocused = false;
  this->bIsShowNameTag = true;
  this->bIsInInteractionTrigger = false;
  this->bIsDetected = true;
  return this;
}

// ~UDS_VM_NameTag_Stuff @ 14b78df30

void __thiscall UDS_VM_NameTag_Stuff::~UDS_VM_NameTag_Stuff(UDS_VM_NameTag_Stuff *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_Stuff__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_RemainTime).FormatArgs.AllocatorInstance.Data,
             (this->Text_RemainTime).FormatArgs.ArrayNum);
  pFVar2 = (this->Text_RemainTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Text_RemainTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar2 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fb90

IClassDescriptor * __thiscall
UDS_VM_NameTag_Stuff::GetFieldNotificationDescriptor(UDS_VM_NameTag_Stuff *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_Stuff::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b78ffb0

UClass * __cdecl UDS_VM_NameTag_Stuff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_Stuff",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_Stuff,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_Stuff>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_Stuff>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_Stuff.InnerSingleton;
}

// GetTickableTickType @ 14b790a50

ETickableTickType __thiscall UDS_VM_NameTag_Stuff::GetTickableTickType(UDS_VM_NameTag_Stuff *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_NameTag_Stuff @ 14b790ad0

void __cdecl UDS_VM_NameTag_Stuff::StaticRegisterNativesUDS_VM_NameTag_Stuff(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NameTag_Stuff_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b791d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NameTag_Stuff::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_NameTag_Stuff__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    *(undefined4 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0x101;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)((longlong)&this[2]._padding_ + 4) = 0x100;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0x10000;
    this[2].bIsCloseInit = true;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetGatheringCurrentPercent @ 14b7921c0

void __cdecl
UDS_VM_NameTag_Stuff::execGetGatheringCurrentPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetGatheringCurrentPercent((UDS_VM_NameTag_Stuff *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetGatheringRemainTime @ 14b792200

void __cdecl
UDS_VM_NameTag_Stuff::execGetGatheringRemainTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetGatheringRemainTime((UDS_VM_NameTag_Stuff *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execOnDirtyStuffData @ 14b7922c0

void __cdecl
UDS_VM_NameTag_Stuff::execOnDirtyStuffData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnDirtyStuffData((UDS_VM_NameTag_Stuff *)param_1,local_res10);
  return;
}

// BindModel @ 14c002500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_NameTag_Stuff::BindModel(UDS_VM_NameTag_Stuff *this)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  FName FVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_QuestEvent *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UFunction *pUVar11;
  UDS_DataBase *pUVar12;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  FWeakObjectPtr local_1a0;
  FName local_198;
  undefined8 local_190;
  FName local_188;
  UObject *local_180;
  FName local_178;
  UDS_VM_NameTag_Stuff *local_170;
  FName *local_168 [2];
  undefined1 local_158 [24];
  FName local_140;
  FDestructionSentinel local_138;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [160];
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar5) {
    iStack_1b0 = 0;
    local_1b8 = (FName)OnChangedPlayerSkillTargetInfo;
    local_f0._16_8_ = (ulonglong)uStack_1ac << 0x20;
    local_f0._8_8_ = OnChangedPlayerSkillTargetInfo;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_Stuff>
              (&pUVar6[0xf].field_0x10,(UDS_VM_NameTag_Stuff *)local_120,(pmf_82ba1169 *)this);
  }
  pUVar7 = UDS_QuestEvent::GetEvent();
  if (pUVar7 != (UDS_QuestEvent *)0x0) {
    iStack_1b0 = 0;
    local_1b8 = (FName)OnQuestChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7->OnChanedQuestDelegate,
               this);
    local_f0._32_8_ = CONCAT44(uStack_1ac,iStack_1b0);
    local_f0._24_4_ = local_1b8.ComparisonIndex.Value;
    local_f0._28_4_ = local_1b8.Number;
    TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_Stuff>
              (&pUVar7->OnChanedQuestDelegate,(UDS_VM_NameTag_Stuff *)(local_120 + 8),
               (pmf_899616f5 *)this);
  }
  bVar5 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerActor,(void *)0x0);
  if (!bVar5) {
    iStack_1b0 = 0;
    local_1b8 = (FName)OnTriggerOverlaped;
    local_f0._48_8_ = (ulonglong)uStack_1ac << 0x20;
    local_f0._40_8_ = OnTriggerOverlaped;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_Stuff>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
                *)&pUVar6[0x27].field_0x8,(UDS_VM_NameTag_Stuff *)local_110,(pmf_1b7e3e2b *)this);
    iStack_1b0 = 0;
    local_1b8 = (FName)OnChangeUserFocused;
    local_f0._64_8_ = (ulonglong)uStack_1ac << 0x20;
    local_f0._56_8_ = OnChangeUserFocused;
    pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_Stuff>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar6[0x21].field_0x8,(UDS_VM_NameTag_Stuff *)(local_110 + 8),
               (pmf_1767259f *)this);
  }
  UDS_StuffData::GetData((ulong64)&local_res10,this->OwnerEntityID,false);
  bVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar5) {
    return;
  }
  iStack_1b0 = 0;
  local_1b8 = (FName)OnInteractionStart;
  local_f0._80_8_ = (ulonglong)uStack_1ac << 0x20;
  local_f0._72_8_ = OnInteractionStart;
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_Stuff>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar6[8].field_0x8,(UDS_VM_NameTag_Stuff *)local_100,(pmf_4d8dd4e9 *)this);
  iStack_1b0 = 0;
  local_1b8 = (FName)OnInteractionCancel;
  local_f0._96_8_ = (ulonglong)uStack_1ac << 0x20;
  local_f0._88_8_ = OnInteractionCancel;
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_Stuff>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)(pUVar6 + 9),(UDS_VM_NameTag_Stuff *)(local_100 + 8),(pmf_4d8dd4e9 *)this);
  iStack_1b0 = 0;
  local_1b8 = (FName)OnInteractionComplete;
  local_f0._112_8_ = (ulonglong)uStack_1ac << 0x20;
  local_f0._104_8_ = OnInteractionComplete;
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_Stuff>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar6[9].field_0x20,(UDS_VM_NameTag_Stuff *)local_f0,(pmf_d2426a4b *)this);
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  iVar1 = FFieldNotificationClassDescriptor::IsStuffGather.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::IsStuffGather.FieldName;
  if (pUVar6[7].field_0x10 != '\x01') {
    return;
  }
  if (this->IsStuffGather != true) {
    this->IsStuffGather = true;
    iStack_1b0 = iVar1;
    local_1b8 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar6 == (UObject *)0x0) {
LAB_14c0027c0:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_StuffGatherData_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_14c0027c0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_180 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_180);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406648>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x88,"stuffGatherData.IsValid()");
    if (!bVar5) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_158._0_8_ = OnChangedStuffState;
  local_158._8_4_ = 0;
  local_f0._128_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
  local_f0._120_8_ = OnChangedStuffState;
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  TMulticastDelegateRegistration<void___cdecl(enum_EDS_StuffState_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_Stuff>
            (&pUVar6[10].field_0x18,(UDS_VM_NameTag_Stuff *)local_158,(pmf_2b3ca65f *)this);
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  pUVar10 = (UObject *)strstr("&UDS_VM_NameTag_Stuff::OnDirtyStuffData","::");
  pUVar6 = (UObject *)0x0;
  while (pUVar3 = pUVar10, pUVar3 != (UObject *)0x0) {
    pUVar10 = (UObject *)strstr(&pUVar3->field_0x1,"::");
    pUVar6 = pUVar3;
  }
  if (((pUVar6 == (UObject *)0x0) || (pUVar6->field_0x2 == '0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FName::FName(&local_178,&pUVar6->field_0x2);
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1a0.ObjectIndex = 0;
  local_1a0.ObjectSerialNumber = 0;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  local_188 = local_178;
  local_170 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_170);
  local_198 = local_188;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_1a8,(FReadAccessScope *)(local_f0 + 0x88));
  local_190 = 0;
  if ((local_198 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_1a0), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_f0 + 0x88));
  }
  else {
    pUVar11 = UObject::FindFunction(pUVar6,local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_f0 + 0x88));
    if (pUVar11 != (UFunction *)0x0) goto LAB_14c002a07;
  }
  local_168[0] = &local_188;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_NameTag_Stuff>'::__l2::<lambda_1>::operator()(local_168);
LAB_14c002a07:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a8,&local_50);
  local_158._16_4_ = local_1a0.ObjectIndex;
  local_158._20_4_ = local_1a0.ObjectSerialNumber;
  local_140 = local_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),
             (FWriteAccessScope *)&local_138);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar9[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar9 + 1),
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_158 + 0x10));
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  pUVar12 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res18);
  OnDirtyStuffData(this,pUVar12);
  return;
}

// GetGatheringCurrentPercent @ 14c01aad0

float __thiscall UDS_VM_NameTag_Stuff::GetGatheringCurrentPercent(UDS_VM_NameTag_Stuff *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->GatheringTimeMax != 0.0) {
    fVar1 = this->GatheringCurrentTime / this->GatheringTimeMax;
  }
  return fVar1;
}

// GetGatheringRemainTime @ 14c01ab00

float __thiscall UDS_VM_NameTag_Stuff::GetGatheringRemainTime(UDS_VM_NameTag_Stuff *this)

{
  if (this->GatheringTimeMax == 0.0) {
    return 0.0;
  }
  return this->GatheringTimeMax - this->GatheringCurrentTime;
}

// GetTableID @ 14c01b750

int __thiscall UDS_VM_NameTag_Stuff::GetTableID(UDS_VM_NameTag_Stuff *this)

{
  bool bVar1;
  int iVar2;
  UDS_DataBase *this_00;
  FWeakObjectPtr local_res8 [4];
  
  UDS_StuffGatherData::GetData((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res8);
  iVar2 = UDS_DataBase::GetEntityTableID(this_00);
  return iVar2;
}

// InitStuffData @ 14c01ea80

void __thiscall UDS_VM_NameTag_Stuff::InitStuffData(UDS_VM_NameTag_Stuff *this)

{
  return;
}

// IsDetected @ 14c022530

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

bool __thiscall UDS_VM_NameTag_Stuff::IsDetected(UDS_VM_NameTag_Stuff *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_StuffGatherData *this_00;
  undefined1 auStackY_178 [32];
  uint uVar4;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
    uVar4 = 0xfa;
  }
  else {
    if (pFVar2->EntityType != StuffGather) {
      return true;
    }
    UDS_StuffGatherData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffGatherData::IsDetected(this_00);
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
    uVar4 = 0x104;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,L"ownerEntity is nullptr.");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// IsUpdate @ 14c0239e0

bool __thiscall UDS_VM_NameTag_Stuff::IsUpdate(UDS_VM_NameTag_Stuff *this)

{
  if (this->GatheringTimeMax == 0.0) {
    return false;
  }
  return 0.0 < this->GatheringTimeMax - this->GatheringCurrentTime;
}

// OnChangeUserFocused @ 14c025810

void __thiscall UDS_VM_NameTag_Stuff::OnChangeUserFocused(UDS_VM_NameTag_Stuff *this,bool *param_1)

{
  this->bIsUserFocused = *param_1;
  Refresh(this);
  return;
}

// OnChangedPlayerSkillTargetInfo @ 14c025b00

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

void __thiscall
UDS_VM_NameTag_Stuff::OnChangedPlayerSkillTargetInfo
          (UDS_VM_NameTag_Stuff *this,EDS_PlayerSkillType *param_1,
          FDS_PlayerSkillTargetInfo *param_2,EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_StuffGatherData *this_00;
  bool bVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  bVar2 = (bool)(**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x188))
                          (&pUVar3[0x11].field_0x18,1);
  this->bIsInNametagTrigger = bVar2;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  bVar2 = (bool)(**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x188))
                          (&pUVar3[0x11].field_0x18,2);
  this->bIsInInteractionTrigger = bVar2;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  FVar1 = (this->OwnerActor).WeakPtr;
  this->bIsUserFocused = (bool)pUVar3[0x26].field_0x20;
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)FVar1);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
      uVar7 = 0xfa;
LAB_14c03e007:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,uVar7,L"ownerEntity is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    if (pFVar4->EntityType != StuffGather) {
      bVar2 = true;
      goto LAB_14c03e0d0;
    }
    UDS_StuffGatherData::GetData((ulong64)aFStack_148);
    bVar2 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)aFStack_148,(void *)0x0
                      );
    if (!bVar2) {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(aFStack_148);
      bVar2 = UDS_StuffGatherData::IsDetected(this_00);
      goto LAB_14c03e0d0;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
      uVar7 = 0x104;
      goto LAB_14c03e007;
    }
  }
  bVar2 = false;
LAB_14c03e0d0:
  this->bIsDetected = bVar2;
  if ((this->bIsInNametagTrigger == false) && (this->bIsUserFocused == false)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  this->bIsShowNameTag = bVar6;
  if (bVar2 == false) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    RefreshInteractionIcon(this);
    RefreshQuestIcon(this);
    RefreshName(this);
    RefreshGathering(this);
    RefreshGauge(this);
  }
  return;
}

// OnChangedStuffState @ 14c025b70

void __thiscall
UDS_VM_NameTag_Stuff::OnChangedStuffState(UDS_VM_NameTag_Stuff *this,EDS_StuffState *param_1)

{
  if (*param_1 == Die) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    return;
  }
  return;
}

// OnCloseInit @ 14c028590

void __thiscall UDS_VM_NameTag_Stuff::OnCloseInit(UDS_VM_NameTag_Stuff *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnDirtyStuffData @ 14c0291f0

void __thiscall
UDS_VM_NameTag_Stuff::OnDirtyStuffData(UDS_VM_NameTag_Stuff *this,UDS_DataBase *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FName local_28;
  int local_20;
  
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  iVar2 = FFieldNotificationClassDescriptor::GatherCurrentCount.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::GatherCurrentCount.FieldName;
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if ((float)*(int *)&pUVar4[0xb].field_0x10 != this->GatherCurrentCount) {
      this->GatherCurrentCount = (float)*(int *)&pUVar4[0xb].field_0x10;
      local_28 = FVar1;
      local_20 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    iVar2 = FFieldNotificationClassDescriptor::GatherMaxCount.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::GatherMaxCount.FieldName;
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if ((float)*(int *)&pUVar4[0xb].field_0x14 != this->GatherMaxCount) {
      this->GatherMaxCount = (float)*(int *)&pUVar4[0xb].field_0x14;
      local_28 = FVar1;
      local_20 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  return;
}

// OnInteractionCancel @ 14c02ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_Stuff::OnInteractionCancel(UDS_VM_NameTag_Stuff *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_StuffData::GetData((ulong64)&local_140,this->OwnerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar2) {
    UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      if (*param_1 == *(ulong64 *)&pUVar4[8].field_0x10) {
        RefreshInteractionIcon(this);
        RefreshGathering(this);
        RefreshGauge(this);
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_NameTag_Stuff::OnInteractionCancel",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x208,L"mainPlayerData is invalid.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5617446692044406263>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                         ,0x209,"false");
      if (bVar2) goto code_r0x00014c02bbbf;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406272>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x200,"stuffData.IsValid()");
    if (bVar2) {
code_r0x00014c02bbbf:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnInteractionComplete @ 14c02bc40

void __thiscall
UDS_VM_NameTag_Stuff::OnInteractionComplete
          (UDS_VM_NameTag_Stuff *this,ulong64 *param_1,bool *param_2,bool *param_3)

{
  FName FVar1;
  FName *pFVar2;
  char *pcVar3;
  FName local_res8 [3];
  FName local_res20;
  FName local_18;
  int local_10;
  
  pFVar2 = &local_res20;
  pcVar3 = "Ani_Ascender_success";
  if (*param_3 != true) {
    pcVar3 = "Ani_Ascender_Fail";
    pFVar2 = local_res8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar3);
  FVar1 = *pFVar2;
  (this->AnimationEvent).AnimationName = FVar1;
  if (FVar1 != (FName)0x0) {
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  RefreshGathering(this);
  RefreshGauge(this);
  return;
}

// OnInteractionStart @ 14c02bcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_Stuff::OnInteractionStart(UDS_VM_NameTag_Stuff *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  float fVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_StuffData::GetData((ulong64)&local_140,this->OwnerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar2) {
    UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      if (*param_1 == *(ulong64 *)&pUVar4[8].field_0x10) {
        Refresh(this);
        pUVar4 = FWeakObjectPtr::Get(&local_140);
        fVar5 = (float)(**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
        if (0.0 < fVar5) {
          this->GatheringTimeMax = fVar5;
          this->GatheringCurrentTime = 0.0;
        }
      }
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_NameTag_Stuff::OnInteractionStart",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x1e8,L"mainPlayerData is invalid.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5617446692044406295>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                         ,0x1e9,"false");
      if (bVar2) goto code_r0x00014c02be3f;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406304>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x1e0,"stuffData.IsValid()");
    if (bVar2) {
code_r0x00014c02be3f:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnQuestChanged @ 14c02e160

void __thiscall
UDS_VM_NameTag_Stuff::OnQuestChanged
          (UDS_VM_NameTag_Stuff *this,int param_1,EDS_QuestDataType param_2)

{
  RefreshQuestIcon(this);
  RefreshInteractionIcon(this);
  return;
}

// OnSetViewModel @ 14c0319e0

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

void __thiscall
UDS_VM_NameTag_Stuff::OnSetViewModel
          (UDS_VM_NameTag_Stuff *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *this_00;
  UObject *pUVar8;
  UClass *pUVar9;
  undefined1 auStackY_408 [32];
  FWeakObjectPtr local_3c8;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_3c0;
  FWeakObjectPtr local_3b0;
  UObject *local_3a8;
  TSharedPtr<FDS_ViewModelContext,1> local_3a0;
  undefined1 local_390 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pFVar1 = &param_1->SharedReferenceCount;
  pTVar3 = pFVar1->ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_3a0.Object = param_1->Object;
  local_3a0.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_3a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_3c0,&local_3a0);
  if (local_3c0.Object == (FDS_ViewModelContext_Entity *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_NameTag_Stuff::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_388.Ptr,0x3f,L"FDS_ViewModelContext_NameTag is Invalid.");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406720>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x40,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c0.SharedReferenceCount.ReferenceController);
    goto LAB_14c031dc7;
  }
  pFVar7 = FDS_EntityBase::GetEntityBase(&(local_3c0.Object)->EntityID);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_NameTag_Stuff::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_268.Ptr,0x47,L"entityBase is nullptr. EntityID : %llu");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406712>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x48,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_390);
    pUVar8 = FWeakObjectPtr::Get(this_00);
    if (pUVar8 == (UObject *)0x0) {
LAB_14c031c27:
      pUVar8 = (UObject *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) goto LAB_14c031c27;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_3c8.ObjectIndex = 0;
    local_3c8.ObjectSerialNumber = 0;
    local_3a8 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_3c8,(FObjectPtr)&local_3a8);
    bVar5 = FWeakObjectPtr::IsValid(&local_3c8);
    if (bVar5) {
      (this->OwnerActor).WeakPtr = local_3c8;
      this->OwnerEntityID = (local_3c0.Object)->EntityID;
      UDS_NameTagDataAsset::GetInst();
      bVar5 = FWeakObjectPtr::IsValid(&local_3b0);
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&local_3b0);
        (this->NameTagData).ID_GaugeDefaultColor = *(int *)&pUVar8[0xf].field_0x18;
        Refresh(this);
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5617446692044406694>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                           ,0x5a,"false");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_NameTag_Stuff::OnSetViewModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x4f,L"entityActor is nullptr. EntityID : %llu");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5617446692044406704>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                         ,0x50,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c0.SharedReferenceCount.ReferenceController);
LAB_14c031dc7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// OnTriggerOverlaped @ 14c039e80

void __thiscall
UDS_VM_NameTag_Stuff::OnTriggerOverlaped
          (UDS_VM_NameTag_Stuff *this,UDS_TriggerComponent *param_1,bool param_2)

{
  if (param_1->TriggerType == NameTag) {
    this->bIsInNametagTrigger = param_2;
    Refresh(this);
    return;
  }
  if (param_1->TriggerType == Interaction) {
    this->bIsInInteractionTrigger = param_2;
  }
  Refresh(this);
  return;
}

// OnUpdate @ 14c03a4b0

void __thiscall UDS_VM_NameTag_Stuff::OnUpdate(UDS_VM_NameTag_Stuff *this,float param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_TextFormatArg *this_00;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ERoundingMode EVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  FDS_StuffBaseTableRow *pFVar12;
  FNumberFormattingOptions *pFVar13;
  float fVar14;
  float fVar15;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  bVar9 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar9) {
    fVar3 = this->GatheringTimeMax;
    fVar14 = fVar3;
    if (this->GatheringCurrentTime <= fVar3) {
      fVar14 = this->GatheringCurrentTime + param_1;
    }
    this->GatheringCurrentTime = fVar14;
    fVar15 = 0.0;
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    if (fVar3 != 0.0) {
      fVar15 = fVar3 - fVar14;
    }
    FDS_Text::SetTextFromSec(&local_68,fVar15,SecondsDec1,false);
    pUVar11 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    pFVar12 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar11[0x12].field_0x8,true);
    pTVar2 = &(this->Text_RemainTime).FormatArgs;
    (this->Text_RemainTime).StringTableID = (pFVar12->ID_InteractionDesc).ID;
    (this->Text_RemainTime).StringTableType = StringBase;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->Text_RemainTime).FormatArgs.ArrayNum);
    piVar1 = &(this->Text_RemainTime).FormatArgs.ArrayMax;
    (this->Text_RemainTime).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar10 = (this->Text_RemainTime).FormatArgs.ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Text_RemainTime).FormatArgs.ArrayNum = iVar10 + 1;
    this_00 = (FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x28);
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_00);
    pFVar13 = FNumberFormattingOptions::DefaultWithGrouping();
    bVar9 = pFVar13->UseGrouping;
    bVar5 = pFVar13->IndicateNearlyInteger;
    uVar6 = pFVar13->field_0x3;
    EVar7 = pFVar13->RoundingMode;
    iVar10 = pFVar13->MinimumIntegralDigits;
    iVar8 = pFVar13->MaximumIntegralDigits;
    (this_00->NumberFormatOption).AlwaysSign = pFVar13->AlwaysSign;
    (this_00->NumberFormatOption).UseGrouping = bVar9;
    (this_00->NumberFormatOption).IndicateNearlyInteger = bVar5;
    (this_00->NumberFormatOption).field_0x3 = uVar6;
    (this_00->NumberFormatOption).RoundingMode = EVar7;
    (this_00->NumberFormatOption).MinimumIntegralDigits = iVar10;
    (this_00->NumberFormatOption).MaximumIntegralDigits = iVar8;
    iVar10 = pFVar13->MaximumFractionalDigits;
    (this_00->NumberFormatOption).MinimumFractionalDigits = pFVar13->MinimumFractionalDigits;
    (this_00->NumberFormatOption).MaximumFractionalDigits = iVar10;
    FDS_TextFormatArg::SetArg<FDS_Text_&>(this_00,&local_68);
    local_80 = FFieldNotificationClassDescriptor::Text_RemainTime.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::Text_RemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::GetGatheringCurrentPercent.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::GetGatheringCurrentPercent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406575>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0xd1,"false");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// Refresh @ 14c03df20

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

void __thiscall UDS_VM_NameTag_Stuff::Refresh(UDS_VM_NameTag_Stuff *this)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_StuffGatherData *this_00;
  bool bVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  bVar2 = (bool)(**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x188))
                          (&pUVar3[0x11].field_0x18,1);
  this->bIsInNametagTrigger = bVar2;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  bVar2 = (bool)(**(code **)(*(longlong *)&pUVar3[0x11].field_0x18 + 0x188))
                          (&pUVar3[0x11].field_0x18,2);
  this->bIsInInteractionTrigger = bVar2;
  pUVar3 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  FVar1 = (this->OwnerActor).WeakPtr;
  this->bIsUserFocused = (bool)pUVar3[0x26].field_0x20;
  pFVar4 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)FVar1);
  if (pFVar4 == (FDS_EntityBase *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
      uVar7 = 0xfa;
LAB_14c03e007:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,uVar7,L"ownerEntity is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (pFVar4->EntityType != StuffGather) {
      bVar2 = true;
      goto LAB_14c03e0d0;
    }
    UDS_StuffGatherData::GetData((ulong64)local_148);
    bVar2 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar2) {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_148);
      bVar2 = UDS_StuffGatherData::IsDetected(this_00);
      goto LAB_14c03e0d0;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NameTag_Stuff::IsDetected",0x20,Yes);
      uVar7 = 0x104;
      goto LAB_14c03e007;
    }
  }
  bVar2 = false;
LAB_14c03e0d0:
  this->bIsDetected = bVar2;
  if ((this->bIsInNametagTrigger == false) && (this->bIsUserFocused == false)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  this->bIsShowNameTag = bVar6;
  if (bVar2 == false) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    RefreshInteractionIcon(this);
    RefreshQuestIcon(this);
    RefreshName(this);
    RefreshGathering(this);
    RefreshGauge(this);
  }
  return;
}

// RefreshGathering @ 14c03e4e0

void __thiscall UDS_VM_NameTag_Stuff::RefreshGathering(UDS_VM_NameTag_Stuff *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_StuffBaseTableRow *pFVar3;
  ESlateVisibility EVar4;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  local_10 = FFieldNotificationClassDescriptor::GatheringCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GatheringCountVisibility.FieldName;
  if (bVar1) {
    if (this->bIsShowNameTag == false) {
      if (this->GatheringCountVisibility != Collapsed) {
        this->GatheringCountVisibility = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        return;
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      pFVar3 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar2[0x12].field_0x8,true);
      FDS_StuffBaseTableRow::ID_GradeTypeTable(pFVar3);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      EVar4 = Collapsed;
      if (pUVar2[7].field_0x10 == '\x01') {
        EVar4 = SelfHitTestInvisible;
      }
      pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      pFVar3 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar2[0x12].field_0x8,true);
      local_10 = FFieldNotificationClassDescriptor::GatheringCountVisibility.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::GatheringCountVisibility.FieldName;
      if (pFVar3->IsCountIndication == false) {
        if (this->GatheringCountVisibility == Collapsed) {
          return;
        }
        this->GatheringCountVisibility = Collapsed;
      }
      else {
        if (this->GatheringCountVisibility == EVar4) {
          return;
        }
        this->GatheringCountVisibility = EVar4;
      }
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// RefreshGauge @ 14c03e6a0

void __thiscall UDS_VM_NameTag_Stuff::RefreshGauge(UDS_VM_NameTag_Stuff *this)

{
  bool bVar1;
  UDS_StuffGatherData *this_00;
  ulong64 uVar2;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Vis_GaugePanel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Vis_GaugePanel.FieldName;
  if (this->bIsShowNameTag == false) {
    if (this->Vis_GaugePanel == Collapsed) {
      return;
    }
    this->Vis_GaugePanel = Collapsed;
  }
  else {
    UDS_StuffGatherData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar1) {
      return;
    }
    this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
    uVar2 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    bVar1 = UDS_StuffGatherData::IsInteractingWithEntity(this_00,uVar2);
    local_10 = FFieldNotificationClassDescriptor::Vis_GaugePanel.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Vis_GaugePanel.FieldName;
    if (bVar1) {
      if (this->Vis_GaugePanel == HitTestInvisible) {
        return;
      }
      this->Vis_GaugePanel = HitTestInvisible;
    }
    else {
      if (this->Vis_GaugePanel == Collapsed) {
        return;
      }
      this->Vis_GaugePanel = Collapsed;
    }
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// RefreshInteractionIcon @ 14c03e780

void __thiscall UDS_VM_NameTag_Stuff::RefreshInteractionIcon(UDS_VM_NameTag_Stuff *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  UDS_QuestManager *this_00;
  UDS_StuffGatherData *this_01;
  ulong64 uVar6;
  UObject *pUVar7;
  FDS_StuffBaseTableRow *pFVar8;
  longlong lVar9;
  FName *pFVar10;
  FWeakObjectPtr local_res8;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406478>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x132,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014c03e816:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406471>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x139,"false");
    if (bVar4) goto code_r0x00014c03e816;
  }
  else {
    bVar4 = UDS_QuestManager::IsQuestTarget(this_00,this->OwnerEntityID);
    local_50 = FFieldNotificationClassDescriptor::IconPanelVisibility.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::IconPanelVisibility.FieldName;
    if (bVar4) {
      if (this->IconPanelVisibility != Collapsed) {
        this->IconPanelVisibility = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
        return;
      }
    }
    else if (this->bIsInInteractionTrigger == false) {
      if (this->IconPanelVisibility != Collapsed) {
        this->IconPanelVisibility = Collapsed;
        local_40 = local_50;
        local_48 = local_58;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
        return;
      }
    }
    else {
      bVar5 = false;
      UDS_StuffGatherData::GetData((ulong64)&local_res8);
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar4) {
        this_01 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res8);
        uVar6 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
        bVar5 = UDS_StuffGatherData::IsInteractingWithEntity(this_01,uVar6);
      }
      iVar3 = FFieldNotificationClassDescriptor::IconPanelVisibility.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::IconPanelVisibility.FieldName;
      if (bVar5 == true) {
        if (this->IconPanelVisibility == Collapsed) {
          return;
        }
        this->IconPanelVisibility = Collapsed;
        local_30 = iVar3;
        pFVar10 = &local_38;
        lVar9 = this->_padding_;
        local_38 = FVar2;
      }
      else {
        if (this->IconPanelVisibility != SelfHitTestInvisible) {
          this->IconPanelVisibility = SelfHitTestInvisible;
          local_20 = iVar3;
          local_28 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        }
        pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        pFVar8 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar7[0x12].field_0x8,true);
        local_10 = FFieldNotificationClassDescriptor::SymbolIconID.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::SymbolIconID.FieldName;
        if (this->SymbolIconID == pFVar8->ID_FunctionIcon) {
          return;
        }
        this->SymbolIconID = pFVar8->ID_FunctionIcon;
        lVar9 = this->_padding_;
        pFVar10 = &local_18;
      }
      (**(code **)(lVar9 + 0x38))(&this->_padding_,pFVar10);
    }
  }
  return;
}

// RefreshName @ 14c03f2f0

void __thiscall UDS_VM_NameTag_Stuff::RefreshName(UDS_VM_NameTag_Stuff *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  FDS_StuffBaseTableRow *this_00;
  FDS_CommonGradeTableRow *pFVar6;
  FWeakObjectPtr local_res8;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  local_50 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
  if (this->bIsShowNameTag == false) {
    if (this->NameVisibility != Collapsed) {
      this->NameVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      return;
    }
  }
  else {
    UDS_StuffData::GetData((ulong64)&local_res8,this->OwnerEntityID,false);
    bVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      local_40 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
      if (pUVar5[7].field_0x10 == '\x02') {
        if (this->NameVisibility != Collapsed) {
          this->NameVisibility = Collapsed;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
          return;
        }
      }
      else {
        pUVar5 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        this_00 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar5[0x12].field_0x8,true);
        pFVar6 = FDS_StuffBaseTableRow::ID_GradeTypeTable(this_00);
        FDS_Text::SetTextFromStringID(&this->Name,&this_00->ID_Name);
        local_30 = FFieldNotificationClassDescriptor::Name.BitNumber;
        local_38 = FFieldNotificationClassDescriptor::Name.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
        iVar3 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
        if (this->NameStyleID != pFVar6->ID_ResourceStyleM) {
          this->NameStyleID = pFVar6->ID_ResourceStyleM;
          local_20 = iVar3;
          local_28 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        }
        local_10 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
        if (this->NameVisibility != HitTestInvisible) {
          this->NameVisibility = HitTestInvisible;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5617446692044406424>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                         ,0x168,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// RefreshQuestIcon @ 14c03f830

void __thiscall UDS_VM_NameTag_Stuff::RefreshQuestIcon(UDS_VM_NameTag_Stuff *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_QuestManager *this_00;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5617446692044406495>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_Stuff.cpp"
                       ,0x121,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    bVar2 = UDS_QuestManager::IsQuestTarget(this_00,this->OwnerEntityID);
    local_10 = FFieldNotificationClassDescriptor::QuestIconVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestIconVisibility.FieldName;
    if (bVar2) {
      if (this->QuestIconVisibility != SelfHitTestInvisible) {
        this->QuestIconVisibility = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
    else if (this->QuestIconVisibility != Collapsed) {
      this->QuestIconVisibility = Collapsed;
      local_20 = local_10;
      local_28 = local_18;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      return;
    }
  }
  return;
}

// SetGatheringCountVisibility @ 14c041440

void __thiscall
UDS_VM_NameTag_Stuff::SetGatheringCountVisibility
          (UDS_VM_NameTag_Stuff *this,ESlateVisibility param_1)

{
  UObject *pUVar1;
  FDS_StuffBaseTableRow *pFVar2;
  FName local_18;
  int local_10;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  pFVar2 = FDS_StuffBaseTableRow::GetRef(*(long64 *)&pUVar1[0x12].field_0x8,true);
  local_10 = FFieldNotificationClassDescriptor::GatheringCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GatheringCountVisibility.FieldName;
  if (pFVar2->IsCountIndication == false) {
    if (this->GatheringCountVisibility == Collapsed) {
      return;
    }
    this->GatheringCountVisibility = Collapsed;
  }
  else {
    if (this->GatheringCountVisibility == param_1) {
      return;
    }
    this->GatheringCountVisibility = param_1;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c048840

void __thiscall UDS_VM_NameTag_Stuff::UnbindModel(UDS_VM_NameTag_Stuff *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_QuestEvent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x27].field_0x8,this);
  }
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnChanedQuestDelegate,
               this);
  }
  UDS_StuffGatherData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 9),this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[9].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x18,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

