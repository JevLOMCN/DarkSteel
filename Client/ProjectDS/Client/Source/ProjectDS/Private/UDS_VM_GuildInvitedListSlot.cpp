// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickJoinButton_WrapperImpl @ 14b64fc00

void __cdecl
UDS_VM_GuildInvitedListSlot::SetClickJoinButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
    FDS_GuildService::SendAcceptGuildInvitationRequest(*(long64 *)((longlong)param_1 + 0x1f8),true);
    return;
  }
  return;
}

// SetClickRejectButton_WrapperImpl @ 14b64fc10

void __cdecl
UDS_VM_GuildInvitedListSlot::SetClickRejectButton_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))();
    }
    FDS_GuildService::SendAcceptGuildInvitationRequest(*(long64 *)((longlong)param_1 + 0x1f8),false)
    ;
    return;
  }
  return;
}

// StaticClass @ 14b64fc20

UClass * __cdecl UDS_VM_GuildInvitedListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitedListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitedListSlot,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitedListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitedListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton;
}

// UDS_VM_GuildInvitedListSlot @ 14b6538e0

UDS_VM_GuildInvitedListSlot * __thiscall
UDS_VM_GuildInvitedListSlot::UDS_VM_GuildInvitedListSlot
          (UDS_VM_GuildInvitedListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedListSlot__6B_;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyTimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyTimeOut).IsExpression = false;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinButton).DateTime.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeExpressionType = None;
  (this->FixedTxt_JoinButton).IsExpression = false;
  (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_RejectButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_RejectButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_RejectButton).DateTime.Ticks = 0;
  (this->FixedTxt_RejectButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_RejectButton).TimeExpressionType = None;
  (this->FixedTxt_RejectButton).IsExpression = false;
  (this->FixedTxt_RejectButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_RejectButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_RejectButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_RejectButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_RejectButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_RejectButton).FormatArgs.ArrayMax = 0;
  (this->ClickJoinButton)._padding_ = '\0';
  (this->ClickJoinButton).bIsCustomSelected = false;
  (this->ClickJoinButton).bIsLacked = false;
  (this->ClickJoinButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinButton).Delegate.field_0x10 = 0;
  (this->ClickRejectButton)._padding_ = '\0';
  (this->ClickRejectButton).bIsCustomSelected = false;
  (this->ClickRejectButton).bIsLacked = false;
  (this->ClickRejectButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRejectButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRejectButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRejectButton).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyTimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_JoinButton).StringTableType = StringUi;
  (this->FixedTxt_JoinButton).StringTableID = 0x3a9bc;
  (this->FixedTxt_RejectButton).StringTableType = StringUi;
  (this->FixedTxt_RejectButton).StringTableID = 0x3a9bd;
  return this;
}

// UDS_VM_GuildInvitedListSlot @ 14b653a70

UDS_VM_GuildInvitedListSlot * __thiscall
UDS_VM_GuildInvitedListSlot::UDS_VM_GuildInvitedListSlot
          (UDS_VM_GuildInvitedListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedListSlot__6B_;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinApplyTimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinApplyTimeOut).TimeExpressionType = None;
  (this->FixedTxt_JoinApplyTimeOut).IsExpression = false;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_JoinButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_JoinButton).DateTime.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_JoinButton).TimeExpressionType = None;
  (this->FixedTxt_JoinButton).IsExpression = false;
  (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_JoinButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_JoinButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_RejectButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_RejectButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_RejectButton).DateTime.Ticks = 0;
  (this->FixedTxt_RejectButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_RejectButton).TimeExpressionType = None;
  (this->FixedTxt_RejectButton).IsExpression = false;
  (this->FixedTxt_RejectButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_RejectButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_RejectButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_RejectButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_RejectButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_RejectButton).FormatArgs.ArrayMax = 0;
  (this->ClickJoinButton)._padding_ = '\0';
  (this->ClickJoinButton).bIsCustomSelected = false;
  (this->ClickJoinButton).bIsLacked = false;
  (this->ClickJoinButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickJoinButton).Delegate = 0;
  *(undefined8 *)&(this->ClickJoinButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickJoinButton).Delegate.field_0x10 = 0;
  (this->ClickRejectButton)._padding_ = '\0';
  (this->ClickRejectButton).bIsCustomSelected = false;
  (this->ClickRejectButton).bIsLacked = false;
  (this->ClickRejectButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRejectButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRejectButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRejectButton).Delegate.field_0x10 = 0;
  (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->M_RemainTimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  (this->VM_GuildData).field0_0x0.DebugPtr = (UDS_VM_GuildData *)0x0;
  (this->VM_GuildMark).field0_0x0.DebugPtr = (UDS_VM_GuildMark *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->FixedTxt_JoinApplyTimeOut).StringTableType = StringUi;
  (this->FixedTxt_JoinApplyTimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_JoinButton).StringTableType = StringUi;
  (this->FixedTxt_JoinButton).StringTableID = 0x3a9bc;
  (this->FixedTxt_RejectButton).StringTableType = StringUi;
  (this->FixedTxt_RejectButton).StringTableID = 0x3a9bd;
  return this;
}

// ~UDS_VM_GuildInvitedListSlot @ 14b655660

void __thiscall
UDS_VM_GuildInvitedListSlot::~UDS_VM_GuildInvitedListSlot(UDS_VM_GuildInvitedListSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate);
  pvVar1 = *(void **)&(this->UpdateProgressDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UpdateProgressDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRejectButton).Delegate);
  pvVar1 = *(void **)&(this->ClickRejectButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRejectButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickJoinButton).Delegate);
  pvVar1 = *(void **)&(this->ClickJoinButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickJoinButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_RejectButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_RejectButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_RejectButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_RejectButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_JoinApplyTimeOut).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_JoinApplyTimeOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_JoinApplyTimeOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657510

IClassDescriptor * __thiscall
UDS_VM_GuildInvitedListSlot::GetFieldNotificationDescriptor(UDS_VM_GuildInvitedListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildInvitedListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657f10

UClass * __cdecl UDS_VM_GuildInvitedListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitedListSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitedListSlot,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildInvitedListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitedListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitedListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildInvitedListSlot @ 14b658350

void __cdecl UDS_VM_GuildInvitedListSlot::StaticRegisterNativesUDS_VM_GuildInvitedListSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b6594f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildInvitedListSlot::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_GuildInvitedListSlot__6B_;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3aa45;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x3a9bc;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined1 *)&this[1].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x3a9bd;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ViewModelContext.Object = 0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be75bc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitedListSlot::BindModel(UDS_VM_GuildInvitedListSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// InitViewModel @ 14be8cc10

void __thiscall UDS_VM_GuildInvitedListSlot::InitViewModel(UDS_VM_GuildInvitedListSlot *this)

{
  return;
}

// OnClickJoinButton @ 14be95db0

void __thiscall
UDS_VM_GuildInvitedListSlot::OnClickJoinButton
          (UDS_VM_GuildInvitedListSlot *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (param_1->bIsCustomDisabled != true) {
    if (this->DisableJoinButton != true) {
      this->DisableJoinButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    FDS_GuildService::SendAcceptGuildInvitationRequest(this->GuildUID,true);
    return;
  }
  return;
}

// OnClickRejectButton @ 14be968c0

void __thiscall
UDS_VM_GuildInvitedListSlot::OnClickRejectButton
          (UDS_VM_GuildInvitedListSlot *this,FDS_ButtonEventField *param_1)

{
  if (param_1->bIsCustomDisabled != true) {
    if (this->DisableRejectButton != true) {
      this->DisableRejectButton = true;
      (**(code **)(this->_padding_ + 0x38))();
    }
    FDS_GuildService::SendAcceptGuildInvitationRequest(this->GuildUID,false);
    return;
  }
  return;
}

// OnProgressUpdate @ 14be9b3e0

void __thiscall
UDS_VM_GuildInvitedListSlot::OnProgressUpdate
          (UDS_VM_GuildInvitedListSlot *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  local_10 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
  if (bVar1) {
    if (this->TimeLeftWidgetIndex != 1) {
      this->TimeLeftWidgetIndex = 1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (this->DisableJoinButton != true) {
      this->DisableJoinButton = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
    if (this->DisableRejectButton != true) {
      this->DisableRejectButton = true;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14be9f060

void __thiscall
UDS_VM_GuildInvitedListSlot::OnSetViewModel
          (UDS_VM_GuildInvitedListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_GuildData *pFVar5;
  bool bVar6;
  UDS_VM_GuildData *pUVar7;
  FWeakObjectPtr local_res10;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildInvitedListSlot,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildInvitedListSlot>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_GuildInvitedListSlot *)0x0) goto LAB_14be9f26c;
  if ((local_38.Object == (FDS_ViewModelContext_GuildInvitedListSlot *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = (this->VM_GuildData).field0_0x0.DebugPtr;
  this->GuildUID = (local_38.Object)->GuildUID;
  if (pUVar7 == (UDS_VM_GuildData *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 != (UDS_VM_GuildData *)0x0) goto LAB_14be9f140;
  }
  else {
LAB_14be9f140:
    MakeContext<FDS_ViewModelContext_GuildData>(&local_48);
    pFVar5 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_GuildData *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x211;
      UDS_GuildListData::GetData
                ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
      bVar6 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar6) {
        (pFVar5->guildData).WeakPtr = local_res10;
      }
      pUVar7 = (this->VM_GuildData).field0_0x0.DebugPtr;
      local_18.Object = (FDS_ViewModelContext *)local_48.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  SetVM_Progress(this);
  iVar4 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (this->DisableJoinButton != false) {
    this->DisableJoinButton = false;
    local_60 = iVar4;
    local_68 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  iVar4 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
  if (this->DisableRejectButton != false) {
    this->DisableRejectButton = false;
    local_50 = iVar4;
    local_58 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
LAB_14be9f26c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableJoinButton @ 14beae1c0

void __thiscall
UDS_VM_GuildInvitedListSlot::SetDisableJoinButton(UDS_VM_GuildInvitedListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
  if (this->DisableJoinButton != param_1) {
    this->DisableJoinButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableRejectButton @ 14beae3f0

void __thiscall
UDS_VM_GuildInvitedListSlot::SetDisableRejectButton(UDS_VM_GuildInvitedListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
  if (this->DisableRejectButton != param_1) {
    this->DisableRejectButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTimeLeftWidgetIndex @ 14beb4900

void __thiscall
UDS_VM_GuildInvitedListSlot::SetTimeLeftWidgetIndex(UDS_VM_GuildInvitedListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
  if (this->TimeLeftWidgetIndex != param_1) {
    this->TimeLeftWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_GuildData @ 14beb74a0

void __thiscall UDS_VM_GuildInvitedListSlot::SetVM_GuildData(UDS_VM_GuildInvitedListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildData *pFVar2;
  bool bVar3;
  UDS_VM_GuildData *pUVar4;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildData).field0_0x0.DebugPtr == (UDS_VM_GuildData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x211;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    (pFVar2->guildData).WeakPtr = local_res8;
  }
  pUVar4 = (this->VM_GuildData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_GuildMark @ 14beb7a50

void __thiscall UDS_VM_GuildInvitedListSlot::SetVM_GuildMark(UDS_VM_GuildInvitedListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMark *pFVar2;
  bool bVar3;
  UDS_VM_GuildMark *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_GuildMark,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMark).field0_0x0.DebugPtr == (UDS_VM_GuildMark *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMark>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_GuildMark *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMark).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMark *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMark>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMark *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1f8;
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkTableID = *(int *)&pUVar5[4].field_0x20;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkColorTableID = *(int *)&pUVar5[4].field_0x24;
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgTableID = *(int *)(pUVar5 + 5);
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    pFVar2->GuildMarkBgColorTableID = *(int *)&pUVar5[5].field_0x4;
  }
  pUVar4 = (this->VM_GuildMark).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_Progress @ 14beb8f50

void __thiscall UDS_VM_GuildInvitedListSlot::SetVM_Progress(UDS_VM_GuildInvitedListSlot *this)

{
  double dVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_ModelBase *pFVar6;
  bool bVar7;
  UDS_GuildListData *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_M_CommonProgress *pUVar11;
  UDS_VM_CommonProgress *pUVar12;
  UObject *pUVar13;
  double dVar14;
  FWeakObjectPtr local_res8;
  UDS_VM_GuildInvitedListSlot *local_res10;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  UDS_GuildListData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->GuildUID,0));
  bVar7 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar7) {
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    iVar5 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
    if (this->TimeLeftWidgetIndex != (bVar7 ^ 1)) {
      this->TimeLeftWidgetIndex = bVar7 ^ 1;
      local_90 = iVar5;
      local_98 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    iVar5 = FFieldNotificationClassDescriptor::DisableJoinButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableJoinButton.FieldName;
    if (this->DisableJoinButton != !bVar7) {
      this->DisableJoinButton = !bVar7;
      local_80 = iVar5;
      local_88 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    iVar5 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
    if (this->DisableRejectButton != !bVar7) {
      this->DisableRejectButton = !bVar7;
      local_70 = iVar5;
      local_78 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    pUVar8 = (UDS_GuildListData *)FWeakObjectPtr::Get(&local_res8);
    bVar7 = UDS_GuildListData::HasTimeLeft(pUVar8);
    if (bVar7) {
      bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateProgressDelegate)
      ;
      if (!bVar7) {
        local_68.SharedReferenceCount.ReferenceController._0_4_ = 0;
        local_68.Object = (FDS_ViewModelContext_ModelBase *)OnProgressUpdate;
        local_68.SharedReferenceCount.ReferenceController._4_4_ =
             local_58.SharedReferenceCount.ReferenceController._4_4_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->UpdateProgressDelegate,(FWriteAccessScope *)&local_48);
        local_30 = &(this->UpdateProgressDelegate).field_0x8;
        puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitedListSlot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_res10 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
          puVar9[4] = local_68.Object;
          puVar9[5] = CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                               local_68.SharedReferenceCount.ReferenceController._0_4_);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
      if ((this->M_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
        pUVar11 = NewObject<UDS_M_CommonProgress>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UDS_M_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->M_RemainTimeProgress).field0_0x0.DebugPtr = pUVar11;
        UDS_ModelBase::AddUpdateModelDelegate
                  ((UDS_ModelBase *)pUVar11,&this->UpdateProgressDelegate);
      }
      if ((this->VM_RemainTimeProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
        pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_VM_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->VM_RemainTimeProgress).field0_0x0.DebugPtr = pUVar12;
        if (pUVar12 == (UDS_VM_CommonProgress *)0x0) {
          return;
        }
      }
      pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
      if (pUVar11 != (UDS_M_CommonProgress *)0x0) {
        UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)pUVar11,W_CommonProgress);
        MakeContext<FDS_ViewModelContext_ModelBase>(&local_68);
        pFVar6 = local_68.Object;
        if ((local_68.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr,
           pUVar11 != (UDS_M_CommonProgress *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pTVar3 = (TReferenceControllerBase<1> *)
                 CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                          local_68.SharedReferenceCount.ReferenceController._0_4_);
        (pFVar6->Model).field0_0x0 =
             (TObjectPtr<UDS_ModelBase>_u_0)(this->M_RemainTimeProgress).field0_0x0;
        pUVar12 = (this->VM_RemainTimeProgress).field0_0x0.DebugPtr;
        local_58.Object = (FDS_ViewModelContext *)local_68.Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.SharedReferenceCount.ReferenceController = pTVar3;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_58);
        pUVar11 = (this->M_RemainTimeProgress).field0_0x0.DebugPtr;
        pUVar13 = FWeakObjectPtr::Get(&local_res8);
        dVar1 = *(double *)&pUVar13[9].field_0x8;
        dVar14 = UDS_TimeUtilManager::GetCurrentServerTime();
        UDS_M_CommonProgress::Init(pUVar11,dVar14,dVar1,true,DayHourSec);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
  }
  return;
}

// UnbindModel @ 14bebbf20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitedListSlot::UnbindModel(UDS_VM_GuildInvitedListSlot *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

