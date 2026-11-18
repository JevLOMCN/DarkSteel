// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickApproveButton_WrapperImpl @ 14b669100

void __cdecl
UDS_VM_GuildSettingJoinApproveSlot::SetClickApproveButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this;
  UObject *pUVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableApproveButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableApproveButton.FieldName;
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    if (*(char *)((longlong)param_1 + 0xa0) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong)param_1 + 0x28,&FStack_18);
    }
    this = UDS_GuildManager::GetInst();
    if ((this != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x208)), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x208));
      UDS_GuildManager::SendGuildJoinApprove(this,*(long64 *)&pUVar4[1].field_0x8,true);
    }
  }
  return;
}

// SetClickRejectButton_WrapperImpl @ 14b669110

void __cdecl
UDS_VM_GuildSettingJoinApproveSlot::SetClickRejectButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this;
  UObject *pUVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    if (*(char *)((longlong)param_1 + 0xa1) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
      iStack_10 = iVar2;
      FStack_18 = FVar1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
    this = UDS_GuildManager::GetInst();
    if ((this != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x208)), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x208));
      UDS_GuildManager::SendGuildJoinApprove(this,*(long64 *)&pUVar4[1].field_0x8,false);
    }
  }
  return;
}

// StaticClass @ 14b6691e0

UClass * __cdecl UDS_VM_GuildSettingJoinApproveSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingJoinApproveSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingJoinApproveSlot,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingJoinApproveSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingJoinApproveSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton;
}

// UDS_VM_GuildSettingJoinApproveSlot @ 14b66c560

UDS_VM_GuildSettingJoinApproveSlot * __thiscall
UDS_VM_GuildSettingJoinApproveSlot::UDS_VM_GuildSettingJoinApproveSlot
          (UDS_VM_GuildSettingJoinApproveSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApproveSlot__6B_;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeExpressionType = None;
  (this->FixedTxt_TimeOut).IsExpression = false;
  (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ApproveButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ApproveButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ApproveButton).DateTime.Ticks = 0;
  (this->FixedTxt_ApproveButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ApproveButton).TimeExpressionType = None;
  (this->FixedTxt_ApproveButton).IsExpression = false;
  (this->FixedTxt_ApproveButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApproveButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ApproveButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ApproveButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApproveButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ApproveButton).FormatArgs.ArrayMax = 0;
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
  (this->ClickApproveButton)._padding_ = '\0';
  (this->ClickApproveButton).bIsCustomSelected = false;
  (this->ClickApproveButton).bIsLacked = false;
  (this->ClickApproveButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApproveButton).Delegate = 0;
  *(undefined8 *)&(this->ClickApproveButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApproveButton).Delegate.field_0x10 = 0;
  (this->ClickRejectButton)._padding_ = '\0';
  (this->ClickRejectButton).bIsCustomSelected = false;
  (this->ClickRejectButton).bIsLacked = false;
  (this->ClickRejectButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRejectButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRejectButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRejectButton).Delegate.field_0x10 = 0;
  (this->VM_TimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->M_TimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_TimeOut).StringTableType = StringUi;
  (this->FixedTxt_TimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_ApproveButton).StringTableType = StringUi;
  (this->FixedTxt_ApproveButton).StringTableID = 0x3a9f5;
  (this->FixedTxt_RejectButton).StringTableType = StringUi;
  (this->FixedTxt_RejectButton).StringTableID = 0x3a9f6;
  return this;
}

// UDS_VM_GuildSettingJoinApproveSlot @ 14b66c6f0

UDS_VM_GuildSettingJoinApproveSlot * __thiscall
UDS_VM_GuildSettingJoinApproveSlot::UDS_VM_GuildSettingJoinApproveSlot
          (UDS_VM_GuildSettingJoinApproveSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApproveSlot__6B_;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_TimeOut).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_TimeOut).DateTime.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeSpan.Ticks = 0;
  (this->FixedTxt_TimeOut).TimeExpressionType = None;
  (this->FixedTxt_TimeOut).IsExpression = false;
  (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_TimeOut).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_TimeOut).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ApproveButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ApproveButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ApproveButton).DateTime.Ticks = 0;
  (this->FixedTxt_ApproveButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ApproveButton).TimeExpressionType = None;
  (this->FixedTxt_ApproveButton).IsExpression = false;
  (this->FixedTxt_ApproveButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApproveButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ApproveButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ApproveButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ApproveButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ApproveButton).FormatArgs.ArrayMax = 0;
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
  (this->ClickApproveButton)._padding_ = '\0';
  (this->ClickApproveButton).bIsCustomSelected = false;
  (this->ClickApproveButton).bIsLacked = false;
  (this->ClickApproveButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickApproveButton).Delegate = 0;
  *(undefined8 *)&(this->ClickApproveButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickApproveButton).Delegate.field_0x10 = 0;
  (this->ClickRejectButton)._padding_ = '\0';
  (this->ClickRejectButton).bIsCustomSelected = false;
  (this->ClickRejectButton).bIsLacked = false;
  (this->ClickRejectButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRejectButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRejectButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRejectButton).Delegate.field_0x10 = 0;
  (this->VM_TimeProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->VM_GuildMemberData).field0_0x0.DebugPtr = (UDS_VM_GuildMemberData *)0x0;
  (this->M_TimeProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  *(undefined8 *)&this->UpdateProgressDelegate = 0;
  *(undefined8 *)&(this->UpdateProgressDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateProgressDelegate).field_0x10 = 0;
  (this->MemberData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FixedTxt_TimeOut).StringTableType = StringUi;
  (this->FixedTxt_TimeOut).StringTableID = 0x3aa45;
  (this->FixedTxt_ApproveButton).StringTableType = StringUi;
  (this->FixedTxt_ApproveButton).StringTableID = 0x3a9f5;
  (this->FixedTxt_RejectButton).StringTableType = StringUi;
  (this->FixedTxt_RejectButton).StringTableID = 0x3a9f6;
  return this;
}

// ~UDS_VM_GuildSettingJoinApproveSlot @ 14b66ea20

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::~UDS_VM_GuildSettingJoinApproveSlot
          (UDS_VM_GuildSettingJoinApproveSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApproveSlot__6B_;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickApproveButton).Delegate);
  pvVar1 = *(void **)&(this->ClickApproveButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickApproveButton).Delegate);
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
            ((FDS_TextFormatArg *)(this->FixedTxt_ApproveButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_ApproveButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_ApproveButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_ApproveButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_TimeOut).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_TimeOut).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_TimeOut).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671650

IClassDescriptor * __thiscall
UDS_VM_GuildSettingJoinApproveSlot::GetFieldNotificationDescriptor
          (UDS_VM_GuildSettingJoinApproveSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSettingJoinApproveSlot::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b671f20

UClass * __cdecl UDS_VM_GuildSettingJoinApproveSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingJoinApproveSlot",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingJoinApproveSlot,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GuildSettingJoinApproveSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingJoinApproveSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingJoinApproveSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSettingJoinApproveSlot @ 14b672ad0

void __cdecl
UDS_VM_GuildSettingJoinApproveSlot::StaticRegisterNativesUDS_VM_GuildSettingJoinApproveSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b673d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildSettingJoinApproveSlot::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_GuildSettingJoinApproveSlot__6B_;
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
    this[1]._padding_ = 0x3a9f5;
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
    this[2]._padding_ = 0x3a9f6;
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
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be76350

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::BindModel(UDS_VM_GuildSettingJoinApproveSlot *this)

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

// InitViewModel @ 14be8cd50

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::InitViewModel(UDS_VM_GuildSettingJoinApproveSlot *this)

{
  return;
}

// OnClickApproveButton @ 14be93950

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::OnClickApproveButton
          (UDS_VM_GuildSettingJoinApproveSlot *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this_00;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableApproveButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableApproveButton.FieldName;
  if (param_1->bIsCustomDisabled != true) {
    if (this->DisableApproveButton != true) {
      this->DisableApproveButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
    if (this->DisableRejectButton != true) {
      this->DisableRejectButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this_00 = UDS_GuildManager::GetInst();
    if ((this_00 != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
      UDS_GuildManager::SendGuildJoinApprove(this_00,*(long64 *)&pUVar4[1].field_0x8,true);
    }
  }
  return;
}

// OnClickRejectButton @ 14be96930

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::OnClickRejectButton
          (UDS_VM_GuildSettingJoinApproveSlot *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_GuildManager *this_00;
  UObject *pUVar4;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
  if (param_1->bIsCustomDisabled != true) {
    if (this->DisableRejectButton != true) {
      this->DisableRejectButton = true;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    this_00 = UDS_GuildManager::GetInst();
    if ((this_00 != (UDS_GuildManager *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr), bVar3)) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MemberData).WeakPtr);
      UDS_GuildManager::SendGuildJoinApprove(this_00,*(long64 *)&pUVar4[1].field_0x8,false);
    }
  }
  return;
}

// OnProgressUpdate @ 14be9b5e0

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::OnProgressUpdate
          (UDS_VM_GuildSettingJoinApproveSlot *this,
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
    local_10 = FFieldNotificationClassDescriptor::DisableApproveButton.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DisableApproveButton.FieldName;
    if (this->DisableApproveButton != true) {
      this->DisableApproveButton = true;
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

// OnSetViewModel @ 14bea1c00

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::OnSetViewModel
          (UDS_VM_GuildSettingJoinApproveSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_GuildMemberData *pFVar3;
  bool bVar4;
  UDS_VM_GuildMemberData *pUVar5;
  TSharedPtr<FDS_ViewModelContext_GuildSettingJoinApproveSlot,1> local_48;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_38;
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
  SafeCast<FDS_ViewModelContext_GuildSettingJoinApproveSlot>(&local_48,&local_28);
  if (local_48.Object == (FDS_ViewModelContext_GuildSettingJoinApproveSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    goto LAB_14bea1daf;
  }
  if ((local_48.Object == (FDS_ViewModelContext_GuildSettingJoinApproveSlot *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->MemberData).WeakPtr = ((local_48.Object)->MemberData).WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&(this->MemberData).WeakPtr);
  if (bVar4) {
    if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
      pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_VM_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 != (UDS_VM_GuildMemberData *)0x0) goto LAB_14bea1cff;
    }
    else {
LAB_14bea1cff:
      MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_38);
      pFVar3 = local_38.Object;
      if (local_38.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
        if ((local_38.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x212;
        (pFVar3->MemberData).WeakPtr = (this->MemberData).WeakPtr;
        pUVar5 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
        local_18.Object = (FDS_ViewModelContext *)local_38.Object;
        local_18.SharedReferenceCount.ReferenceController =
             local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SetVM_TimeProgress(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bea1daf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisableApproveButton @ 14beadf30

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::SetDisableApproveButton
          (UDS_VM_GuildSettingJoinApproveSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableApproveButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableApproveButton.FieldName;
  if (this->DisableApproveButton != param_1) {
    this->DisableApproveButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableRejectButton @ 14beae440

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::SetDisableRejectButton
          (UDS_VM_GuildSettingJoinApproveSlot *this,bool param_1)

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

// SetTimeLeftWidgetIndex @ 14beb49f0

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::SetTimeLeftWidgetIndex
          (UDS_VM_GuildSettingJoinApproveSlot *this,int param_1)

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

// SetVM_GuildMemberData @ 14beb8570

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::SetVM_GuildMemberData(UDS_VM_GuildSettingJoinApproveSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_GuildMemberData *pFVar2;
  bool bVar3;
  UDS_VM_GuildMemberData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_GuildMemberData).field0_0x0.DebugPtr == (UDS_VM_GuildMemberData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_GuildMemberData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_GuildMemberData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_GuildMemberData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_GuildMemberData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_GuildMemberData>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x212;
  (pFVar2->MemberData).WeakPtr = (this->MemberData).WeakPtr;
  pUVar4 = (this->VM_GuildMemberData).field0_0x0.DebugPtr;
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

// SetVM_TimeProgress @ 14beba320

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::SetVM_TimeProgress(UDS_VM_GuildSettingJoinApproveSlot *this)

{
  TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_ModelBase *pFVar6;
  bool bVar7;
  char cVar8;
  UDS_GuildMemberData *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_M_CommonProgress *pUVar12;
  UDS_VM_CommonProgress *pUVar13;
  double dVar14;
  UDS_VM_GuildSettingJoinApproveSlot *local_res8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_b8;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FReadAccessScope local_48 [2];
  
  this_00 = &this->MemberData;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar7) {
    pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
    iVar5 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TimeLeftWidgetIndex.FieldName;
    if (this->TimeLeftWidgetIndex != (bVar7 ^ 1)) {
      this->TimeLeftWidgetIndex = bVar7 ^ 1;
      local_a0 = iVar5;
      local_a8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
    iVar5 = FFieldNotificationClassDescriptor::DisableApproveButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableApproveButton.FieldName;
    if (this->DisableApproveButton != !bVar7) {
      this->DisableApproveButton = !bVar7;
      local_90 = iVar5;
      local_98 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
    iVar5 = FFieldNotificationClassDescriptor::DisableRejectButton.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::DisableRejectButton.FieldName;
    if (this->DisableRejectButton != !bVar7) {
      this->DisableRejectButton = !bVar7;
      local_80 = iVar5;
      local_88 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->UpdateProgressDelegate,local_48);
    puVar1 = &(this->UpdateProgressDelegate).field_0x8;
    if (((*(int *)&(this->UpdateProgressDelegate).field_0x10 == 0) ||
        (*(longlong **)puVar1 == (longlong *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)puVar1 + 0x38))(), cVar8 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      local_b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_b8.Object = (FDS_ViewModelContext_ModelBase *)OnProgressUpdate;
      local_b8.SharedReferenceCount.ReferenceController._4_4_ =
           local_78.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->UpdateProgressDelegate,(FWriteAccessScope *)&local_68);
      local_50 = puVar1;
      puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingJoinApproveSlot____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_GuildSettingJoinApproveSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar10[3] = 0;
        local_res8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_VM_GuildSettingJoinApproveSlot *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res8);
        puVar10[4] = local_b8.Object;
        puVar10[5] = CONCAT44(local_b8.SharedReferenceCount.ReferenceController._4_4_,
                              local_b8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
    }
    if ((this->M_TimeProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
      pUVar12 = NewObject<UDS_M_CommonProgress>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      (this->M_TimeProgress).field0_0x0.DebugPtr = pUVar12;
      UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)pUVar12,&this->UpdateProgressDelegate);
    }
    if ((this->VM_TimeProgress).field0_0x0.DebugPtr == (UDS_VM_CommonProgress *)0x0) {
      pUVar13 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonProgress>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 != (UDS_VM_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->VM_TimeProgress).field0_0x0.DebugPtr = pUVar13;
      if (pUVar13 == (UDS_VM_CommonProgress *)0x0) {
        return;
      }
    }
    pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr;
    if (pUVar12 != (UDS_M_CommonProgress *)0x0) {
      UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)pUVar12,W_CommonProgress);
      MakeContext<FDS_ViewModelContext_ModelBase>(&local_b8);
      pFVar6 = local_b8.Object;
      if ((local_b8.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr,
         pUVar12 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pTVar3 = (TReferenceControllerBase<1> *)
               CONCAT44(local_b8.SharedReferenceCount.ReferenceController._4_4_,
                        local_b8.SharedReferenceCount.ReferenceController._0_4_);
      (pFVar6->Model).field0_0x0 = (TObjectPtr<UDS_ModelBase>_u_0)(this->M_TimeProgress).field0_0x0;
      pUVar13 = (this->VM_TimeProgress).field0_0x0.DebugPtr;
      local_78.Object = (FDS_ViewModelContext *)local_b8.Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.SharedReferenceCount.ReferenceController = pTVar3;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar13,&local_78);
      pUVar12 = (this->M_TimeProgress).field0_0x0.DebugPtr;
      pUVar9 = (UDS_GuildMemberData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar7 = UDS_GuildMemberData::HasPendingLeftTime(pUVar9);
      dVar14 = UDS_TimeUtilManager::GetCurrentServerTime();
      UDS_M_CommonProgress::Init(pUVar12,dVar14,(double)bVar7,true,DayHourSec);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// UnbindModel @ 14bebc290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingJoinApproveSlot::UnbindModel(UDS_VM_GuildSettingJoinApproveSlot *this)

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

