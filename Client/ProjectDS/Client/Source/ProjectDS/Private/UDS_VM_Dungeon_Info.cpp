// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetDungeonNameText_WrapperImpl @ 14b634aa0

void __cdecl UDS_VM_Dungeon_Info::SetDungeonNameText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DungeonNameText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DungeonNameText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetExplanationText_WrapperImpl @ 14b634ab0

void __cdecl UDS_VM_Dungeon_Info::SetExplanationText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExplanationText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExplanationText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xf0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetRewardLimitCountText_WrapperImpl @ 14b634ac0

void __cdecl UDS_VM_Dungeon_Info::SetRewardLimitCountText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RewardLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RewardLimitCountText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x140),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x140);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x140) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetEnterLimitCountText_WrapperImpl @ 14b634ad0

void __cdecl UDS_VM_Dungeon_Info::SetEnterLimitCountText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::EnterLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::EnterLimitCountText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x150),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x150);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x150) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetOpenPlayerLevelText_WrapperImpl @ 14b634ae0

void __cdecl UDS_VM_Dungeon_Info::SetOpenPlayerLevelText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x160),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x160);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x160) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x168) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetListIconID_WrapperImpl @ 14b634af0

void __cdecl UDS_VM_Dungeon_Info::SetListIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::ListIconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ListIconID.FieldName;
  if (*(int *)((longlong)param_1 + 0x1c0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x1c0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMaxMemberCount_WrapperImpl @ 14b634b00

void __cdecl UDS_VM_Dungeon_Info::SetMaxMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (*(int *)((longlong)param_1 + 0x1c4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0x1c4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b634b10

UClass * __cdecl UDS_VM_Dungeon_Info::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Info",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Info,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton;
}

// UDS_VM_Dungeon_Info @ 14b63acd0

UDS_VM_Dungeon_Info * __thiscall
UDS_VM_Dungeon_Info::UDS_VM_Dungeon_Info(UDS_VM_Dungeon_Info *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DungeonNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Info__6B_;
  (this->DungeonNameText).StringTableID = 0;
  (this->DungeonNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonNameText).StringEnumTableNameID.Number = 0;
  (this->DungeonNameText).DateTime.Ticks = 0;
  (this->DungeonNameText).TimeSpan.Ticks = 0;
  (this->DungeonNameText).TimeExpressionType = None;
  (this->DungeonNameText).IsExpression = false;
  (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonNameText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).FormatArgs.ArrayNum = 0;
  (this->DungeonNameText).FormatArgs.ArrayMax = 0;
  (this->ExplanationText).StringTableType = None;
  (this->ExplanationText).StringTableID = 0;
  (this->ExplanationText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplanationText).StringEnumTableNameID.Number = 0;
  (this->ExplanationText).DateTime.Ticks = 0;
  (this->ExplanationText).TimeSpan.Ticks = 0;
  (this->ExplanationText).TimeExpressionType = None;
  (this->ExplanationText).IsExpression = false;
  (this->ExplanationText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationText).UniqueString.Data.ArrayNum = 0;
  (this->ExplanationText).UniqueString.Data.ArrayMax = 0;
  (this->ExplanationText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationText).FormatArgs.ArrayNum = 0;
  (this->ExplanationText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RewardLimitCountText);
  FText::FText(&this->EnterLimitCountText);
  FText::FText(&this->OpenPlayerLevelText);
  (this->RequestQuestText).StringTableType = None;
  (this->RequestQuestText).StringTableID = 0;
  (this->RequestQuestText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequestQuestText).StringEnumTableNameID.Number = 0;
  (this->RequestQuestText).DateTime.Ticks = 0;
  (this->RequestQuestText).TimeSpan.Ticks = 0;
  (this->RequestQuestText).TimeExpressionType = None;
  (this->RequestQuestText).IsExpression = false;
  (this->RequestQuestText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RequestQuestText).UniqueString.Data.ArrayNum = 0;
  (this->RequestQuestText).UniqueString.Data.ArrayMax = 0;
  (this->RequestQuestText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQuestText).FormatArgs.ArrayNum = 0;
  (this->RequestQuestText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_Dungeon_Info @ 14b63ae70

UDS_VM_Dungeon_Info * __thiscall
UDS_VM_Dungeon_Info::UDS_VM_Dungeon_Info(UDS_VM_Dungeon_Info *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DungeonNameText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Info__6B_;
  (this->DungeonNameText).StringTableID = 0;
  (this->DungeonNameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DungeonNameText).StringEnumTableNameID.Number = 0;
  (this->DungeonNameText).DateTime.Ticks = 0;
  (this->DungeonNameText).TimeSpan.Ticks = 0;
  (this->DungeonNameText).TimeExpressionType = None;
  (this->DungeonNameText).IsExpression = false;
  (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).UniqueString.Data.ArrayNum = 0;
  (this->DungeonNameText).UniqueString.Data.ArrayMax = 0;
  (this->DungeonNameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DungeonNameText).FormatArgs.ArrayNum = 0;
  (this->DungeonNameText).FormatArgs.ArrayMax = 0;
  (this->ExplanationText).StringTableType = None;
  (this->ExplanationText).StringTableID = 0;
  (this->ExplanationText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ExplanationText).StringEnumTableNameID.Number = 0;
  (this->ExplanationText).DateTime.Ticks = 0;
  (this->ExplanationText).TimeSpan.Ticks = 0;
  (this->ExplanationText).TimeExpressionType = None;
  (this->ExplanationText).IsExpression = false;
  (this->ExplanationText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationText).UniqueString.Data.ArrayNum = 0;
  (this->ExplanationText).UniqueString.Data.ArrayMax = 0;
  (this->ExplanationText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExplanationText).FormatArgs.ArrayNum = 0;
  (this->ExplanationText).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RewardLimitCountText);
  FText::FText(&this->EnterLimitCountText);
  FText::FText(&this->OpenPlayerLevelText);
  (this->RequestQuestText).StringTableType = None;
  (this->RequestQuestText).StringTableID = 0;
  (this->RequestQuestText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RequestQuestText).StringEnumTableNameID.Number = 0;
  (this->RequestQuestText).DateTime.Ticks = 0;
  (this->RequestQuestText).TimeSpan.Ticks = 0;
  (this->RequestQuestText).TimeExpressionType = None;
  (this->RequestQuestText).IsExpression = false;
  (this->RequestQuestText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RequestQuestText).UniqueString.Data.ArrayNum = 0;
  (this->RequestQuestText).UniqueString.Data.ArrayMax = 0;
  (this->RequestQuestText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQuestText).FormatArgs.ArrayNum = 0;
  (this->RequestQuestText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Dungeon_Info @ 14b63cc50

void __thiscall UDS_VM_Dungeon_Info::~UDS_VM_Dungeon_Info(UDS_VM_Dungeon_Info *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Info__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Lv).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Lv).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RequestQuestText).FormatArgs.AllocatorInstance.Data,
             (this->RequestQuestText).FormatArgs.ArrayNum);
  pFVar1 = (this->RequestQuestText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequestQuestText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->OpenPlayerLevelText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->EnterLimitCountText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->RewardLimitCountText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ExplanationText).FormatArgs.AllocatorInstance.Data,
             (this->ExplanationText).FormatArgs.ArrayNum);
  pFVar1 = (this->ExplanationText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExplanationText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DungeonNameText).FormatArgs.AllocatorInstance.Data,
             (this->DungeonNameText).FormatArgs.ArrayNum);
  pFVar1 = (this->DungeonNameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DungeonNameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f6f0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Info::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Info *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Info::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6402d0

UClass * __cdecl UDS_VM_Dungeon_Info::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Info",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Info,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Info.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Info @ 14b640b50

void __cdecl UDS_VM_Dungeon_Info::StaticRegisterNativesUDS_VM_Dungeon_Info(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_Info_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b641730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Dungeon_Info::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Info__6B_;
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
    FText::FText((FText *)(this + 2));
    FText::FText((FText *)&this[2]._padding_);
    FText::FText((FText *)&this[2]._padding_);
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined1 *)&this[2].VMName.Number = 2;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x27d9;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execIsLockByQuest @ 14b641bd0

void __cdecl UDS_VM_Dungeon_Info::execIsLockByQuest(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLockByQuest((UDS_VM_Dungeon_Info *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsLockDungeon @ 14b641c10

void __cdecl UDS_VM_Dungeon_Info::execIsLockDungeon(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsLockDungeon((UDS_VM_Dungeon_Info *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// IsLockByQuest @ 14be8f440

bool __thiscall UDS_VM_Dungeon_Info::IsLockByQuest(UDS_VM_Dungeon_Info *this)

{
  bool bVar1;
  UDS_DungeonManager *this_00;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    return true;
  }
  bVar1 = UDS_DungeonManager::IsLockByQuest(this_00,this->DungeonID);
  return bVar1;
}

// IsLockDungeon @ 14be8f480

bool __thiscall UDS_VM_Dungeon_Info::IsLockDungeon(UDS_VM_Dungeon_Info *this)

{
  bool bVar1;
  UDS_DungeonManager *this_00;
  
  this_00 = UDS_DungeonManager::GetInst();
  if (this_00 == (UDS_DungeonManager *)0x0) {
    return true;
  }
  bVar1 = UDS_DungeonManager::IsLockDungeon(this_00,this->DungeonID);
  return bVar1;
}

// OnSetViewModel @ 14be9ddb0

void __thiscall
UDS_VM_Dungeon_Info::OnSetViewModel
          (UDS_VM_Dungeon_Info *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Dungeon>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_Dungeon *)0x0) {
    this->DungeonID = (int)(local_28.Object)->DungeonId;
    UpdateDungeonInfo(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDungeonNameText @ 14beaedb0

void __thiscall UDS_VM_Dungeon_Info::SetDungeonNameText(UDS_VM_Dungeon_Info *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DungeonNameText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DungeonNameText.FieldName;
  FDS_Text::operator=(&this->DungeonNameText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetEnterLimitCountText @ 14beaf0a0

void __thiscall
UDS_VM_Dungeon_Info::SetEnterLimitCountText(UDS_VM_Dungeon_Info *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::EnterLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::EnterLimitCountText.FieldName;
  bVar5 = FText::IdenticalTo(&this->EnterLimitCountText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->EnterLimitCountText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->EnterLimitCountText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->EnterLimitCountText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetExplanationText @ 14beaf3d0

void __thiscall UDS_VM_Dungeon_Info::SetExplanationText(UDS_VM_Dungeon_Info *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ExplanationText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ExplanationText.FieldName;
  FDS_Text::operator=(&this->ExplanationText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetListIconID @ 14beb24b0

void __thiscall UDS_VM_Dungeon_Info::SetListIconID(UDS_VM_Dungeon_Info *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ListIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ListIconID.FieldName;
  if (this->ListIconID != *param_1) {
    this->ListIconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxMemberCount @ 14beb2d80

void __thiscall UDS_VM_Dungeon_Info::SetMaxMemberCount(UDS_VM_Dungeon_Info *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (this->MaxMemberCount != *param_1) {
    this->MaxMemberCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetOpenPlayerLevelText @ 14beb39c0

void __thiscall
UDS_VM_Dungeon_Info::SetOpenPlayerLevelText(UDS_VM_Dungeon_Info *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.FieldName;
  bVar5 = FText::IdenticalTo(&this->OpenPlayerLevelText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->OpenPlayerLevelText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->OpenPlayerLevelText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->OpenPlayerLevelText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetRequestQuestText @ 14beb3f30

void __thiscall
UDS_VM_Dungeon_Info::SetRequestQuestText(UDS_VM_Dungeon_Info *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::RequestQuestText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::RequestQuestText.FieldName;
  FDS_Text::operator=(&this->RequestQuestText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRewardLimitCountText @ 14beb4020

void __thiscall
UDS_VM_Dungeon_Info::SetRewardLimitCountText(UDS_VM_Dungeon_Info *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::RewardLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RewardLimitCountText.FieldName;
  bVar5 = FText::IdenticalTo(&this->RewardLimitCountText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->RewardLimitCountText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RewardLimitCountText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RewardLimitCountText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// UpdateDungeonInfo @ 14bebd700

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_Info::UpdateDungeonInfo(UDS_VM_Dungeon_Info *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  FText *pFVar7;
  FDS_QuestBaseTableRow *pFVar8;
  long64 lVar9;
  FDS_DungeonTypeDataTableRow *pFVar10;
  FDS_DungeonLevelGroupTableRow *pFVar11;
  undefined1 local_res8 [8];
  FDS_DungeonTypeDataTableRow *local_res10;
  FName local_c8;
  int local_c0;
  TSharedPtr<FCulture,1> local_b8;
  FText local_a8;
  FDS_Text local_98;
  
  pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
  local_98.StringTableType = None;
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
  FDS_Text::SetTextFromStringID(&local_98,&pFVar6->ID_Name);
  iVar5 = FFieldNotificationClassDescriptor::DungeonNameText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DungeonNameText.FieldName;
  FDS_Text::operator=(&this->DungeonNameText,&local_98);
  local_c8 = FVar3;
  local_c0 = iVar5;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
             local_98.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
  }
  if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
  }
  local_98.StringTableType = None;
  local_98.StringTableID = 0;
  local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_98.StringEnumTableNameID.Number = 0;
  local_98.DateTime.Ticks = 0;
  local_98.TimeSpan.Ticks = 0;
  local_98.TimeExpressionType = None;
  local_98.IsExpression = false;
  local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.UniqueString.Data.ArrayNum = 0;
  local_98.UniqueString.Data.ArrayMax = 0;
  local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.FormatArgs.ArrayNum = 0;
  local_98.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_98,&pFVar6->ID_Explanation);
  iVar5 = FFieldNotificationClassDescriptor::ExplanationText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ExplanationText.FieldName;
  FDS_Text::operator=(&this->ExplanationText,&local_98);
  local_c8 = FVar3;
  local_c0 = iVar5;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
             local_98.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
  }
  if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
  }
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FText::AsNumber(&local_a8,pFVar6->OpenPlayerLevel,(FNumberFormattingOptions *)0x0,
                           &local_b8);
  iVar5 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::OpenPlayerLevelText.FieldName;
  bVar4 = FText::IdenticalTo(&this->OpenPlayerLevelText,pFVar7,None);
  if (!bVar4) {
    pIVar1 = (pFVar7->TextData).Reference;
    pIVar2 = (this->OpenPlayerLevelText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->OpenPlayerLevelText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->OpenPlayerLevelText).Flags = pFVar7->Flags;
    local_c8 = FVar3;
    local_c0 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  pFVar8 = FDS_QuestBaseTableRow::GetRef((longlong)pFVar6->ID_RequestQuest,true);
  lVar9 = (**(code **)(pFVar8->ID_QuestTitleId)._padding_)();
  local_98.StringTableType = None;
  local_98.StringTableID = 0;
  local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_98.StringEnumTableNameID.Number = 0;
  local_98.TimeExpressionType = None;
  local_98.IsExpression = false;
  local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.UniqueString.Data.ArrayNum = 0;
  local_98.UniqueString.Data.ArrayMax = 0;
  local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.FormatArgs.ArrayNum = 0;
  local_98.FormatArgs.ArrayMax = 0;
  local_98.DateTime.Ticks = 0;
  local_98.TimeSpan.Ticks = 0;
  FDS_Text::SetTextFromStringTable(&local_98,StringQuest,lVar9);
  iVar5 = FFieldNotificationClassDescriptor::RequestQuestText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RequestQuestText.FieldName;
  FDS_Text::operator=(&this->RequestQuestText,&local_98);
  local_c8 = FVar3;
  local_c0 = iVar5;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
             local_98.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_98.FormatArgs.AllocatorInstance.Data);
  }
  if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
  }
  pFVar10 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar6->DungeonType,true);
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res10 = pFVar10;
  pFVar7 = FText::AsNumber(&local_a8,pFVar10->RewardLimitCount,(FNumberFormattingOptions *)0x0,
                           &local_b8);
  iVar5 = FFieldNotificationClassDescriptor::RewardLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::RewardLimitCountText.FieldName;
  bVar4 = FText::IdenticalTo(&this->RewardLimitCountText,pFVar7,None);
  if (!bVar4) {
    pIVar1 = (pFVar7->TextData).Reference;
    pIVar2 = (this->RewardLimitCountText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->RewardLimitCountText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->RewardLimitCountText).Flags = pFVar7->Flags;
    local_c8 = FVar3;
    local_c0 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    pFVar10 = local_res10;
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  local_b8.Object = (FCulture *)0x0;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7 = FText::AsNumber(&local_a8,pFVar10->EnterLimitCount,(FNumberFormattingOptions *)0x0,
                           &local_b8);
  iVar5 = FFieldNotificationClassDescriptor::EnterLimitCountText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::EnterLimitCountText.FieldName;
  bVar4 = FText::IdenticalTo(&this->EnterLimitCountText,pFVar7,None);
  if (!bVar4) {
    pIVar1 = (pFVar7->TextData).Reference;
    pIVar2 = (this->EnterLimitCountText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->EnterLimitCountText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->EnterLimitCountText).Flags = pFVar7->Flags;
    local_c8 = FVar3;
    local_c0 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  pFVar11 = FDS_DungeonLevelGroupTableRow::GetRef((longlong)pFVar6->LevelGroup,true);
  iVar5 = FFieldNotificationClassDescriptor::ListIconID.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ListIconID.FieldName;
  if (this->ListIconID != pFVar11->ID_ListIcon) {
    this->ListIconID = pFVar11->ID_ListIcon;
    local_c0 = iVar5;
    local_c8 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  iVar5 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar6->DungeonType);
  local_c0 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (this->MaxMemberCount != iVar5) {
    this->MaxMemberCount = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  local_c0 = FFieldNotificationClassDescriptor::IsLockDungeon.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::IsLockDungeon.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  local_c0 = FFieldNotificationClassDescriptor::IsLockByQuest.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::IsLockByQuest.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  return;
}

