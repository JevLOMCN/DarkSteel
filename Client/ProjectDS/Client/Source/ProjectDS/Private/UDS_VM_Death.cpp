// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// SetButtonClickResurrectBase_WrapperImpl @ 14b636580

void __cdecl UDS_VM_Death::SetButtonClickResurrectBase_WrapperImpl(void *param_1,void *param_2)

{
  EDS_ResurrectType aEStackX_8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  aEStackX_8[0] = Base;
  if (*(float *)((longlong)param_1 + 0x3d0) <= *(float *)((longlong)param_1 + 0x304) &&
      *(float *)((longlong)param_1 + 0x304) != *(float *)((longlong)param_1 + 0x3d0)) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&TStack_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(aEStackX_8);
  return;
}

// SetButtonClickResurrectInstant_WrapperImpl @ 14b636590

void __cdecl UDS_VM_Death::SetButtonClickResurrectInstant_WrapperImpl(void *param_1,void *param_2)

{
  EDS_ResurrectType aEStackX_8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  aEStackX_8[0] = Instant;
  if (*(float *)((longlong)param_1 + 0x3d0) <= *(float *)((longlong)param_1 + 0x304) &&
      *(float *)((longlong)param_1 + 0x304) != *(float *)((longlong)param_1 + 0x3d0)) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&TStack_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(aEStackX_8);
  return;
}

// StaticClass @ 14b6365a0

UClass * __cdecl UDS_VM_Death::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Death",
               &Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton,
               StaticRegisterNativesUDS_VM_Death,0x3d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Death>,InternalVTableHelperCtorCaller<UDS_VM_Death>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton;
}

// UDS_VM_Death @ 14b639e50

UDS_VM_Death * __thiscall UDS_VM_Death::UDS_VM_Death(UDS_VM_Death *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ResurrectUIVisibility = Collapsed;
  this->DeathUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Death__6B_;
  (this->ResurrectionBaseName).StringTableID = 0;
  (this->ResurrectionBaseName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionBaseName).StringEnumTableNameID.Number = 0;
  (this->ResurrectionBaseName).DateTime.Ticks = 0;
  (this->ResurrectionBaseName).TimeSpan.Ticks = 0;
  (this->ResurrectionBaseName).TimeExpressionType = None;
  (this->ResurrectionBaseName).IsExpression = false;
  (this->ResurrectionBaseName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionBaseName).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionBaseName).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionBaseName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionBaseName).FormatArgs.ArrayNum = 0;
  (this->ResurrectionBaseName).FormatArgs.ArrayMax = 0;
  (this->ResurrectionChooseText).StringTableType = None;
  (this->ResurrectionChooseText).StringTableID = 0;
  (this->ResurrectionChooseText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionChooseText).StringEnumTableNameID.Number = 0;
  (this->ResurrectionChooseText).DateTime.Ticks = 0;
  (this->ResurrectionChooseText).TimeSpan.Ticks = 0;
  (this->ResurrectionChooseText).TimeExpressionType = None;
  (this->ResurrectionChooseText).IsExpression = false;
  (this->ResurrectionChooseText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionChooseText).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionChooseText).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionChooseText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionChooseText).FormatArgs.ArrayNum = 0;
  (this->ResurrectionChooseText).FormatArgs.ArrayMax = 0;
  (this->ResurrectionDescText).StringTableType = None;
  (this->ResurrectionDescText).StringTableID = 0;
  (this->ResurrectionDescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionDescText).StringEnumTableNameID.Number = 0;
  (this->ResurrectionDescText).DateTime.Ticks = 0;
  (this->ResurrectionDescText).TimeSpan.Ticks = 0;
  (this->ResurrectionDescText).TimeExpressionType = None;
  (this->ResurrectionDescText).IsExpression = false;
  (this->ResurrectionDescText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionDescText).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionDescText).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionDescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionDescText).FormatArgs.ArrayNum = 0;
  (this->ResurrectionDescText).FormatArgs.ArrayMax = 0;
  (this->CauseDeathText).StringTableType = None;
  (this->CauseDeathText).StringTableID = 0;
  (this->CauseDeathText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CauseDeathText).StringEnumTableNameID.Number = 0;
  (this->CauseDeathText).DateTime.Ticks = 0;
  (this->CauseDeathText).TimeSpan.Ticks = 0;
  (this->CauseDeathText).TimeExpressionType = None;
  (this->CauseDeathText).IsExpression = false;
  (this->CauseDeathText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CauseDeathText).UniqueString.Data.ArrayNum = 0;
  (this->CauseDeathText).UniqueString.Data.ArrayMax = 0;
  (this->CauseDeathText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CauseDeathText).FormatArgs.ArrayNum = 0;
  (this->CauseDeathText).FormatArgs.ArrayMax = 0;
  (this->DeathCountText).StringTableType = None;
  (this->DeathCountText).StringTableID = 0;
  (this->DeathCountText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DeathCountText).StringEnumTableNameID.Number = 0;
  (this->DeathCountText).DateTime.Ticks = 0;
  (this->DeathCountText).TimeSpan.Ticks = 0;
  (this->DeathCountText).TimeExpressionType = None;
  (this->DeathCountText).IsExpression = false;
  (this->DeathCountText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathCountText).UniqueString.Data.ArrayNum = 0;
  (this->DeathCountText).UniqueString.Data.ArrayMax = 0;
  (this->DeathCountText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathCountText).FormatArgs.ArrayNum = 0;
  (this->DeathCountText).FormatArgs.ArrayMax = 0;
  (this->ExplainText).StringTableType = None;
  (this->ExplainText).StringTableID = 0;
  (this->ExplainText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplainText).StringEnumTableNameID.Number = 0;
  (this->ExplainText).DateTime.Ticks = 0;
  (this->ExplainText).TimeSpan.Ticks = 0;
  (this->ExplainText).TimeExpressionType = None;
  (this->ExplainText).IsExpression = false;
  (this->ExplainText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplainText).UniqueString.Data.ArrayNum = 0;
  (this->ExplainText).UniqueString.Data.ArrayMax = 0;
  (this->ExplainText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplainText).FormatArgs.ArrayNum = 0;
  (this->ExplainText).FormatArgs.ArrayMax = 0;
  (this->VMResurrectButton_Base).field0_0x0.DebugPtr = (UDS_VM_HUD_ResurrectButton *)0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->ResurrectionBaseName).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.ArrayMax = 0;
  (this->AttackerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackerName).Data.ArrayNum = 0;
  (this->AttackerName).Data.ArrayMax = 0;
  *(undefined8 *)&this->StringUITextMap = 0;
  *(undefined8 *)&(this->StringUITextMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringUITextMap).field_0x20 = 0;
  this->WarpLocationID = 0;
  this->TotalDeathCount = 0;
  this->ResurrectEnableTime = 0.0;
  this->DeathKeepTime = 0.0;
  this->ResurrectionWaitingID = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringUITextMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringUITextMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x48 = 0;
  *(undefined8 *)&this->StringColorMap = 0;
  *(undefined8 *)&(this->StringColorMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringColorMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringColorMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringColorMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x48 = 0;
  this->ElapsedTime = 0.0;
  return this;
}

// UDS_VM_Death @ 14b63a160

UDS_VM_Death * __thiscall UDS_VM_Death::UDS_VM_Death(UDS_VM_Death *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ResurrectUIVisibility = Collapsed;
  this->DeathUIVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Death__6B_;
  (this->ResurrectionBaseName).StringTableID = 0;
  (this->ResurrectionBaseName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionBaseName).StringEnumTableNameID.Number = 0;
  (this->ResurrectionBaseName).DateTime.Ticks = 0;
  (this->ResurrectionBaseName).TimeSpan.Ticks = 0;
  (this->ResurrectionBaseName).TimeExpressionType = None;
  (this->ResurrectionBaseName).IsExpression = false;
  (this->ResurrectionBaseName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionBaseName).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionBaseName).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionBaseName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionBaseName).FormatArgs.ArrayNum = 0;
  (this->ResurrectionBaseName).FormatArgs.ArrayMax = 0;
  (this->ResurrectionChooseText).StringTableType = None;
  (this->ResurrectionChooseText).StringTableID = 0;
  (this->ResurrectionChooseText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionChooseText).StringEnumTableNameID.Number = 0;
  (this->ResurrectionChooseText).DateTime.Ticks = 0;
  (this->ResurrectionChooseText).TimeSpan.Ticks = 0;
  (this->ResurrectionChooseText).TimeExpressionType = None;
  (this->ResurrectionChooseText).IsExpression = false;
  (this->ResurrectionChooseText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionChooseText).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionChooseText).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionChooseText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionChooseText).FormatArgs.ArrayNum = 0;
  (this->ResurrectionChooseText).FormatArgs.ArrayMax = 0;
  (this->ResurrectionDescText).StringTableType = None;
  (this->ResurrectionDescText).StringTableID = 0;
  (this->ResurrectionDescText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ResurrectionDescText).StringEnumTableNameID.Number = 0;
  (this->ResurrectionDescText).DateTime.Ticks = 0;
  (this->ResurrectionDescText).TimeSpan.Ticks = 0;
  (this->ResurrectionDescText).TimeExpressionType = None;
  (this->ResurrectionDescText).IsExpression = false;
  (this->ResurrectionDescText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectionDescText).UniqueString.Data.ArrayNum = 0;
  (this->ResurrectionDescText).UniqueString.Data.ArrayMax = 0;
  (this->ResurrectionDescText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResurrectionDescText).FormatArgs.ArrayNum = 0;
  (this->ResurrectionDescText).FormatArgs.ArrayMax = 0;
  (this->CauseDeathText).StringTableType = None;
  (this->CauseDeathText).StringTableID = 0;
  (this->CauseDeathText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CauseDeathText).StringEnumTableNameID.Number = 0;
  (this->CauseDeathText).DateTime.Ticks = 0;
  (this->CauseDeathText).TimeSpan.Ticks = 0;
  (this->CauseDeathText).TimeExpressionType = None;
  (this->CauseDeathText).IsExpression = false;
  (this->CauseDeathText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CauseDeathText).UniqueString.Data.ArrayNum = 0;
  (this->CauseDeathText).UniqueString.Data.ArrayMax = 0;
  (this->CauseDeathText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CauseDeathText).FormatArgs.ArrayNum = 0;
  (this->CauseDeathText).FormatArgs.ArrayMax = 0;
  (this->DeathCountText).StringTableType = None;
  (this->DeathCountText).StringTableID = 0;
  (this->DeathCountText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DeathCountText).StringEnumTableNameID.Number = 0;
  (this->DeathCountText).DateTime.Ticks = 0;
  (this->DeathCountText).TimeSpan.Ticks = 0;
  (this->DeathCountText).TimeExpressionType = None;
  (this->DeathCountText).IsExpression = false;
  (this->DeathCountText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathCountText).UniqueString.Data.ArrayNum = 0;
  (this->DeathCountText).UniqueString.Data.ArrayMax = 0;
  (this->DeathCountText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeathCountText).FormatArgs.ArrayNum = 0;
  (this->DeathCountText).FormatArgs.ArrayMax = 0;
  (this->ExplainText).StringTableType = None;
  (this->ExplainText).StringTableID = 0;
  (this->ExplainText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplainText).StringEnumTableNameID.Number = 0;
  (this->ExplainText).DateTime.Ticks = 0;
  (this->ExplainText).TimeSpan.Ticks = 0;
  (this->ExplainText).TimeExpressionType = None;
  (this->ExplainText).IsExpression = false;
  (this->ExplainText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplainText).UniqueString.Data.ArrayNum = 0;
  (this->ExplainText).UniqueString.Data.ArrayMax = 0;
  (this->ExplainText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplainText).FormatArgs.ArrayNum = 0;
  (this->ExplainText).FormatArgs.ArrayMax = 0;
  (this->VMResurrectButton_Base).field0_0x0.DebugPtr = (UDS_VM_HUD_ResurrectButton *)0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->ResurrectionBaseName).StringTableType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->ResurrectButtonListSlotEventField).UserObjectList.ArrayMax = 0;
  (this->AttackerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttackerName).Data.ArrayNum = 0;
  (this->AttackerName).Data.ArrayMax = 0;
  *(undefined8 *)&this->StringUITextMap = 0;
  *(undefined8 *)&(this->StringUITextMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringUITextMap).field_0x20 = 0;
  this->WarpLocationID = 0;
  this->TotalDeathCount = 0;
  this->ResurrectEnableTime = 0.0;
  this->DeathKeepTime = 0.0;
  this->ResurrectionWaitingID = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringUITextMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringUITextMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringUITextMap).field_0x48 = 0;
  *(undefined8 *)&this->StringColorMap = 0;
  *(undefined8 *)&(this->StringColorMap).field_0x8 = 0;
  *(undefined8 *)&(this->StringColorMap).field_0x20 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x28 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringColorMap).field_0x34 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StringColorMap).field_0x40 = 0;
  *(undefined4 *)&(this->StringColorMap).field_0x48 = 0;
  this->ElapsedTime = 0.0;
  return this;
}

// ~UDS_VM_Death @ 14b63c6b0

void __thiscall UDS_VM_Death::~UDS_VM_Death(UDS_VM_Death *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Death__6B_;
  *(undefined4 *)&(this->StringColorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringColorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringColorMap);
  *(undefined4 *)&(this->StringUITextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringUITextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringUITextMap);
  pFVar2 = (this->AttackerName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResurrectButtonListSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
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
            ((FDS_TextFormatArg *)(this->ExplainText).FormatArgs.AllocatorInstance.Data,
             (this->ExplainText).FormatArgs.ArrayNum);
  pFVar2 = (this->ExplainText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExplainText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DeathCountText).FormatArgs.AllocatorInstance.Data,
             (this->DeathCountText).FormatArgs.ArrayNum);
  pFVar2 = (this->DeathCountText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DeathCountText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CauseDeathText).FormatArgs.AllocatorInstance.Data,
             (this->CauseDeathText).FormatArgs.ArrayNum);
  pFVar2 = (this->CauseDeathText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CauseDeathText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ResurrectionDescText).FormatArgs.AllocatorInstance.Data,
             (this->ResurrectionDescText).FormatArgs.ArrayNum);
  pFVar2 = (this->ResurrectionDescText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResurrectionDescText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ResurrectionChooseText).FormatArgs.AllocatorInstance.Data,
             (this->ResurrectionChooseText).FormatArgs.ArrayNum);
  pFVar2 = (this->ResurrectionChooseText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResurrectionChooseText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ResurrectionBaseName).FormatArgs.AllocatorInstance.Data,
             (this->ResurrectionBaseName).FormatArgs.ArrayNum);
  pFVar2 = (this->ResurrectionBaseName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResurrectionBaseName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f300

IClassDescriptor * __thiscall UDS_VM_Death::GetFieldNotificationDescriptor(UDS_VM_Death *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Death::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63fc10

UClass * __cdecl UDS_VM_Death::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Death",
               &Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton,
               StaticRegisterNativesUDS_VM_Death,0x3d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Death>,InternalVTableHelperCtorCaller<UDS_VM_Death>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Death.InnerSingleton;
}

// GetTickableTickType @ 14b640a50

ETickableTickType __thiscall UDS_VM_Death::GetTickableTickType(UDS_VM_Death *this)

{
  return Conditional;
}

// IsUpdate @ 14b640a60

bool __thiscall UDS_VM_Death::IsUpdate(UDS_VM_Death *this)

{
  ESlateVisibility EVar1;
  
  EVar1 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
  return EVar1 != Collapsed;
}

// StaticRegisterNativesUDS_VM_Death @ 14b640a90

void __cdecl UDS_VM_Death::StaticRegisterNativesUDS_VM_Death(void)

{
  return;
}

// GetReasonTextAndIcon @ 14bdc3cf0

void __thiscall
UDS_VM_Death::GetReasonTextAndIcon
          (UDS_VM_Death *this,EDS_DeathType param_1,FDS_Text *param_2,int *param_3)

{
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar1;
  int iVar2;
  FDS_Text *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FString *this_01;
  FDS_NpcBaseTableRow *pFVar5;
  int iVar6;
  FDS_Text local_c8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FDS_Text local_68;
  
  local_c8.StringTableID = 0;
  local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_c8.StringEnumTableNameID.Number = 0;
  local_c8.TimeExpressionType = None;
  local_c8.IsExpression = false;
  local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.UniqueString.Data.ArrayNum = 0;
  local_c8.UniqueString.Data.ArrayMax = 0;
  local_c8.DateTime.Ticks = 0;
  local_c8.TimeSpan.Ticks = 0;
  local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.FormatArgs.ArrayNum = 0;
  local_c8.FormatArgs.ArrayMax = 0;
  local_c8.StringTableType = None;
  FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x7533);
  FDS_Text::operator=(param_2,&local_c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
             local_c8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_c8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.UniqueString.Data.AllocatorInstance.Data);
  }
  iVar2 = DS_CommonDataHelper::IdDeathTypeSystemIcon();
  *param_3 = iVar2;
  if (param_1 != NPC) {
    if (param_1 == Player) {
      local_c8.DateTime.Ticks = 0;
      local_c8.TimeSpan.Ticks = 0;
      local_c8.StringTableType = None;
      local_c8.StringTableID = 0;
      local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_c8.StringEnumTableNameID.Number = 0;
      local_c8.TimeExpressionType = None;
      local_c8.IsExpression = false;
      local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.UniqueString.Data.ArrayNum = 0;
      local_c8.UniqueString.Data.ArrayMax = 0;
      local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.FormatArgs.ArrayNum = 0;
      local_c8.FormatArgs.ArrayMax = 0;
      if ((this->AttackerName).Data.ArrayNum < 2) {
        FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x7532);
        pFVar3 = FDS_Text::FromStringTableFormat<FDS_Text>(&local_68,StringUi,0x7531,&local_c8);
        FDS_Text::operator=(param_2,pFVar3);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                   local_68.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
        }
        if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_78.AllocatorInstance,&local_78.ArrayMax);
        local_78.ArrayNum = iVar2 + 1;
        this_00 = (FInstancedStruct *)(local_78.AllocatorInstance.Data + (longlong)iVar2 * 0x28);
        FInstancedStruct::FInstancedStruct(this_00);
        pFVar4 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar1 = pFVar4[1];
        this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar4;
        this_00[1].StructMemory = (uchar *)FVar1;
        this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar4[2];
        FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
        this_01 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
        if (this_01 != (FString *)0x0) {
          iVar2 = (this->AttackerName).Data.ArrayNum;
          iVar6 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar6 = 0;
          }
          ::FString::AssignRange
                    (this_01,(wchar_t *)(this->AttackerName).Data.AllocatorInstance.Data,iVar6);
        }
        FDS_Text::SetTextFormatFromStringTable(&local_c8,StringUi,0x7531,&local_78);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
        if ((FDS_TextFormatArg *)local_78.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        FDS_Text::operator=(param_2,&local_c8);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
                 local_c8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_c8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.UniqueString.Data.AllocatorInstance.Data);
      }
      iVar2 = DS_CommonDataHelper::IdDeathTypePlayerIcon();
    }
    else if (param_1 == Drown) {
      iVar2 = DS_CommonDataHelper::IdDeathTypeDrownIcon();
    }
    else if (param_1 == Fall) {
      iVar2 = DS_CommonDataHelper::IdDeathTypeFallIcon();
    }
    else {
      if (param_1 != Trigger) {
        return;
      }
      iVar2 = DS_CommonDataHelper::IdDeathTypeSystemIcon();
    }
    goto LAB_14bdc4065;
  }
  if (this->AttackerID == 0) {
    local_c8.StringTableType = None;
    local_c8.StringTableID = 0;
    local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_c8.StringEnumTableNameID.Number = 0;
    local_c8.TimeExpressionType = None;
    local_c8.DateTime.Ticks = 0;
    local_c8.TimeSpan.Ticks = 0;
    local_c8.IsExpression = false;
    local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.UniqueString.Data.ArrayNum = 0;
    local_c8.UniqueString.Data.ArrayMax = 0;
    local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.FormatArgs.ArrayNum = 0;
    local_c8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x7532);
LAB_14bdc3ff0:
    pFVar3 = FDS_Text::FromStringTableFormat<FDS_Text>(&local_68,StringUi,0x7531,&local_c8);
    FDS_Text::operator=(param_2,pFVar3);
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
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data,
               local_c8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_c8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_c8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_c8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar5 = FDS_NpcBaseTableRow::Get(this->AttackerID,true);
    if (pFVar5 != (FDS_NpcBaseTableRow *)0x0) {
      local_c8.StringTableType = None;
      local_c8.StringTableID = 0;
      local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_c8.StringEnumTableNameID.Number = 0;
      local_c8.DateTime.Ticks = 0;
      local_c8.TimeSpan.Ticks = 0;
      local_c8.TimeExpressionType = None;
      local_c8.IsExpression = false;
      local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.UniqueString.Data.ArrayNum = 0;
      local_c8.UniqueString.Data.ArrayMax = 0;
      local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.FormatArgs.ArrayNum = 0;
      local_c8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_c8,&pFVar5->ID_NameSid);
      goto LAB_14bdc3ff0;
    }
  }
  iVar2 = DS_CommonDataHelper::IdDeathTypeNpcIcon();
LAB_14bdc4065:
  *param_3 = iVar2;
  return;
}

// InitUI @ 14bdc5bf0

void __thiscall UDS_VM_Death::InitUI(UDS_VM_Death *this)

{
  FDS_TextFormatArg *this_00;
  FInstancedStruct *this_01;
  FScriptContainerElement *pFVar1;
  EDS_DeathUiDisplayType EVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  ERoundingMode EVar7;
  int iVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FDS_ResurrectionWaitingTableRow *pFVar15;
  FDS_WarpLocationTableRow *pFVar16;
  UEnum *pUVar17;
  FNumberFormattingOptions *pFVar18;
  longlong lVar19;
  FObjectPtr_u_0 *pFVar20;
  FDS_Int32StringFormatArg *pFVar21;
  FName *pFVar22;
  FScriptContainerElement *pFVar23;
  FName local_res8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_188;
  FDS_Text local_178;
  FDS_Text local_128;
  FDS_Text local_d8;
  FDS_Text local_88;
  
  pFVar15 = FDS_ResurrectionWaitingTableRow::Get((longlong)this->ResurrectionWaitingID,true);
  iVar12 = FFieldNotificationClassDescriptor::DeathUIVisibility.BitNumber;
  FVar11 = FFieldNotificationClassDescriptor::DeathUIVisibility.FieldName;
  iVar8 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.BitNumber;
  FVar10 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.FieldName;
  iVar14 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FVar9 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (pFVar15 == (FDS_ResurrectionWaitingTableRow *)0x0) goto LAB_14bdc5d58;
  EVar2 = pFVar15->DeathUiDisplayType;
  if (EVar2 == None) {
    if ((char)this->_padding_ == '\x01') goto LAB_14bdc5d58;
    *(undefined1 *)&this->_padding_ = 1;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
LAB_14bdc5d37:
    local_188.ArrayNum = iVar14;
    lVar19 = this->_padding_;
  }
  else {
    if (EVar2 != ShowAllUi) {
      if (EVar2 == ShowDeathUiOnly) {
        if (this->DeathUIVisibility == SelfHitTestInvisible) goto LAB_14bdc5d58;
        this->DeathUIVisibility = SelfHitTestInvisible;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
        iVar14 = iVar12;
      }
      else {
        if ((EVar2 != ShowResurrectionUIOnly) ||
           (this->ResurrectUIVisibility == SelfHitTestInvisible)) goto LAB_14bdc5d58;
        this->ResurrectUIVisibility = SelfHitTestInvisible;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar10;
        iVar14 = iVar8;
      }
      goto LAB_14bdc5d37;
    }
    if (this->DeathUIVisibility != SelfHitTestInvisible) {
      this->DeathUIVisibility = SelfHitTestInvisible;
      local_188.ArrayNum = iVar12;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar11;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
    iVar14 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.FieldName;
    if (this->ResurrectUIVisibility == SelfHitTestInvisible) goto LAB_14bdc5d58;
    this->ResurrectUIVisibility = SelfHitTestInvisible;
    local_188.ArrayNum = iVar14;
    lVar19 = this->_padding_;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
  }
  (**(code **)(lVar19 + 0x38))(&this->_padding_,&local_188);
LAB_14bdc5d58:
  iVar14 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FVar9 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((char)this->_padding_ != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
    local_188.ArrayNum = iVar14;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  }
  pFVar16 = FDS_WarpLocationTableRow::Get((longlong)this->WarpLocationID,true);
  if (pFVar16 != (FDS_WarpLocationTableRow *)0x0) {
    local_178.StringTableType = None;
    local_178.StringTableID = 0;
    local_178.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_178.StringEnumTableNameID.Number = 0;
    local_178.DateTime.Ticks = 0;
    local_178.TimeSpan.Ticks = 0;
    local_178.TimeExpressionType = None;
    local_178.IsExpression = false;
    local_178.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.UniqueString.Data.ArrayNum = 0;
    local_178.UniqueString.Data.ArrayMax = 0;
    local_178.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.FormatArgs.ArrayNum = 0;
    local_178.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_178,&pFVar16->ID_Name);
    iVar14 = FFieldNotificationClassDescriptor::ResurrectionBaseName.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::ResurrectionBaseName.FieldName;
    FDS_Text::operator=(&this->ResurrectionBaseName,&local_178);
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
    local_188.ArrayNum = iVar14;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_178.FormatArgs.AllocatorInstance.Data,
               local_178.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_178.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_178.FormatArgs.AllocatorInstance.Data);
    }
    if (local_178.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  local_88.StringTableType = None;
  local_88.StringTableID = 0;
  local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_88.StringEnumTableNameID.Number = 0;
  local_88.DateTime.Ticks = 0;
  local_88.TimeSpan.Ticks = 0;
  local_88.TimeExpressionType = None;
  local_88.IsExpression = false;
  local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.UniqueString.Data.ArrayNum = 0;
  local_88.UniqueString.Data.ArrayMax = 0;
  local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.FormatArgs.ArrayNum = 0;
  local_88.FormatArgs.ArrayMax = 0;
  GetReasonTextAndIcon(this,this->DeathReasonType,&local_88,(int *)&local_res8);
  iVar14 = FFieldNotificationClassDescriptor::CauseDeathText.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::CauseDeathText.FieldName;
  FDS_Text::operator=(&this->CauseDeathText,&local_88);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
  local_188.ArrayNum = iVar14;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  FVar9 = FFieldNotificationClassDescriptor::DeathCauseIconID.FieldName;
  if (this->DeathCauseIconID != local_res8.ComparisonIndex.Value) {
    local_188.ArrayNum = FFieldNotificationClassDescriptor::DeathCauseIconID.BitNumber;
    this->DeathCauseIconID = local_res8.ComparisonIndex.Value;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  }
  local_178.StringTableType = None;
  local_178.StringTableID = 0;
  local_178.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_178.StringEnumTableNameID.Number = 0;
  local_178.TimeExpressionType = None;
  local_178.DateTime.Ticks = 0;
  local_178.TimeSpan.Ticks = 0;
  local_178.IsExpression = false;
  local_178.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.UniqueString.Data.ArrayNum = 0;
  local_178.UniqueString.Data.ArrayMax = 0;
  local_178.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.FormatArgs.ArrayNum = 0;
  local_178.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_178,StringUi,0x7d08);
  iVar14 = FFieldNotificationClassDescriptor::ExplainText.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::ExplainText.FieldName;
  FDS_Text::operator=(&this->ExplainText,&local_178);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
  local_188.ArrayNum = iVar14;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_178.FormatArgs.AllocatorInstance.Data,
             local_178.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_178.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_178.FormatArgs.AllocatorInstance.Data);
  }
  if (local_178.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.UniqueString.Data.AllocatorInstance.Data);
  }
  local_178.StringTableType = None;
  local_178.StringTableID = 0;
  local_178.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_178.StringEnumTableNameID.Number = 0;
  local_178.DateTime.Ticks = 0;
  local_178.TimeSpan.Ticks = 0;
  local_178.TimeExpressionType = None;
  local_178.IsExpression = false;
  local_178.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.UniqueString.Data.ArrayNum = 0;
  local_178.UniqueString.Data.ArrayMax = 0;
  local_178.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.FormatArgs.ArrayNum = 0;
  local_178.FormatArgs.ArrayMax = 0;
  pFVar15 = FDS_ResurrectionWaitingTableRow::Get((longlong)this->ResurrectionWaitingID,true);
  if (pFVar15 != (FDS_ResurrectionWaitingTableRow *)0x0) {
    pUVar17 = StaticEnum<enum_EDS_DeadZoneType>();
    DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar17);
    local_128.StringTableType = None;
    local_128.StringTableID = 0;
    local_128.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_128.StringEnumTableNameID.Number = 0;
    local_128.DateTime.Ticks = 0;
    local_128.TimeSpan.Ticks = 0;
    local_128.TimeExpressionType = None;
    local_128.IsExpression = false;
    local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.UniqueString.Data.ArrayNum = 0;
    local_128.UniqueString.Data.ArrayMax = 0;
    local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.FormatArgs.ArrayNum = 0;
    local_128.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringEnumTable(&local_128,&local_res8);
    local_178.StringTableType = local_128.StringTableType;
    local_178.StringTableID = local_128.StringTableID;
    local_178.StringEnumTableNameID = local_128.StringEnumTableNameID;
    local_178.DateTime.Ticks = local_128.DateTime.Ticks;
    local_178.TimeSpan.Ticks = local_128.TimeSpan.Ticks;
    local_178.TimeExpressionType = local_128.TimeExpressionType;
    local_178.IsExpression = local_128.IsExpression;
    local_178.UniqueString.Data.AllocatorInstance.Data =
         local_128.UniqueString.Data.AllocatorInstance.Data;
    local_178.UniqueString.Data.ArrayNum = local_128.UniqueString.Data.ArrayNum;
    local_178.UniqueString.Data.ArrayMax = local_128.UniqueString.Data.ArrayMax;
    local_128.UniqueString.Data.ArrayNum = 0;
    local_128.UniqueString.Data.ArrayMax = 0;
    local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    local_178.FormatArgs.AllocatorInstance.Data = local_128.FormatArgs.AllocatorInstance.Data;
    local_178.FormatArgs.ArrayNum = local_128.FormatArgs.ArrayNum;
    local_178.FormatArgs.ArrayMax = local_128.FormatArgs.ArrayMax;
    local_128.FormatArgs.ArrayNum = 0;
    local_128.FormatArgs.ArrayMax = 0;
    local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_128.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.FormatArgs.AllocatorInstance.Data);
    }
    if (local_128.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  local_d8.StringTableType = None;
  local_d8.StringTableID = 0;
  local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_d8.StringEnumTableNameID.Number = 0;
  local_d8.DateTime.Ticks = 0;
  local_d8.TimeSpan.Ticks = 0;
  local_d8.TimeExpressionType = None;
  local_d8.IsExpression = false;
  local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.UniqueString.Data.ArrayNum = 0;
  local_d8.UniqueString.Data.ArrayMax = 0;
  local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FormatArgs.ArrayNum = 0;
  local_d8.FormatArgs.ArrayMax = 0;
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.ArrayNum = 0;
  local_188.ArrayMax = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_188.AllocatorInstance,&local_188.ArrayMax);
  this_00 = (FDS_TextFormatArg *)(local_188.AllocatorInstance.Data + (longlong)iVar14 * 0x28);
  local_188.ArrayNum = iVar14 + 1;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this_00);
  pFVar18 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar4 = pFVar18->UseGrouping;
  bVar5 = pFVar18->IndicateNearlyInteger;
  uVar6 = pFVar18->field_0x3;
  EVar7 = pFVar18->RoundingMode;
  iVar14 = pFVar18->MinimumIntegralDigits;
  iVar8 = pFVar18->MaximumIntegralDigits;
  (this_00->NumberFormatOption).AlwaysSign = pFVar18->AlwaysSign;
  (this_00->NumberFormatOption).UseGrouping = bVar4;
  (this_00->NumberFormatOption).IndicateNearlyInteger = bVar5;
  (this_00->NumberFormatOption).field_0x3 = uVar6;
  (this_00->NumberFormatOption).RoundingMode = EVar7;
  (this_00->NumberFormatOption).MinimumIntegralDigits = iVar14;
  (this_00->NumberFormatOption).MaximumIntegralDigits = iVar8;
  iVar14 = pFVar18->MaximumFractionalDigits;
  (this_00->NumberFormatOption).MinimumFractionalDigits = pFVar18->MinimumFractionalDigits;
  (this_00->NumberFormatOption).MaximumFractionalDigits = iVar14;
  FDS_TextFormatArg::SetArg<FDS_Text_&>(this_00,&local_178);
  if (local_188.ArrayNum == local_188.ArrayMax) {
    local_188.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_188.AllocatorInstance,&local_188.ArrayMax);
  }
  lVar19 = (longlong)local_188.ArrayNum;
  local_188.ArrayNum = local_188.ArrayNum + 1;
  this_01 = (FInstancedStruct *)(local_188.AllocatorInstance.Data + lVar19 * 0x28);
  FInstancedStruct::FInstancedStruct(this_01);
  pFVar20 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar20[1];
  this_01[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar20;
  this_01[1].StructMemory = (uchar *)FVar3;
  this_01[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar20[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_01);
  pFVar21 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_01);
  if (pFVar21 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar21->Value = this->TotalDeathCount;
  }
  FDS_Text::SetTextFormatFromStringTable(&local_d8,StringUi,0x7d01,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
  if ((FDS_TextFormatArg *)local_188.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  iVar14 = FFieldNotificationClassDescriptor::DeathCountText.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::DeathCountText.FieldName;
  FDS_Text::operator=(&this->DeathCountText,&local_d8);
  local_188.AllocatorInstance.Data = (FScriptContainerElement *)FVar9;
  local_188.ArrayNum = iVar14;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  SetResurrectButtonList(this,this->ResurrectionWaitingID);
  pFVar15 = FDS_ResurrectionWaitingTableRow::Get((longlong)this->ResurrectionWaitingID,true);
  if (pFVar15 != (FDS_ResurrectionWaitingTableRow *)0x0) {
    pFVar23 = (pFVar15->ResurrectType).AllocatorInstance.Data;
    iVar14 = (pFVar15->ResurrectType).ArrayNum;
    pFVar1 = pFVar23 + iVar14;
    while( true ) {
      if ((pFVar15->ResurrectType).ArrayNum != iVar14) {
        `TCheckedPointerIterator<enum_EDS_ResurrectType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar23 == pFVar1) {
        this->AutoResurrectType = Inn;
        goto LAB_14bdc62e6;
      }
      if (*pFVar23 == (FScriptContainerElement)0x0) break;
      pFVar23 = pFVar23 + 1;
    }
    this->AutoResurrectType = Base;
  }
LAB_14bdc62e6:
  pFVar22 = ::FName::FName(&local_res8,"Open");
  (this->AnimationEvent).AnimationName = *pFVar22;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_188.ArrayNum = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_188.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
             local_d8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar13.Data = local_178.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_178.FormatArgs.AllocatorInstance.Data,
             local_178.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar13.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_178.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar13.Data = local_88.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
             local_88.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar13.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// InitViewModel @ 14bdc7100

void __thiscall UDS_VM_Death::InitViewModel(UDS_VM_Death *this)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 TVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar5;
  UClass *pUVar6;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 TVar7;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 TVar8;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 local_res8;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 local_28;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 local_20;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 local_18;
  TObjectPtr<UDS_VM_HUD_ResurrectButton>_u_0 local_10;
  
  if ((this->VMResurrectButton_Base).field0_0x0.DebugPtr == (UDS_VM_HUD_ResurrectButton *)0x0) {
    TVar3.DebugPtr = ::operator_new(0x20);
    TVar8.DebugPtr = (UDS_VM_HUD_ResurrectButton *)0x0;
    TVar7.DebugPtr = TVar8.DebugPtr;
    if (TVar3.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0) {
      *(undefined4 *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4) = 0;
      (TVar3.DebugPtr)->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      (TVar3.DebugPtr)->_padding_ = 0;
      (TVar3.DebugPtr)->_padding_ = 0;
      *(undefined4 *)&(TVar3.DebugPtr)->_padding_ = 0;
      TVar7.DebugPtr = TVar3.DebugPtr;
    }
    local_28 = TVar7;
    TVar3.DebugPtr = ::operator_new(0x20);
    local_20.DebugPtr = TVar8.DebugPtr;
    if (TVar3.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0) {
      *(undefined4 *)&(TVar3.DebugPtr)->_padding_ = 1;
      (TVar3.DebugPtr)->_padding_ = (longlong)ViewModelContextDeleter;
      (TVar3.DebugPtr)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4) = 1;
      (TVar3.DebugPtr)->_padding_ = (longlong)TVar7;
      local_20.DebugPtr = TVar3.DebugPtr;
    }
    if ((local_28.DebugPtr == (UDS_VM_HUD_ResurrectButton *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TVar7 = local_28;
    pUVar4 = FDS_ViewModelContext::StaticStruct();
    (TVar7.DebugPtr)->_padding_ = (longlong)pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext
                (this_00,(TSharedPtr<FDS_ViewModelContext,1> *)&local_28.ObjectPtr);
    }
    TVar7 = local_20;
    if (local_28.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0) {
      *(undefined4 *)&(local_28.DebugPtr)->_padding_ = 0x47;
      if (local_20.DebugPtr == (UDS_VM_HUD_ResurrectButton *)0x0) {
        plVar5 = (longlong *)&DAT_00000008;
      }
      else {
        plVar5 = &(local_20.DebugPtr)->_padding_;
        LOCK();
        *(int *)plVar5 = (int)*plVar5 + 1;
        UNLOCK();
      }
      local_18.DebugPtr = local_28.DebugPtr;
      local_10.DebugPtr = local_20.DebugPtr;
      if (local_20.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0) {
        LOCK();
        *(int *)plVar5 = (int)*plVar5 + 1;
        UNLOCK();
      }
      DS_ViewModelTemplateUtil::CreateViewModel
                ((UObject *)&local_res8.ObjectPtr,(TSharedPtr<FDS_ViewModelContext,1> *)this);
      if (local_res8.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_VM_HUD_ResurrectButton_NoRegister();
        bVar2 = FObjectPtr::IsA(&local_res8.ObjectPtr,pUVar6);
        if (bVar2) {
          TVar8 = local_res8;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)TVar7.DebugPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar8.DebugPtr != (UDS_VM_HUD_ResurrectButton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
      }
      (this->VMResurrectButton_Base).field0_0x0.DebugPtr = (UDS_VM_HUD_ResurrectButton *)TVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20.DebugPtr);
  }
  return;
}

// OnClickResurrectBase @ 14bdcd300

void __thiscall UDS_VM_Death::OnClickResurrectBase(UDS_VM_Death *this,FWidgetEventField *param_1)

{
  EDS_ResurrectType local_res8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res8[0] = Base;
  if (this->ElapsedTime <= this->ResurrectEnableTime &&
      this->ResurrectEnableTime != this->ElapsedTime) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&local_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(local_res8);
  return;
}

// OnClickResurrectInstant @ 14bdcd360

void __thiscall UDS_VM_Death::OnClickResurrectInstant(UDS_VM_Death *this,FWidgetEventField *param_1)

{
  EDS_ResurrectType local_res8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res8[0] = Instant;
  if (this->ElapsedTime <= this->ResurrectEnableTime &&
      this->ResurrectEnableTime != this->ElapsedTime) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&local_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(local_res8);
  return;
}

// OnCloseInit @ 14bdcdba0

void __thiscall UDS_VM_Death::OnCloseInit(UDS_VM_Death *this)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bddac50

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
UDS_VM_Death::OnSetViewModel(UDS_VM_Death *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FDS_EntityBase *pFVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158 [2];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar5 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Death::OnSetViewModel",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Error,local_138.Ptr,0x42,
                 L"UDS_VM_Death::SetViewModel() entityBase is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->ElapsedTime = 0.0;
    iVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
    FVar2 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
    if ((char)this->_padding_ != '\x01') {
      *(undefined1 *)&this->_padding_ = 1;
      local_140 = iVar3;
      local_148 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
    UDS_DeathData::FindOrAddData((ulong64)local_158,pFVar5->EntityID);
    bVar4 = FWeakObjectPtr::IsValid(local_158);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->WarpLocationID = *(int *)&pUVar7[2].field_0x8;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->TotalDeathCount = *(int *)&pUVar7[2].field_0xc;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->ResurrectEnableTime = *(float *)&pUVar7[2].field_0x10;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->DeathKeepTime = *(float *)&pUVar7[2].field_0x14;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->DeathReasonType = pUVar7[2].field_0x18;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->AttackerID = *(long64 *)&pUVar7[2].field_0x20;
      pUVar7 = FWeakObjectPtr::Get(local_158);
      ::FString::operator=(&this->AttackerName,(FString *)(pUVar7 + 3));
      pUVar7 = FWeakObjectPtr::Get(local_158);
      this->ResurrectionWaitingID = *(int *)&pUVar7[3].field_0x10;
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Death::OnSetViewModel",0x1c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Error,local_138.Ptr,0x59,
                   L"UDS_VM_Death::SetViewModel() UDS_DeathData is invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    InitUI(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bddf3a0

void __thiscall UDS_VM_Death::OnUpdate(UDS_VM_Death *this,float param_1)

{
  float fVar1;
  float fVar2;
  FName FVar3;
  char cVar4;
  FDS_Text *pFVar5;
  int iVar6;
  float fVar7;
  int local_res8 [2];
  FName local_c8;
  int local_c0;
  FDS_Text local_b8;
  FDS_Text local_68;
  
  cVar4 = (**(code **)(this->_padding_ + 0x318))();
  fVar2 = __real_bf000000;
  if (cVar4 != '\0') {
    fVar1 = this->ElapsedTime;
    fVar7 = fVar1 + param_1;
    this->ElapsedTime = fVar7;
    if ((((int)ROUND(fVar2 - (fVar1 + fVar1)) ^ (int)ROUND(fVar2 - (fVar7 + fVar7))) & 0xfffffffeU)
        != 0) {
      fVar7 = this->ResurrectEnableTime - fVar7;
      iVar6 = -((int)ROUND(fVar2 - (fVar7 + fVar7)) >> 1);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      local_res8[0] = iVar6;
      FDS_Text::FromStringTableFormat<int_&>(&local_b8,StringUi,0x7d02,local_res8);
      if (iVar6 < 1) {
        pFVar5 = FDS_Text::FromStringTableFormat<int_&>(&local_68,StringUi,0x7d03,local_res8);
        FDS_Text::operator=(&local_b8,pFVar5);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                   local_68.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
        }
        if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = FFieldNotificationClassDescriptor::ResurrectionChooseText.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::ResurrectionChooseText.FieldName;
      FDS_Text::operator=(&this->ResurrectionChooseText,&local_b8);
      local_c8 = FVar3;
      local_c0 = iVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
                 local_b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
      }
      UpdateRemainTime(this);
    }
  }
  return;
}

// PlayAnimationDeathStart @ 14bde1fa0

void __thiscall UDS_VM_Death::PlayAnimationDeathStart(UDS_VM_Death *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  pFVar1 = ::FName::FName(local_res8,"Open");
  (this->AnimationEvent).AnimationName = *pFVar1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// RequestResurrect @ 14bde3030

void __thiscall UDS_VM_Death::RequestResurrect(UDS_VM_Death *this,EDS_ResurrectType param_1)

{
  EDS_ResurrectType local_res10 [24];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res10[0] = param_1;
  if (this->ElapsedTime <= this->ResurrectEnableTime &&
      this->ResurrectEnableTime != this->ElapsedTime) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x88bb,Alert_System_01,&local_28);
    return;
  }
  UDS_ResurrectAbility::RequestResurrect(local_res10);
  return;
}

// SetAutoRessurectType @ 14bde3510

void __thiscall UDS_VM_Death::SetAutoRessurectType(UDS_VM_Death *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_ResurrectionWaitingTableRow *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar3 = FDS_ResurrectionWaitingTableRow::Get((longlong)param_1,true);
  if (pFVar3 != (FDS_ResurrectionWaitingTableRow *)0x0) {
    pFVar4 = (pFVar3->ResurrectType).AllocatorInstance.Data;
    iVar2 = (pFVar3->ResurrectType).ArrayNum;
    pFVar1 = pFVar4 + iVar2;
    while( true ) {
      if ((pFVar3->ResurrectType).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_ResurrectType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar4 == pFVar1) {
        this->AutoResurrectType = Inn;
        return;
      }
      if (*pFVar4 == (FScriptContainerElement)0x0) break;
      pFVar4 = pFVar4 + 1;
    }
    this->AutoResurrectType = Base;
  }
  return;
}

// SetAutoResurrectionText @ 14bde35a0

void __thiscall UDS_VM_Death::SetAutoResurrectionText(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ResurrectionDescText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ResurrectionDescText.FieldName;
  FDS_Text::operator=(&this->ResurrectionDescText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDeathCauseIconID @ 14bde5280

void __thiscall UDS_VM_Death::SetDeathCauseIconID(UDS_VM_Death *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DeathCauseIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DeathCauseIconID.FieldName;
  if (this->DeathCauseIconID != param_1) {
    this->DeathCauseIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDeathCauseText @ 14bde52d0

void __thiscall UDS_VM_Death::SetDeathCauseText(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CauseDeathText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CauseDeathText.FieldName;
  FDS_Text::operator=(&this->CauseDeathText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDeathCountText @ 14bde5330

void __thiscall UDS_VM_Death::SetDeathCountText(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DeathCountText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DeathCountText.FieldName;
  FDS_Text::operator=(&this->DeathCountText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDeathUIVisibility @ 14bde5390

void __thiscall UDS_VM_Death::SetDeathUIVisibility(UDS_VM_Death *this)

{
  EDS_DeathUiDisplayType EVar1;
  FName FVar2;
  int iVar3;
  FName FVar4;
  int iVar5;
  FDS_ResurrectionWaitingTableRow *pFVar6;
  FName local_18;
  int local_10;
  
  pFVar6 = FDS_ResurrectionWaitingTableRow::Get((longlong)this->ResurrectionWaitingID,true);
  iVar5 = FFieldNotificationClassDescriptor::DeathUIVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::DeathUIVisibility.FieldName;
  iVar3 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.FieldName;
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (pFVar6 != (FDS_ResurrectionWaitingTableRow *)0x0) {
    EVar1 = pFVar6->DeathUiDisplayType;
    if (EVar1 == None) {
      if ((char)this->_padding_ != '\x01') {
        *(undefined1 *)&this->_padding_ = 1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        return;
      }
    }
    else if (EVar1 == ShowAllUi) {
      if (this->DeathUIVisibility != SelfHitTestInvisible) {
        this->DeathUIVisibility = SelfHitTestInvisible;
        local_10 = iVar5;
        local_18 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
      local_10 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.BitNumber;
      local_18 = FFieldNotificationClassDescriptor::ResurrectUIVisibility.FieldName;
      if (this->ResurrectUIVisibility != SelfHitTestInvisible) {
        this->ResurrectUIVisibility = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      }
    }
    else if (EVar1 == ShowDeathUiOnly) {
      if (this->DeathUIVisibility != SelfHitTestInvisible) {
        this->DeathUIVisibility = SelfHitTestInvisible;
        local_10 = iVar5;
        local_18 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        return;
      }
    }
    else if ((EVar1 == ShowResurrectionUIOnly) &&
            (this->ResurrectUIVisibility != SelfHitTestInvisible)) {
      this->ResurrectUIVisibility = SelfHitTestInvisible;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      return;
    }
  }
  return;
}

// SetExplainText @ 14bde6440

void __thiscall UDS_VM_Death::SetExplainText(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExplainText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExplainText.FieldName;
  FDS_Text::operator=(&this->ExplainText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetResurrectButtonList @ 14bde8910

void __thiscall UDS_VM_Death::SetResurrectButtonList(UDS_VM_Death *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_ResurrectionWaitingTableRow *pFVar6;
  ulonglong uVar7;
  UDS_UserObjectListItem *pUVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar11;
  FScriptContainerElement *pFVar12;
  FDS_ViewModelContext *pFVar13;
  atomic<int> *paVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18;
  FScriptContainerElement *local_res20;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->ResurrectButtonListSlotEventField);
  pFVar6 = FDS_ResurrectionWaitingTableRow::Get((longlong)param_1,true);
  if (pFVar6 != (FDS_ResurrectionWaitingTableRow *)0x0) {
    pFVar15 = (pFVar6->ResurrectType).AllocatorInstance.Data;
    uVar2 = (pFVar6->ResurrectType).ArrayNum;
    uVar7 = (ulonglong)(int)uVar2;
    pFVar12 = pFVar15 + uVar7;
    local_res20 = pFVar12;
    while( true ) {
      pFVar13 = (FDS_ViewModelContext *)0x0;
      if ((pFVar6->ResurrectType).ArrayNum != (int)uVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<enum_EDS_ResurrectType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar15 == pFVar12) break;
      if ((*pFVar15 != (FScriptContainerElement)0x2) && (*pFVar15 != (FScriptContainerElement)0x3))
      {
        pUVar8 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        pFVar9 = ::operator_new(0x30);
        pFVar11 = pFVar13;
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar9->field_0x1c = 0;
          *(undefined8 *)((longlong)&pFVar9[1]._padding_ + 4) = 0;
          ((atomic<int> *)&pFVar9[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
          *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
          (pFVar9->ViewModelName).ComparisonIndex = 0;
          (pFVar9->ViewModelName).Number = 0;
          pFVar9->ViewModelTemplateKey = None;
          pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_ResurrectButton__6B_;
          pFVar11 = pFVar9;
        }
        pFVar9 = ::operator_new(0x20);
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar9->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ResurrectButton__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar11;
          pFVar13 = pFVar9;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar10 = FDS_ViewModelContext_ResurrectButton::StaticStruct();
        *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar10;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar13 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_58.Object = pFVar11;
          local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13
          ;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = HUD_ResurrectButton;
        *(float *)&pFVar11[1]._padding_ = this->ResurrectEnableTime;
        *(float *)((longlong)&pFVar11[1]._padding_ + 4) = this->DeathKeepTime;
        *(int *)&pFVar11[1].DerivedStaticStruct = this->WarpLocationID;
        *(FScriptContainerElement *)((atomic<int> *)&pFVar11[1].DerivedStaticStruct + 1) = *pFVar15;
        if (pFVar13 == (FDS_ViewModelContext *)0x0) {
          paVar14 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar14 = (atomic<int> *)&pFVar13->DerivedStaticStruct;
          LOCK();
          *paVar14 = (atomic<int>)((int)*paVar14 + 1);
          UNLOCK();
        }
        iVar5 = (pUVar8->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar8->ViewModelContextArray).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar8->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar8->ViewModelContextArray).ArrayNum = iVar5 + 1;
        pFVar12 = (pUVar8->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar12 + (longlong)iVar5 * 0x10) = pFVar11;
        *(FDS_ViewModelContext **)(pFVar12 + (longlong)iVar5 * 0x10 + 8) = pFVar13;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar14 = (atomic<int>)((int)*paVar14 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
        local_res18 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar8 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FDS_EntryBindingEventField::Add
                  (&this->ResurrectButtonListSlotEventField,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar13);
        pFVar12 = local_res20;
      }
      uVar7 = (ulonglong)uVar2;
      pFVar15 = pFVar15 + 1;
    }
    local_60 = FFieldNotificationClassDescriptor::ResurrectButtonListSlotEventField.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ResurrectButtonListSlotEventField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// SetResurrectionBaseName @ 14bde8c00

void __thiscall UDS_VM_Death::SetResurrectionBaseName(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ResurrectionBaseName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ResurrectionBaseName.FieldName;
  FDS_Text::operator=(&this->ResurrectionBaseName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetResurrectionChooseText @ 14bde8c60

void __thiscall UDS_VM_Death::SetResurrectionChooseText(UDS_VM_Death *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ResurrectionChooseText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ResurrectionChooseText.FieldName;
  FDS_Text::operator=(&this->ResurrectionChooseText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateRemainTime @ 14bdf4970

void __thiscall UDS_VM_Death::UpdateRemainTime(UDS_VM_Death *this)

{
  FName FVar1;
  bool bVar2;
  FDS_WarpLocationTableRow *pFVar3;
  UObject *pUVar4;
  FDS_ReturnHomeTableRow *pFVar5;
  FDS_Text *pFVar6;
  FDS_StringWorldID *pFVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  float fVar11;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  FDS_Text local_128;
  FName local_d8;
  int local_d0;
  FDS_Text local_c8;
  FDS_Text local_78;
  
  pFVar3 = FDS_WarpLocationTableRow::Get((longlong)this->WarpLocationID,true);
  if (pFVar3 == (FDS_WarpLocationTableRow *)0x0) {
    return;
  }
  fVar11 = this->DeathKeepTime - this->ElapsedTime;
  FVar8.Data = (FScriptContainerElement *)0x0;
  FVar9.Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  local_c8.StringTableType = None;
  local_c8.StringTableID = 0;
  local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_c8.StringEnumTableNameID.Number = 0;
  local_c8.DateTime.Ticks = 0;
  local_c8.TimeSpan.Ticks = 0;
  local_c8.TimeExpressionType = None;
  local_c8.IsExpression = false;
  local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.UniqueString.Data.ArrayNum = 0;
  local_c8.UniqueString.Data.ArrayMax = 0;
  local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.FormatArgs.ArrayNum = 0;
  local_c8.FormatArgs.ArrayMax = 0;
  local_res8[0] = -((int)ROUND(__real_bf000000 - (fVar11 + fVar11)) >> 1);
  if (local_res8[0] < 0) {
    local_res8[0] = 0;
  }
  if (this->AutoResurrectType == Base) {
    pFVar7 = &pFVar3->ID_Name;
LAB_14bdf4a6e:
    local_128.StringTableType = None;
    local_128.StringTableID = 0;
    local_128.DateTime.Ticks = 0;
    local_128.TimeSpan.Ticks = 0;
    local_128.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_128.StringEnumTableNameID.Number = 0;
    local_128.TimeExpressionType = None;
    local_128.IsExpression = false;
    local_128.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.UniqueString.Data.ArrayNum = 0;
    local_128.UniqueString.Data.ArrayMax = 0;
    local_128.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.FormatArgs.ArrayNum = 0;
    local_128.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_128,pFVar7);
    pFVar6 = FDS_Text::FromStringTableFormat<int_&,FDS_Text>
                       (&local_78,StringUi,0x7d04,local_res8,&local_128);
    FDS_Text::operator=(&local_c8,pFVar6);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
               local_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
    }
    if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_128.FormatArgs.AllocatorInstance.Data,
               local_128.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_128.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_128.FormatArgs.AllocatorInstance.Data);
    }
    if (local_128.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (!bVar2) goto LAB_14bdf4b7b;
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pFVar5 = FDS_ReturnHomeTableRow::Get((longlong)*(int *)&pUVar4[6].field_0x20,true);
    if (pFVar5 != (FDS_ReturnHomeTableRow *)0x0) {
      pFVar7 = &pFVar5->ID_ReturnName;
      goto LAB_14bdf4a6e;
    }
  }
  iVar10 = FFieldNotificationClassDescriptor::ResurrectionDescText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ResurrectionDescText.FieldName;
  FDS_Text::operator=(&this->ResurrectionDescText,&local_c8);
  local_d8 = FVar1;
  local_d0 = iVar10;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  FVar8.Data = local_c8.UniqueString.Data.AllocatorInstance.Data;
  FVar9.Data = local_c8.FormatArgs.AllocatorInstance.Data;
  iVar10 = local_c8.FormatArgs.ArrayNum;
LAB_14bdf4b7b:
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)FVar9.Data,iVar10);
  if ((FDS_TextFormatArg *)FVar9.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// UpdateResurrectionState @ 14bdf4bd0

void __thiscall UDS_VM_Death::UpdateResurrectionState(UDS_VM_Death *this)

{
  FName FVar1;
  FDS_Text *pFVar2;
  int iVar3;
  float fVar4;
  int local_res8 [2];
  FName local_c8;
  int local_c0;
  FDS_Text local_b8;
  FDS_Text local_68;
  
  fVar4 = this->ResurrectEnableTime - this->ElapsedTime;
  iVar3 = -((int)ROUND(__real_bf000000 - (fVar4 + fVar4)) >> 1);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  local_res8[0] = iVar3;
  FDS_Text::FromStringTableFormat<int_&>(&local_b8,StringUi,0x7d02,local_res8);
  if (iVar3 < 1) {
    pFVar2 = FDS_Text::FromStringTableFormat<int_&>(&local_68,StringUi,0x7d03,local_res8);
    FDS_Text::operator=(&local_b8,pFVar2);
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
  iVar3 = FFieldNotificationClassDescriptor::ResurrectionChooseText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ResurrectionChooseText.FieldName;
  FDS_Text::operator=(&this->ResurrectionChooseText,&local_b8);
  local_c8 = FVar1;
  local_c0 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
             local_b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

