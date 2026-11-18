// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetAnimationFinishedEvent_WrapperImpl @ 14b724dc0

void __cdecl
UDS_VM_W_Character_LevelUp_Status::SetAnimationFinishedEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_1 + 0x160) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x161) = 1;
    SetCharStatusListView(param_1);
    return;
  }
  return;
}

// StaticClass @ 14b724dd0

UClass * __cdecl UDS_VM_W_Character_LevelUp_Status::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp_Status",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp_Status,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp_Status>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp_Status>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton;
}

// UDS_VM_W_Character_LevelUp_Status @ 14b727870

UDS_VM_W_Character_LevelUp_Status * __thiscall
UDS_VM_W_Character_LevelUp_Status::UDS_VM_W_Character_LevelUp_Status
          (UDS_VM_W_Character_LevelUp_Status *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->limitBreakTextVisibility = Collapsed;
  this->Vis_StatusList = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_Status__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->MaxLevelText).StringTableType = None;
  (this->MaxLevelText).StringTableID = 0;
  (this->MaxLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MaxLevelText).StringEnumTableNameID.Number = 0;
  (this->MaxLevelText).DateTime.Ticks = 0;
  (this->MaxLevelText).TimeSpan.Ticks = 0;
  (this->MaxLevelText).TimeExpressionType = None;
  (this->MaxLevelText).IsExpression = false;
  (this->MaxLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxLevelText).UniqueString.Data.ArrayNum = 0;
  (this->MaxLevelText).UniqueString.Data.ArrayMax = 0;
  (this->MaxLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxLevelText).FormatArgs.ArrayNum = 0;
  (this->MaxLevelText).FormatArgs.ArrayMax = 0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsAniSkip = false;
  this->IsAnimationDataSetSkip = false;
  this->CharID = 0;
  this->PrevCombatPower = 0;
  this->Vis_CharMaxLevelUI = Collapsed;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_W_Character_LevelUp_Status @ 14b727970

UDS_VM_W_Character_LevelUp_Status * __thiscall
UDS_VM_W_Character_LevelUp_Status::UDS_VM_W_Character_LevelUp_Status
          (UDS_VM_W_Character_LevelUp_Status *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->limitBreakTextVisibility = Collapsed;
  this->Vis_StatusList = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_Status__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->MaxLevelText).StringTableType = None;
  (this->MaxLevelText).StringTableID = 0;
  (this->MaxLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MaxLevelText).StringEnumTableNameID.Number = 0;
  (this->MaxLevelText).DateTime.Ticks = 0;
  (this->MaxLevelText).TimeSpan.Ticks = 0;
  (this->MaxLevelText).TimeExpressionType = None;
  (this->MaxLevelText).IsExpression = false;
  (this->MaxLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxLevelText).UniqueString.Data.ArrayNum = 0;
  (this->MaxLevelText).UniqueString.Data.ArrayMax = 0;
  (this->MaxLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxLevelText).FormatArgs.ArrayNum = 0;
  (this->MaxLevelText).FormatArgs.ArrayMax = 0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->IsAniSkip = false;
  this->IsAnimationDataSetSkip = false;
  this->CharID = 0;
  this->PrevCombatPower = 0;
  this->Vis_CharMaxLevelUI = Collapsed;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_W_Character_LevelUp_Status @ 14b729030

void __thiscall
UDS_VM_W_Character_LevelUp_Status::~UDS_VM_W_Character_LevelUp_Status
          (UDS_VM_W_Character_LevelUp_Status *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_Status__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MaxLevelText).FormatArgs.AllocatorInstance.Data,
             (this->MaxLevelText).FormatArgs.ArrayNum);
  pFVar2 = (this->MaxLevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MaxLevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72aea0

IClassDescriptor * __thiscall
UDS_VM_W_Character_LevelUp_Status::GetFieldNotificationDescriptor
          (UDS_VM_W_Character_LevelUp_Status *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Character_LevelUp_Status::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b5e0

UClass * __cdecl UDS_VM_W_Character_LevelUp_Status::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp_Status",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp_Status,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp_Status>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp_Status>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_Status.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Character_LevelUp_Status @ 14b72bdf0

void __cdecl
UDS_VM_W_Character_LevelUp_Status::StaticRegisterNativesUDS_VM_W_Character_LevelUp_Status(void)

{
  return;
}

// GetCharLevelTableRowID @ 14bfaaf70

int __thiscall
UDS_VM_W_Character_LevelUp_Status::GetCharLevelTableRowID
          (UDS_VM_W_Character_LevelUp_Status *this,
          TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *param_1,EDS_StatusType param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(EDS_StatusType *)(pFVar1 + lVar7) == param_2) {
        if (pFVar1 == (FScriptContainerElement *)0x0) {
          return uVar6;
        }
        FMemory::Free(pFVar1);
        return uVar6;
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return 9999;
}

// OnAnimationFinished @ 14bfb4510

void __thiscall
UDS_VM_W_Character_LevelUp_Status::OnAnimationFinished
          (UDS_VM_W_Character_LevelUp_Status *this,FDS_WidgetAnimationEventField *param_1)

{
  if (this->IsAniSkip != true) {
    this->IsAnimationDataSetSkip = true;
    SetCharStatusListView(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bfc9140

void __thiscall
UDS_VM_W_Character_LevelUp_Status::OnSetViewModel
          (UDS_VM_W_Character_LevelUp_Status *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *this_00;
  UDS_CharInfoData *this_01;
  long64 lVar7;
  FDS_CharacterAscendTableRow *pFVar8;
  FDS_CharacterAscendTableRow *this_02;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TSharedPtr<FDS_ViewModelContext_CharacterLevelUpResultInfo,1> local_128;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
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
  FName local_a8;
  int local_a0;
  FDS_Text local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharacterLevelUpResultInfo>(&local_128,&local_48);
  if (local_128.Object == (FDS_ViewModelContext_CharacterLevelUpResultInfo *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6176990727810056164>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Character_LevelUp_Status.cpp"
                       ,0x1c,"context.IsValid()");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    goto LAB_14bfc9565;
  }
  this->Vis_StatusList = Visible;
  this->IsAnimationDataSetSkip = false;
  this->CharID = (local_128.Object)->CharID;
  this->PrevCombatPower = (local_128.Object)->PrevCombatPower;
  local_110 = FFieldNotificationClassDescriptor::Vis_StatusList.BitNumber;
  local_118 = FFieldNotificationClassDescriptor::Vis_StatusList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_118);
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar5) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharInfoData::GetData((ulong64)&local_res10);
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar5) {
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      UDS_CharStatusData::GetData((ulong64)&local_res20);
      bVar5 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar6[8].field_0x8,true);
        bVar5 = FDS_CharacterBaseTableRow::IsValid(this_00);
        iVar4 = FFieldNotificationClassDescriptor::CharCurLevel.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::CharCurLevel.FieldName;
        if (!bVar5) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_128.SharedReferenceCount.ReferenceController);
          goto LAB_14bfc9565;
        }
        if (this->CharCurLevel != (local_128.Object)->CurLevel) {
          this->CharCurLevel = (local_128.Object)->CurLevel;
          local_100 = iVar4;
          local_108 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_108);
        }
        iVar4 = FFieldNotificationClassDescriptor::CharPrevLevel.BitNumber;
        FVar3 = FFieldNotificationClassDescriptor::CharPrevLevel.FieldName;
        if (this->CharPrevLevel != (local_128.Object)->PrevLevel) {
          this->CharPrevLevel = (local_128.Object)->PrevLevel;
          local_f0 = iVar4;
          local_f8 = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
        }
        if ((local_128.Object)->IsLimitBreak == true) {
          this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_res10);
          pUVar6 = FWeakObjectPtr::Get(&local_res10);
          lVar7 = UDS_CharInfoData::GetAscendTableRowID
                            (this_01,*(int *)&pUVar6[0xd].field_0x10 + -1);
          pFVar8 = FDS_CharacterAscendTableRow::Get((longlong)(int)lVar7,true);
          this_02 = FDS_CharacterAscendTableRow::Get((longlong)pFVar8->ID_NextAscend,true);
          bVar5 = FDS_CharacterBaseTableRow::IsValid(this_00);
          if ((bVar5) && (bVar5 = FDS_CharacterAscendTableRow::IsValid(this_02), bVar5)) {
            this->limitBreakTextVisibility = Visible;
            iVar4 = FFieldNotificationClassDescriptor::CharMaxCurLevel.BitNumber;
            FVar3 = FFieldNotificationClassDescriptor::CharMaxCurLevel.FieldName;
            if (this->CharMaxCurLevel != this_02->ReqCharLevel) {
              this->CharMaxCurLevel = this_02->ReqCharLevel;
              local_e0 = iVar4;
              local_e8 = FVar3;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
            }
            iVar4 = FFieldNotificationClassDescriptor::CharMaxPrevLevel.BitNumber;
            FVar3 = FFieldNotificationClassDescriptor::CharMaxPrevLevel.FieldName;
            if (this->CharMaxPrevLevel != pFVar8->ReqCharLevel) {
              this->CharMaxPrevLevel = pFVar8->ReqCharLevel;
              local_d0 = iVar4;
              local_d8 = FVar3;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
            }
            goto LAB_14bfc9435;
          }
        }
        else {
          this->limitBreakTextVisibility = Collapsed;
LAB_14bfc9435:
          if (this_00->MaxLevel == this->CharCurLevel) {
            this->Vis_CharMaxLevelUI = Visible;
            local_98.StringTableID = 0;
            local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_98.StringEnumTableNameID.Number = 0;
            local_98.TimeExpressionType = None;
            local_98.IsExpression = false;
            local_98.DateTime.Ticks = 0;
            local_98.TimeSpan.Ticks = 0;
            local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.UniqueString.Data.ArrayNum = 0;
            local_98.UniqueString.Data.ArrayMax = 0;
            local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.FormatArgs.ArrayNum = 0;
            local_98.FormatArgs.ArrayMax = 0;
            local_98.StringTableType = None;
            FDS_Text::SetTextFromStringTable(&local_98,StringUi,0x2983a);
            FDS_Text::operator=(&this->MaxLevelText,&local_98);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
                       local_98.FormatArgs.ArrayNum);
            if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data !=
                (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
            }
            if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
            }
            local_c0 = FFieldNotificationClassDescriptor::MaxLevelText.BitNumber;
            local_c8 = FFieldNotificationClassDescriptor::MaxLevelText.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
            this->limitBreakTextVisibility = Collapsed;
          }
          else {
            this->Vis_CharMaxLevelUI = Collapsed;
          }
          local_b0 = FFieldNotificationClassDescriptor::Vis_CharMaxLevelUI.BitNumber;
          local_b8 = FFieldNotificationClassDescriptor::Vis_CharMaxLevelUI.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
          local_a0 = FFieldNotificationClassDescriptor::limitBreakTextVisibility.BitNumber;
          local_a8 = FFieldNotificationClassDescriptor::limitBreakTextVisibility.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.SharedReferenceCount.ReferenceController);
        goto LAB_14bfc9565;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
LAB_14bfc9565:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCharStatusListView @ 14bfd6360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_W_Character_LevelUp_Status::SetCharStatusListView(UDS_VM_W_Character_LevelUp_Status *this)

{
  ulonglong uVar1;
  EDS_StatusType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  FDS_CharacterBaseTableRow *this_00;
  UDS_CharStatusData *this_01;
  FDS_CommonContentsInfoTableRow *this_02;
  UDS_UserObjectListItem *pUVar10;
  FDS_StatusTableRow *pFVar11;
  UDS_CharInfoData *pUVar12;
  long64 lVar13;
  long64 lVar14;
  FDS_CharacterLevelTableRow *pFVar15;
  FDS_CharacterLevelTableRow *pFVar16;
  byte bVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  FSharedReferencer<1> FVar21;
  uint uVar22;
  uint *puVar23;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [4];
  uint local_1d4;
  FWeakObjectPtr local_1d0;
  UDS_VM_W_Character_LevelUp_Status *local_1c8;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_1b8;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> local_198;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> local_188;
  FWeakObjectPtr local_178 [2];
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_168;
  int local_158;
  int local_154;
  FWeakObjectPtr local_150;
  UDS_UserObjectListItem *local_148;
  UDS_UserObjectListItem *local_140;
  FName local_138;
  int local_130;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8 [2];
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = this;
  UDS_PlayerData::GetData((ulong64)&local_150,UDS_PlayerData::MainPlayerEntityID,false);
  bVar7 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar7) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharInfoData::GetData((ulong64)&local_1d0);
    bVar7 = FWeakObjectPtr::IsValid(&local_1d0);
    if (bVar7) {
      pUVar9 = FWeakObjectPtr::Get(&local_1d0);
      this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar9[8].field_0x8,true);
      bVar7 = FDS_CharacterBaseTableRow::IsValid(this_00);
      if (bVar7) {
        UDS_PlayerData::GetMainPlayerCurrentEntityID();
        UDS_CharStatusData::GetData((ulong64)local_178);
        bVar7 = FWeakObjectPtr::IsValid(local_178);
        if (bVar7) {
          FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.ArrayNum = (this_00->SummaryStatus).ArrayNum;
          lVar19 = (longlong)local_1a8.ArrayNum;
          pFVar3 = (this_00->SummaryStatus).AllocatorInstance.Data;
          uVar22 = 0;
          if (local_1a8.ArrayNum == 0) {
            local_1a8.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_1a8.ArrayNum,0,&local_1a8.AllocatorInstance,local_1a8.ArrayNum,
                       &local_1a8.ArrayMax);
            memcpy(local_1a8.AllocatorInstance.Data,pFVar3,lVar19 << 2);
          }
          this_01 = (UDS_CharStatusData *)FWeakObjectPtr::Get(local_178);
          UDS_CharStatusData::GetMaxStatusMap
                    (this_01,(TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
                              *)local_88,&local_1a8);
          MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_168);
          pFVar5 = local_168.Object;
          if ((local_168.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)&pFVar5->_padding_ = 0x1b9;
          this_02 = FDS_CommonContentsInfoTableRow::GetRef(4,true);
          bVar7 = FDS_CommonContentsInfoTableRow::IsValid(this_02);
          uVar8 = uVar22;
          if (bVar7) {
            uVar8 = this_02->ID_Icon;
          }
          pFVar5->StatusIconID = uVar8;
          pFVar5->StatusNameID = (this_02->ID_Name).ID;
          pFVar5->IsUpagade = true;
          pFVar5->BeforeStatusValue = this->PrevCombatPower;
          pUVar9 = FWeakObjectPtr::Get(&local_1d0);
          pFVar5->AfterStatusValue = (int)*(float *)&pUVar9[0xd].field_0x20;
          pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          local_c8.Object = (FDS_ViewModelContext *)local_168.Object;
          local_c8.SharedReferenceCount.ReferenceController =
               local_168.SharedReferenceCount.ReferenceController;
          if (local_168.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(pUVar10,&local_c8);
          local_148 = pUVar10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_148);
          uVar8 = local_60;
          uStack_11c = 1;
          local_108 = 0;
          uStack_10c = local_108;
          if (local_60 != 0) {
            puVar23 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar23 = local_68;
            }
            uVar20 = *puVar23;
            local_108 = 0;
            uVar22 = 0;
            while (uVar20 == 0) {
              lVar19 = (longlong)(int)uVar22;
              local_108 = local_108 + 0x20;
              uVar22 = uVar22 + 1;
              uStack_10c = local_60;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
              goto LAB_14bfd6670;
              uVar20 = (puVar23 + 1)[lVar19];
            }
            uStack_11c = -uVar20 & uVar20;
            uVar1 = (ulonglong)uStack_11c * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_158 = (int)lVar19;
            uStack_10c = (local_108 - 1) + local_158;
            if ((int)local_60 < (int)uStack_10c) {
              uStack_10c = local_60;
            }
          }
LAB_14bfd6670:
          local_128 = (longlong *)local_88;
          uStack_104 = local_8c;
          local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          iStack_100 = local_88._8_4_ - local_54;
          uVar20 = local_60 & 0xffffffe0;
          uStack_110 = 0xffffffff;
          TStack_f0.CurrentBitIndex = uStack_10c;
          TStack_f0.UnvisitedBitMask = 0xffffffff;
          TStack_f0._padding_ = CONCAT44(uStack_11c,uVar22);
          iVar18 = (int)local_60 >> 5;
          TStack_f0._28_4_ = local_8c;
          TStack_f0.BaseBitIndex = local_108;
          uStack_d0 = CONCAT44(uStack_fc,iStack_100);
          bVar17 = (byte)local_60;
          local_1d4 = local_60;
          uStack_120 = uVar22;
          local_f8 = local_128;
          TStack_f0.Array = local_118;
          if (((int)local_60 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar8 != local_60) {
            puVar23 = (uint *)(local_88 + 0x10);
            if (local_68 != (uint *)0x0) {
              puVar23 = local_68;
            }
            uVar22 = -1 << (bVar17 & 0x1f) & puVar23[iVar18];
            while (uVar22 == 0) {
              lVar19 = (longlong)iVar18;
              uVar20 = uVar20 + 0x20;
              iVar18 = iVar18 + 1;
              local_1d4 = local_60;
              uVar8 = local_60;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
              goto LAB_14bfd67a0;
              uVar22 = (puVar23 + 1)[lVar19];
            }
            uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_154 = (int)lVar19;
            local_1d4 = local_154 + -1 + uVar20;
            uVar8 = local_1d4;
            if ((int)local_60 < (int)local_1d4) {
              local_1d4 = local_60;
              uVar8 = local_60;
            }
          }
LAB_14bfd67a0:
          do {
            plVar6 = local_f8;
            if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
              local_1d8[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
            }
            if (((TStack_f0.CurrentBitIndex == uVar8) &&
                (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
               (plVar6 == (longlong *)local_88)) {
              local_130 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
              local_138 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_138);
LAB_14bfd6bc0:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_168.SharedReferenceCount.ReferenceController);
              local_40 = 0;
              if (local_48 != (void *)0x0) {
                FMemory::Free(local_48);
              }
              TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (local_88);
              if (local_1a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_1a8.AllocatorInstance.Data);
              return;
            }
            EVar2 = *(EDS_StatusType *)(*plVar6 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
            MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_1b8);
            pFVar5 = local_1b8.Object;
            if ((local_1b8.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined4 *)&pFVar5->_padding_ = 0x1b9;
            pFVar11 = FDS_StatusTableRow::Get((longlong)(int)EVar2,true);
            pUVar12 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1d0);
            lVar13 = UDS_CharInfoData::GetLevelTableRowID(pUVar12,this->CharCurLevel);
            pUVar12 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_1d0);
            lVar14 = UDS_CharInfoData::GetLevelTableRowID(pUVar12,this->CharPrevLevel);
            pFVar15 = FDS_CharacterLevelTableRow::Get((longlong)(int)lVar13,true);
            pFVar16 = FDS_CharacterLevelTableRow::Get((longlong)(int)lVar14,true);
            FVar21.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
            this = local_1c8;
            if (pFVar11 != (FDS_StatusTableRow *)0x0) {
              if ((pFVar15 == (FDS_CharacterLevelTableRow *)0x0) ||
                 (pFVar16 == (FDS_CharacterLevelTableRow *)0x0)) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1b8.SharedReferenceCount.ReferenceController);
                goto LAB_14bfd6bc0;
              }
              pFVar5->StatusIconID = pFVar11->ID_StatusIcon;
              pFVar5->StatusNameID = (pFVar11->ID_StatusName).ID;
              pFVar5->StatusDescID = (pFVar11->ID_StatusDesc).ID;
              pFVar5->IsUpagade = true;
              local_198.ArrayNum = (pFVar16->StatusType).ArrayNum;
              lVar19 = (longlong)local_198.ArrayNum;
              pFVar3 = (pFVar16->StatusType).AllocatorInstance.Data;
              local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_198.ArrayNum == 0) {
                local_198.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_198.ArrayNum,0,&local_198.AllocatorInstance,local_198.ArrayNum,
                           &local_198.ArrayMax);
                memcpy(local_198.AllocatorInstance.Data,pFVar3,lVar19 << 2);
              }
              uVar22 = GetCharLevelTableRowID(local_1c8,&local_198,EVar2);
              local_188.ArrayNum = (pFVar15->StatusType).ArrayNum;
              lVar19 = (longlong)local_188.ArrayNum;
              local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar3 = (pFVar15->StatusType).AllocatorInstance.Data;
              if (local_188.ArrayNum == 0) {
                local_188.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_188.ArrayNum,0,&local_188.AllocatorInstance,local_188.ArrayNum,
                           &local_188.ArrayMax);
                memcpy(local_188.AllocatorInstance.Data,pFVar3,lVar19 << 2);
              }
              uVar8 = GetCharLevelTableRowID(local_1c8,&local_188,EVar2);
              iVar18 = (pFVar16->StatusValue).ArrayNum;
              if ((iVar18 != 0) && ((pFVar15->StatusValue).ArrayNum != 0)) {
                if (uVar22 < 9999) {
                  uVar20 = 0;
                  if ((int)uVar22 < iVar18) {
                    uVar20 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar20 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar18 = *(int *)((pFVar16->StatusValue).AllocatorInstance.Data +
                                   (longlong)(int)uVar22 * 4);
                }
                else {
                  iVar18 = 0;
                }
                if ((pFVar5 == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar5->BeforeStatusValue = iVar18;
                if (uVar8 < 9999) {
                  uVar22 = 0;
                  if ((int)uVar8 < (pFVar15->StatusValue).ArrayNum) {
                    uVar22 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar22 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar18 = *(int *)((pFVar15->StatusValue).AllocatorInstance.Data +
                                   (longlong)(int)uVar8 * 4);
                }
                else {
                  iVar18 = 0;
                }
                if ((pFVar5 == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar5->AfterStatusValue = iVar18;
              }
              this = local_1c8;
              pUVar10 = NewObject<UDS_UserObjectListItem>((UObject *)local_1c8);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar10);
              }
              FVar21.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
              local_b8[0].Object = (FDS_ViewModelContext *)local_1b8.Object;
              local_b8[0].SharedReferenceCount.ReferenceController =
                   local_1b8.SharedReferenceCount.ReferenceController;
              if (local_1b8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1b8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UDS_UserObjectListItem::AddContext(pUVar10,local_b8);
              local_140 = pUVar10;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar10 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar10);
              }
              FDS_EntryBindingEventField::Add
                        (&this->EntryBindingEventField,
                         (TObjectPtr<UDS_UserObjectListItem>)&local_140);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar21.ReferenceController);
            TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
            uVar8 = local_1d4;
          } while( true );
        }
      }
    }
  }
  return;
}

