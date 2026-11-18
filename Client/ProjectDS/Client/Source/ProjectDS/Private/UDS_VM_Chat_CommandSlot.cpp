// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetChatTypeIconID_WrapperImpl @ 14b606790

void __cdecl UDS_VM_Chat_CommandSlot::SetChatTypeIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatTypeIconID(param_1,*(int *)param_2);
  return;
}

// SetChatCommandColor_WrapperImpl @ 14b6067a0

void __cdecl UDS_VM_Chat_CommandSlot::SetChatCommandColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xa4)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xa8))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xac))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xb0))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xa8) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xb0) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetbSelectedChatCommand_WrapperImpl @ 14b6067b0

void __cdecl
UDS_VM_Chat_CommandSlot::SetbSelectedChatCommand_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedChatCommand(param_1,*(bool *)param_2);
  return;
}

// SetClickChatCommand_WrapperImpl @ 14b6067c0

void __cdecl UDS_VM_Chat_CommandSlot::SetClickChatCommand_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  
  this = UDS_ChattingManager::GetInst();
  if (this != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::SetInputChattingType(this,*(EDS_ChattingType *)((longlong)param_1 + 0x18c))
    ;
    return;
  }
  return;
}

// StaticClass @ 14b6067d0

UClass * __cdecl UDS_VM_Chat_CommandSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CommandSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CommandSlot,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_CommandSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CommandSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton;
}

// UDS_VM_Chat_CommandSlot @ 14b60aea0

UDS_VM_Chat_CommandSlot * __thiscall
UDS_VM_Chat_CommandSlot::UDS_VM_Chat_CommandSlot
          (UDS_VM_Chat_CommandSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->InputChattingType = Zone;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CommandSlot__6B_;
  (this->ChattingCommandData).Command._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChattingCommandData).CommandName._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChatCommand).StringTableType = None;
  (this->ChatCommand).StringTableID = 0;
  (this->ChatCommand).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommand).StringEnumTableNameID.Number = 0;
  (this->ChatCommand).DateTime.Ticks = 0;
  (this->ChatCommand).TimeSpan.Ticks = 0;
  (this->ChatCommand).TimeExpressionType = None;
  (this->ChatCommand).IsExpression = false;
  (this->ChatCommand).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommand).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommand).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommand).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommand).FormatArgs.ArrayNum = 0;
  (this->ChatCommand).FormatArgs.ArrayMax = 0;
  (this->ChatCommandName).StringTableType = None;
  (this->ChatCommandName).StringTableID = 0;
  (this->ChatCommandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommandName).StringEnumTableNameID.Number = 0;
  (this->ChatCommandName).DateTime.Ticks = 0;
  (this->ChatCommandName).TimeSpan.Ticks = 0;
  (this->ChatCommandName).TimeExpressionType = None;
  (this->ChatCommandName).IsExpression = false;
  (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommandName).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  (this->ChatCommandName).FormatArgs.ArrayMax = 0;
  (this->ClickChatCommand)._padding_ = '\0';
  (this->ClickChatCommand).bIsCustomSelected = false;
  (this->ClickChatCommand).bIsLacked = false;
  (this->ClickChatCommand).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCommand).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCommand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCommand).Delegate.field_0x10 = 0;
  (this->ChattingCommandData).CommandNumber = 0;
  (this->ChattingCommandData).Command.ID = 0;
  (this->ChattingCommandData).CommandName.ID = 0;
  (this->ChattingCommandData).CommandIconID = 0;
  (this->ChattingCommandData).SubIndex = 0;
  return this;
}

// UDS_VM_Chat_CommandSlot @ 14b60afd0

UDS_VM_Chat_CommandSlot * __thiscall
UDS_VM_Chat_CommandSlot::UDS_VM_Chat_CommandSlot
          (UDS_VM_Chat_CommandSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->InputChattingType = Zone;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CommandSlot__6B_;
  (this->ChattingCommandData).Command._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChattingCommandData).CommandName._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  (this->ChatCommand).StringTableType = None;
  (this->ChatCommand).StringTableID = 0;
  (this->ChatCommand).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommand).StringEnumTableNameID.Number = 0;
  (this->ChatCommand).DateTime.Ticks = 0;
  (this->ChatCommand).TimeSpan.Ticks = 0;
  (this->ChatCommand).TimeExpressionType = None;
  (this->ChatCommand).IsExpression = false;
  (this->ChatCommand).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommand).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommand).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommand).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommand).FormatArgs.ArrayNum = 0;
  (this->ChatCommand).FormatArgs.ArrayMax = 0;
  (this->ChatCommandName).StringTableType = None;
  (this->ChatCommandName).StringTableID = 0;
  (this->ChatCommandName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatCommandName).StringEnumTableNameID.Number = 0;
  (this->ChatCommandName).DateTime.Ticks = 0;
  (this->ChatCommandName).TimeSpan.Ticks = 0;
  (this->ChatCommandName).TimeExpressionType = None;
  (this->ChatCommandName).IsExpression = false;
  (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).UniqueString.Data.ArrayNum = 0;
  (this->ChatCommandName).UniqueString.Data.ArrayMax = 0;
  (this->ChatCommandName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  (this->ChatCommandName).FormatArgs.ArrayMax = 0;
  (this->ClickChatCommand)._padding_ = '\0';
  (this->ClickChatCommand).bIsCustomSelected = false;
  (this->ClickChatCommand).bIsLacked = false;
  (this->ClickChatCommand).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCommand).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCommand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCommand).Delegate.field_0x10 = 0;
  (this->ChattingCommandData).CommandNumber = 0;
  (this->ChattingCommandData).Command.ID = 0;
  (this->ChattingCommandData).CommandName.ID = 0;
  (this->ChattingCommandData).CommandIconID = 0;
  (this->ChattingCommandData).SubIndex = 0;
  return this;
}

// ~UDS_VM_Chat_CommandSlot @ 14b60c270

void __thiscall UDS_VM_Chat_CommandSlot::~UDS_VM_Chat_CommandSlot(UDS_VM_Chat_CommandSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_CommandSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatCommand).Delegate);
  pvVar1 = *(void **)&(this->ClickChatCommand).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatCommand).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatCommandName).FormatArgs.AllocatorInstance.Data,
             (this->ChatCommandName).FormatArgs.ArrayNum);
  pFVar2 = (this->ChatCommandName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChatCommandName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatCommand).FormatArgs.AllocatorInstance.Data,
             (this->ChatCommand).FormatArgs.ArrayNum);
  pFVar2 = (this->ChatCommand).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChatCommand).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60dc10

IClassDescriptor * __thiscall
UDS_VM_Chat_CommandSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_CommandSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_CommandSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e440

UClass * __cdecl UDS_VM_Chat_CommandSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_CommandSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_CommandSlot,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_CommandSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_CommandSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_CommandSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_CommandSlot @ 14b60e910

void __cdecl UDS_VM_Chat_CommandSlot::StaticRegisterNativesUDS_VM_Chat_CommandSlot(void)

{
  return;
}

// BindModel @ 14bd47500

void __thiscall UDS_VM_Chat_CommandSlot::BindModel(UDS_VM_Chat_CommandSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CommandSlot>
              (&pUVar1->OnChangeInputChattingType,(UDS_VM_Chat_CommandSlot *)&stack0x00000010,
               (pmf_d55f45d4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedChattingCommand,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CommandSlot>
              (&pUVar1->OnSelectedChattingCommand,(UDS_VM_Chat_CommandSlot *)&stack0x00000010,
               (pmf_d55f45d4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedChattingCommand,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_CommandSlot>
              (&pUVar1->OnClickedChattingCommand,(UDS_VM_Chat_CommandSlot *)&stack0x00000010,
               (pmf_d55f45d4 *)this);
  }
  return;
}

// OnChangeInputChattingType @ 14bd6ecb0

void __thiscall
UDS_VM_Chat_CommandSlot::OnChangeInputChattingType
          (UDS_VM_Chat_CommandSlot *this,EDS_ChattingType param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  bVar1 = (this->ChattingCommandData).ChattingType == param_1;
  this->InputChattingType = param_1;
  local_10 = FFieldNotificationClassDescriptor::bSelectedChatCommand.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName;
  if (this->bSelectedChatCommand != bVar1) {
    this->bSelectedChatCommand = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickChatCommand @ 14bd72640

void __thiscall
UDS_VM_Chat_CommandSlot::OnClickChatCommand
          (UDS_VM_Chat_CommandSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::SetInputChattingType(this_00,(this->ChattingCommandData).ChattingType);
    return;
  }
  return;
}

// OnClickedChattingCommand @ 14bd75670

void __thiscall
UDS_VM_Chat_CommandSlot::OnClickedChattingCommand
          (UDS_VM_Chat_CommandSlot *this,EDS_ChattingType param_1)

{
  UDS_ChattingManager *this_00;
  
  if ((this->ChattingCommandData).ChattingType == param_1) {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 != (UDS_ChattingManager *)0x0) {
      UDS_ChattingManager::SetInputChattingType(this_00,(this->ChattingCommandData).ChattingType);
      return;
    }
  }
  return;
}

// OnSelectedChattingCommand @ 14bd7d2d0

void __thiscall
UDS_VM_Chat_CommandSlot::OnSelectedChattingCommand
          (UDS_VM_Chat_CommandSlot *this,EDS_ChattingType param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bSelectedChatCommand.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName;
  bVar1 = (this->ChattingCommandData).ChattingType == param_1;
  if (this->bSelectedChatCommand != bVar1) {
    this->bSelectedChatCommand = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bd7f990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_CommandSlot::OnSetViewModel
          (UDS_VM_Chat_CommandSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatCommand,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
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
  SafeCast<FDS_ViewModelContext_ChatCommand>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatCommand *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_CommandSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x13,L"chatCommandContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatCommand *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->InputChattingType = (local_158.Object)->InputChattingType;
    (this->ChattingCommandData).CommandNumber =
         ((local_158.Object)->ChattingCommandData).CommandNumber;
    (this->ChattingCommandData).ChattingType =
         ((local_158.Object)->ChattingCommandData).ChattingType;
    (this->ChattingCommandData).Command.ID = ((local_158.Object)->ChattingCommandData).Command.ID;
    (this->ChattingCommandData).CommandName.ID =
         ((local_158.Object)->ChattingCommandData).CommandName.ID;
    (this->ChattingCommandData).CommandIconID =
         ((local_158.Object)->ChattingCommandData).CommandIconID;
    uVar3 = *(undefined8 *)
             ((longlong)&((local_158.Object)->ChattingCommandData).CommandColor.field0_0x0 + 8);
    *(undefined8 *)&(this->ChattingCommandData).CommandColor.field0_0x0 =
         *(undefined8 *)&((local_158.Object)->ChattingCommandData).CommandColor.field0_0x0;
    *(undefined8 *)((longlong)&(this->ChattingCommandData).CommandColor.field0_0x0 + 8) = uVar3;
    (this->ChattingCommandData).SubIndex = ((local_158.Object)->ChattingCommandData).SubIndex;
    UpdateCommandSlot(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChatCommand @ 14bd87080

void __thiscall
UDS_VM_Chat_CommandSlot::SetChatCommand(UDS_VM_Chat_CommandSlot *this,FDS_StringBaseID *param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  pTVar2 = &(this->ChatCommand).FormatArgs;
  (this->ChatCommand).StringTableType = StringUi;
  (this->ChatCommand).StringTableID = 0xc5db;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->ChatCommand).FormatArgs.ArrayNum);
  piVar1 = &(this->ChatCommand).FormatArgs.ArrayMax;
  (this->ChatCommand).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->ChatCommand).FormatArgs.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChatCommand).FormatArgs.ArrayNum = iVar3 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x28),
             param_1);
  local_10 = FFieldNotificationClassDescriptor::ChatCommand.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatCommand.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChatCommandColor @ 14bd871e0

void __thiscall
UDS_VM_Chat_CommandSlot::SetChatCommandColor(UDS_VM_Chat_CommandSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatCommandColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatCommandColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatCommandColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatCommandColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
    (this->ChatCommandColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatCommandColor).field0_0x0._s_0.G = fVar1;
    (this->ChatCommandColor).field0_0x0._s_0.B = fVar2;
    (this->ChatCommandColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatCommandName @ 14bd876d0

void __thiscall
UDS_VM_Chat_CommandSlot::SetChatCommandName
          (UDS_VM_Chat_CommandSlot *this,int param_1,FDS_StringBaseID *param_2)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  int iVar4;
  FObjectPtr_u_0 *pFVar5;
  FDS_Int32StringFormatArg *pFVar6;
  FName local_28;
  int local_20;
  
  pTVar2 = &(this->ChatCommandName).FormatArgs;
  (this->ChatCommandName).StringTableType = StringUi;
  (this->ChatCommandName).StringTableID = 0xc5da;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->ChatCommandName).FormatArgs.ArrayNum);
  piVar1 = &(this->ChatCommandName).FormatArgs.ArrayMax;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->ChatCommandName).FormatArgs.ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChatCommandName).FormatArgs.ArrayNum = iVar4 + 1;
  this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar5 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar5[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar5;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar5[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar6 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar6 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar6->Value = param_1;
  }
  iVar4 = (this->ChatCommandName).FormatArgs.ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChatCommandName).FormatArgs.ArrayNum = iVar4 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x28),
             param_2);
  local_20 = FFieldNotificationClassDescriptor::ChatCommandName.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ChatCommandName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetChatTypeIconID @ 14bd87ac0

void __thiscall
UDS_VM_Chat_CommandSlot::SetChatTypeIconID(UDS_VM_Chat_CommandSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName;
  if (this->ChatTypeIconID != param_1) {
    this->ChatTypeIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectedChatCommand @ 14bd8a770

void __thiscall
UDS_VM_Chat_CommandSlot::SetSelectedChatCommand(UDS_VM_Chat_CommandSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bSelectedChatCommand.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName;
  if (this->bSelectedChatCommand != param_1) {
    this->bSelectedChatCommand = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bd50

void __thiscall UDS_VM_Chat_CommandSlot::UnbindModel(UDS_VM_Chat_CommandSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeInputChattingType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedChattingCommand,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedChattingCommand,this);
  }
  return;
}

// UpdateCommandSlot @ 14bd8eba0

void __thiscall UDS_VM_Chat_CommandSlot::UpdateCommandSlot(UDS_VM_Chat_CommandSlot *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar3;
  FName FVar4;
  FName FVar5;
  int iVar6;
  int iVar7;
  UDS_ChattingManager *this_01;
  FLinearColor *pFVar8;
  FObjectPtr_u_0 *pFVar9;
  FDS_Int32StringFormatArg *pFVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FLinearColor_u_0 local_48 [2];
  
  fVar13 = (this->ChattingCommandData).CommandColor.field0_0x0._s_0.R;
  fVar14 = (this->ChattingCommandData).CommandColor.field0_0x0._s_0.G;
  fVar15 = (this->ChattingCommandData).CommandColor.field0_0x0._s_0.B;
  fVar16 = (this->ChattingCommandData).CommandColor.field0_0x0._s_0.A;
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 != (UDS_ChattingManager *)0x0) {
    pFVar8 = UDS_ChattingManager::GetChattingColor
                       (this_01,(FLinearColor *)&local_48[0]._s_0,
                        (this->ChattingCommandData).ChattingType);
    fVar13 = (pFVar8->field0_0x0)._s_0.R;
    fVar14 = (pFVar8->field0_0x0)._s_0.G;
    fVar15 = (pFVar8->field0_0x0)._s_0.B;
    fVar16 = (pFVar8->field0_0x0)._s_0.A;
  }
  iVar7 = FFieldNotificationClassDescriptor::ChatTypeIconID.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName;
  iVar6 = (this->ChattingCommandData).CommandIconID;
  plVar11 = &this->_padding_;
  if (this->ChatTypeIconID != iVar6) {
    this->ChatTypeIconID = iVar6;
    FVar5 = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName;
    local_48[0]._s_0.B = iVar7;
    FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName.ComparisonIndex =
         FVar4.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName.Number = FVar4.Number;
    local_48[0]._0_4_ =
         FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName.ComparisonIndex.Value;
    local_48[0]._4_4_ = FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName.Number;
    FFieldNotificationClassDescriptor::ChatTypeIconID.FieldName = FVar5;
    (**(code **)(*plVar11 + 0x38))(plVar11,local_48);
  }
  iVar6 = FFieldNotificationClassDescriptor::ChatCommandColor.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
  if ((((fVar13 != (this->ChatCommandColor).field0_0x0._s_0.R) ||
       (fVar14 != (this->ChatCommandColor).field0_0x0._s_0.G)) ||
      (fVar15 != (this->ChatCommandColor).field0_0x0._s_0.B)) ||
     (fVar16 != (this->ChatCommandColor).field0_0x0._s_0.A)) {
    (this->ChatCommandColor).field0_0x0._s_0.R = fVar13;
    (this->ChatCommandColor).field0_0x0._s_0.G = fVar14;
    (this->ChatCommandColor).field0_0x0._s_0.B = fVar15;
    (this->ChatCommandColor).field0_0x0._s_0.A = fVar16;
    FVar5 = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName;
    local_48[0]._s_0.B = iVar6;
    FFieldNotificationClassDescriptor::ChatCommandColor.FieldName.ComparisonIndex =
         FVar4.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::ChatCommandColor.FieldName.Number = FVar4.Number;
    local_48[0]._0_4_ =
         FFieldNotificationClassDescriptor::ChatCommandColor.FieldName.ComparisonIndex.Value;
    local_48[0]._4_4_ = FFieldNotificationClassDescriptor::ChatCommandColor.FieldName.Number;
    FFieldNotificationClassDescriptor::ChatCommandColor.FieldName = FVar5;
    (**(code **)(*plVar11 + 0x38))(plVar11,local_48);
  }
  plVar11 = &this->_padding_;
  (this->ChatCommand).StringTableType = StringUi;
  pTVar2 = &(this->ChatCommand).FormatArgs;
  (this->ChatCommand).StringTableID = 0xc5db;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->ChatCommand).FormatArgs.ArrayNum);
  piVar1 = &(this->ChatCommand).FormatArgs.ArrayMax;
  (this->ChatCommand).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar6 = (this->ChatCommand).FormatArgs.ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChatCommand).FormatArgs.ArrayNum = iVar6 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28),
             &(this->ChattingCommandData).Command);
  local_48[0]._s_0.B = FFieldNotificationClassDescriptor::ChatCommand.BitNumber;
  local_48[0]._0_4_ = FFieldNotificationClassDescriptor::ChatCommand.FieldName.ComparisonIndex.Value
  ;
  local_48[0]._4_4_ = FFieldNotificationClassDescriptor::ChatCommand.FieldName.Number;
  (**(code **)(*plVar11 + 0x38))(plVar11,local_48);
  iVar6 = (this->ChattingCommandData).CommandNumber;
  pTVar2 = &(this->ChatCommandName).FormatArgs;
  (this->ChatCommandName).StringTableType = StringUi;
  (this->ChatCommandName).StringTableID = 0xc5da;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->ChatCommandName).FormatArgs.ArrayNum);
  piVar1 = &(this->ChatCommandName).FormatArgs.ArrayMax;
  (this->ChatCommandName).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar7 = (this->ChatCommandName).FormatArgs.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChatCommandName).FormatArgs.ArrayNum = iVar7 + 1;
  this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar3 = pFVar9[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
  this_00[1].StructMemory = (uchar *)FVar3;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
  pFVar10 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
  if (pFVar10 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar10->Value = iVar6;
  }
  iVar6 = (this->ChatCommandName).FormatArgs.ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,&(this->ChatCommandName).FormatArgs.ArrayMax
                      );
  }
  (this->ChatCommandName).FormatArgs.ArrayNum = iVar6 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28),
             &(this->ChattingCommandData).CommandName);
  local_48[0]._s_0.B = FFieldNotificationClassDescriptor::ChatCommandName.BitNumber;
  local_48[0]._0_4_ =
       FFieldNotificationClassDescriptor::ChatCommandName.FieldName.ComparisonIndex.Value;
  local_48[0]._4_4_ = FFieldNotificationClassDescriptor::ChatCommandName.FieldName.Number;
  (**(code **)(this->_padding_ + 0x38))(plVar11,local_48);
  local_48[0]._8_4_ = FFieldNotificationClassDescriptor::bSelectedChatCommand.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName;
  bVar12 = (this->ChattingCommandData).ChattingType == this->InputChattingType;
  if (this->bSelectedChatCommand != bVar12) {
    this->bSelectedChatCommand = bVar12;
    FVar5 = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName;
    FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName.ComparisonIndex =
         FVar4.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName.Number = FVar4.Number;
    local_48[0]._0_4_ =
         FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName.ComparisonIndex.Value;
    local_48[0]._4_4_ = FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName.Number;
    FFieldNotificationClassDescriptor::bSelectedChatCommand.FieldName = FVar5;
    (**(code **)(this->_padding_ + 0x38))(plVar11,local_48);
  }
  return;
}

