// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 59

// SetAnimationFinishEvent_WrapperImpl @ 14b666d20

void __cdecl
UDS_VM_HUD_ActionProgress::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FWeakObjectPtr aFStackX_8 [4];
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  undefined1 uStack_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  FDS_ChangedCharStateInfo FStack_38;
  
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  bVar1 = ::FName::Equals(*(FName *)param_2,"Flicker");
  if (bVar1) {
    *(undefined4 *)((longlong)param_1 + 0x130) = 0x3f800000;
    iStack_70 = FFieldNotificationClassDescriptor::MainRenderOpacity.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::MainRenderOpacity.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_78);
    UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
    UDS_CharStateData::GetData((ulong64)aFStackX_8);
    FStack_68 = FGameplayTag::EmptyTag.TagName;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    FStack_38._8_8_ = (ulonglong)uStack_5f << 8;
    FStack_38.AddedCharState = None;
    FStack_38.RemovedCharState = None;
    FStack_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
    FStack_38.AddedCharDetailState = None;
    FStack_38.RemovedCharDetailState = None;
    OnChangedCharState(param_1,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)aFStackX_8[0],
                       &FStack_38);
  }
  return;
}

// SetMainRenderOpacity_WrapperImpl @ 14b666d30

void __cdecl
UDS_VM_HUD_ActionProgress::SetMainRenderOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x130) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::MainRenderOpacity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MainRenderOpacity.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetProgressTitle_WrapperImpl @ 14b666d40

void __cdecl UDS_VM_HUD_ActionProgress::SetProgressTitle_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ProgressTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ProgressTitle.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x138),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetProgressColor_WrapperImpl @ 14b666d50

void __cdecl UDS_VM_HUD_ActionProgress::SetProgressColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x188)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x18c))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 400))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x194))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ProgressColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ProgressColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x188) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x18c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 400) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x194) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDefaultProgressColor_WrapperImpl @ 14b666d60

void __cdecl
UDS_VM_HUD_ActionProgress::SetDefaultProgressColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x198)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x19c))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x1a0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x1a4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::DefaultProgressColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::DefaultProgressColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x198) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x19c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x1a0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbUseProbabilityPercent_WrapperImpl @ 14b666d70

void __cdecl
UDS_VM_HUD_ActionProgress::SetbUseProbabilityPercent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.FieldName;
  if (*(char *)((longlong)param_1 + 0x1a8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1a8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetProbabilityPercent_WrapperImpl @ 14b666d80

void __cdecl
UDS_VM_HUD_ActionProgress::SetProbabilityPercent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ProbabilityPercent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ProbabilityPercent.FieldName;
  if (*(int *)((longlong)param_1 + 0x1ac) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x1ac) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetProbabilityPercentStyle_WrapperImpl @ 14b666d90

void __cdecl
UDS_VM_HUD_ActionProgress::SetProbabilityPercentStyle_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ProbabilityPercentStyle.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ProbabilityPercentStyle.FieldName;
  if (*(int *)((longlong)param_1 + 0x1b0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x1b0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetRemainTime_WrapperImpl @ 14b666da0

void __cdecl UDS_VM_HUD_ActionProgress::SetRemainTime_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RemainTime.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x1b8),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x1b8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x1b8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x1c0) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetGlowEffectVisibility_WrapperImpl @ 14b666db0

void __cdecl
UDS_VM_HUD_ActionProgress::SetGlowEffectVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::GlowEffectVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::GlowEffectVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x1c8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1c8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b666dc0

UClass * __cdecl UDS_VM_HUD_ActionProgress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ActionProgress",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ActionProgress,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_ActionProgress>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ActionProgress>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton;
}

// UDS_VM_HUD_ActionProgress @ 14b66d040

UDS_VM_HUD_ActionProgress * __thiscall
UDS_VM_HUD_ActionProgress::UDS_VM_HUD_ActionProgress
          (UDS_VM_HUD_ActionProgress *this,FVTableHelper *param_1)

{
  ITextData *pIVar1;
  FLinearColor FVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressTitle).StringTableType = None;
  (this->ProgressTitle).StringTableID = 0;
  (this->ProgressTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressTitle).StringEnumTableNameID.Number = 0;
  (this->ProgressTitle).DateTime.Ticks = 0;
  (this->ProgressTitle).TimeSpan.Ticks = 0;
  (this->ProgressTitle).TimeExpressionType = None;
  (this->ProgressTitle).IsExpression = false;
  (this->ProgressTitle).UniqueString.Data.ArrayNum = 0;
  (this->ProgressTitle).UniqueString.Data.ArrayMax = 0;
  (this->ProgressTitle).FormatArgs.ArrayNum = 0;
  (this->ProgressTitle).FormatArgs.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ActionProgress__6B_;
  this->MainRenderOpacity = 0.0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  (this->ProgressTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar2 = FLinearColor::White;
  this->bUseProbabilityPercent = false;
  this->ProbabilityPercent = 0;
  this->ProbabilityPercentStyle = 0;
  (this->ProgressColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->DefaultProgressColor).field0_0x0._s_0.R = 0.987847;
  (this->DefaultProgressColor).field0_0x0._s_0.G = 0.706487;
  (this->DefaultProgressColor).field0_0x0._s_0.B = 0.14068;
  (this->DefaultProgressColor).field0_0x0._s_0.A = 1.0;
  pFVar3 = FText::GetEmpty();
  (this->RemainTime).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (this->RemainTime).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->RemainTime).Flags = pFVar3->Flags;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->NewActionProgressType = None;
  this->CurActionProgressType = None;
  this->ActionCastingType = None;
  this->BindedPlayerEntityID = 0;
  this->BindedCharEntityID = 0;
  this->bIsEndProcess = false;
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->bIsFlickering = false;
  this->GlowEffectVisibility = Collapsed;
  return this;
}

// UDS_VM_HUD_ActionProgress @ 14b66d230

UDS_VM_HUD_ActionProgress * __thiscall
UDS_VM_HUD_ActionProgress::UDS_VM_HUD_ActionProgress
          (UDS_VM_HUD_ActionProgress *this,FObjectInitializer *param_1)

{
  ITextData *pIVar1;
  FLinearColor FVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->ProgressTitle).StringTableType = None;
  (this->ProgressTitle).StringTableID = 0;
  (this->ProgressTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressTitle).StringEnumTableNameID.Number = 0;
  (this->ProgressTitle).DateTime.Ticks = 0;
  (this->ProgressTitle).TimeSpan.Ticks = 0;
  (this->ProgressTitle).TimeExpressionType = None;
  (this->ProgressTitle).IsExpression = false;
  (this->ProgressTitle).UniqueString.Data.ArrayNum = 0;
  (this->ProgressTitle).UniqueString.Data.ArrayMax = 0;
  (this->ProgressTitle).FormatArgs.ArrayNum = 0;
  (this->ProgressTitle).FormatArgs.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ActionProgress__6B_;
  this->MainRenderOpacity = 0.0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  (this->ProgressTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar2 = FLinearColor::White;
  this->bUseProbabilityPercent = false;
  this->ProbabilityPercent = 0;
  this->ProbabilityPercentStyle = 0;
  (this->ProgressColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->DefaultProgressColor).field0_0x0._s_0.R = 0.987847;
  (this->DefaultProgressColor).field0_0x0._s_0.G = 0.706487;
  (this->DefaultProgressColor).field0_0x0._s_0.B = 0.14068;
  (this->DefaultProgressColor).field0_0x0._s_0.A = 1.0;
  pFVar3 = FText::GetEmpty();
  (this->RemainTime).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (this->RemainTime).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->RemainTime).Flags = pFVar3->Flags;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  this->NewActionProgressType = None;
  this->CurActionProgressType = None;
  this->ActionCastingType = None;
  this->BindedPlayerEntityID = 0;
  this->BindedCharEntityID = 0;
  this->bIsEndProcess = false;
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->bIsFlickering = false;
  this->GlowEffectVisibility = Collapsed;
  return this;
}

// ~UDS_VM_HUD_ActionProgress @ 14b66eeb0

void __thiscall
UDS_VM_HUD_ActionProgress::~UDS_VM_HUD_ActionProgress(UDS_VM_HUD_ActionProgress *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ActionProgress__6B_;
  pIVar1 = (this->RemainTime).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ProgressTitle).FormatArgs.AllocatorInstance.Data,
             (this->ProgressTitle).FormatArgs.ArrayNum);
  pFVar2 = (this->ProgressTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProgressTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar3 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar3 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar3 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar3 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6717a0

IClassDescriptor * __thiscall
UDS_VM_HUD_ActionProgress::GetFieldNotificationDescriptor(UDS_VM_HUD_ActionProgress *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_ActionProgress::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672160

UClass * __cdecl UDS_VM_HUD_ActionProgress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ActionProgress",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ActionProgress,0x208,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_HUD_ActionProgress>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ActionProgress>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ActionProgress.InnerSingleton;
}

// GetTickableTickType @ 14b672a60

ETickableTickType __thiscall
UDS_VM_HUD_ActionProgress::GetTickableTickType(UDS_VM_HUD_ActionProgress *this)

{
  return Conditional;
}

// IsUpdate @ 14b672a90

bool __thiscall UDS_VM_HUD_ActionProgress::IsUpdate(UDS_VM_HUD_ActionProgress *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_HUD_ActionProgress @ 14b672b00

void __cdecl UDS_VM_HUD_ActionProgress::StaticRegisterNativesUDS_VM_HUD_ActionProgress(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_ActionProgress_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b673f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_HUD_ActionProgress::__VTableCtorCaller(FVTableHelper *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLinearColor FVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_ViewModelBase *this;
  FText *pFVar5;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].ViewModelContext.Object = 0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].VMName.Number = 0;
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayNum = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_HUD_ActionProgress__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    FVar2 = FLinearColor::White;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(FLinearColor_u_0 *)&this[2]._padding_ = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
    *(undefined4 *)&this[2]._padding_ = 0x3f7ce38a;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3f34dc55;
    *(undefined4 *)&this[2]._padding_ = 0x3e100e6b;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3f800000;
    pFVar5 = FText::GetEmpty();
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar1 = (TReferenceControllerBase<1> *)(pFVar5->TextData).Reference;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      (**(code **)(pTVar1->_padding_ + 8))(pTVar1,&local_res10);
    }
    *(uint *)&this[2].Visibility = pFVar5->Flags;
    *(undefined1 *)&this[2].VMName.Number = 1;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    *(undefined8 *)((longlong)&this[3]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetCurrentProgressPercent @ 14b674180

void __cdecl
UDS_VM_HUD_ActionProgress::execGetCurrentProgressPercent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetCurrentProgressPercent((UDS_VM_HUD_ActionProgress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetCurrentProgressValue @ 14b6741c0

void __cdecl
UDS_VM_HUD_ActionProgress::execGetCurrentProgressValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetCurrentProgressValue((UDS_VM_HUD_ActionProgress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// BindModel @ 14bf400b0

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

void __thiscall UDS_VM_HUD_ActionProgress::BindModel(UDS_VM_HUD_ActionProgress *this)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_UIEvent *pUVar6;
  UDS_SwimEvent *pUVar7;
  undefined1 auStackY_328 [32];
  undefined1 local_2e8 [40];
  undefined1 local_2c0 [24];
  code *local_2a8;
  longlong lStack_2a0;
  code *local_298;
  longlong lStack_290;
  code *local_288;
  longlong lStack_280;
  code *local_278;
  longlong lStack_270;
  undefined1 local_268 [288];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_328;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  uVar2 = UDS_PlayerData::MainPlayerEntityID;
  this->BindedPlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
  UDS_PlayerData::GetData((ulong64)(local_2e8 + 0x10),uVar2,false);
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)(local_2e8 + 0x10),(void *)0x0
                    );
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._256_8_ = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_268,
                 "UDS_VM_HUD_ActionProgress::BindModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,(wchar_t *)local_268._264_8_,0x32,L"playerData is nullptr. (%llu)"
                );
      if ((void *)local_268._256_8_ != (void *)0x0) {
        FMemory::Free((void *)local_268._256_8_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281263667>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x33,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->BindedPlayerEntityID = 0;
  }
  else {
    local_2e8._0_8_ = OnChangeChar;
    local_2e8._8_4_ = 0;
    lStack_2a0 = (ulonglong)(uint)local_2e8._12_4_ << 0x20;
    local_2a8 = OnChangeChar;
    TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_HUD_ActionProgress>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
               (UDS_VM_HUD_ActionProgress *)(local_2e8 + 0x20),(pmf_473b70f2 *)this);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_2e8 + 0x10));
    this->BindedCharEntityID = *(ulong64 *)&pUVar5[8].field_0x10;
    UDS_CharStateData::GetData((ulong64)(local_2e8 + 0x18));
    bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)(local_2e8 + 0x18),
                       (void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_HUD_ActionProgress::BindModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0x3f,L"charStateData is nullptr. (%llu)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4793593869281263680>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                         ,0x40,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this->BindedCharEntityID = 0;
    }
    else {
      local_2e8._8_4_ = 0;
      local_2e8._0_8_ = OnChangedCharState;
      lStack_290 = (ulonglong)(uint)local_2e8._12_4_ << 0x20;
      local_298 = OnChangedCharState;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_2e8 + 0x18));
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_HUD_ActionProgress>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar5[7].field_0x20,(UDS_VM_HUD_ActionProgress *)local_2c0,
                 (pmf_f9b755af *)this);
      pUVar6 = UDS_UIEvent::GetEvent();
      if (pUVar6 != (UDS_UIEvent *)0x0) {
        local_2e8._8_4_ = 0;
        local_2e8._0_8_ = OnActionProgressFlicker;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->OnActionProgressFlicker,this);
        lStack_280 = CONCAT44(local_2e8._12_4_,local_2e8._8_4_);
        local_288 = (code *)local_2e8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_ActionProgressType),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_HUD_ActionProgress>
                  (&pUVar6->OnActionProgressFlicker,(UDS_VM_HUD_ActionProgress *)(local_2c0 + 8),
                   (pmf_2c5cd102 *)this);
      }
      pUVar7 = UDS_SwimEvent::GetEvent();
      if (pUVar7 != (UDS_SwimEvent *)0x0) {
        local_2e8._8_4_ = 0;
        local_2e8._0_8_ = OnChangedSwimStep;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7->OnChangedSwimStep,
                   this);
        lStack_270 = CONCAT44(local_2e8._12_4_,local_2e8._8_4_);
        local_278 = (code *)local_2e8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_HUD_ActionProgress>
                  ((TMulticastDelegateRegistration<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar7->OnChangedSwimStep,(UDS_VM_HUD_ActionProgress *)local_2e8,
                   (pmf_76848459 *)this);
      }
    }
  }
  return;
}

// BindModelByActionProgressType @ 14bf429f0

void __thiscall
UDS_VM_HUD_ActionProgress::BindModelByActionProgressType(UDS_VM_HUD_ActionProgress *this)

{
  EDS_ActionProgressType EVar1;
  
  EVar1 = this->CurActionProgressType;
  if ((EVar1 != Fly) && (EVar1 != Dive)) {
    if (EVar1 == CommonActionCasting) {
      BindModel_CommonActionCasting(this);
      return;
    }
    if (EVar1 != MountSprint) {
      return;
    }
  }
  BindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// BindModel_CommonActionCasting @ 14bf42a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ActionProgress::BindModel_CommonActionCasting(UDS_VM_HUD_ActionProgress *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_CommonActionCastingTableRow *pFVar5;
  undefined1 auStackY_3c8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_VM_HUD_ActionProgress::BindModel_CommonActionCasting",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_388.Ptr,0x203,L"VM_Progress is nullptr.");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264132>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x204,"false");
    if (bVar3) {
code_r0x00014bf42d3e:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((this->BindedPlayerEntityID == 0) || (this->BindedCharEntityID == 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_ActionProgress::BindModel_CommonActionCasting",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x20a,L"BindedEntityID is invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264139>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x20b,"false");
    if (bVar3) goto code_r0x00014bf42d3e;
  }
  else {
    pFVar5 = FDS_CommonActionCastingTableRow::Get((ulonglong)this->ActionCastingType,true);
    if (pFVar5 == (FDS_CommonActionCastingTableRow *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_HUD_ActionProgress::BindModel_CommonActionCasting",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_268.Ptr,0x213,L"commonActionCastingTable is nullptr. (%d)"
                  );
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4793593869281264148>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                         ,0x214,"false");
      if (bVar3) goto code_r0x00014bf42d3e;
    }
    else {
      fVar1 = pFVar5->CastingTime;
      UDS_VM_Progress::SetIncreaseType((this->VM_Progress).field0_0x0.DebugPtr,DeltaTime);
      UDS_VM_Progress::SetMaxValue((this->VM_Progress).field0_0x0.DebugPtr,fVar1);
      UDS_VM_Progress::SetTargetValue((this->VM_Progress).field0_0x0.DebugPtr,fVar1);
      UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    }
  }
  return;
}

// BindModel_Dive @ 14bf42d60

void __thiscall UDS_VM_HUD_ActionProgress::BindModel_Dive(UDS_VM_HUD_ActionProgress *this)

{
  BindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// BindModel_Fly @ 14bf42d90

void __thiscall UDS_VM_HUD_ActionProgress::BindModel_Fly(UDS_VM_HUD_ActionProgress *this)

{
  BindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// BindModel_MountSprint @ 14bf42dc0

void __thiscall UDS_VM_HUD_ActionProgress::BindModel_MountSprint(UDS_VM_HUD_ActionProgress *this)

{
  BindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  return;
}

// BindModel_Status @ 14bf42df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ActionProgress::BindModel_Status(UDS_VM_HUD_ActionProgress *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  undefined1 auStackY_528 [32];
  undefined1 local_4e8 [32];
  code *local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [16];
  code *local_4a8;
  longlong lStack_4a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_528;
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_VM_HUD_ActionProgress::BindModel_Status",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_498.Ptr,0x23d,L"VM_Progress is nullptr.");
      if ((void *)local_498._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_498._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264190>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x23e,"false");
    if (bVar2) {
code_r0x00014bf4323c:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((this->BindedPlayerEntityID == 0) || (this->BindedCharEntityID == 0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ActionProgress::BindModel_Status",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x244,L"BindedEntityID is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264197>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x245,"false");
    if (bVar2) goto code_r0x00014bf4323c;
  }
  else {
    UDS_CharStatusData::GetData((ulong64)(local_4e8 + 0x10));
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)(local_4e8 + 0x10),
                       (void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"UDS_VM_HUD_ActionProgress::BindModel_Status",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_378.Ptr,0x24d,L"charStatusData is nullptr. (%llu)");
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4793593869281264206>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                         ,0x24e,"false");
      if (bVar2) goto code_r0x00014bf4323c;
    }
    else {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_4e8 + 0x10));
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,param_1);
      if (pFVar4 == (FDS_StatusInfo *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_258._padding_ = (longlong)pFVar4;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"UDS_VM_HUD_ActionProgress::BindModel_Status",0x2b,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x255,L"statusInfo is nullptr.");
          if ((FDS_StatusInfo *)local_258._padding_ != (FDS_StatusInfo *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4793593869281264214>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                           ,0x256,"false");
        if (bVar2) goto code_r0x00014bf4323c;
      }
      else {
        UDS_VM_Progress::SetIncreaseType((this->VM_Progress).field0_0x0.DebugPtr,Linear_Constant);
        UDS_VM_Progress::SetPlayTime((this->VM_Progress).field0_0x0.DebugPtr,__real_3f800000);
        UDS_VM_Progress::SetMaxValue((this->VM_Progress).field0_0x0.DebugPtr,pFVar4->MaxValue);
        UDS_VM_Progress::SetTargetValue
                  ((this->VM_Progress).field0_0x0.DebugPtr,(float)pFVar4->CurrentValue);
        UDS_VM_Progress::SetCurrentValue
                  ((this->VM_Progress).field0_0x0.DebugPtr,(float)pFVar4->CurrentValue);
        local_4e8._24_8_ = (this->VM_Progress).field0_0x0.DebugPtr;
        local_4e8._0_8_ = UDS_VM_Progress::SetMaxValue;
        local_4e8._12_4_ = uStack_4c0._4_4_;
        local_4e8._8_4_ = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UDS_VM_Progress *)local_4e8._24_8_ != (UDS_VM_Progress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_4e8._24_8_);
        }
        lStack_4a0 = CONCAT44(local_4e8._12_4_,local_4e8._8_4_);
        local_4a8 = (code *)local_4e8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_Progress>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar4->ChangeMaxValueDelegate,(TObjectPtr<UDS_VM_Progress>)local_4b8,
                   (pmf_6812ce8f *)(local_4e8 + 0x18));
        local_4e8._8_4_ = 0;
        local_4e8._0_8_ = OnChangedStamina;
        uStack_4c0 = (ulonglong)(uint)local_4e8._12_4_ << 0x20;
        local_4c8 = OnChangedStamina;
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_HUD_ActionProgress>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&pFVar4->ChangeCurrentValueDelegate,(UDS_VM_HUD_ActionProgress *)local_4e8,
                   (pmf_301e124d *)this);
      }
    }
  }
  return;
}

// GetCurrentProgressPercent @ 14bf57220

float __thiscall
UDS_VM_HUD_ActionProgress::GetCurrentProgressPercent(UDS_VM_HUD_ActionProgress *this)

{
  UDS_VM_Progress *this_00;
  float fVar1;
  
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    return 0.0;
  }
  fVar1 = UDS_VM_Progress::GetCurrentPercent(this_00);
  return fVar1;
}

// GetCurrentProgressValue @ 14bf57240

float __thiscall UDS_VM_HUD_ActionProgress::GetCurrentProgressValue(UDS_VM_HUD_ActionProgress *this)

{
  UDS_VM_Progress *this_00;
  float fVar1;
  
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    return 0.0;
  }
  fVar1 = UDS_VM_Progress::GetCurrentValue(this_00);
  return fVar1;
}

// OnActionProgressFlicker @ 14bf5e6c0

void __thiscall
UDS_VM_HUD_ActionProgress::OnActionProgressFlicker
          (UDS_VM_HUD_ActionProgress *this,EDS_ActionProgressType param_1)

{
  FName local_res8;
  FName local_18;
  int local_10;
  
  this->bIsFlickering = true;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  this->NewActionProgressType = param_1;
  ::FName::FName(&local_res8,"Flicker");
  (this->AnimationEvent).AnimationName = local_res8;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnAnimationFinished @ 14bf5ed20

void __thiscall
UDS_VM_HUD_ActionProgress::OnAnimationFinished
          (UDS_VM_HUD_ActionProgress *this,FDS_WidgetAnimationEventField *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8 [4];
  FName local_78;
  int local_70;
  FName local_68;
  undefined1 uStack_60;
  uint7 uStack_5f;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FDS_ChangedCharStateInfo local_38;
  
  this->bIsFlickering = false;
  bVar1 = ::FName::Equals(param_1->AnimationName,"Flicker");
  if (bVar1) {
    this->MainRenderOpacity = 1.0;
    local_70 = FFieldNotificationClassDescriptor::MainRenderOpacity.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::MainRenderOpacity.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    UDS_CharStateData::GetData((ulong64)local_res8);
    local_68 = FGameplayTag::EmptyTag.TagName;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_60 = 0;
    local_38._8_8_ = (ulonglong)uStack_5f << 8;
    local_38.AddedCharState = None;
    local_38.RemovedCharState = None;
    local_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
    local_38.AddedCharDetailState = None;
    local_38.RemovedCharDetailState = None;
    OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_res8[0],
                       &local_38);
  }
  return;
}

// OnChangeChar @ 14bf5f000

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
UDS_VM_HUD_ActionProgress::OnChangeChar
          (UDS_VM_HUD_ActionProgress *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  (**(code **)(this->_padding_ + 0x2f8))(this);
  (**(code **)(this->_padding_ + 0x2f0))(this);
  if ((param_2 != (FDS_EntityBase *)0x0) && (this->BindedCharEntityID != param_2->EntityID)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ActionProgress::OnChangeChar",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xd8,L"BindedCharEntityID != InCurrentCharEntityID")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281263833>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0xd9,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  RefreshByCharStateData(this);
  return;
}

// OnChangedCharState @ 14bf5ff10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ActionProgress::OnChangedCharState
          (UDS_VM_HUD_ActionProgress *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  UDS_LogManager *pUVar5;
  UDS_CharStateData *pUVar6;
  FDS_CommonActionCastingTableRow *pFVar7;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_208 [32];
  FName local_1c8;
  int local_1c0;
  FDS_Text local_1b8;
  FDS_StringUiID local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_res10 = param_1.WeakPtr;
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_HUD_ActionProgress::OnChangedCharState",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x10d,L"InCharStateData is nullptr.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  this->NewActionProgressType = None;
  this->ActionCastingType = None;
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_1c8.ComparisonIndex.Value = 0x800;
  local_1c8.Number = 0;
  bVar3 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_1c8);
  if (bVar3) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_1c8.ComparisonIndex.Value = 0x1f;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
    if (!bVar3) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_1c8.ComparisonIndex.Value = 0x20;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
      if (!bVar3) {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_1c8.ComparisonIndex.Value = 0x21;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
        if (!bVar3) {
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_1c8.ComparisonIndex.Value = 0x1e;
          bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
          if (!bVar3) goto LAB_14bf60306;
          this->NewActionProgressType = Fly;
          local_168.ID = 0x111d8;
          goto LAB_14bf60184;
        }
      }
    }
    this->NewActionProgressType = Fly;
    local_168.ID = 0x111d9;
  }
  else {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_1c8.ComparisonIndex.Value = 1;
    local_1c8.Number = 0;
    bVar3 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_1c8);
    if (!bVar3) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_1c8.ComparisonIndex.Value = 0x20000000;
      local_1c8.Number = 0;
      bVar3 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_1c8);
      if (bVar3) {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_1c8.ComparisonIndex.Value = 0x55;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
        if (!bVar3) goto LAB_14bf60306;
        this->ActionCastingType = Camp;
      }
      else {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_1c8.ComparisonIndex.Value = 0x10000;
        local_1c8.Number = 0;
        bVar3 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_1c8);
        if (!bVar3) goto LAB_14bf60306;
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_1c8.ComparisonIndex.Value = 0x56;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
        if (bVar3) {
          this->ActionCastingType = ReturnHome;
        }
        else {
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_1c8.ComparisonIndex.Value = 0x58;
          bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
          if (!bVar3) goto LAB_14bf60306;
          this->ActionCastingType = WarpDevice;
        }
      }
      this->NewActionProgressType = CommonActionCasting;
      goto LAB_14bf60306;
    }
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_1c8.ComparisonIndex.Value = 9;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
    if (bVar3) {
      local_168.ID = 0x111db;
    }
    else {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_1c8.ComparisonIndex.Value = 6;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
      if (!bVar3) goto LAB_14bf60306;
      local_168.ID = 0x111da;
    }
    this->NewActionProgressType = Dive;
  }
LAB_14bf60184:
  local_168._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  local_1b8.StringTableType = None;
  local_1b8.StringTableID = 0;
  local_1b8.DateTime.Ticks = 0;
  local_1b8.TimeSpan.Ticks = 0;
  local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1b8.StringEnumTableNameID.Number = 0;
  local_1b8.TimeExpressionType = None;
  local_1b8.IsExpression = false;
  local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.UniqueString.Data.ArrayNum = 0;
  local_1b8.UniqueString.Data.ArrayMax = 0;
  local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.FormatArgs.ArrayNum = 0;
  local_1b8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_1b8,&local_168);
  iVar2 = FFieldNotificationClassDescriptor::ProgressTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ProgressTitle.FieldName;
  FDS_Text::operator=(&this->ProgressTitle,&local_1b8);
  local_1c8 = FVar1;
  local_1c0 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
             local_1b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
  }
LAB_14bf60306:
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
  local_1c8.ComparisonIndex.Value = 0x10000000;
  local_1c8.Number = 0;
  bVar3 = UDS_CharStateData::HasCharState(pUVar6,(EDS_CharState *)&local_1c8);
  if (bVar3) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_1c8.ComparisonIndex.Value = 0x6d;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
    if (!bVar3) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_1c8.ComparisonIndex.Value = 0x65;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar6,(EDS_CharDetailState *)&local_1c8);
      if (bVar3) {
        this->NewActionProgressType = MountSprint;
        local_168._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        local_168.ID = 0x4da96;
        local_1b8.DateTime.Ticks = 0;
        local_1b8.TimeSpan.Ticks = 0;
        local_1b8.StringTableType = None;
        local_1b8.StringTableID = 0;
        local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1b8.StringEnumTableNameID.Number = 0;
        local_1b8.TimeExpressionType = None;
        local_1b8.IsExpression = false;
        local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.UniqueString.Data.ArrayNum = 0;
        local_1b8.UniqueString.Data.ArrayMax = 0;
        local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.FormatArgs.ArrayNum = 0;
        local_1b8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_1b8,&local_168);
        iVar2 = FFieldNotificationClassDescriptor::ProgressTitle.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::ProgressTitle.FieldName;
        FDS_Text::operator=(&this->ProgressTitle,&local_1b8);
        local_1c8 = FVar1;
        local_1c0 = iVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
                   local_1b8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (this->ActionCastingType != None) {
    pFVar7 = FDS_CommonActionCastingTableRow::Get((ulonglong)this->ActionCastingType,true);
    if (pFVar7 == (FDS_CommonActionCastingTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_HUD_ActionProgress::OnChangedCharState",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_158.Ptr,0x162,L"commonActionCastingTable is nullptr. (%d)");
      if ((void *)local_158._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_158._padding_);
      return;
    }
    local_1b8.StringTableType = None;
    local_1b8.StringTableID = 0;
    local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1b8.StringEnumTableNameID.Number = 0;
    local_1b8.DateTime.Ticks = 0;
    local_1b8.TimeSpan.Ticks = 0;
    local_1b8.TimeExpressionType = None;
    local_1b8.IsExpression = false;
    local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.UniqueString.Data.ArrayNum = 0;
    local_1b8.UniqueString.Data.ArrayMax = 0;
    local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.FormatArgs.ArrayNum = 0;
    local_1b8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_1b8,&pFVar7->CastingText);
    iVar2 = FFieldNotificationClassDescriptor::ProgressTitle.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ProgressTitle.FieldName;
    FDS_Text::operator=(&this->ProgressTitle,&local_1b8);
    local_1c8 = FVar1;
    local_1c0 = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
               local_1b8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  EVar4 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
  if ((EVar4 == Collapsed) && (this->NewActionProgressType != this->CurActionProgressType)) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Hidden);
  }
  return;
}

// OnChangedStamina @ 14bf60bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ActionProgress::OnChangedStamina(UDS_VM_HUD_ActionProgress *this,float param_1)

{
  UDS_VM_Progress *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_HUD_ActionProgress::OnChangedStamina",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x174,L"VM_Progress is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281263989>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x175,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    UDS_VM_Progress::SetIncreaseType(this_00,Linear_Constant);
    UDS_VM_Progress::SetPlayTime((this->VM_Progress).field0_0x0.DebugPtr,__real_3fa66666);
    UDS_VM_Progress::SetTargetValue((this->VM_Progress).field0_0x0.DebugPtr,param_1);
    UDS_VM_Progress::OnChangedTargetValue((this->VM_Progress).field0_0x0.DebugPtr);
  }
  return;
}

// OnChangedSwimStep @ 14bf60d20

void __thiscall
UDS_VM_HUD_ActionProgress::OnChangedSwimStep
          (UDS_VM_HUD_ActionProgress *this,FDS_SwimStepInfo *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_res10 [3];
  FName local_18;
  int local_10;
  
  if (0 < param_1->CostStaminaPerSecond) {
    if (param_1->IsActive == false) {
      if (param_1->UseMotionBlur == true) {
        ::FName::FName(local_res10,"Loop_Ani");
        (this->AnimationEvent).AnimationName = local_res10[0];
        (this->AnimationEvent).NumberOfLoops = 1;
        (this->AnimationEvent).AnimationEventType = StopAnimation;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        local_10 = FFieldNotificationClassDescriptor::GlowEffectVisibility.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::GlowEffectVisibility.FieldName;
        if (this->GlowEffectVisibility != Collapsed) {
          this->GlowEffectVisibility = Collapsed;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
          return;
        }
      }
    }
    else {
      if (param_1->UseMotionBlur == true) {
        ::FName::FName(local_res10,"Loop_Ani");
        (this->AnimationEvent).AnimationName = local_res10[0];
        (this->AnimationEvent).AnimationEventType = PlayForward;
        (this->AnimationEvent).NumberOfLoops = 0;
        local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        iVar2 = FFieldNotificationClassDescriptor::GlowEffectVisibility.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::GlowEffectVisibility.FieldName;
        if (this->GlowEffectVisibility != SelfHitTestInvisible) {
          this->GlowEffectVisibility = SelfHitTestInvisible;
          local_10 = iVar2;
          local_18 = FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
        }
      }
      RefreshByCharStateData(this);
    }
  }
  return;
}

// OnSetViewModel @ 14bf68050

void __thiscall
UDS_VM_HUD_ActionProgress::OnSetViewModel
          (UDS_VM_HUD_ActionProgress *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Progress *pUVar2;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar2 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VM_Progress *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->VM_Progress).field0_0x0.DebugPtr = pUVar2;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf71d20

void __thiscall UDS_VM_HUD_ActionProgress::OnUpdate(UDS_VM_HUD_ActionProgress *this,float param_1)

{
  UDS_VM_Progress *this_00;
  float fVar1;
  float fVar2;
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::GetCurrentProgressValue.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::GetCurrentProgressValue.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  local_20 = FFieldNotificationClassDescriptor::GetCurrentProgressPercent.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::GetCurrentProgressPercent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  UpdateActionProgressType(this);
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    return;
  }
  if (this->bIsEndProcess != true) {
    return;
  }
  if (this->CurActionProgressType == MountSprint) {
    UnBindModel_Status(this,Stamina);
  }
  else if (this->CurActionProgressType != CommonActionCasting) {
    fVar2 = UDS_VM_Progress::GetCurrentValue(this_00);
    fVar1 = __real_3dcccccd;
    if (__real_322bcc77 <
        (float)((uint)(fVar2 - this->PreProgressValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->PreProgressValue = fVar2;
      this->EndHoldTimeTick = 0.0;
      return;
    }
    fVar2 = param_1 + this->EndHoldTimeTick;
    this->EndHoldTimeTick = fVar2;
    if (fVar2 <= fVar1) {
      return;
    }
    UnbindModelByActionProgressType(this);
    goto LAB_14bf71e34;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
LAB_14bf71e34:
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->bIsEndProcess = false;
  this->CurActionProgressType = None;
  return;
}

// RefreshByCharStateData @ 14bf75290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_ActionProgress::RefreshByCharStateData(UDS_VM_HUD_ActionProgress *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_198;
  FName local_190;
  undefined1 uStack_188;
  uint7 uStack_187;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_CharStateData::GetData((ulong64)&local_198);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_198,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ActionProgress::RefreshByCharStateData",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x2dd,L"charStateData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264350>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x2de,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->BindedCharEntityID = 0;
  }
  else {
    local_190 = FGameplayTag::EmptyTag.TagName;
    uStack_188 = 0;
    local_168._8_8_ = (ulonglong)uStack_187 << 8;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_168.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
    local_168.AddedCharDetailState = None;
    local_168.RemovedCharDetailState = None;
    local_168.AddedCharState = None;
    local_168.RemovedCharState = None;
    OnChangedCharState(this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_198,&local_168);
  }
  return;
}

// SetDefaultProgressColor @ 14bf7a6b0

void __thiscall
UDS_VM_HUD_ActionProgress::SetDefaultProgressColor
          (UDS_VM_HUD_ActionProgress *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->DefaultProgressColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->DefaultProgressColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->DefaultProgressColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->DefaultProgressColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::DefaultProgressColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DefaultProgressColor.FieldName;
    (this->DefaultProgressColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->DefaultProgressColor).field0_0x0._s_0.G = fVar1;
    (this->DefaultProgressColor).field0_0x0._s_0.B = fVar2;
    (this->DefaultProgressColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGlowEffectVisibility @ 14bf7b040

void __thiscall
UDS_VM_HUD_ActionProgress::SetGlowEffectVisibility
          (UDS_VM_HUD_ActionProgress *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GlowEffectVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GlowEffectVisibility.FieldName;
  if (this->GlowEffectVisibility != *param_1) {
    this->GlowEffectVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMainRenderOpacity @ 14bf7c420

void __thiscall
UDS_VM_HUD_ActionProgress::SetMainRenderOpacity(UDS_VM_HUD_ActionProgress *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->MainRenderOpacity = *param_1;
  local_10 = FFieldNotificationClassDescriptor::MainRenderOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainRenderOpacity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetProbabilityPercent @ 14bf7ca00

void __thiscall
UDS_VM_HUD_ActionProgress::SetProbabilityPercent(UDS_VM_HUD_ActionProgress *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ProbabilityPercent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProbabilityPercent.FieldName;
  if (this->ProbabilityPercent != *param_1) {
    this->ProbabilityPercent = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetProbabilityPercentStyle @ 14bf7ca50

void __thiscall
UDS_VM_HUD_ActionProgress::SetProbabilityPercentStyle(UDS_VM_HUD_ActionProgress *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ProbabilityPercentStyle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProbabilityPercentStyle.FieldName;
  if (this->ProbabilityPercentStyle != *param_1) {
    this->ProbabilityPercentStyle = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetProgressColor @ 14bf7caa0

void __thiscall
UDS_VM_HUD_ActionProgress::SetProgressColor(UDS_VM_HUD_ActionProgress *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ProgressColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ProgressColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ProgressColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ProgressColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ProgressColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ProgressColor.FieldName;
    (this->ProgressColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ProgressColor).field0_0x0._s_0.G = fVar1;
    (this->ProgressColor).field0_0x0._s_0.B = fVar2;
    (this->ProgressColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetProgressTitle @ 14bf7cb20

void __thiscall
UDS_VM_HUD_ActionProgress::SetProgressTitle(UDS_VM_HUD_ActionProgress *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ProgressTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ProgressTitle.FieldName;
  FDS_Text::operator=(&this->ProgressTitle,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRemainTime @ 14bf7d1f0

void __thiscall
UDS_VM_HUD_ActionProgress::SetRemainTime(UDS_VM_HUD_ActionProgress *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RemainTime.FieldName;
  bVar5 = FText::IdenticalTo(&this->RemainTime,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RemainTime).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RemainTime).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RemainTime).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetUseProbabilityPercent @ 14bf7eff0

void __thiscall
UDS_VM_HUD_ActionProgress::SetUseProbabilityPercent(UDS_VM_HUD_ActionProgress *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.FieldName;
  if (this->bUseProbabilityPercent != *param_1) {
    this->bUseProbabilityPercent = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnBindModel_Status @ 14bf84260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ActionProgress::UnBindModel_Status
          (UDS_VM_HUD_ActionProgress *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStatusData *this_00;
  FDS_StatusInfo *pFVar4;
  undefined1 auStackY_4e8 [32];
  FWeakObjectPtr local_4a8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_VM_HUD_ActionProgress::UnBindModel_Status",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_498.Ptr,0x268,L"VM_Progress is nullptr.");
      if ((void *)local_498._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_498._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264233>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x269,"false");
    if (bVar2) {
code_r0x00014bf845e2:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((this->BindedPlayerEntityID == 0) || (this->BindedCharEntityID == 0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ActionProgress::UnBindModel_Status",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x26f,L"BindedEntityID is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4793593869281264240>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                       ,0x270,"false");
    if (bVar2) goto code_r0x00014bf845e2;
  }
  else {
    UDS_CharStatusData::GetData((ulong64)local_4a8);
    bVar2 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)local_4a8,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"UDS_VM_HUD_ActionProgress::UnBindModel_Status",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_378.Ptr,0x278,L"charStatusData is nullptr. (%llu)");
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4793593869281264249>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                         ,0x279,"false");
      if (bVar2) goto code_r0x00014bf845e2;
    }
    else {
      this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_4a8);
      pFVar4 = UDS_CharStatusData::GetStatusInfo(this_00,param_1);
      if (pFVar4 == (FDS_StatusInfo *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_258._padding_ = (longlong)pFVar4;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"UDS_VM_HUD_ActionProgress::UnBindModel_Status",0x2d,Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x280,L"statusInfo is nullptr.");
          if ((FDS_StatusInfo *)local_258._padding_ != (FDS_StatusInfo *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4793593869281264257>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_HUD_ActionProgress.cpp"
                           ,0x281,"false");
        if (bVar2) goto code_r0x00014bf845e2;
      }
      else {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->ChangeMaxValueDelegate,(this->VM_Progress).field0_0x0.DebugPtr);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pFVar4->ChangeCurrentValueDelegate,this);
      }
    }
  }
  return;
}

// UnbindModel @ 14bf84730

void __thiscall UDS_VM_HUD_ActionProgress::UnbindModel(UDS_VM_HUD_ActionProgress *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_UIEvent *pUVar3;
  UDS_SwimEvent *pUVar4;
  FWeakObjectPtr local_res8;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this->NewActionProgressType = None;
  this->CurActionProgressType = None;
  this->ActionCastingType = None;
  this->bIsEndProcess = false;
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->bIsFlickering = false;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  this->BindedPlayerEntityID = 0;
  if (this->BindedCharEntityID != 0) {
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
  }
  this->BindedCharEntityID = 0;
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnActionProgressFlicker,this);
  }
  pUVar4 = UDS_SwimEvent::GetEvent();
  if (pUVar4 != (UDS_SwimEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnChangedSwimStep,this
              );
  }
  return;
}

// UnbindModelByActionProgressType @ 14bf859f0

void __thiscall
UDS_VM_HUD_ActionProgress::UnbindModelByActionProgressType(UDS_VM_HUD_ActionProgress *this)

{
  EDS_ActionProgressType EVar1;
  
  EVar1 = this->CurActionProgressType;
  if ((EVar1 != Fly) && (EVar1 != Dive)) {
    if (EVar1 == CommonActionCasting) goto LAB_14bf85a20;
    if (EVar1 != MountSprint) {
      return;
    }
  }
  UnBindModel_Status(this,Stamina);
LAB_14bf85a20:
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// UnbindModel_CommonActionCasting @ 14bf85a40

void __thiscall
UDS_VM_HUD_ActionProgress::UnbindModel_CommonActionCasting(UDS_VM_HUD_ActionProgress *this)

{
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// UnbindModel_Dive @ 14bf85a50

void __thiscall UDS_VM_HUD_ActionProgress::UnbindModel_Dive(UDS_VM_HUD_ActionProgress *this)

{
  UnBindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// UnbindModel_Fly @ 14bf85a80

void __thiscall UDS_VM_HUD_ActionProgress::UnbindModel_Fly(UDS_VM_HUD_ActionProgress *this)

{
  UnBindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// UnbindModel_MountSprint @ 14bf85ab0

void __thiscall UDS_VM_HUD_ActionProgress::UnbindModel_MountSprint(UDS_VM_HUD_ActionProgress *this)

{
  UnBindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  return;
}

// UpdateActionProgressType @ 14bf86100

void __thiscall UDS_VM_HUD_ActionProgress::UpdateActionProgressType(UDS_VM_HUD_ActionProgress *this)

{
  EDS_ActionProgressType EVar1;
  UDS_VM_Progress *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  ESlateVisibility EVar5;
  float fVar6;
  FName local_18;
  int local_10;
  
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    return;
  }
  if (this->bIsFlickering == true) {
    return;
  }
  if (this->NewActionProgressType == this->CurActionProgressType) {
    if (this->CurActionProgressType == None) {
      return;
    }
    EVar5 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this);
    if ((EVar5 != Collapsed) &&
       (EVar5 = UDS_ViewModelBase::GetVisibility((UDS_ViewModelBase *)this), EVar5 != Hidden)) {
      return;
    }
  }
  if ((this->NewActionProgressType == None) && (this->CurActionProgressType != None)) {
    if (this->bIsEndProcess != false) {
      return;
    }
    this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
    this->bIsEndProcess = true;
    fVar6 = UDS_VM_Progress::GetCurrentValue(this_00);
    this->PreProgressValue = fVar6;
    this->EndHoldTimeTick = 0.0;
    return;
  }
  this->bIsEndProcess = false;
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->MainRenderOpacity = 1.0;
  local_10 = FFieldNotificationClassDescriptor::MainRenderOpacity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MainRenderOpacity.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (this->CurActionProgressType != None) {
    UnbindModelByActionProgressType(this);
  }
  EVar1 = this->NewActionProgressType;
  this->CurActionProgressType = EVar1;
  if (EVar1 == None) goto LAB_14bf8622c;
  if ((EVar1 != Fly) && (EVar1 != Dive)) {
    if (EVar1 == CommonActionCasting) {
      BindModel_CommonActionCasting(this);
      goto LAB_14bf8622c;
    }
    if (EVar1 != MountSprint) goto LAB_14bf8622c;
  }
  BindModel_Status(this,Stamina);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
LAB_14bf8622c:
  local_10 = FFieldNotificationClassDescriptor::ProgressColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProgressColor.FieldName;
  fVar6 = (this->DefaultProgressColor).field0_0x0._s_0.R;
  fVar2 = (this->DefaultProgressColor).field0_0x0._s_0.G;
  fVar3 = (this->DefaultProgressColor).field0_0x0._s_0.B;
  fVar4 = (this->DefaultProgressColor).field0_0x0._s_0.A;
  if ((((fVar6 != (this->ProgressColor).field0_0x0._s_0.R) ||
       (fVar2 != (this->ProgressColor).field0_0x0._s_0.G)) ||
      (fVar3 != (this->ProgressColor).field0_0x0._s_0.B)) ||
     (fVar4 != (this->ProgressColor).field0_0x0._s_0.A)) {
    (this->ProgressColor).field0_0x0._s_0.R = fVar6;
    (this->ProgressColor).field0_0x0._s_0.G = fVar2;
    (this->ProgressColor).field0_0x0._s_0.B = fVar3;
    (this->ProgressColor).field0_0x0._s_0.A = fVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.FieldName;
  if (this->bUseProbabilityPercent != false) {
    this->bUseProbabilityPercent = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateEndProcess @ 14bf879b0

void __thiscall
UDS_VM_HUD_ActionProgress::UpdateEndProcess(UDS_VM_HUD_ActionProgress *this,float param_1)

{
  UDS_VM_Progress *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    return;
  }
  if (this->bIsEndProcess != true) {
    return;
  }
  if (this->CurActionProgressType == MountSprint) {
    UnBindModel_Status(this,Stamina);
  }
  else if (this->CurActionProgressType != CommonActionCasting) {
    fVar2 = UDS_VM_Progress::GetCurrentValue(this_00);
    fVar1 = __real_3dcccccd;
    if (__real_322bcc77 <
        (float)((uint)(fVar2 - this->PreProgressValue) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      this->PreProgressValue = fVar2;
      this->EndHoldTimeTick = 0.0;
      return;
    }
    fVar2 = param_1 + this->EndHoldTimeTick;
    this->EndHoldTimeTick = fVar2;
    if (fVar2 <= fVar1) {
      return;
    }
    UnbindModelByActionProgressType(this);
    goto LAB_14bf87a63;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
LAB_14bf87a63:
  this->PreProgressValue = 0.0;
  this->EndHoldTimeTick = 0.0;
  this->bIsEndProcess = false;
  this->CurActionProgressType = None;
  return;
}

// UpdateProgressContents @ 14bf887f0

void __thiscall UDS_VM_HUD_ActionProgress::UpdateProgressContents(UDS_VM_HUD_ActionProgress *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::ProgressColor.FieldName;
  fVar1 = (this->DefaultProgressColor).field0_0x0._s_0.R;
  fVar2 = (this->DefaultProgressColor).field0_0x0._s_0.G;
  fVar3 = (this->DefaultProgressColor).field0_0x0._s_0.B;
  fVar4 = (this->DefaultProgressColor).field0_0x0._s_0.A;
  if ((((fVar1 != (this->ProgressColor).field0_0x0._s_0.R) ||
       (fVar2 != (this->ProgressColor).field0_0x0._s_0.G)) ||
      (fVar3 != (this->ProgressColor).field0_0x0._s_0.B)) ||
     (fVar4 != (this->ProgressColor).field0_0x0._s_0.A)) {
    local_10 = FFieldNotificationClassDescriptor::ProgressColor.BitNumber;
    (this->ProgressColor).field0_0x0._s_0.R = fVar1;
    (this->ProgressColor).field0_0x0._s_0.G = fVar2;
    (this->ProgressColor).field0_0x0._s_0.B = fVar3;
    (this->ProgressColor).field0_0x0._s_0.A = fVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bUseProbabilityPercent.FieldName;
  if (this->bUseProbabilityPercent != false) {
    this->bUseProbabilityPercent = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

