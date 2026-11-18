// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// SetTitleText_WrapperImpl @ 14b611a50

void __cdecl UDS_VM_Chat_GroupMembers::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMemberCount_WrapperImpl @ 14b611a60

void __cdecl UDS_VM_Chat_GroupMembers::SetMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  SetMemberCount(param_1,*(int *)param_2);
  return;
}

// SetMaxMemberCount_WrapperImpl @ 14b611a70

void __cdecl UDS_VM_Chat_GroupMembers::SetMaxMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxMemberCount(param_1,*(int *)param_2);
  return;
}

// SetMaxMemberVisibility_WrapperImpl @ 14b611a80

void __cdecl
UDS_VM_Chat_GroupMembers::SetMaxMemberVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxMemberVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetCancelVisibility_WrapperImpl @ 14b611a90

void __cdecl UDS_VM_Chat_GroupMembers::SetCancelVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetCancelVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetClickOk_WrapperImpl @ 14b611aa0

void __cdecl UDS_VM_Chat_GroupMembers::SetClickOk_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  FName FStack_18;
  int iStack_10;
  
  if (*(char *)((longlong)param_1 + 0x268) == '\x01') {
    if (*(char *)((longlong)param_2 + 3) != '\0') {
      return;
    }
    this = UDS_ChattingManager::GetInst();
    if (this != (UDS_ChattingManager *)0x0) {
      UDS_ChattingManager::RequestChangeGroupChatRoomOwner
                (this,(FString *)((longlong)param_1 + 600),*(long64 *)((longlong)param_1 + 0x270),
                 true);
    }
    *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  }
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            (FFieldNotificationClassDescriptor::CloseMySelf.FieldName,&FStack_18);
  return;
}

// SetClickCancel_WrapperImpl @ 14b611ab0

void __cdecl UDS_VM_Chat_GroupMembers::SetClickCancel_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x150) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbEnableOkButton_WrapperImpl @ 14b611ac0

void __cdecl UDS_VM_Chat_GroupMembers::SetbEnableOkButton_WrapperImpl(void *param_1,void *param_2)

{
  SetEnableOkButton(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b611ad0

UClass * __cdecl UDS_VM_Chat_GroupMembers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMembers",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMembers,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupMembers>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMembers>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton;
}

// UDS_VM_Chat_GroupMembers @ 14b6151e0

UDS_VM_Chat_GroupMembers * __thiscall
UDS_VM_Chat_GroupMembers::UDS_VM_Chat_GroupMembers
          (UDS_VM_Chat_GroupMembers *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMembers__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->FixedText_Participants).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Participants).StringEnumTableNameID.Number = 0;
  (this->FixedText_Participants).DateTime.Ticks = 0;
  (this->FixedText_Participants).TimeSpan.Ticks = 0;
  (this->FixedText_Participants).TimeExpressionType = None;
  (this->FixedText_Participants).IsExpression = false;
  (this->FixedText_Participants).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Participants).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Participants).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Participants).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Participants).FormatArgs.ArrayNum = 0;
  (this->FixedText_Participants).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->ChangeGroupOwner = false;
  this->PlayerUID = 0;
  (this->TitleText).StringTableType = None;
  (this->FixedText_Participants).StringTableType = StringUi;
  (this->FixedText_Participants).StringTableID = 0xc5ca;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// UDS_VM_Chat_GroupMembers @ 14b6153d0

UDS_VM_Chat_GroupMembers * __thiscall
UDS_VM_Chat_GroupMembers::UDS_VM_Chat_GroupMembers
          (UDS_VM_Chat_GroupMembers *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMembers__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickOk)._padding_ = '\0';
  (this->ClickOk).bIsCustomSelected = false;
  (this->ClickOk).bIsLacked = false;
  (this->ClickOk).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOk).Delegate = 0;
  *(undefined8 *)&(this->ClickOk).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOk).Delegate.field_0x10 = 0;
  (this->ClickCancel)._padding_ = '\0';
  (this->ClickCancel).bIsCustomSelected = false;
  (this->ClickCancel).bIsLacked = false;
  (this->ClickCancel).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancel).Delegate = 0;
  *(undefined8 *)&(this->ClickCancel).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancel).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->FixedText_Participants).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Participants).StringEnumTableNameID.Number = 0;
  (this->FixedText_Participants).DateTime.Ticks = 0;
  (this->FixedText_Participants).TimeSpan.Ticks = 0;
  (this->FixedText_Participants).TimeExpressionType = None;
  (this->FixedText_Participants).IsExpression = false;
  (this->FixedText_Participants).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Participants).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Participants).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Participants).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Participants).FormatArgs.ArrayNum = 0;
  (this->FixedText_Participants).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_OK).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_OK).DateTime.Ticks = 0;
  (this->FixedText_Btn_OK).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_OK).TimeExpressionType = None;
  (this->FixedText_Btn_OK).IsExpression = false;
  (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_OK).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_OK).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->ChangeGroupOwner = false;
  this->PlayerUID = 0;
  (this->TitleText).StringTableType = None;
  (this->FixedText_Participants).StringTableType = StringUi;
  (this->FixedText_Participants).StringTableID = 0xc5ca;
  (this->FixedText_Btn_OK).StringTableType = StringUi;
  (this->FixedText_Btn_OK).StringTableID = 0x65;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_Chat_GroupMembers @ 14b6170e0

void __thiscall UDS_VM_Chat_GroupMembers::~UDS_VM_Chat_GroupMembers(UDS_VM_Chat_GroupMembers *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMembers__6B_;
  pFVar1 = (this->GroupID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_OK).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_OK).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_OK).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Participants).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Participants).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Participants).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Participants).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancel).Delegate);
  pvVar2 = *(void **)&(this->ClickCancel).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancel).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOk).Delegate);
  pvVar2 = *(void **)&(this->ClickOk).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOk).Delegate);
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619080

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupMembers::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupMembers *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupMembers::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6198c0

UClass * __cdecl UDS_VM_Chat_GroupMembers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMembers",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMembers,0x278,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupMembers>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMembers>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMembers.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupMembers @ 14b61a200

void __cdecl UDS_VM_Chat_GroupMembers::StaticRegisterNativesUDS_VM_Chat_GroupMembers(void)

{
  return;
}

// BindModel @ 14bd48020

void __thiscall UDS_VM_Chat_GroupMembers::BindModel(UDS_VM_Chat_GroupMembers *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRefreshChatRoom,this
              );
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupMembers>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnRefreshChatRoom,(UDS_VM_Chat_GroupMembers *)&stack0x00000010,
               (pmf_49bccf64 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedGroupMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupMembers>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedGroupMember,(UDS_VM_Chat_GroupMembers *)&stack0x00000010,
               (pmf_8b78c277 *)this);
  }
  return;
}

// InitViewModel @ 14bd69950

void __thiscall UDS_VM_Chat_GroupMembers::InitViewModel(UDS_VM_Chat_GroupMembers *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_CloseInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->KeyActionType = IA_UI_Escape;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_CloseInputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickCancel @ 14bd724e0

void __thiscall
UDS_VM_Chat_GroupMembers::OnClickCancel
          (UDS_VM_Chat_GroupMembers *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickOk @ 14bd73b90

void __thiscall
UDS_VM_Chat_GroupMembers::OnClickOk(UDS_VM_Chat_GroupMembers *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  FName local_18;
  int local_10;
  
  if (this->ChangeGroupOwner == true) {
    if (param_1->bIsCustomDisabled != false) {
      return;
    }
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 != (UDS_ChattingManager *)0x0) {
      UDS_ChattingManager::RequestChangeGroupChatRoomOwner
                (this_00,&this->GroupID,this->PlayerUID,true);
    }
    (this->CloseMySelf).bIsActivate = true;
  }
  else {
    (this->CloseMySelf).bIsActivate = true;
  }
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))
            (FFieldNotificationClassDescriptor::CloseMySelf.FieldName,&local_18);
  return;
}

// OnRefreshChatRoom @ 14bd7c570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMembers::OnRefreshChatRoom(UDS_VM_Chat_GroupMembers *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_ChatConversation,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_VM_Chat_GroupMembers::OnRefreshChatRoom",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0xc9,L"chattingManager == nullptr");
    if ((void *)local_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChatConversation(this_00,&local_268,param_1);
  if (local_268.Object == (FDS_ChatConversation *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupMembers::OnRefreshChatRoom",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0xd0,L"chatConversation.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    goto LAB_14bd7c73e;
  }
  if ((local_268.Object == (FDS_ChatConversation *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->GroupID).Data.ArrayNum;
  iVar1 = ((local_268.Object)->GroupID).Data.ArrayNum;
  if (iVar4 == iVar1) {
    if (1 < iVar4) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->GroupID).Data.AllocatorInstance.Data,
                         (wchar_t *)((local_268.Object)->GroupID).Data.AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
      goto LAB_14bd7c72f;
    }
  }
  else {
    bVar3 = iVar4 + iVar1 == 1;
LAB_14bd7c72f:
    if (!bVar3) goto LAB_14bd7c73e;
  }
  UpdateGroupMembers(this);
LAB_14bd7c73e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  return;
}

// OnSelectedGroupMember @ 14bd7d3a0

void __thiscall
UDS_VM_Chat_GroupMembers::OnSelectedGroupMember(UDS_VM_Chat_GroupMembers *this,long64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  FSharedReferencer<1> FVar11;
  undefined8 *puVar12;
  FDS_ViewModelContext_ChatGroupMember *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_ChatGroupMember,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  if (this->ChangeGroupOwner != true) {
    return;
  }
  this->PlayerUID = param_1;
  iVar2 = FFieldNotificationClassDescriptor::bEnableOkButton.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::bEnableOkButton.FieldName;
  if (param_1 < 1) {
    if (this->bEnableOkButton == false) goto LAB_14bd7d43c;
    this->bEnableOkButton = false;
    pFVar9 = &local_68;
    local_68 = FVar5;
    local_60 = iVar2;
  }
  else {
    if (this->bEnableOkButton == true) goto LAB_14bd7d43c;
    this->bEnableOkButton = true;
    pFVar9 = &local_78;
    local_78 = FVar5;
    local_70 = iVar2;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar9);
LAB_14bd7d43c:
  pTVar7 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
  pFVar14 = (pTVar7->AllocatorInstance).Data;
  local_res20 = pTVar7->ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  pFVar1 = pFVar14 + uVar8 * 8;
  do {
    if (pTVar7->ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    lVar3 = *(longlong *)pFVar14;
    if (lVar3 != 0) {
      iVar2 = *(int *)(lVar3 + 0xa0);
      puVar10 = *(undefined8 **)(lVar3 + 0x98);
      puVar12 = puVar10 + (longlong)iVar2 * 2;
      while( true ) {
        if (*(int *)(lVar3 + 0xa0) != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (puVar10 == puVar12) {
          pFVar13 = (FDS_ViewModelContext_ChatGroupMember *)0x0;
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14bd7d539;
        }
        local_48.Object = (FDS_ViewModelContext *)*puVar10;
        local_48.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar10[1];
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SafeCast<FDS_ViewModelContext_ChatGroupMember>(&local_58,&local_48);
        FVar11.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
        pFVar13 = local_58.Object;
        if (local_58.Object != (FDS_ViewModelContext_ChatGroupMember *)0x0) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        puVar10 = puVar10 + 2;
      }
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FDS_ViewModelContext_ChatGroupMember *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pFVar13 == (FDS_ViewModelContext_ChatGroupMember *)0x0) {
LAB_14bd7d539:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar13->IsSelected = pFVar13->PlayerUID == this->PlayerUID;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
    }
    uVar8 = (ulonglong)local_res20;
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// OnSetViewModel @ 14bd81080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMembers::OnSetViewModel
          (UDS_VM_Chat_GroupMembers *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  int iVar7;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_168;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ChatGroup>(&local_168,&local_148);
  if (local_168.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupMembers::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x17,L"chatGroupContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = ((local_168.Object)->GroupID).Data.ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (&this->GroupID,(wchar_t *)((local_168.Object)->GroupID).Data.AllocatorInstance.Data,
               iVar7);
    if (local_168.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->ChangeGroupOwner = (local_168.Object)->ChangeGroupOwner;
    iVar7 = FFieldNotificationClassDescriptor::MaxMemberVisibility.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::MaxMemberVisibility.FieldName;
    if (this->MaxMemberVisibility != SelfHitTestInvisible) {
      this->MaxMemberVisibility = SelfHitTestInvisible;
      local_150 = iVar7;
      local_158 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    UpdateGroupMembers(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCancelVisibility @ 14bd86e90

void __thiscall
UDS_VM_Chat_GroupMembers::SetCancelVisibility
          (UDS_VM_Chat_GroupMembers *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CancelVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName;
  if (this->CancelVisibility != param_1) {
    this->CancelVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEnableOkButton @ 14bd882b0

void __thiscall
UDS_VM_Chat_GroupMembers::SetEnableOkButton(UDS_VM_Chat_GroupMembers *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bEnableOkButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bEnableOkButton.FieldName;
  if (this->bEnableOkButton != param_1) {
    this->bEnableOkButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxMemberCount @ 14bd8a2b0

void __thiscall
UDS_VM_Chat_GroupMembers::SetMaxMemberCount(UDS_VM_Chat_GroupMembers *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (this->MaxMemberCount != param_1) {
    this->MaxMemberCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxMemberVisibility @ 14bd8a300

void __thiscall
UDS_VM_Chat_GroupMembers::SetMaxMemberVisibility
          (UDS_VM_Chat_GroupMembers *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxMemberVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxMemberVisibility.FieldName;
  if (this->MaxMemberVisibility != param_1) {
    this->MaxMemberVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMemberCount @ 14bd8a350

void __thiscall UDS_VM_Chat_GroupMembers::SetMemberCount(UDS_VM_Chat_GroupMembers *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (this->MemberCount != param_1) {
    this->MemberCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTitleText @ 14bd8ade0

void __thiscall
UDS_VM_Chat_GroupMembers::SetTitleText(UDS_VM_Chat_GroupMembers *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bd8c160

void __thiscall UDS_VM_Chat_GroupMembers::UnbindModel(UDS_VM_Chat_GroupMembers *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRefreshChatRoom,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedGroupMember,
               this);
  }
  return;
}

// UpdateGroupMembers @ 14bd90c40

void __thiscall UDS_VM_Chat_GroupMembers::UpdateGroupMembers(UDS_VM_Chat_GroupMembers *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FName FVar6;
  FDS_ViewModelContext_ChatGroupMember *pFVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  int iVar10;
  UDS_ChattingManager *this_00;
  UObject *pUVar11;
  UDS_UserObjectListItem *this_01;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *pTVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *local_res20;
  TSharedPtr<FDS_ChatRoomData,1> local_148;
  UDS_UserObjectListItem *local_138;
  longlong *local_130;
  FName local_128;
  int local_120;
  FName local_118;
  int local_110;
  FName local_108;
  int local_100;
  TSharedPtr<FDS_ViewModelContext_ChatGroupMember,1> local_f8;
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSharedPtr<FDS_ChatRoomData,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78 [2];
  undefined4 local_4c;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    plVar19 = &this->_padding_;
  }
  else {
    UDS_ChattingManager::GetChatRoomDataByGroupID(this_00,&local_148,&this->GroupID);
    if (local_148.Object == (FDS_ChatRoomData *)0x0) {
      plVar19 = &this->_padding_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
    }
    else {
      local_88.Object = local_148.Object;
      local_88.SharedReferenceCount.ReferenceController =
           local_148.SharedReferenceCount.ReferenceController;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UpdateMode(this,&local_88);
      if ((local_148.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
      plVar19 = &this->_padding_;
      pTVar15 = &(local_148.Object)->GroupMembers;
      iVar10 = *(int *)&((local_148.Object)->GroupMembers).field_0x8 -
               *(int *)&((local_148.Object)->GroupMembers).field_0x34;
      local_res20 = pTVar15;
      local_130 = plVar19;
      if (this->MemberCount != iVar10) {
        this->MemberCount = iVar10;
        local_120 = iVar13;
        local_128 = FVar6;
        (**(code **)(*plVar19 + 0x38))(plVar19,&local_128);
      }
      iVar10 = DS_CommonDataHelper::ChattingMaxGroupMemberCount();
      iVar13 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
      FVar6 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
      if (this->MaxMemberCount != iVar10) {
        this->MaxMemberCount = iVar10;
        local_110 = iVar13;
        local_118 = FVar6;
        (**(code **)(*plVar19 + 0x38))(plVar19,&local_118);
      }
      iVar13 = *(int *)&((local_148.Object)->GroupMembers).field_0x28;
      puVar1 = &((local_148.Object)->GroupMembers).field_0x10;
      uStack_dc = 1;
      iStack_e0 = 0;
      local_c8 = 0;
      iStack_cc = 0;
      if (iVar13 != 0) {
        puVar18 = *(uint **)&((local_148.Object)->GroupMembers).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar16 = *puVar18;
        local_c8 = 0;
        while (uVar16 == 0) {
          lVar12 = (longlong)iStack_e0;
          local_c8 = local_c8 + 0x20;
          iStack_e0 = iStack_e0 + 1;
          iStack_cc = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0)
          goto LAB_14bd90e1d;
          uVar16 = puVar18[lVar12 + 1];
        }
        uStack_dc = -uVar16 & uVar16;
        uVar2 = (ulonglong)uStack_dc * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res10 = (int)lVar12;
        iStack_cc = local_c8 + -1 + local_res10;
        if (iVar13 < iStack_cc) {
          iStack_cc = iVar13;
        }
      }
LAB_14bd90e1d:
      uVar16 = *(uint *)&((local_148.Object)->GroupMembers).field_0x28;
      uStack_c4 = local_4c;
      iStack_c0 = *(int *)&((local_148.Object)->GroupMembers).field_0x8 -
                  *(int *)&((local_148.Object)->GroupMembers).field_0x34;
      uVar14 = uVar16 & 0xffffffe0;
      uStack_d0 = 0xffffffff;
      TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
      TStack_b0.CurrentBitIndex = iStack_cc;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar16 >> 5;
      TStack_b0._28_4_ = local_4c;
      TStack_b0.BaseBitIndex = local_c8;
      uStack_90 = CONCAT44(uStack_bc,iStack_c0);
      local_e8 = pTVar15;
      local_d8 = puVar1;
      local_b8 = pTVar15;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (((int)uVar16 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)&((local_148.Object)->GroupMembers).field_0x28;
      if (uVar16 != uVar3) {
        puVar17 = *(undefined1 **)&((local_148.Object)->GroupMembers).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = puVar1;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
        while (uVar16 == 0) {
          lVar12 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar16 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14bd90f10;
          uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_res18 = (int)lVar12;
        uVar16 = local_res18 + -1 + uVar14;
        if ((int)uVar3 < (int)uVar16) {
          uVar16 = uVar3;
        }
      }
LAB_14bd90f10:
      while( true ) {
        pTVar15 = local_b8;
        if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        plVar19 = local_130;
        if (((TStack_b0.CurrentBitIndex == uVar16) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar15 == local_res20)) break;
        lVar12 = *(longlong *)pTVar15;
        pTVar4 = *(TReferenceControllerBase<1> **)
                  ((longlong)TStack_b0.CurrentBitIndex * 0x20 + 0x10 + lVar12);
        lVar12 = *(longlong *)((longlong)TStack_b0.CurrentBitIndex * 0x20 + 8 + lVar12);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar12 != 0) {
          pUVar11 = GetTransientPackageAsObject();
          this_01 = NewObject<UDS_UserObjectListItem>(pUVar11);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          MakeContext<FDS_ViewModelContext_ChatGroupMember>(&local_f8);
          pFVar7 = local_f8.Object;
          if ((local_f8.Object == (FDS_ViewModelContext_ChatGroupMember *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)&pFVar7->_padding_ = 0x12d;
          iVar10 = (this->GroupID).Data.ArrayNum;
          iVar13 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar13 = 0;
          }
          ::FString::AssignRange
                    (&pFVar7->GroupID,(wchar_t *)(this->GroupID).Data.AllocatorInstance.Data,iVar13)
          ;
          FVar8.ReferenceController = local_f8.SharedReferenceCount.ReferenceController;
          pFVar7->PlayerUID = *(long64 *)(lVar12 + 0x10);
          pFVar7->ChangeGroupOwner = this->ChangeGroupOwner;
          local_78[0].Object = (FDS_ViewModelContext *)local_f8.Object;
          local_78[0].SharedReferenceCount.ReferenceController =
               local_f8.SharedReferenceCount.ReferenceController;
          pFVar7->IsSelected = false;
          if (local_f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_01,local_78);
          local_138 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
    }
  }
  local_100 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_108 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(*plVar19 + 0x38))(plVar19,&local_108);
  return;
}

// UpdateMode @ 14bd92390

void __thiscall
UDS_VM_Chat_GroupMembers::UpdateMode
          (UDS_VM_Chat_GroupMembers *this,TSharedPtr<FDS_ChatRoomData,1> *param_1)

{
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar1;
  FName FVar2;
  int iVar3;
  FString *pFVar4;
  FObjectPtr_u_0 *pFVar5;
  FString *this_01;
  longlong lVar6;
  longlong *plVar7;
  FNameEntryId FVar8;
  uint uVar9;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FDS_Text local_68;
  
  if (this->ChangeGroupOwner == true) {
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc394);
    iVar3 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::TitleText.FieldName;
    FDS_Text::operator=(&this->TitleText,&local_68);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    local_88.ArrayNum = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    iVar3 = FFieldNotificationClassDescriptor::bEnableOkButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bEnableOkButton.FieldName;
    if (this->bEnableOkButton != false) {
      this->bEnableOkButton = false;
      local_88.ArrayNum = iVar3;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar3 = FFieldNotificationClassDescriptor::CancelVisibility.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName.ComparisonIndex.Value;
    uVar9 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName.Number;
    if (this->CancelVisibility == SelfHitTestInvisible) goto LAB_14bd92711;
    this->CancelVisibility = SelfHitTestInvisible;
    local_88.ArrayNum = iVar3;
    lVar6 = this->_padding_;
  }
  else {
    if (param_1->Object == (FDS_ChatRoomData *)0x0) {
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc5c2);
      iVar3 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::TitleText.FieldName;
      FDS_Text::operator=(&this->TitleText,&local_68);
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      local_88.ArrayNum = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
                 local_68.FormatArgs.ArrayNum);
      local_78.Data.AllocatorInstance.Data = local_68.UniqueString.Data.AllocatorInstance.Data;
      if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
        local_78.Data.AllocatorInstance.Data = local_68.UniqueString.Data.AllocatorInstance.Data;
      }
    }
    else {
      pFVar4 = FDS_ChatRoomData::GetShowName(param_1->Object,&local_78);
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.TimeExpressionType = None;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_88.AllocatorInstance,&local_88.ArrayMax);
      local_88.ArrayNum = iVar3 + 1;
      this_00 = (FInstancedStruct *)(local_88.AllocatorInstance.Data + (longlong)iVar3 * 0x28);
      FInstancedStruct::FInstancedStruct(this_00);
      pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar1 = pFVar5[1];
      this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
      this_00[1].StructMemory = (uchar *)FVar1;
      this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
      FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
      this_01 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
      if (this_01 != (FString *)0x0) {
        ::FString::operator=(this_01,pFVar4);
      }
      FDS_Text::SetTextFormatFromStringTable(&local_68,StringUi,0xc5c2,&local_88);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FDS_TextFormatArg *)local_88.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      iVar3 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::TitleText.FieldName;
      FDS_Text::operator=(&this->TitleText,&local_68);
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      local_88.ArrayNum = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    plVar7 = &this->_padding_;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    iVar3 = FFieldNotificationClassDescriptor::bEnableOkButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bEnableOkButton.FieldName;
    if (this->bEnableOkButton != true) {
      this->bEnableOkButton = true;
      local_88.ArrayNum = iVar3;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_88);
    }
    iVar3 = FFieldNotificationClassDescriptor::CancelVisibility.BitNumber;
    FVar8 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName.ComparisonIndex.Value;
    uVar9 = FFieldNotificationClassDescriptor::CancelVisibility.FieldName.Number;
    if (this->CancelVisibility == Collapsed) goto LAB_14bd92711;
    this->CancelVisibility = Collapsed;
    local_88.ArrayNum = iVar3;
    lVar6 = *plVar7;
  }
  local_88.AllocatorInstance.Data._4_4_ = uVar9;
  local_88.AllocatorInstance.Data._0_4_ = FVar8.Value;
  (**(code **)(lVar6 + 0x38))(&this->_padding_,&local_88);
LAB_14bd92711:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

