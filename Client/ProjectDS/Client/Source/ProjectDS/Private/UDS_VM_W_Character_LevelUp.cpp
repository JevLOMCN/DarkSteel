// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetCloseButtonClickEvent_WrapperImpl @ 14b725350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Character_LevelUp::SetCloseButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_Character_LevelUp::OnCloseButtonClickEvent",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x7c,L"windowMng is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,CharacterLevelResultPopup,auStack_144,&fStack_148);
  }
  return;
}

// SetAniSkipButtonClickEvent_WrapperImpl @ 14b725360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_VM_W_Character_LevelUp::SetAniSkipButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FName *pFVar2;
  FTimerManager *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  FName FStackX_8;
  FDelegateAllocation FStack_38;
  code *pcStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0xa0);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x291) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x291) = 0;
  }
  else if (*(char *)(lVar1 + 0x161) != '\x01') {
    if (*(char *)(lVar1 + 0x160) != '\0') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x290) == '\x01') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x290) = 1;
    pFVar2 = ::FName::FName(&FStackX_8,"Ani_In");
    *(FName *)((longlong)param_1 + 0x148) = *pFVar2;
    *(undefined1 *)((longlong)param_1 + 0x154) = 4;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0xa0) + 0x160) = 1;
    if ((*(UDS_VM_W_Character_LevelUp_Status **)((longlong)param_1 + 0xa0))->IsAnimationDataSetSkip
        == false) {
      UDS_VM_W_Character_LevelUp_Status::SetCharStatusListView
                (*(UDS_VM_W_Character_LevelUp_Status **)((longlong)param_1 + 0xa0));
    }
    this = FDS_TimerManager::Get((UObject *)0x0);
    uStack_20 = 0;
    FStack_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcStack_28 = SetIsDelayOver;
    FStack_38.DelegateSize = 0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_38);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar3 + 1) = 1;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Character_LevelUp____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      FStackX_8 = (FName)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&FStackX_8);
      puVar3[4] = pcStack_28;
      puVar3[5] = CONCAT44(uStack_1c,uStack_20);
    }
    FTimerManager::SetTimer
              (this,(FTimerHandle *)((longlong)param_1 + 0x288),
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
               &FStack_38,__real_3f800000,false,__real_bf800000);
    if ((FStack_38.DelegateSize != 0) &&
       (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_38,0,0,0x10);
      FStack_38.DelegateSize = 0;
    }
    if (FStack_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_38.DelegateAllocator);
    }
    plVar5 = (longlong *)((longlong)param_1 + 0x28);
    FStack_38.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    FStack_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&FStack_38);
    FStack_38.DelegateSize =
         FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.BitNumber;
    FStack_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&FStack_38);
    FStack_38.DelegateSize = FFieldNotificationClassDescriptor::AnimationCancelEvent.BitNumber;
    FStack_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationCancelEvent.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&FStack_38);
    return;
  }
  OnCloseButtonClickEvent(param_1,param_2);
  return;
}

// StaticClass @ 14b725370

UClass * __cdecl UDS_VM_W_Character_LevelUp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton;
}

// UDS_VM_W_Character_LevelUp @ 14b727390

UDS_VM_W_Character_LevelUp * __thiscall
UDS_VM_W_Character_LevelUp::UDS_VM_W_Character_LevelUp
          (UDS_VM_W_Character_LevelUp *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_ReturnItemList = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp__6B_;
  (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr = (UDS_VM_W_Character_LevelUp_Status *)0x0
  ;
  (this->VM_Character_LevelUp_ReturnItem).field0_0x0.DebugPtr =
       (UDS_VM_W_Character_LevelUp_ReturnItem *)0x0;
  (this->CloseButtonClickEvent)._padding_ = '\0';
  (this->CloseButtonClickEvent).bIsCustomSelected = false;
  (this->CloseButtonClickEvent).bIsLacked = false;
  (this->CloseButtonClickEvent).bIsCustomDisabled = false;
  (this->CloseButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x8 = 0;
  (this->AniSkipButtonClickEvent)._padding_ = '\0';
  (this->AniSkipButtonClickEvent).bIsCustomSelected = false;
  (this->AniSkipButtonClickEvent).bIsLacked = false;
  (this->AniSkipButtonClickEvent).bIsCustomDisabled = false;
  (this->AniSkipButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate.field_0x8 = 0;
  (this->LevelTitleText).StringTableType = None;
  (this->LevelTitleText).StringTableID = 0;
  (this->LevelTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelTitleText).StringEnumTableNameID.Number = 0;
  (this->LevelTitleText).DateTime.Ticks = 0;
  (this->LevelTitleText).TimeSpan.Ticks = 0;
  (this->LevelTitleText).TimeExpressionType = None;
  (this->LevelTitleText).IsExpression = false;
  (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).UniqueString.Data.ArrayNum = 0;
  (this->LevelTitleText).UniqueString.Data.ArrayMax = 0;
  (this->LevelTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).FormatArgs.ArrayNum = 0;
  (this->LevelTitleText).FormatArgs.ArrayMax = 0;
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
  (this->AnimationCancelEvent).bIsActivate = false;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  (this->AnimationOverTimerHandler).Handle = 0;
  this->IsAniSkipInputOne = false;
  this->IsDelayOver = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0x2981d;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x298de;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x298df;
  return this;
}

// UDS_VM_W_Character_LevelUp @ 14b7275b0

UDS_VM_W_Character_LevelUp * __thiscall
UDS_VM_W_Character_LevelUp::UDS_VM_W_Character_LevelUp
          (UDS_VM_W_Character_LevelUp *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->Vis_ReturnItemList = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp__6B_;
  (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr = (UDS_VM_W_Character_LevelUp_Status *)0x0
  ;
  (this->VM_Character_LevelUp_ReturnItem).field0_0x0.DebugPtr =
       (UDS_VM_W_Character_LevelUp_ReturnItem *)0x0;
  (this->CloseButtonClickEvent)._padding_ = '\0';
  (this->CloseButtonClickEvent).bIsCustomSelected = false;
  (this->CloseButtonClickEvent).bIsLacked = false;
  (this->CloseButtonClickEvent).bIsCustomDisabled = false;
  (this->CloseButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x8 = 0;
  (this->AniSkipButtonClickEvent)._padding_ = '\0';
  (this->AniSkipButtonClickEvent).bIsCustomSelected = false;
  (this->AniSkipButtonClickEvent).bIsLacked = false;
  (this->AniSkipButtonClickEvent).bIsCustomDisabled = false;
  (this->AniSkipButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->AniSkipButtonClickEvent).Delegate.field_0x8 = 0;
  (this->LevelTitleText).StringTableType = None;
  (this->LevelTitleText).StringTableID = 0;
  (this->LevelTitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelTitleText).StringEnumTableNameID.Number = 0;
  (this->LevelTitleText).DateTime.Ticks = 0;
  (this->LevelTitleText).TimeSpan.Ticks = 0;
  (this->LevelTitleText).TimeExpressionType = None;
  (this->LevelTitleText).IsExpression = false;
  (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).UniqueString.Data.ArrayNum = 0;
  (this->LevelTitleText).UniqueString.Data.ArrayMax = 0;
  (this->LevelTitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelTitleText).FormatArgs.ArrayNum = 0;
  (this->LevelTitleText).FormatArgs.ArrayMax = 0;
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
  (this->AnimationCancelEvent).bIsActivate = false;
  (this->FixedText_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Level).StringEnumTableNameID.Number = 0;
  (this->FixedText_Level).DateTime.Ticks = 0;
  (this->FixedText_Level).TimeSpan.Ticks = 0;
  (this->FixedText_Level).TimeExpressionType = None;
  (this->FixedText_Level).IsExpression = false;
  (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Level).FormatArgs.ArrayNum = 0;
  (this->FixedText_Level).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaxLevel).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaxLevel).DateTime.Ticks = 0;
  (this->FixedText_MaxLevel).TimeSpan.Ticks = 0;
  (this->FixedText_MaxLevel).TimeExpressionType = None;
  (this->FixedText_MaxLevel).IsExpression = false;
  (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaxLevel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaxLevel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  (this->AnimationOverTimerHandler).Handle = 0;
  this->IsAniSkipInputOne = false;
  this->IsDelayOver = false;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->FixedText_Level).StringTableType = StringUi;
  (this->FixedText_Level).StringTableID = 0x2981d;
  (this->FixedText_MaxLevel).StringTableType = StringUi;
  (this->FixedText_MaxLevel).StringTableID = 0x298de;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x298df;
  return this;
}

// ~UDS_VM_W_Character_LevelUp @ 14b728e20

void __thiscall
UDS_VM_W_Character_LevelUp::~UDS_VM_W_Character_LevelUp(UDS_VM_W_Character_LevelUp *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Desc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Desc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_MaxLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaxLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaxLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->LevelTitleText).FormatArgs.AllocatorInstance.Data,
             (this->LevelTitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->LevelTitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelTitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AniSkipButtonClickEvent).Delegate)
  ;
  pvVar2 = *(void **)&(this->AniSkipButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AniSkipButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->CloseButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseButtonClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72adc0

IClassDescriptor * __thiscall
UDS_VM_W_Character_LevelUp::GetFieldNotificationDescriptor(UDS_VM_W_Character_LevelUp *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Character_LevelUp::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b460

UClass * __cdecl UDS_VM_W_Character_LevelUp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Character_LevelUp @ 14b72bdd0

void __cdecl UDS_VM_W_Character_LevelUp::StaticRegisterNativesUDS_VM_W_Character_LevelUp(void)

{
  return;
}

// InitViewModel @ 14bfb0950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_W_Character_LevelUp::InitViewModel(UDS_VM_W_Character_LevelUp *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_W_Character_LevelUp_Status *pUVar3;
  UDS_VM_W_Character_LevelUp_ReturnItem *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  pUVar1 = Z_Construct_UClass_UDS_VM_W_Character_LevelUp_Status_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_VM_W_Character_LevelUp_Status_NoRegister();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar3 = (UDS_VM_W_Character_LevelUp_Status *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (pUVar3 != (UDS_VM_W_Character_LevelUp_Status *)0x0) {
    *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_VM_W_Character_LevelUp_Status *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr = pUVar3;
  local_a8 = 0;
  pUVar1 = Z_Construct_UClass_UDS_VM_W_Character_LevelUp_ReturnItem_NoRegister();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_VM_W_Character_LevelUp_ReturnItem_NoRegister();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar4 = (UDS_VM_W_Character_LevelUp_ReturnItem *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (pUVar4 != (UDS_VM_W_Character_LevelUp_ReturnItem *)0x0) {
    *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UDS_VM_W_Character_LevelUp_ReturnItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->VM_Character_LevelUp_ReturnItem).field0_0x0.DebugPtr = pUVar4;
  return;
}

// OnAniSkipEvent @ 14bfb4220

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
UDS_VM_W_Character_LevelUp::OnAniSkipEvent
          (UDS_VM_W_Character_LevelUp *this,FDS_ButtonEventField *param_1)

{
  UDS_VM_W_Character_LevelUp_Status *pUVar1;
  FName *pFVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  FName local_res8;
  FDelegateAllocation local_38;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pUVar1 = (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_VM_W_Character_LevelUp_Status *)0x0) {
    return;
  }
  if (this->IsDelayOver == true) {
    this->IsDelayOver = false;
  }
  else if (pUVar1->IsAnimationDataSetSkip != true) {
    if (pUVar1->IsAniSkip != false) {
      return;
    }
    if (this->IsAniSkipInputOne == true) {
      return;
    }
    this->IsAniSkipInputOne = true;
    pFVar2 = ::FName::FName(&local_res8,"Ani_In");
    pUVar1 = (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr;
    (this->AnimationEvent).AnimationName = *pFVar2;
    (this->AnimationEvent).AnimationEventType = PlayForwardSkip;
    pUVar1->IsAniSkip = true;
    pUVar1 = (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr;
    if (pUVar1->IsAnimationDataSetSkip == false) {
      UDS_VM_W_Character_LevelUp_Status::SetCharStatusListView(pUVar1);
    }
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_20 = 0;
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_28 = SetIsDelayOver;
    local_38.DelegateSize = 0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_38);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar3 + 1) = 1;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Character_LevelUp____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy___N__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res8 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
      puVar3[4] = local_28;
      puVar3[5] = CONCAT44(uStack_1c,uStack_20);
    }
    FTimerManager::SetTimer
              (this_00,&this->AnimationOverTimerHandler,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_38
               ,__real_3f800000,false,__real_bf800000);
    if ((local_38.DelegateSize != 0) &&
       (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_38,0,0,0x10);
      local_38.DelegateSize = 0;
    }
    if (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_38.DelegateAllocator);
    }
    plVar5 = &this->_padding_;
    local_38.DelegateSize = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
    local_38.DelegateSize = FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.BitNumber
    ;
    local_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
    local_38.DelegateSize = FFieldNotificationClassDescriptor::AnimationCancelEvent.BitNumber;
    local_38.DelegateAllocator =
         (ForElementType<TAlignedBytes<16,16>_>)
         FFieldNotificationClassDescriptor::AnimationCancelEvent.FieldName;
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
    return;
  }
  OnCloseButtonClickEvent(this,param_1);
  return;
}

// OnCloseButtonClickEvent @ 14bfbbbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Character_LevelUp::OnCloseButtonClickEvent
          (UDS_VM_W_Character_LevelUp *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Character_LevelUp::OnCloseButtonClickEvent",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x7c,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CharacterLevelResultPopup,local_144,&local_148);
  }
  return;
}

// OnCloseInit @ 14bfbbee0

void __thiscall UDS_VM_W_Character_LevelUp::OnCloseInit(UDS_VM_W_Character_LevelUp *this)

{
  (this->AnimationOverTimerHandler).Handle = 0;
  return;
}

// OnSetViewModel @ 14bfc8990

void __thiscall
UDS_VM_W_Character_LevelUp::OnSetViewModel
          (UDS_VM_W_Character_LevelUp *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_W_Character_LevelUp_Status *pUVar2;
  UDS_VM_W_Character_LevelUp_ReturnItem *this_00;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  longlong *plVar6;
  long64 lVar7;
  FName local_res10;
  TSharedPtr<FDS_ViewModelContext_CharacterLevelUpResultInfo,1> local_108;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FDS_Text local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38 [2];
  
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
  SafeCast<FDS_ViewModelContext_CharacterLevelUpResultInfo>(&local_108,&local_58);
  if (local_108.Object == (FDS_ViewModelContext_CharacterLevelUpResultInfo *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5022441821440049127>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Character_LevelUp.cpp"
                       ,0x19,"context.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar2 = (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr;
    this->IsDelayOver = false;
    if (pUVar2 != (UDS_VM_W_Character_LevelUp_Status *)0x0) {
      pUVar2->IsAniSkip = false;
      pUVar2 = (this->VM_Character_LevelUp_Status).field0_0x0.DebugPtr;
      local_48.Object = (FDS_ViewModelContext *)local_108.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_108.SharedReferenceCount.ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_48);
      local_f0 = FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.BitNumber;
      local_f8 = FFieldNotificationClassDescriptor::VM_Character_LevelUp_Status.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    }
    if (*(int *)&((local_108.Object)->RemainMap).field_0x8 ==
        *(int *)&((local_108.Object)->RemainMap).field_0x34) {
      this->Vis_ReturnItemList = Collapsed;
    }
    else {
      this_00 = (this->VM_Character_LevelUp_ReturnItem).field0_0x0.DebugPtr;
      this->Vis_ReturnItemList = Visible;
      if (this_00 != (UDS_VM_W_Character_LevelUp_ReturnItem *)0x0) {
        local_38[0].Object = (FDS_ViewModelContext *)local_108.Object;
        local_38[0].SharedReferenceCount.ReferenceController =
             local_108.SharedReferenceCount.ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,local_38);
        local_e0 = FFieldNotificationClassDescriptor::VM_Character_LevelUp_ReturnItem.BitNumber;
        local_e8 = FFieldNotificationClassDescriptor::VM_Character_LevelUp_ReturnItem.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      }
    }
    this->IsAniSkipInputOne = false;
    local_a8.StringTableID = 0;
    local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a8.StringEnumTableNameID.Number = 0;
    local_a8.TimeExpressionType = None;
    local_a8.IsExpression = false;
    local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.UniqueString.Data.ArrayNum = 0;
    local_a8.UniqueString.Data.ArrayMax = 0;
    local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.FormatArgs.ArrayNum = 0;
    local_a8.FormatArgs.ArrayMax = 0;
    lVar7 = 0x2983d;
    if ((local_108.Object)->IsLimitBreak == true) {
      lVar7 = 0x2983b;
    }
    local_a8.StringTableType = None;
    local_a8.DateTime.Ticks = 0;
    local_a8.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringTable(&local_a8,StringUi,lVar7);
    FDS_Text::operator=(&this->LevelTitleText,&local_a8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,
               local_a8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
    }
    plVar6 = &this->_padding_;
    pFVar5 = ::FName::FName(&local_res10,"Ani_In");
    (this->AnimationEvent).AnimationName = *pFVar5;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    local_d0 = FFieldNotificationClassDescriptor::LevelTitleText.BitNumber;
    local_d8 = FFieldNotificationClassDescriptor::LevelTitleText.FieldName;
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_d8);
    local_c0 = FFieldNotificationClassDescriptor::Vis_ReturnItemList.BitNumber;
    local_c8 = FFieldNotificationClassDescriptor::Vis_ReturnItemList.FieldName;
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_c8);
    local_b0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsDelayOver @ 14bfda910

void __thiscall
UDS_VM_W_Character_LevelUp::SetIsDelayOver(UDS_VM_W_Character_LevelUp *this,bool param_1)

{
  this->IsDelayOver = param_1;
  return;
}

