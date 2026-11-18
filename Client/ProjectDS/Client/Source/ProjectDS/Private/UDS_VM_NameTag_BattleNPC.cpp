// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b77c8b0

UClass * __cdecl UDS_VM_NameTag_BattleNPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_BattleNPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_BattleNPC,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_BattleNPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_BattleNPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton;
}

// UDS_VM_NameTag_BattleNPC @ 14b7808c0

UDS_VM_NameTag_BattleNPC * __thiscall
UDS_VM_NameTag_BattleNPC::UDS_VM_NameTag_BattleNPC
          (UDS_VM_NameTag_BattleNPC *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_BattleNPC__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimeHandle).Handle = 0;
  (this->MainTargetTimerHandle).Handle = 0;
  (this->NametagData).NameData.EnemyNameData.AggressiveEnemyNameStyleID = 0;
  (this->NametagData).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID = 0;
  (this->NametagData).NameData.NeutralityNameStyleID = 0;
  (this->NametagData).NameData.FriendNameStyleId = 0;
  (this->NametagData).TitleData.DefaultTitleStyleID = 0;
  (this->NametagData).TitleData.DeathTitleStyleID = 0;
  (this->NametagData).HpBarData.DefaultHpBarColorID = 0;
  (this->NametagData).HpBarData.AggressiveHpBarColorID = 0;
  (this->NametagData).StartIconFadeDistance = 0.0;
  (this->NametagData).EndIconFadeDistance = 0.0;
  (this->Name).StringTableType = None;
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
  (this->NameVisibilityTimerHandle).Handle = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  this->bIsHitEventActivated = false;
  this->bIsUserFocused = false;
  this->bIsTargetingMainPlayer = false;
  this->bIsShowName = false;
  this->NameStyleID = 0;
  this->TitleStyleID = 0;
  this->HpPercent = 0.0;
  this->TitleNameVisibility = Collapsed;
  this->HpVisibility = Collapsed;
  FVar1 = FLinearColor::White;
  this->QuestTargetIconID = 0;
  this->FunctionIconID = 0;
  this->MainTargetVisibility = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->HpVisibilityTimerHandle).Handle = 0;
  (this->MainTargetAniEvent).AnimationName.ComparisonIndex = 0;
  (this->MainTargetAniEvent).AnimationName.Number = 0;
  (this->MainTargetAniEvent).AnimationPlayTime = 0.0;
  (this->MainTargetAniEvent).AnimationEventType = None;
  (this->MainTargetAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->MainTargetAniEvent).NumberOfLoops = 1;
  this->QuestTargetAlpha = 1.0;
  this->QuestObjectiveVisibility = Collapsed;
  this->AttributeVisibility = Collapsed;
  this->InteractionVisibility = Collapsed;
  this->FunctionIconVisibility = Collapsed;
  return this;
}

// UDS_VM_NameTag_BattleNPC @ 14b780a90

UDS_VM_NameTag_BattleNPC * __thiscall
UDS_VM_NameTag_BattleNPC::UDS_VM_NameTag_BattleNPC
          (UDS_VM_NameTag_BattleNPC *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_BattleNPC__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimeHandle).Handle = 0;
  (this->MainTargetTimerHandle).Handle = 0;
  (this->NametagData).NameData.EnemyNameData.AggressiveEnemyNameStyleID = 0;
  (this->NametagData).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID = 0;
  (this->NametagData).NameData.NeutralityNameStyleID = 0;
  (this->NametagData).NameData.FriendNameStyleId = 0;
  (this->NametagData).TitleData.DefaultTitleStyleID = 0;
  (this->NametagData).TitleData.DeathTitleStyleID = 0;
  (this->NametagData).HpBarData.DefaultHpBarColorID = 0;
  (this->NametagData).HpBarData.AggressiveHpBarColorID = 0;
  (this->NametagData).StartIconFadeDistance = 0.0;
  (this->NametagData).EndIconFadeDistance = 0.0;
  (this->Name).StringTableType = None;
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
  (this->NameVisibilityTimerHandle).Handle = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  this->bIsHitEventActivated = false;
  this->bIsUserFocused = false;
  this->bIsTargetingMainPlayer = false;
  this->bIsShowName = false;
  this->NameStyleID = 0;
  this->TitleStyleID = 0;
  this->HpPercent = 0.0;
  this->TitleNameVisibility = Collapsed;
  this->HpVisibility = Collapsed;
  FVar1 = FLinearColor::White;
  this->QuestTargetIconID = 0;
  this->FunctionIconID = 0;
  this->MainTargetVisibility = Collapsed;
  (this->HpColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->HpVisibilityTimerHandle).Handle = 0;
  (this->MainTargetAniEvent).AnimationName.ComparisonIndex = 0;
  (this->MainTargetAniEvent).AnimationName.Number = 0;
  (this->MainTargetAniEvent).AnimationPlayTime = 0.0;
  (this->MainTargetAniEvent).AnimationEventType = None;
  (this->MainTargetAniEvent).AnimationStateType = None;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->MainTargetAniEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->MainTargetAniEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->MainTargetAniEvent).NumberOfLoops = 1;
  this->QuestTargetAlpha = 1.0;
  this->QuestObjectiveVisibility = Collapsed;
  this->AttributeVisibility = Collapsed;
  this->InteractionVisibility = Collapsed;
  this->FunctionIconVisibility = Collapsed;
  return this;
}

// ~UDS_VM_NameTag_BattleNPC @ 14b782a30

void __thiscall UDS_VM_NameTag_BattleNPC::~UDS_VM_NameTag_BattleNPC(UDS_VM_NameTag_BattleNPC *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_BattleNPC__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MainTargetAniEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->MainTargetAniEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MainTargetAniEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MainTargetAniEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->MainTargetAniEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MainTargetAniEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar2 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
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

// GetFieldNotificationDescriptor @ 14b784f00

IClassDescriptor * __thiscall
UDS_VM_NameTag_BattleNPC::GetFieldNotificationDescriptor(UDS_VM_NameTag_BattleNPC *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_BattleNPC::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b785360

UClass * __cdecl UDS_VM_NameTag_BattleNPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_BattleNPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_BattleNPC,0x230,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_BattleNPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_BattleNPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_BattleNPC.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NameTag_BattleNPC @ 14b7863e0

void __cdecl UDS_VM_NameTag_BattleNPC::StaticRegisterNativesUDS_VM_NameTag_BattleNPC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NameTag_BattleNPC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b7875a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NameTag_BattleNPC::__VTableCtorCaller(FVTableHelper *param_1)

{
  FLinearColor FVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDS_ViewModelBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_NameTag_BattleNPC__6B_;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    FVar1 = FLinearColor::White;
    *(undefined1 *)&this[2].VMName.Number = 1;
    *(undefined4 *)&this[3]._padding_ = 0x3f800000;
    this[2].ViewModelContext = (TSharedPtr<FDS_ViewModelContext,1>)FVar1.field0_0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    *(undefined2 *)&this[2].TextPropertyIDList.ArrayMax = 0;
    *(undefined4 *)&this[3]._padding_ = 1;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined2 *)((longlong)&this[3]._padding_ + 4) = 0x101;
    *(undefined1 *)((longlong)&this[3]._padding_ + 6) = 1;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnChangedHp @ 14b787800

void __cdecl
UDS_VM_NameTag_BattleNPC::execOnChangedHp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedHp((UDS_VM_NameTag_BattleNPC *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execOnMainTargetChanged @ 14b7879f0

void __cdecl
UDS_VM_NameTag_BattleNPC::execOnMainTargetChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulong64 *puVar2;
  ulong64 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  puVar2 = &local_res10;
  if ((ulong64 *)param_2->MostRecentPropertyAddress != (ulong64 *)0x0) {
    puVar2 = (ulong64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnMainTargetChanged((UDS_VM_NameTag_BattleNPC *)param_1,puVar2);
  return;
}

// OnBattkeNpcTargetChanged @ 14c024fd0

void __thiscall
UDS_VM_NameTag_BattleNPC::OnBattkeNpcTargetChanged(UDS_VM_NameTag_BattleNPC *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulong64 uVar4;
  FWeakObjectPtr local_res8;
  
  lVar3 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084519>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x1e7,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014c025068:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UDS_NameTagDataAsset::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    uVar4 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
    this->bIsTargetingMainPlayer = param_1 == uVar4;
    UpdateNameVisibility(this,true);
    UpdateHpVisibility(this,true);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084526>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x1ee,"false");
    if (bVar2) goto code_r0x00014c025068;
  }
  return;
}

// OnChangeUserFocused @ 14c0257e0

void __thiscall
UDS_VM_NameTag_BattleNPC::OnChangeUserFocused(UDS_VM_NameTag_BattleNPC *this,bool *param_1)

{
  this->bIsUserFocused = *param_1;
  UpdateNameVisibility(this,false);
  return;
}

// OnChangedHp @ 14c025830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_BattleNPC::OnChangedHp(UDS_VM_NameTag_BattleNPC *this,float param_1,float param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_140 = FFieldNotificationClassDescriptor::HpPercent.BitNumber;
  local_148 = FFieldNotificationClassDescriptor::HpPercent.FieldName;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (0.0 < param_2) {
    if (param_1 / param_2 != this->HpPercent) {
      this->HpPercent = param_1 / param_2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_NameTag_BattleNPC::OnChangedHp",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Error,local_138.Ptr,0x193,L"MaxValue는 0보다 커야합니다.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  return;
}

// OnCloseInit @ 14c0280c0

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

void __thiscall UDS_VM_NameTag_BattleNPC::OnCloseInit(UDS_VM_NameTag_BattleNPC *this)

{
  TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_CharStatusData *this_01;
  FDS_StatusInfo *pFVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *this_02;
  UClass *pUVar6;
  UObject *pUVar7;
  UDS_QuestEvent *pUVar8;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_28;
  undefined1 local_20 [16];
  
  this_00 = &this->OwnerActor;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar7 + 0x22),this);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0x21].field_0x8,this);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0x27].field_0x8,this);
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FDS_EntityBase::GetCharStatusData((FDS_EntityBase *)&pUVar7[0x11].field_0x18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res10);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_01,Hp);
      if (pFVar4 == (FDS_StatusInfo *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3006528182951084302>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                           ,0x10e,"hpStatus");
        if (bVar3) goto code_r0x00014c0281f4;
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->ChangeStatusDelegate,this);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3006528182951084299>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                         ,0x10b,"charStatus.IsValid()");
      if (bVar3) {
code_r0x00014c0281f4:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_DeathData::GetData((ulong64)&local_res18,*(ulong64 *)&pUVar7[0x11].field_0x20,false);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[3].field_0x20,this);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084292>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x104,"OwnerActor.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084316>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x11c,"mainPlayerEntity");
    if (bVar3) goto code_r0x00014c028359;
    goto LAB_14c028375;
  }
  this_02 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_20);
  pUVar7 = FWeakObjectPtr::Get(this_02);
  if (pUVar7 == (UObject *)0x0) {
LAB_14c0282d0:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14c0282d0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_28 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_28);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0x39].field_0x20,this);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084319>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x11f,"mainPlayer.IsValid()");
    if (bVar3) {
code_r0x00014c028359:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14c028375:
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7[5].field_0x10,
               (UObject *)this);
  }
  pUVar8 = UDS_QuestEvent::GetEvent();
  if (pUVar8 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->OnChanedQuestDelegate,
               this);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnDeath @ 14c028e60

void __thiscall
UDS_VM_NameTag_BattleNPC::OnDeath
          (UDS_VM_NameTag_BattleNPC *this,TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsTargetingMainPlayer = false;
  this->bIsHitEventActivated = false;
  UpdateHpVisibility(this,false);
  local_10 = FFieldNotificationClassDescriptor::WidgetVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WidgetVisibility.FieldName;
  if (this->WidgetVisibility != Collapsed) {
    this->WidgetVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnHitEventCallback @ 14c02a5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_BattleNPC::OnHitEventCallback(UDS_VM_NameTag_BattleNPC *this,FDS_StruckInfo *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  FTimerManager *pFVar6;
  FTimerData *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FWeakObjectPtr local_res8;
  UDS_VM_NameTag_BattleNPC *local_res18 [2];
  FDelegateAllocation local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    if ((param_1->AttackerEntityID != *(ulong64 *)&pUVar4[0x11].field_0x20) &&
       (pUVar4 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr),
       param_1->DefenderEntityID != *(ulong64 *)&pUVar4[0x11].field_0x20)) {
      return;
    }
    UDS_NameTagDataAsset::GetInst();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      this->bIsHitEventActivated = true;
      UpdateNameVisibility(this,false);
      UpdateHpVisibility(this,false);
      if ((this->TimeHandle).Handle != 0) {
        pAVar5 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        pFVar6 = AActor::GetWorldTimerManager(pAVar5);
        pFVar7 = FTimerManager::FindTimer(pFVar6,&this->TimeHandle);
        if (pFVar7 != (FTimerData *)0x0) {
          FTimerManager::InternalClearTimer(pFVar6,(FTimerHandle)(this->TimeHandle).Handle);
        }
        (this->TimeHandle).Handle = 0;
      }
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
      pFVar6 = AActor::GetWorldTimerManager(pAVar5);
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      uStack_40 = 0;
      fVar1 = *(float *)&pUVar4[1].field_0x10;
      local_48 = OnHitTimerFinished;
      local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_58.DelegateSize = 0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_58);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NameTag_BattleNPC____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_res18[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)local_res18);
        puVar8[4] = local_48;
        puVar8[5] = CONCAT44(uStack_3c,uStack_40);
      }
      FTimerManager::SetTimer
                (pFVar6,&this->TimeHandle,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_58,fVar1,false,__real_bf800000);
      if ((local_58.DelegateSize != 0) &&
         (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_58,0,0,0x10);
        local_58.DelegateSize = 0;
      }
      if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_58.DelegateAllocator);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3006528182951084399>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                         ,0x16f,"false");
      if (bVar3) goto code_r0x00014c02a679;
    }
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3006528182951084385>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                     ,0x161,"OwnerActor.IsValid()");
  if (!bVar3) {
    return;
  }
code_r0x00014c02a679:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnHitTimerFinished @ 14c02a860

void __thiscall UDS_VM_NameTag_BattleNPC::OnHitTimerFinished(UDS_VM_NameTag_BattleNPC *this)

{
  this->bIsHitEventActivated = false;
  UpdateNameVisibility(this,false);
  UpdateHpVisibility(this,false);
  return;
}

// OnHpVisibleTimerFinished @ 14c02a890

void __thiscall
UDS_VM_NameTag_BattleNPC::OnHpVisibleTimerFinished(UDS_VM_NameTag_BattleNPC *this,bool param_1)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::HpVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::HpVisibility.FieldName;
  EVar1 = param_1 * '\x02' + Collapsed;
  if (this->HpVisibility != EVar1) {
    this->HpVisibility = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnMainTargetChanged @ 14c02c9d0

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
UDS_VM_NameTag_BattleNPC::OnMainTargetChanged(UDS_VM_NameTag_BattleNPC *this,ulong64 *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FWeakObjectPtr local_res18;
  UDS_VM_NameTag_BattleNPC *local_res20;
  FDelegateAllocation local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  UDS_NameTagDataAsset::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    if ((this->MainTargetTimerHandle).Handle != 0) {
      pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar5 = FTimerManager::FindTimer(pFVar4,&this->MainTargetTimerHandle);
      if (pFVar5 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)(this->MainTargetTimerHandle).Handle)
        ;
      }
      (this->MainTargetTimerHandle).Handle = 0;
    }
    if (*param_1 == this->OwnerEntityID) {
      SetMainTargetVisibility(this,HitTestInvisible);
    }
    else if (this->MainTargetVisibility != Collapsed) {
      if (*param_1 == 0) {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        uStack_40 = 0;
        fVar1 = *(float *)&pUVar6[1].field_0x18;
        local_48 = OnMainTargetCollapsedTimer;
        local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_58.DelegateSize = 0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_58);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NameTag_BattleNPC____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar7[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
          puVar7[4] = local_48;
          puVar7[5] = CONCAT44(uStack_3c,uStack_40);
        }
        FTimerManager::SetTimer
                  (pFVar4,&this->MainTargetTimerHandle,
                   (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                   &local_58,fVar1,false,__real_bf800000);
        if (local_58.DelegateSize != 0) {
          if (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            return;
          }
          (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_58,0,0,0x10);
          local_58.DelegateSize = 0;
        }
        if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_58.DelegateAllocator);
        }
      }
      else {
        SetMainTargetVisibility(this,Collapsed);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084475>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x1bb,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// OnMainTargetCollapsedTimer @ 14c02cc20

void __thiscall UDS_VM_NameTag_BattleNPC::OnMainTargetCollapsedTimer(UDS_VM_NameTag_BattleNPC *this)

{
  SetMainTargetVisibility(this,Collapsed);
  return;
}

// OnNameVisibilityTimerFinished @ 14c02d0a0

void __thiscall
UDS_VM_NameTag_BattleNPC::OnNameVisibilityTimerFinished(UDS_VM_NameTag_BattleNPC *this,bool param_1)

{
  this->bIsShowName = param_1;
  RefreshName(this);
  return;
}

// OnQuestChanged @ 14c02e0f0

void __thiscall
UDS_VM_NameTag_BattleNPC::OnQuestChanged
          (UDS_VM_NameTag_BattleNPC *this,int param_1,EDS_QuestDataType param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_QuestManager *pUVar3;
  
  pUVar3 = UDS_QuestManager::GetInst();
  if (pUVar3 != (UDS_QuestManager *)0x0) {
    RefreshQuestIcon(this);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3006528182951084457>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                     ,0x1a9,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnSetViewModel @ 14c030640

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_NameTag_BattleNPC::OnSetViewModel
          (UDS_VM_NameTag_BattleNPC *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  UObject *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FName FVar8;
  bool bVar9;
  UDS_LogManager *pUVar10;
  FDS_EntityBase *pFVar11;
  FWeakObjectPtr *pFVar12;
  UClass *pUVar13;
  UDS_QuestManager *this_01;
  UObject *pUVar14;
  UDS_CharStatusData *this_02;
  FDS_StatusInfo *pFVar15;
  UObject *pUVar16;
  UObject *pUVar17;
  UFunction *pUVar18;
  UDS_QuestEvent *pUVar19;
  undefined1 auStackY_508 [32];
  uint uStack_4bc;
  <lambda_1> local_4b8 [8];
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_4b0;
  ulong64 local_4a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_498;
  FWeakObjectPtr local_490;
  FName local_488;
  FWeakObjectPtr local_480;
  FWeakObjectPtr local_478;
  FWeakObjectPtr local_470;
  FWeakObjectPtr local_468;
  FWeakObjectPtr local_460;
  FWeakObjectPtr local_458;
  undefined8 local_450;
  FName local_448 [2];
  code *local_438;
  int iStack_430;
  int iStack_42c;
  UObject *local_428;
  UObject *local_420;
  FName local_418;
  UDS_VM_NameTag_BattleNPC *local_410;
  FName *local_408 [2];
  FName local_3f8;
  int local_3f0;
  TSharedPtr<FDS_ViewModelContext,1> local_3e8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_3d8;
  FDestructionSentinel local_3c8;
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [24];
  undefined1 local_378 [80];
  code *local_328;
  longlong lStack_320;
  code *local_318;
  FWeakObjectPtr FStack_310;
  code *local_308;
  FTimerHandle FStack_300;
  FTimerHandle local_2f8;
  FDS_BattleNpcNametag_Name_Enemy FStack_2f0;
  FTimerHandle local_2e8;
  FDS_BattleNpcNametag_Name_Enemy FStack_2e0;
  undefined1 local_2d8 [8];
  FReadAccessScope local_2d0;
  FReadAccessScope local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_3e8.Object = param_1->Object;
  local_3e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_3e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_4b0,&local_3e8);
  if (local_4b0.Object == (FDS_ViewModelContext_Entity *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084091>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x3b,"context.IsValid()");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"UDS_VM_NameTag_BattleNPC::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_298.Ptr,0x3d,L"FDS_ViewModelContext_NameTag is Invalid.");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084094>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x3e,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  local_4a0 = (local_4b0.Object)->EntityID;
  pFVar11 = FDS_EntityBase::GetEntityBase(&local_4a0);
  if (pFVar11 == (FDS_EntityBase *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_NameTag_BattleNPC::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_178.Ptr,0x46,L"entityBase is nullptr. EntityID : %llu");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084103>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x47,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  pFVar12 = (FWeakObjectPtr *)(**(code **)(pFVar11->_padding_ + 0x150))(pFVar11,local_2d8);
  local_428 = FWeakObjectPtr::Get(pFVar12);
  pUVar17 = (UObject *)0x0;
  if (local_428 == (UObject *)0x0) {
LAB_14c0308d5:
    local_428 = pUVar17;
  }
  else {
    pUVar13 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&local_428->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_428->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar13->_padding_)) goto LAB_14c0308d5;
  }
  this_00 = &this->OwnerActor;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_428 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_428);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_428);
  bVar9 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084110>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x4e,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  this_01 = UDS_QuestManager::GetInst();
  if (this_01 == (UDS_QuestManager *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084117>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x55,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  UDS_DeathData::GetData((ulong64)&local_458,local_4a0,false);
  bVar9 = TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr> *)&local_458,(void *)0x0);
  if (bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084124>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x5c,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  UDS_CharInfoData::GetData((ulong64)&local_468);
  bVar9 = FWeakObjectPtr::IsValid(&local_468);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084131>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,99,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar9 = FWeakObjectPtr::IsValid(&local_470);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084138>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x6a,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  pUVar14 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FDS_EntityBase::GetCharStatusData((FDS_EntityBase *)&pUVar14[0x11].field_0x18);
  bVar9 = FWeakObjectPtr::IsValid(&local_460);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084145>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x71,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  this_02 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_460);
  pFVar15 = UDS_CharStatusData::GetStatusInfo(this_02,Hp);
  if (pFVar15 == (FDS_StatusInfo *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084152>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x78,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  pFVar11 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar11 == (FDS_EntityBase *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084159>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x7f,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  pFVar12 = (FWeakObjectPtr *)(**(code **)(pFVar11->_padding_ + 0x150))(pFVar11,local_390 + 8);
  pUVar14 = FWeakObjectPtr::Get(pFVar12);
  if (pUVar14 == (UObject *)0x0) {
LAB_14c030bf1:
    pUVar14 = pUVar17;
  }
  else {
    pUVar13 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar13->_padding_)) goto LAB_14c030bf1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  local_480.ObjectIndex = 0;
  local_480.ObjectSerialNumber = 0;
  local_420 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  FWeakObjectPtr::operator=(&local_480,(FObjectPtr)&local_420);
  bVar9 = FWeakObjectPtr::IsValid(&local_480);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084166>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x86,"false");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    goto LAB_14c0311de;
  }
  this->OwnerEntityID = local_4a0;
  this->bIsHitEventActivated = false;
  pUVar14 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  this->bIsUserFocused = (bool)pUVar14[0x26].field_0x20;
  UDS_NameTagDataAsset::GetInst();
  bVar9 = FWeakObjectPtr::IsValid(&local_478);
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3006528182951084175>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                         ,0x8f,"pNametagAsset.IsValid()"), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar9 = FWeakObjectPtr::IsValid(&local_478);
  if (bVar9) {
    pUVar14 = FWeakObjectPtr::Get(&local_478);
    uVar5 = *(undefined4 *)&pUVar14[10].field_0xc;
    uVar6 = *(undefined4 *)&pUVar14[10].field_0x10;
    uVar7 = *(undefined4 *)&pUVar14[10].field_0x14;
    (this->NametagData).NameData.EnemyNameData.AggressiveEnemyNameStyleID =
         *(undefined4 *)&pUVar14[10].field_0x8;
    (this->NametagData).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID = uVar5;
    (this->NametagData).NameData.NeutralityNameStyleID = uVar6;
    (this->NametagData).NameData.FriendNameStyleId = uVar7;
    uVar5 = *(undefined4 *)&pUVar14[10].field_0x1c;
    uVar6 = *(undefined4 *)&pUVar14[10].field_0x20;
    uVar7 = *(undefined4 *)&pUVar14[10].field_0x24;
    (this->NametagData).TitleData.DefaultTitleStyleID = *(undefined4 *)&pUVar14[10].field_0x18;
    (this->NametagData).TitleData.DeathTitleStyleID = uVar5;
    (this->NametagData).HpBarData.DefaultHpBarColorID = uVar6;
    (this->NametagData).HpBarData.AggressiveHpBarColorID = uVar7;
    uVar5 = *(undefined4 *)&pUVar14[0xb].field_0x4;
    (this->NametagData).StartIconFadeDistance = (float)*(undefined4 *)&pUVar14[0xb].field_0x0;
    (this->NametagData).EndIconFadeDistance = (float)uVar5;
  }
  iVar1 = FFieldNotificationClassDescriptor::QuestObjectiveVisibility.BitNumber;
  FVar8 = FFieldNotificationClassDescriptor::QuestObjectiveVisibility.FieldName;
  bVar9 = UDS_QuestManager::IsQuestTarget(this_01,this->OwnerEntityID);
  if ((bool)this->QuestObjectiveVisibility != !bVar9) {
    this->QuestObjectiveVisibility = !bVar9;
    local_3f8 = FVar8;
    local_3f0 = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3f8);
  }
  local_378._24_8_ = (ulonglong)uStack_4bc << 0x20;
  local_378._16_8_ = OnHitEventCallback;
  pUVar14 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
              *)(pUVar14 + 0x22),(UDS_VM_NameTag_BattleNPC *)(local_390 + 0x10),(pmf_d983a3ac *)this
            );
  local_378._40_8_ = (ulonglong)uStack_4bc << 0x20;
  local_378._32_8_ = OnChangeUserFocused;
  pUVar14 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar14[0x21].field_0x8,(UDS_VM_NameTag_BattleNPC *)local_378,(pmf_a1a0f3ca *)this)
  ;
  local_378._56_8_ = (ulonglong)uStack_4bc << 0x20;
  local_378._48_8_ = OnTriggerOverlaped;
  pUVar14 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
              *)&pUVar14[0x27].field_0x8,(UDS_VM_NameTag_BattleNPC *)(local_378 + 0x40),
             (pmf_cd96eed6 *)this);
  FStack_2e0 = (FDS_BattleNpcNametag_Name_Enemy)((ulonglong)uStack_4bc << 0x20);
  local_2e8.Handle = (ulong64)OnChangedHp;
  TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(float,float),FDefaultDelegateUserPolicy> *
             )&pFVar15->ChangeStatusDelegate,(UDS_VM_NameTag_BattleNPC *)local_390,
             (pmf_ef26ec4e *)this);
  lStack_320 = (ulonglong)uStack_4bc << 0x20;
  local_328 = OnDeath;
  pUVar14 = FWeakObjectPtr::Get(&local_458);
  TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_DeathData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
              *)&pUVar14[3].field_0x20,(UDS_VM_NameTag_BattleNPC *)local_3b0,(pmf_e64c74d9 *)this);
  FStack_310 = (FWeakObjectPtr)((ulonglong)uStack_4bc << 0x20);
  local_318 = OnBattkeNpcTargetChanged;
  pUVar14 = FWeakObjectPtr::Get(&local_468);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
              *)&pUVar14[6].field_0x18,(UDS_VM_NameTag_BattleNPC *)(local_3b0 + 8),
             (pmf_593b7590 *)this);
  FStack_300.Handle = (ulonglong)uStack_4bc << 0x20;
  local_308 = OnHitEventCallback;
  pUVar14 = FWeakObjectPtr::Get(&local_480);
  TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_NameTag_BattleNPC>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_StruckInfo_const_&),FDefaultDelegateUserPolicy>
              *)&pUVar14[0x39].field_0x20,(UDS_VM_NameTag_BattleNPC *)local_3a0,(pmf_d983a3ac *)this
            );
  pUVar16 = FWeakObjectPtr::Get(&local_470);
  pUVar14 = (UObject *)strstr("&ThisClass::OnMainTargetChanged","::");
  while (pUVar4 = pUVar14, pUVar4 != (UObject *)0x0) {
    pUVar14 = (UObject *)strstr(&pUVar4->field_0x1,"::");
    pUVar17 = pUVar4;
  }
  if (((pUVar17 == (UObject *)0x0) || (pUVar17->field_0x2 == '0')) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_418,&pUVar17->field_0x2);
  local_498.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_490.ObjectIndex = 0;
  local_490.ObjectSerialNumber = 0;
  local_488.ComparisonIndex.Value = 0;
  local_488.Number = 0;
  local_448[0] = local_418;
  local_410 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_490,(FObjectPtr)&local_410);
  local_488 = local_448[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_498,&local_2d0);
  local_450 = 0;
  if ((local_488 == (FName)0x0) ||
     (pUVar17 = FWeakObjectPtr::Get(&local_490), pUVar17 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2d0);
LAB_14c031071:
    local_408[0] = local_448;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned___int64_const_&>::
    __Internal_BindDynamic<UDS_VM_NameTag_BattleNPC>'::__l2::<lambda_1>::operator()(local_408);
  }
  else {
    pUVar18 = UObject::FindFunction(pUVar17,local_488);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2d0);
    if (pUVar18 == (UFunction *)0x0) goto LAB_14c031071;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_498,&local_2b8);
  local_3d8.Object = local_490;
  local_3d8.FunctionName = local_488;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_2b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar16[5].field_0x10,
             (FWriteAccessScope *)&local_3c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar16[5].field_0x18,local_4b8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar16[5].field_0x10,
             &local_3d8);
  if (local_3c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_498.AccessDetector);
  pUVar19 = UDS_QuestEvent::GetEvent();
  if (pUVar19 != (UDS_QuestEvent *)0x0) {
    iStack_430 = 0;
    local_438 = OnQuestChanged;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar19->OnChanedQuestDelegate
               ,this);
    FStack_2f0.NonAggressiveEnemyNameStyleID = iStack_42c;
    FStack_2f0.AggressiveEnemyNameStyleID = iStack_430;
    local_2f8.Handle = (ulong64)local_438;
    TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_BattleNPC>
              (&pUVar19->OnChanedQuestDelegate,(UDS_VM_NameTag_BattleNPC *)(local_3a0 + 8),
               (pmf_74148aa0 *)this);
  }
  UpdateNameVisibility(this,false);
  OnChangedHp(this,(float)pFVar15->CurrentValue,pFVar15->MaxValue);
  pUVar17 = FWeakObjectPtr::Get(&local_470);
  local_438 = *(code **)&pUVar17[9].field_0x8;
  OnMainTargetChanged(this,(ulong64 *)&local_438);
  pUVar17 = FWeakObjectPtr::Get(&local_468);
  OnBattkeNpcTargetChanged(this,*(ulong64 *)&pUVar17[0x17].field_0x8);
  RefreshFunctionIcon(this);
  RefreshName(this);
  RefreshQuestIcon(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b0.SharedReferenceCount.ReferenceController);
LAB_14c0311de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTriggerOverlaped @ 14c039dd0

void __thiscall
UDS_VM_NameTag_BattleNPC::OnTriggerOverlaped
          (UDS_VM_NameTag_BattleNPC *this,UDS_TriggerComponent *param_1,bool param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_NPCDataSet *this_00;
  UObject *pUVar7;
  longlong lVar8;
  FName *pFVar9;
  FWeakObjectPtr FStackX_8;
  FName FStack_48;
  int iStack_40;
  FName FStack_38;
  int iStack_30;
  FName FStack_28;
  int iStack_20;
  FName FStack_18;
  int iStack_10;
  
  if (param_1->TriggerType != FunctionIcon) {
    return;
  }
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&FStackX_8);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar4) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&FStackX_8);
      iVar6 = UDS_NPCDataSet::GetNpcRoleTypeIconID(this_00);
      iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
      if (iVar6 == 0) {
        if (this->FunctionIconVisibility == Collapsed) {
          return;
        }
        this->FunctionIconVisibility = Collapsed;
        iStack_40 = iVar3;
        pFVar9 = &FStack_48;
        lVar8 = this->_padding_;
        FStack_48 = FVar2;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                          (&pUVar7[0x11].field_0x18,5);
        iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
        if (cVar5 == '\0') {
          if (this->FunctionIconVisibility == Collapsed) {
            return;
          }
          this->FunctionIconVisibility = Collapsed;
          iStack_30 = iVar3;
          pFVar9 = &FStack_38;
          lVar8 = this->_padding_;
          FStack_38 = FVar2;
        }
        else {
          if (this->FunctionIconVisibility != SelfHitTestInvisible) {
            this->FunctionIconVisibility = SelfHitTestInvisible;
            iStack_20 = iVar3;
            FStack_28 = FVar2;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
          }
          iStack_10 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
          FStack_18 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
          if (this->FunctionIconID == iVar6) {
            return;
          }
          this->FunctionIconID = iVar6;
          pFVar9 = &FStack_18;
          lVar8 = this->_padding_;
        }
      }
      (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar9);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084357>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x145,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdate @ 14c039ed0

void __thiscall UDS_VM_NameTag_BattleNPC::OnUpdate(UDS_VM_NameTag_BattleNPC *this,float param_1)

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
                      ((float)((dVar10 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) *
                               (dVar10 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) +
                               dVar7 * dVar7 +
                              (local_18 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z) *
                              (local_18 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z)),
                       (this->NametagData).StartIconFadeDistance,
                       (this->NametagData).EndIconFadeDistance);
    local_20 = FFieldNotificationClassDescriptor::QuestTargetAlpha.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::QuestTargetAlpha.FieldName;
    if (fVar6 != this->QuestTargetAlpha) {
      this->QuestTargetAlpha = fVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084279>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0xf7,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RefreshFunctionIcon @ 14c03e160

void __thiscall UDS_VM_NameTag_BattleNPC::RefreshFunctionIcon(UDS_VM_NameTag_BattleNPC *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_NPCDataSet *this_00;
  UObject *pUVar7;
  longlong lVar8;
  FName *pFVar9;
  FWeakObjectPtr local_res8;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar4) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res8);
      iVar6 = UDS_NPCDataSet::GetNpcRoleTypeIconID(this_00);
      iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
      if (iVar6 == 0) {
        if (this->FunctionIconVisibility == Collapsed) {
          return;
        }
        this->FunctionIconVisibility = Collapsed;
        local_40 = iVar3;
        pFVar9 = &local_48;
        lVar8 = this->_padding_;
        local_48 = FVar2;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                          (&pUVar7[0x11].field_0x18,5);
        iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
        if (cVar5 == '\0') {
          if (this->FunctionIconVisibility == Collapsed) {
            return;
          }
          this->FunctionIconVisibility = Collapsed;
          local_30 = iVar3;
          pFVar9 = &local_38;
          lVar8 = this->_padding_;
          local_38 = FVar2;
        }
        else {
          if (this->FunctionIconVisibility != SelfHitTestInvisible) {
            this->FunctionIconVisibility = SelfHitTestInvisible;
            local_20 = iVar3;
            local_28 = FVar2;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
          }
          local_10 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
          local_18 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
          if (this->FunctionIconID == iVar6) {
            return;
          }
          this->FunctionIconID = iVar6;
          pFVar9 = &local_18;
          lVar8 = this->_padding_;
        }
      }
      (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar9);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084357>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x145,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RefreshName @ 14c03ea10

void __thiscall UDS_VM_NameTag_BattleNPC::RefreshName(UDS_VM_NameTag_BattleNPC *this)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  FDS_NpcBaseTableRow *this_01;
  FDS_ResourceColorTableRow *pFVar10;
  FDS_NpcBattleTableRow *pFVar11;
  float fVar12;
  FName FVar13;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined1 local_48 [32];
  
  bVar7 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  local_48._8_4_ = FFieldNotificationClassDescriptor::TitleNameVisibility.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName;
  if (!bVar7) {
    return;
  }
  if (this->bIsShowName == false) {
    if (this->TitleNameVisibility != Collapsed) {
      this->TitleNameVisibility = Collapsed;
      FVar6 = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.ComparisonIndex =
           FVar13.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.Number = FVar13.Number;
      local_48._0_4_ =
           FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.ComparisonIndex.Value;
      local_48._4_4_ = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.Number;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
    }
    local_48._8_4_ = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
    if (this->NameVisibility == Collapsed) {
      return;
    }
    this->NameVisibility = Collapsed;
    FVar6 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName.ComparisonIndex =
         FVar13.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName.Number = FVar13.Number;
    local_48._0_4_ =
         FFieldNotificationClassDescriptor::NameVisibility.FieldName.ComparisonIndex.Value;
    local_48._4_4_ = FFieldNotificationClassDescriptor::NameVisibility.FieldName.Number;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  this_01 = FDS_NpcBaseTableRow::GetRef(*(long64 *)&pUVar9[0x12].field_0x8,true);
  FDS_Text::SetTextFromStringID(&this->Name,&this_01->ID_NameSid);
  local_48._8_4_ = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_48._0_4_ = FFieldNotificationClassDescriptor::Name.FieldName.ComparisonIndex.Value;
  local_48._4_4_ = FFieldNotificationClassDescriptor::Name.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
  iVar8 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
  if (this->NameVisibility != SelfHitTestInvisible) {
    this->NameVisibility = SelfHitTestInvisible;
    FVar6 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
    local_48._8_4_ = iVar8;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName.ComparisonIndex =
         FVar13.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName.Number = FVar13.Number;
    local_48._0_4_ =
         FFieldNotificationClassDescriptor::NameVisibility.FieldName.ComparisonIndex.Value;
    local_48._4_4_ = FFieldNotificationClassDescriptor::NameVisibility.FieldName.Number;
    FFieldNotificationClassDescriptor::NameVisibility.FieldName = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
  }
  iVar8 = FFieldNotificationClassDescriptor::TitleNameVisibility.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName;
  if ((this_01->ID_NameTitleSid).ID == 0) {
    if (this->TitleNameVisibility == Collapsed) goto LAB_14c03ec24;
    this->TitleNameVisibility = Collapsed;
    local_48._8_4_ = iVar8;
  }
  else {
    if (this->TitleNameVisibility != SelfHitTestInvisible) {
      this->TitleNameVisibility = SelfHitTestInvisible;
      FVar6 = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName;
      local_48._8_4_ = iVar8;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.ComparisonIndex =
           FVar13.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.Number = FVar13.Number;
      local_48._0_4_ =
           FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.ComparisonIndex.Value;
      local_48._4_4_ = FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName.Number;
      FFieldNotificationClassDescriptor::TitleNameVisibility.FieldName = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
    }
    FDS_Text::SetTextFromStringID(&this->Title,&this_01->ID_NameTitleSid);
    local_48._8_4_ = FFieldNotificationClassDescriptor::Title.BitNumber;
    local_48._0_4_ = FFieldNotificationClassDescriptor::Title.FieldName.ComparisonIndex.Value;
    local_48._4_4_ = FFieldNotificationClassDescriptor::Title.FieldName.Number;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
    iVar4 = FFieldNotificationClassDescriptor::TitleStyleID.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::TitleStyleID.FieldName;
    iVar8 = (this->NametagData).TitleData.DefaultTitleStyleID;
    if (this->TitleStyleID == iVar8) goto LAB_14c03ec24;
    this->TitleStyleID = iVar8;
    local_48._8_4_ = iVar4;
  }
  local_48._0_8_ = FVar13;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
LAB_14c03ec24:
  pFVar10 = FDS_ResourceColorTableRow::GetRef
                      ((longlong)(this->NametagData).HpBarData.DefaultHpBarColorID,true);
  iVar8 = FFieldNotificationClassDescriptor::HpColor.BitNumber;
  FVar13 = FFieldNotificationClassDescriptor::HpColor.FieldName;
  fVar5 = __real_3b808081;
  fVar2 = FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.G];
  fVar3 = FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.B];
  fVar12 = (float)(pFVar10->Color).field0_0x0._s_0.A * __real_3b808081;
  if ((((FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.R] !=
         (this->HpColor).field0_0x0._s_0.R) || (fVar2 != (this->HpColor).field0_0x0._s_0.G)) ||
      (fVar3 != (this->HpColor).field0_0x0._s_0.B)) || (fVar12 != (this->HpColor).field0_0x0._s_0.A)
     ) {
    (this->HpColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.R];
    (this->HpColor).field0_0x0._s_0.G = fVar2;
    (this->HpColor).field0_0x0._s_0.B = fVar3;
    (this->HpColor).field0_0x0._s_0.A = fVar12;
    FVar6 = FFieldNotificationClassDescriptor::HpColor.FieldName;
    local_48._8_4_ = iVar8;
    FFieldNotificationClassDescriptor::HpColor.FieldName.ComparisonIndex =
         FVar13.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::HpColor.FieldName.Number = FVar13.Number;
    local_48._0_4_ = FFieldNotificationClassDescriptor::HpColor.FieldName.ComparisonIndex.Value;
    local_48._4_4_ = FFieldNotificationClassDescriptor::HpColor.FieldName.Number;
    FFieldNotificationClassDescriptor::HpColor.FieldName = FVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharInfoData::GetData((ulong64)&local_res8);
  UDS_CharInfoData::GetData((ulong64)&local_res10);
  bVar7 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if ((!bVar7) &&
     (bVar7 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0
                        ), !bVar7)) {
    pUVar9 = FWeakObjectPtr::Get(&local_res8);
    this_00 = &pUVar9[0xf].field_0x18;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    puVar1 = &pUVar9[0xf].field_0x18;
    bVar7 = FDS_TeamInfo::IsEnemyTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
    if (bVar7) {
      pFVar11 = FDS_NpcBaseTableRow::ID_NpcBattleTable(this_01);
      iVar8 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
      FVar13 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
      if (pFVar11->IsSearchingType == true) {
        iVar4 = (this->NametagData).NameData.EnemyNameData.AggressiveEnemyNameStyleID;
        if (this->NameStyleID != iVar4) {
          this->NameStyleID = iVar4;
          FVar6 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
          local_48._8_4_ = iVar8;
          FFieldNotificationClassDescriptor::NameStyleID.FieldName.ComparisonIndex =
               FVar13.ComparisonIndex.Value;
          FFieldNotificationClassDescriptor::NameStyleID.FieldName.Number = FVar13.Number;
          local_48._0_4_ =
               FFieldNotificationClassDescriptor::NameStyleID.FieldName.ComparisonIndex.Value;
          local_48._4_4_ = FFieldNotificationClassDescriptor::NameStyleID.FieldName.Number;
          FFieldNotificationClassDescriptor::NameStyleID.FieldName = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
        }
        pFVar10 = FDS_ResourceColorTableRow::GetRef
                            ((longlong)(this->NametagData).HpBarData.AggressiveHpBarColorID,true);
        local_48._4_4_ = FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.G];
        local_48._0_4_ = FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.R];
        local_48._8_4_ = FLinearColor::sRGBToLinearTable[(pFVar10->Color).field0_0x0._s_0.B];
        local_48._12_4_ = (float)(pFVar10->Color).field0_0x0._s_0.A * fVar5;
        SetHPColor(this,(FLinearColor *)local_48);
        return;
      }
      iVar8 = (this->NametagData).NameData.EnemyNameData.NonAggressiveEnemyNameStyleID;
    }
    else {
      bVar7 = FDS_TeamInfo::IsFriendTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
      if (bVar7) {
        iVar8 = (this->NametagData).NameData.FriendNameStyleId;
      }
      else {
        bVar7 = FDS_TeamInfo::IsNeutralTeam((FDS_TeamInfo *)this_00,(FDS_TeamInfo *)puVar1);
        if (!bVar7) {
          return;
        }
        iVar8 = (this->NametagData).NameData.NeutralityNameStyleID;
      }
    }
    local_48._8_4_ = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
    if (this->NameStyleID != iVar8) {
      this->NameStyleID = iVar8;
      FVar6 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
      FFieldNotificationClassDescriptor::NameStyleID.FieldName.ComparisonIndex =
           FVar13.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::NameStyleID.FieldName.Number = FVar13.Number;
      local_48._0_4_ =
           FFieldNotificationClassDescriptor::NameStyleID.FieldName.ComparisonIndex.Value;
      local_48._4_4_ = FFieldNotificationClassDescriptor::NameStyleID.FieldName.Number;
      FFieldNotificationClassDescriptor::NameStyleID.FieldName = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_48);
    }
  }
  return;
}

// RefreshQuestIcon @ 14c03f510

void __thiscall UDS_VM_NameTag_BattleNPC::RefreshQuestIcon(UDS_VM_NameTag_BattleNPC *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_QuestManager *this_00;
  ESlateVisibility EVar3;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084342>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x136,"questMgr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    bVar2 = UDS_QuestManager::IsQuestTarget(this_00,this->OwnerEntityID);
    local_10 = FFieldNotificationClassDescriptor::QuestObjectiveVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestObjectiveVisibility.FieldName;
    EVar3 = Collapsed;
    if (bVar2) {
      EVar3 = SelfHitTestInvisible;
    }
    if (this->QuestObjectiveVisibility != EVar3) {
      this->QuestObjectiveVisibility = EVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetHPColor @ 14c0414d0

void __thiscall
UDS_VM_NameTag_BattleNPC::SetHPColor(UDS_VM_NameTag_BattleNPC *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->HpColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->HpColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->HpColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->HpColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::HpColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::HpColor.FieldName;
    (this->HpColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->HpColor).field0_0x0._s_0.G = fVar1;
    (this->HpColor).field0_0x0._s_0.B = fVar2;
    (this->HpColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainTargetVisibility @ 14c0425b0

void __thiscall
UDS_VM_NameTag_BattleNPC::SetMainTargetVisibility
          (UDS_VM_NameTag_BattleNPC *this,ESlateVisibility param_1)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FName local_res8;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MainTargetVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MainTargetVisibility.FieldName;
  if (this->MainTargetVisibility != param_1) {
    this->MainTargetVisibility = param_1;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  if ((this->MainTargetVisibility != Collapsed) &&
     ((this->MainTargetAniEvent).AnimationStateType != Started)) {
    pFVar3 = ::FName::FName(&local_res8,"LoopAni");
    (this->MainTargetAniEvent).AnimationName = *pFVar3;
    (this->MainTargetAniEvent).AnimationEventType = PlayForward;
    local_10 = FFieldNotificationClassDescriptor::MainTargetAniEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MainTargetAniEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateHpVisibility @ 14c04a910

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
UDS_VM_NameTag_BattleNPC::UpdateHpVisibility(UDS_VM_NameTag_BattleNPC *this,bool param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  char cVar9;
  ESlateVisibility EVar10;
  FWeakObjectPtr local_res18;
  UDS_VM_NameTag_BattleNPC *local_res20;
  FName local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FDelegateAllocation local_48 [2];
  
  UDS_NameTagDataAsset::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    if ((this->HpVisibilityTimerHandle).Handle != 0) {
      pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar5 = FTimerManager::FindTimer(pFVar4,&this->HpVisibilityTimerHandle);
      if (pFVar5 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar4,(FTimerHandle)(this->HpVisibilityTimerHandle).Handle);
      }
      (this->HpVisibilityTimerHandle).Handle = 0;
    }
    iStack_50 = FFieldNotificationClassDescriptor::HpVisibility.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::HpVisibility.FieldName;
    if ((this->bIsHitEventActivated == false) && (this->bIsTargetingMainPlayer == false)) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
    }
    if (param_1) {
      if (cVar9 == '\x01') {
        OnHpVisibleTimerFinished(this,true);
      }
      else {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        uStack_4c = local_48[0]._12_4_;
        iStack_50 = 0;
        fVar1 = *(float *)&pUVar6[1].field_0x10;
        local_58 = (FName)OnHpVisibleTimerFinished;
        local_48[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_48[0].DelegateSize = 0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,local_48);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
          ;
          *(char *)(puVar7 + 1) = cVar9;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NameTag_BattleNPC____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar7[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
          *(FName *)(puVar7 + 4) = local_58;
          puVar7[5] = CONCAT44(uStack_4c,iStack_50);
        }
        FTimerManager::SetTimer
                  (pFVar4,&this->HpVisibilityTimerHandle,
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
      EVar10 = cVar9 * '\x02' + Collapsed;
      if (this->HpVisibility != EVar10) {
        this->HpVisibility = EVar10;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084604>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x23c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateNameVisibility @ 14c04d7c0

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
UDS_VM_NameTag_BattleNPC::UpdateNameVisibility(UDS_VM_NameTag_BattleNPC *this,bool param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FWeakObjectPtr local_res18;
  UDS_VM_NameTag_BattleNPC *local_res20;
  FDelegateAllocation local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  UDS_NameTagDataAsset::GetInst();
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    if ((this->NameVisibilityTimerHandle).Handle != 0) {
      pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar5 = FTimerManager::FindTimer(pFVar4,&this->NameVisibilityTimerHandle);
      if (pFVar5 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar4,(FTimerHandle)(this->NameVisibilityTimerHandle).Handle);
      }
      (this->NameVisibilityTimerHandle).Handle = 0;
    }
    if (((this->bIsHitEventActivated == false) && (this->bIsUserFocused == false)) &&
       (this->bIsTargetingMainPlayer == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (param_1) {
      if (bVar3 == true) {
        this->bIsShowName = true;
        RefreshName(this);
      }
      else {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        pUVar6 = FWeakObjectPtr::Get(&local_res18);
        uStack_40 = 0;
        fVar1 = *(float *)&pUVar6[1].field_0x10;
        local_48 = OnNameVisibilityTimerFinished;
        local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_58.DelegateSize = 0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_58);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
          ;
          *(bool *)(puVar7 + 1) = bVar3;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NameTag_BattleNPC____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar7[3] = 0;
          local_res20 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
          puVar7[4] = local_48;
          puVar7[5] = CONCAT44(uStack_3c,uStack_40);
        }
        FTimerManager::SetTimer
                  (pFVar4,&this->NameVisibilityTimerHandle,
                   (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                   &local_58,fVar1,false,__real_bf800000);
        if (local_58.DelegateSize != 0) {
          if (local_58.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            return;
          }
          (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_58,0,0,0x10);
          local_58.DelegateSize = 0;
        }
        if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_58.DelegateAllocator);
        }
      }
    }
    else {
      this->bIsShowName = bVar3;
      RefreshName(this);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3006528182951084563>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_BattleNPC.cpp"
                       ,0x213,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

