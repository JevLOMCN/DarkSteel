// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetCheckStateChangeEventField_WrapperImpl @ 14b6373c0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::SetCheckStateChangeEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  UDS_DungeonEvent *pUVar1;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast
              (&pUVar1->OnSelectedFinderLevel,*(int *)((longlong)param_1 + 0xf8));
    return;
  }
  return;
}

// SetbIsSelected_WrapperImpl @ 14b6373d0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetLevelText_WrapperImpl @ 14b6373e0

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::SetLevelText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LevelText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LevelText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa8),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6373f0

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_LevelSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_LevelSlot,0x100,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_LevelSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_LevelSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton;
}

// UDS_VM_Dungeon_RaidPartyFinder_LevelSlot @ 14b63c150

UDS_VM_Dungeon_RaidPartyFinder_LevelSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::UDS_VM_Dungeon_RaidPartyFinder_LevelSlot
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_LevelSlot__6B_;
  (this->LevelText).StringTableID = 0;
  (this->LevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelText).StringEnumTableNameID.Number = 0;
  (this->LevelText).DateTime.Ticks = 0;
  (this->LevelText).TimeSpan.Ticks = 0;
  (this->LevelText).TimeExpressionType = None;
  (this->LevelText).IsExpression = false;
  (this->LevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).UniqueString.Data.ArrayNum = 0;
  (this->LevelText).UniqueString.Data.ArrayMax = 0;
  (this->LevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).FormatArgs.ArrayNum = 0;
  (this->LevelText).FormatArgs.ArrayMax = 0;
  this->DungeonOpenLevel = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->LevelText).StringTableType = None;
  return this;
}

// UDS_VM_Dungeon_RaidPartyFinder_LevelSlot @ 14b63c1f0

UDS_VM_Dungeon_RaidPartyFinder_LevelSlot * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::UDS_VM_Dungeon_RaidPartyFinder_LevelSlot
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_LevelSlot__6B_;
  (this->LevelText).StringTableID = 0;
  (this->LevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->LevelText).StringEnumTableNameID.Number = 0;
  (this->LevelText).DateTime.Ticks = 0;
  (this->LevelText).TimeSpan.Ticks = 0;
  (this->LevelText).TimeExpressionType = None;
  (this->LevelText).IsExpression = false;
  (this->LevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).UniqueString.Data.ArrayNum = 0;
  (this->LevelText).UniqueString.Data.ArrayMax = 0;
  (this->LevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelText).FormatArgs.ArrayNum = 0;
  (this->LevelText).FormatArgs.ArrayMax = 0;
  this->DungeonOpenLevel = 0;
  (this->CheckStateChangeEventField).bIsActivate = false;
  (this->LevelText).StringTableType = None;
  return this;
}

// ~UDS_VM_Dungeon_RaidPartyFinder_LevelSlot @ 14b63d4c0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::~UDS_VM_Dungeon_RaidPartyFinder_LevelSlot
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_RaidPartyFinder_LevelSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->LevelText).FormatArgs.AllocatorInstance.Data,
             (this->LevelText).FormatArgs.ArrayNum);
  pFVar1 = (this->LevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63fa70

IClassDescriptor * __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::GetFieldNotificationDescriptor
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6408d0

UClass * __cdecl UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_RaidPartyFinder_LevelSlot",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_LevelSlot,0x100,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Dungeon_RaidPartyFinder_LevelSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_RaidPartyFinder_LevelSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_RaidPartyFinder_LevelSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_LevelSlot @ 14b640c60

void __cdecl
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::
StaticRegisterNativesUDS_VM_Dungeon_RaidPartyFinder_LevelSlot(void)

{
  return;
}

// BindModel @ 14be11280

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::BindModel(UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedFinderLevel,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Dungeon_RaidPartyFinder_LevelSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedFinderLevel,
               (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *)&stack0x00000010,(pmf_2d844aeb *)this);
  }
  return;
}

// OnCheckStateChangeEventField @ 14be2be90

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::OnCheckStateChangeEventField
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,FDS_WidgetEventField *param_1)

{
  UDS_DungeonEvent *pUVar1;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar1->OnSelectedFinderLevel,this->DungeonOpenLevel);
    return;
  }
  return;
}

// OnSelectedFinderLevel @ 14be33030

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::OnSelectedFinderLevel
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = this->DungeonOpenLevel == param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be33df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::OnSetViewModel
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FInstancedStruct *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FObjectPtr_u_0 FVar2;
  FName FVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_228 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_1f8;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  TSharedPtr<FDS_ViewModelContext_DungeonLevelInfo,1> local_1c8;
  FDS_Text local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_DungeonLevelInfo>(&local_1c8,&local_168);
  if (local_1c8.Object == (FDS_ViewModelContext_DungeonLevelInfo *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14be34066;
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::OnSetViewModel",0x38,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x16,L"levelContext is nullptr.");
    FVar8.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    this->DungeonOpenLevel = (int)(local_1c8.Object)->DungeonOpenLevel;
    this->bIsSelected = (local_1c8.Object)->bIsSelected;
    local_1e0 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
    local_1e8 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    local_1b8.StringTableType = None;
    local_1b8.StringTableID = 0;
    local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1b8.StringEnumTableNameID.Number = 0;
    local_1b8.TimeExpressionType = None;
    local_1b8.IsExpression = false;
    local_1b8.DateTime.Ticks = 0;
    local_1b8.TimeSpan.Ticks = 0;
    local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.UniqueString.Data.ArrayNum = 0;
    local_1b8.UniqueString.Data.ArrayMax = 0;
    local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.FormatArgs.ArrayNum = 0;
    local_1b8.FormatArgs.ArrayMax = 0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
    local_1f8.ArrayNum = iVar4 + 1;
    this_00 = (FInstancedStruct *)(local_1f8.AllocatorInstance.Data + (longlong)iVar4 * 0x28);
    FInstancedStruct::FInstancedStruct(this_00);
    pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar2 = pFVar6[1];
    this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
    this_00[1].StructMemory = (uchar *)FVar2;
    this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
    pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
    if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar7->Value = this->DungeonOpenLevel;
    }
    FDS_Text::SetTextFormatFromStringTable(&local_1b8,StringUi,0x9e3a,&local_1f8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
    if ((FDS_TextFormatArg *)local_1f8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    iVar4 = FFieldNotificationClassDescriptor::LevelText.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::LevelText.FieldName;
    FDS_Text::operator=(&this->LevelText,&local_1b8);
    local_1d8 = FVar3;
    local_1d0 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
               local_1b8.FormatArgs.ArrayNum);
    FVar8.Data = local_1b8.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1b8.FormatArgs.AllocatorInstance.Data);
      FVar8.Data = local_1b8.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_14be34066:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelected @ 14be4cb80

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::SetIsSelected
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetLevelText @ 14be4d5e0

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::SetLevelText
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::LevelText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::LevelText.FieldName;
  FDS_Text::operator=(&this->LevelText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14be55250

void __thiscall
UDS_VM_Dungeon_RaidPartyFinder_LevelSlot::UnbindModel
          (UDS_VM_Dungeon_RaidPartyFinder_LevelSlot *this)

{
  UDS_DungeonEvent *pUVar1;
  
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedFinderLevel,
               this);
    return;
  }
  return;
}

