// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetClickNextDialogueButton_WrapperImpl @ 14b6add40

void __cdecl
UDS_VM_NpcFunction_TalkDialogue::SetClickNextDialogueButton_WrapperImpl(void *param_1,void *param_2)

{
  SetNextTalkDialogue(param_1,false);
  return;
}

// SetClickSkipButton_WrapperImpl @ 14b6add50

void __cdecl
UDS_VM_NpcFunction_TalkDialogue::SetClickSkipButton_WrapperImpl(void *param_1,void *param_2)

{
  SetNextTalkDialogue(param_1,true);
  return;
}

// SetVisibilityNextDialogueButton_WrapperImpl @ 14b6add60

void __cdecl
UDS_VM_NpcFunction_TalkDialogue::SetVisibilityNextDialogueButton_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilitySkipButton_WrapperImpl @ 14b6add70

void __cdecl
UDS_VM_NpcFunction_TalkDialogue::SetVisibilitySkipButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (*(char *)((longlong)param_1 + 0xe1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6add80

UClass * __cdecl UDS_VM_NpcFunction_TalkDialogue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_TalkDialogue",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_TalkDialogue,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_TalkDialogue>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_TalkDialogue>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton;
}

// UDS_VM_NpcFunction_TalkDialogue @ 14b6b22c0

UDS_VM_NpcFunction_TalkDialogue * __thiscall
UDS_VM_NpcFunction_TalkDialogue::UDS_VM_NpcFunction_TalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_TalkDialogue__6B_;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextDialogueButton).Delegate.field_0x10 = 0;
  (this->ClickSkipButton)._padding_ = '\0';
  (this->ClickSkipButton).bIsCustomSelected = false;
  (this->ClickSkipButton).bIsLacked = false;
  (this->ClickSkipButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSkipButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSkipButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSkipButton).Delegate.field_0x10 = 0;
  (this->NpcName).StringTableType = None;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->TalkDialogue).StringTableType = None;
  (this->TalkDialogue).StringTableID = 0;
  (this->TalkDialogue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkDialogue).StringEnumTableNameID.Number = 0;
  (this->TalkDialogue).DateTime.Ticks = 0;
  (this->TalkDialogue).TimeSpan.Ticks = 0;
  (this->TalkDialogue).TimeExpressionType = None;
  (this->TalkDialogue).IsExpression = false;
  (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).UniqueString.Data.ArrayNum = 0;
  (this->TalkDialogue).UniqueString.Data.ArrayMax = 0;
  (this->TalkDialogue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).FormatArgs.ArrayNum = 0;
  (this->TalkDialogue).FormatArgs.ArrayMax = 0;
  (this->Text_Skip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Skip).StringEnumTableNameID.Number = 0;
  (this->Text_Skip).DateTime.Ticks = 0;
  (this->Text_Skip).TimeSpan.Ticks = 0;
  (this->Text_Skip).TimeExpressionType = None;
  (this->Text_Skip).IsExpression = false;
  (this->Text_Skip).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Skip).UniqueString.Data.ArrayNum = 0;
  (this->Text_Skip).UniqueString.Data.ArrayMax = 0;
  (this->Text_Skip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Skip).FormatArgs.ArrayNum = 0;
  (this->Text_Skip).FormatArgs.ArrayMax = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurTalkIndex = 0;
  (this->AutoNextDialougeTimeHandle).Handle = 0;
  (this->ClickNextDialogueButton)._padding_ = '\0';
  (this->ClickNextDialogueButton).bIsCustomSelected = false;
  (this->ClickNextDialogueButton).bIsLacked = false;
  (this->ClickNextDialogueButton).bIsCustomDisabled = false;
  (this->Text_Skip).StringTableType = StringUi;
  (this->Text_Skip).StringTableID = 0xeb40;
  return this;
}

// UDS_VM_NpcFunction_TalkDialogue @ 14b6b2430

UDS_VM_NpcFunction_TalkDialogue * __thiscall
UDS_VM_NpcFunction_TalkDialogue::UDS_VM_NpcFunction_TalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_TalkDialogue__6B_;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate = 0;
  *(undefined8 *)&(this->ClickNextDialogueButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickNextDialogueButton).Delegate.field_0x10 = 0;
  (this->ClickSkipButton)._padding_ = '\0';
  (this->ClickSkipButton).bIsCustomSelected = false;
  (this->ClickSkipButton).bIsLacked = false;
  (this->ClickSkipButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSkipButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSkipButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSkipButton).Delegate.field_0x10 = 0;
  (this->NpcName).StringTableType = None;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->TalkDialogue).StringTableType = None;
  (this->TalkDialogue).StringTableID = 0;
  (this->TalkDialogue).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TalkDialogue).StringEnumTableNameID.Number = 0;
  (this->TalkDialogue).DateTime.Ticks = 0;
  (this->TalkDialogue).TimeSpan.Ticks = 0;
  (this->TalkDialogue).TimeExpressionType = None;
  (this->TalkDialogue).IsExpression = false;
  (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).UniqueString.Data.ArrayNum = 0;
  (this->TalkDialogue).UniqueString.Data.ArrayMax = 0;
  (this->TalkDialogue).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TalkDialogue).FormatArgs.ArrayNum = 0;
  (this->TalkDialogue).FormatArgs.ArrayMax = 0;
  (this->Text_Skip).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Text_Skip).StringEnumTableNameID.Number = 0;
  (this->Text_Skip).DateTime.Ticks = 0;
  (this->Text_Skip).TimeSpan.Ticks = 0;
  (this->Text_Skip).TimeExpressionType = None;
  (this->Text_Skip).IsExpression = false;
  (this->Text_Skip).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Skip).UniqueString.Data.ArrayNum = 0;
  (this->Text_Skip).UniqueString.Data.ArrayMax = 0;
  (this->Text_Skip).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text_Skip).FormatArgs.ArrayNum = 0;
  (this->Text_Skip).FormatArgs.ArrayMax = 0;
  (this->NpcDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  this->CurTalkIndex = 0;
  (this->AutoNextDialougeTimeHandle).Handle = 0;
  (this->ClickNextDialogueButton)._padding_ = '\0';
  (this->ClickNextDialogueButton).bIsCustomSelected = false;
  (this->ClickNextDialogueButton).bIsLacked = false;
  (this->ClickNextDialogueButton).bIsCustomDisabled = false;
  (this->Text_Skip).StringTableType = StringUi;
  (this->Text_Skip).StringTableID = 0xeb40;
  return this;
}

// ~UDS_VM_NpcFunction_TalkDialogue @ 14b6b3fb0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::~UDS_VM_NpcFunction_TalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_TalkDialogue__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Text_Skip).FormatArgs.AllocatorInstance.Data,
             (this->Text_Skip).FormatArgs.ArrayNum);
  pFVar1 = (this->Text_Skip).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Text_Skip).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TalkDialogue).FormatArgs.AllocatorInstance.Data,
             (this->TalkDialogue).FormatArgs.ArrayNum);
  pFVar1 = (this->TalkDialogue).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TalkDialogue).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcName).FormatArgs.AllocatorInstance.Data,
             (this->NpcName).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSkipButton).Delegate);
  pvVar2 = *(void **)&(this->ClickSkipButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSkipButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickNextDialogueButton).Delegate)
  ;
  pvVar2 = *(void **)&(this->ClickNextDialogueButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickNextDialogueButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6a20

IClassDescriptor * __thiscall
UDS_VM_NpcFunction_TalkDialogue::GetFieldNotificationDescriptor
          (UDS_VM_NpcFunction_TalkDialogue *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunction_TalkDialogue::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b75e0

UClass * __cdecl UDS_VM_NpcFunction_TalkDialogue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunction_TalkDialogue",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunction_TalkDialogue,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_NpcFunction_TalkDialogue>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunction_TalkDialogue>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunction_TalkDialogue.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunction_TalkDialogue @ 14b6b7df0

void __cdecl
UDS_VM_NpcFunction_TalkDialogue::StaticRegisterNativesUDS_VM_NpcFunction_TalkDialogue(void)

{
  return;
}

// __VTableCtorCaller @ 14b6b8ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NpcFunction_TalkDialogue::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_NpcFunction_TalkDialogue__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].ViewModelContext.Object = 0;
    *(undefined1 *)((longlong)&this[1].ViewModelContext.Object + 4) = 0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined1 *)&this[1].TextPropertyIDList.ArrayNum = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0xeb40;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].ViewModelContext.Object = 0;
    *(undefined1 *)((longlong)&this[2].ViewModelContext.Object + 4) = 0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// ClearTimerNextTalkDialogue @ 14beda150

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
UDS_VM_NpcFunction_TalkDialogue::ClearTimerNextTalkDialogue(UDS_VM_NpcFunction_TalkDialogue *this)

{
  FTimerHandle *pFVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  
  pFVar1 = &this->AutoNextDialougeTimeHandle;
  if (pFVar1->Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(this_00,pFVar1);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
  }
  return;
}

// GetNpcTalkDialogueID @ 14beef1c0

int __thiscall
UDS_VM_NpcFunction_TalkDialogue::GetNpcTalkDialogueID
          (UDS_VM_NpcFunction_TalkDialogue *this,int param_1,EDS_DialogueType param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  undefined1 local_res20 [8];
  TArray<FDS_NpcTalkDialogueTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_NpcTalkDialogueTableRow::GetAll(&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 8;
  uVar4 = local_28._8_8_;
  FVar5.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FDS_NpcTalkDialogueTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
      uVar4 = local_28._8_8_;
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if ((*(int *)(lVar2 + 0x20) == param_1) && (*(EDS_DialogueType *)(lVar2 + 0x24) == param_2)) {
      iVar3 = *(int *)(lVar2 + 8);
LAB_14beef228:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return iVar3;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  iVar3 = 0;
  goto LAB_14beef228;
}

// OnChangedNpcFunction @ 14bef82f0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnChangedNpcFunction
          (UDS_VM_NpcFunction_TalkDialogue *this,EDS_InteractionFunctionType *param_1)

{
  EDS_InteractionFunctionType EVar1;
  bool bVar2;
  int iVar3;
  UDS_NPCDataSet *this_00;
  UDS_DataSetBase *this_01;
  ESlateVisibility EVar4;
  EDS_DialogueType EVar5;
  
  EVar1 = *param_1;
  EVar5 = None;
  if (EVar1 == None) {
    EVar5 = NpcTalk;
  }
  else if (EVar1 == Shop) {
    EVar5 = NpcNpcShop;
  }
  else if (EVar1 == ReturnHomeRegistration) {
    EVar5 = NpcReturnHome;
  }
  else if (EVar1 == ItemCraft) {
    EVar5 = NpcNpcItemCraft;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if ((bVar2) && (EVar5 != None)) {
    if (*param_1 == None) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar3 = UDS_NPCDataSet::GetInteractionFunctionValue(this_00,this->InteractionID,None);
    }
    else {
      this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      iVar3 = UDS_DataSetBase::GetEntityTableID(this_01);
    }
    iVar3 = GetNpcTalkDialogueID(this,iVar3,EVar5);
    SetTalkDialougeData(this,iVar3);
  }
  EVar1 = *param_1;
  if ((EVar1 == None) || (EVar1 == ReturnHomeRegistration)) {
    EVar4 = Collapsed;
    if (0 < this->NpcTalkDialogueTableID) {
      EVar4 = SelfHitTestInvisible;
    }
  }
  else if ((EVar1 == NormalTalk) || (EVar4 = Collapsed, EVar1 == Quest)) {
    EVar4 = SelfHitTestInvisible;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar4);
  return;
}

// OnClickNextButton @ 14befa310

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnClickNextButton
          (UDS_VM_NpcFunction_TalkDialogue *this,FDS_ButtonEventField *param_1)

{
  SetNextTalkDialogue(this,false);
  return;
}

// OnClickSkipButton @ 14befb230

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnClickSkipButton
          (UDS_VM_NpcFunction_TalkDialogue *this,FDS_ButtonEventField *param_1)

{
  SetNextTalkDialogue(this,true);
  return;
}

// OnCloseInit @ 14befc110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunction_TalkDialogue::OnCloseInit(UDS_VM_NpcFunction_TalkDialogue *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  if ((this->AutoNextDialougeTimeHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->AutoNextDialougeTimeHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->AutoNextDialougeTimeHandle).Handle);
    }
    (this->AutoNextDialougeTimeHandle).Handle = 0;
  }
  return;
}

// OnSelectedNormalTalk @ 14bf042f0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnSelectedNormalTalk
          (UDS_VM_NpcFunction_TalkDialogue *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  FDS_NpcNormalTalkTableRow *this_00;
  
  if (0 < *param_1) {
    this_00 = FDS_NpcNormalTalkTableRow::GetRef((longlong)*param_1,true);
    bVar1 = FDS_NpcNormalTalkTableRow::IsValid(this_00);
    if (bVar1) {
      iVar2 = GetNpcTalkDialogueID(this,this_00->ID_DialogueGroupId,NpcNormalTalk);
      SetTalkDialougeData(this,iVar2);
    }
  }
  return;
}

// OnSelectedQuest @ 14bf043b0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnSelectedQuest(UDS_VM_NpcFunction_TalkDialogue *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  EDS_DialogueType EVar4;
  FWeakObjectPtr local_res10;
  
  if (0 < *param_1) {
    EVar4 = None;
    UDS_QuestManager::GetQuestData((int)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar3[2].field_0x19 == '\0') {
        EVar4 = QuestOngoing;
      }
      else if (pUVar3[2].field_0x19 == '\x01') {
        EVar4 = QuestComplete;
      }
    }
    else {
      EVar4 = QuestStart;
    }
    iVar2 = GetNpcTalkDialogueID(this,*param_1,EVar4);
    SetTalkDialougeData(this,iVar2);
  }
  return;
}

// OnSetViewModel @ 14bf09400

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::OnSetViewModel
          (UDS_VM_NpcFunction_TalkDialogue *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar5;
  UDS_NpcFunctionEvent *pUVar6;
  FName local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TSharedPtr<FDS_ViewModelContext_NpcFunction,1> local_98;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FName local_58;
  longlong lStack_50;
  FName local_48;
  longlong lStack_40;
  FName local_38;
  longlong lStack_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunction>(&local_98,&local_78);
  if (local_98.Object == (FDS_ViewModelContext_NpcFunction *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  else {
    TVar5 = TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    (this->NpcDataSet).WeakPtr = *TVar5.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
    if (bVar4) {
      this->InteractionID = (local_98.Object)->InteractionID;
      pUVar6 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar6 != (UDS_NpcFunctionEvent *)0x0) {
        iStack_a0 = 0;
        local_a8 = (FName)OnChangedNpcFunction;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->OnChangedNpcFunctionDelegate,this);
        lStack_50 = CONCAT44(uStack_9c,iStack_a0);
        local_58 = local_a8;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_InteractionFunctionType_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_NpcFunction_TalkDialogue>
                  (&pUVar6->OnChangedNpcFunctionDelegate,
                   (UDS_VM_NpcFunction_TalkDialogue *)&stack0x00000018,(pmf_7e121664 *)this);
        iStack_a0 = 0;
        local_a8 = (FName)OnSelectedQuest;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->OnSelectedQuestDelegate,this);
        lStack_40 = CONCAT44(uStack_9c,iStack_a0);
        local_48 = local_a8;
        TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_NpcFunction_TalkDialogue>
                  ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar6->OnSelectedQuestDelegate,
                   (UDS_VM_NpcFunction_TalkDialogue *)&stack0x00000020,(pmf_21ddce43 *)this);
        iStack_a0 = 0;
        local_a8 = (FName)OnSelectedNormalTalk;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar6->OnSelectedNormalTalkDelegate,this);
        lStack_30 = CONCAT44(uStack_9c,iStack_a0);
        local_38 = local_a8;
        TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_VM_NpcFunction_TalkDialogue>
                  ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar6->OnSelectedNormalTalkDelegate,
                   (UDS_VM_NpcFunction_TalkDialogue *)&stack0xffffffffffffff98,(pmf_21ddce43 *)this)
        ;
      }
      iVar3 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
      if (this->VisibilityNextDialogueButton != Collapsed) {
        this->VisibilityNextDialogueButton = Collapsed;
        local_80 = iVar3;
        local_88 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      }
      iVar3 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
      if (this->VisibilitySkipButton != Collapsed) {
        this->VisibilitySkipButton = Collapsed;
        iStack_a0 = iVar3;
        local_a8 = FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTimerNextTalkDialogue @ 14bf0aa30

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
UDS_VM_NpcFunction_TalkDialogue::OnTimerNextTalkDialogue(UDS_VM_NpcFunction_TalkDialogue *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  
  if ((this->AutoNextDialougeTimeHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar1 = FTimerManager::FindTimer(this_00,&this->AutoNextDialougeTimeHandle);
    if (pFVar1 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->AutoNextDialougeTimeHandle).Handle);
    }
    (this->AutoNextDialougeTimeHandle).Handle = 0;
  }
  SetNextTalkDialogue(this,false);
  return;
}

// SetNextTalkDialogue @ 14bf177f0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetNextTalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  FDS_NpcTalkDialogueTableRow *this_00;
  ADS_CameraManager *this_01;
  UDS_DataSetBase *this_02;
  UDS_NpcFunctionEvent *pUVar6;
  uint uVar7;
  longlong *plVar8;
  ulong64 local_res8;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FDS_Text local_88;
  
  this_00 = FDS_NpcTalkDialogueTableRow::GetRef((longlong)this->NpcTalkDialogueTableID,true);
  bVar4 = FDS_NpcTalkDialogueTableRow::IsValid(this_00);
  if (!bVar4) {
    return;
  }
  uVar7 = this->CurTalkIndex;
  if ((int)uVar7 < 0) {
    return;
  }
  iVar1 = (this_00->ID_StringQuest).ArrayNum;
  if (iVar1 <= (int)uVar7) {
    return;
  }
  if (param_1) {
    uVar7 = iVar1 - 1;
    this->CurTalkIndex = uVar7;
    if ((int)uVar7 < 0) goto LAB_14bf17927;
  }
  if ((int)uVar7 < (this_00->ID_NpcTalkCameraId).ArrayNum) {
    uVar5 = 0;
    if ((int)uVar7 < (this_00->ID_NpcTalkCameraId).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = *(int *)((this_00->ID_NpcTalkCameraId).AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                    );
    bVar4 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
    if ((bVar4) && (this_01 = ADS_CameraManager::GetInst(), this_01 != (ADS_CameraManager *)0x0)) {
      this_02 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
      local_res8 = UDS_DataSetBase::GetEntityID(this_02);
      ADS_CameraManager::SetNpcTalkCamera(this_01,&local_res8,iVar1);
    }
  }
LAB_14bf17927:
  SetTimerAutoNextDialogue(this);
  uVar7 = this->CurTalkIndex;
  this->CurTalkIndex = uVar7 + 1;
  uVar5 = 0;
  if ((int)uVar7 < (this_00->ID_StringQuest).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
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
  FDS_Text::SetTextFromStringTable
            (&local_88,StringQuest,
             *(long64 *)
              ((this_00->ID_StringQuest).AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
  iVar1 = FFieldNotificationClassDescriptor::TalkDialogue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::TalkDialogue.FieldName;
  FDS_Text::operator=(&this->TalkDialogue,&local_88);
  local_b0 = iVar1;
  local_b8 = FVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
             local_88.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
  }
  if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
  }
  if ((this_00->ID_StringQuest).ArrayNum <= this->CurTalkIndex) {
    pUVar6 = UDS_NpcFunctionEvent::GetEvent();
    if (pUVar6 != (UDS_NpcFunctionEvent *)0x0) {
      FDS_EventDelegate<>::Broadcast(&pUVar6->OnTalkDialogueLastDelegate);
    }
    iVar1 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
    plVar8 = &this->_padding_;
    if (this->VisibilityNextDialogueButton != Collapsed) {
      this->VisibilityNextDialogueButton = Collapsed;
      local_a0 = iVar1;
      local_a8 = FVar3;
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_a8);
    }
    local_90 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
    if (this->VisibilitySkipButton != Collapsed) {
      this->VisibilitySkipButton = Collapsed;
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_98);
    }
  }
  return;
}

// SetNpcCamera_TalkDailogue @ 14bf17bf0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetNpcCamera_TalkDailogue
          (UDS_VM_NpcFunction_TalkDialogue *this,int param_1)

{
  bool bVar1;
  ADS_CameraManager *this_00;
  UDS_DataSetBase *this_01;
  ulong64 local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcDataSet).WeakPtr);
  if ((bVar1) && (this_00 = ADS_CameraManager::GetInst(), this_00 != (ADS_CameraManager *)0x0)) {
    this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&(this->NpcDataSet).WeakPtr);
    local_res8 = UDS_DataSetBase::GetEntityID(this_01);
    ADS_CameraManager::SetNpcTalkCamera(this_00,&local_res8,param_1);
  }
  return;
}

// SetNpcName @ 14bf18610

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetNpcName(UDS_VM_NpcFunction_TalkDialogue *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NpcName.FieldName;
  FDS_Text::operator=(&this->NpcName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTalkDialogue @ 14bf18d90

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetTalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TalkDialogue.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TalkDialogue.FieldName;
  FDS_Text::operator=(&this->TalkDialogue,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTalkDialougeData @ 14bf18df0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetTalkDialougeData
          (UDS_VM_NpcFunction_TalkDialogue *this,int param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  FDS_NpcTalkDialogueTableRow *this_00;
  FDS_NpcBaseTableRow *pFVar4;
  FName local_78;
  int local_70;
  FDS_Text local_68;
  
  if (param_1 < 1) {
    this->NpcTalkDialogueTableID = 0;
  }
  else {
    this_00 = FDS_NpcTalkDialogueTableRow::GetRef((longlong)param_1,true);
    bVar3 = FDS_NpcTalkDialogueTableRow::IsValid(this_00);
    if (bVar3) {
      this->NpcTalkDialogueTableID = param_1;
      this->CurTalkIndex = 0;
      iVar2 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
      if (1 < (this_00->ID_StringQuest).ArrayNum) {
        if (this->VisibilityNextDialogueButton != SelfHitTestInvisible) {
          this->VisibilityNextDialogueButton = SelfHitTestInvisible;
          local_70 = iVar2;
          local_78 = FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
        iVar2 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
        FVar1 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
        if (this->VisibilitySkipButton != SelfHitTestInvisible) {
          this->VisibilitySkipButton = SelfHitTestInvisible;
          local_70 = iVar2;
          local_78 = FVar1;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
      }
      pFVar4 = FDS_NpcTalkDialogueTableRow::ID_TalkNpcIdTable(this_00);
      local_68.StringTableType = None;
      local_68.StringTableID = 0;
      local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_68.StringEnumTableNameID.Number = 0;
      local_68.TimeExpressionType = None;
      local_68.DateTime.Ticks = 0;
      local_68.TimeSpan.Ticks = 0;
      local_68.IsExpression = false;
      local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.UniqueString.Data.ArrayNum = 0;
      local_68.UniqueString.Data.ArrayMax = 0;
      local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.FormatArgs.ArrayNum = 0;
      local_68.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_68,&pFVar4->ID_NameSid);
      iVar2 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
      FVar1 = FFieldNotificationClassDescriptor::NpcName.FieldName;
      FDS_Text::operator=(&this->NpcName,&local_68);
      local_78 = FVar1;
      local_70 = iVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
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
      SetNextTalkDialogue(this,false);
    }
  }
  return;
}

// SetTimerAutoNextDialogue @ 14bf19000

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
UDS_VM_NpcFunction_TalkDialogue::SetTimerAutoNextDialogue(UDS_VM_NpcFunction_TalkDialogue *this)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTimerManager *pFVar6;
  FTimerData *pFVar7;
  FDS_NpcTalkDialogueTableRow *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_VM_NpcFunction_TalkDialogue *local_res8;
  FDelegateAllocation local_48;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((this->AutoNextDialougeTimeHandle).Handle != 0) {
    pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar7 = FTimerManager::FindTimer(pFVar6,&this->AutoNextDialougeTimeHandle);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar6,(FTimerHandle)(this->AutoNextDialougeTimeHandle).Handle);
    }
    (this->AutoNextDialougeTimeHandle).Handle = 0;
  }
  this_00 = FDS_NpcTalkDialogueTableRow::GetRef((longlong)this->NpcTalkDialogueTableID,true);
  bVar4 = FDS_NpcTalkDialogueTableRow::IsValid(this_00);
  if (bVar4) {
    uVar2 = this->CurTalkIndex;
    if ((int)uVar2 < (this_00->ID_StringQuest).ArrayNum + -1) {
      if (((int)uVar2 < 0) || ((this_00->PlayTime).ArrayNum <= (int)uVar2)) {
        uVar5 = 0;
        if ((int)uVar2 < (this_00->PlayTime).ArrayNum) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(float *)((this_00->PlayTime).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) <= 0.0
           ) {
          return;
        }
      }
      pFVar6 = FDS_TimerManager::Get((UObject *)0x0);
      uVar2 = this->CurTalkIndex;
      uVar5 = 0;
      if ((int)uVar2 < (this_00->PlayTime).ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_30 = 0;
      fVar1 = *(float *)((this_00->PlayTime).AllocatorInstance.Data + (longlong)(int)uVar2 * 4);
      local_38 = OnTimerNextTalkDialogue;
      local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_48.DelegateSize = 0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_48);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_NpcFunction_TalkDialogue____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
        puVar8[4] = local_38;
        puVar8[5] = CONCAT44(uStack_2c,uStack_30);
      }
      FTimerManager::SetTimer
                (pFVar6,&this->AutoNextDialougeTimeHandle,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_48,fVar1,false,__real_bf800000);
      if (local_48.DelegateSize != 0) {
        if (local_48.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          return;
        }
        (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_48,0,0,0x10);
        local_48.DelegateSize = 0;
      }
      if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_48.DelegateAllocator);
      }
    }
  }
  return;
}

// SetVisibilityNextDialogueButton @ 14bf1bfe0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetVisibilityNextDialogueButton
          (UDS_VM_NpcFunction_TalkDialogue *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityNextDialogueButton.FieldName;
  if (this->VisibilityNextDialogueButton != *param_1) {
    this->VisibilityNextDialogueButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilitySkipButton @ 14bf1c080

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetVisibilitySkipButton
          (UDS_VM_NpcFunction_TalkDialogue *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilitySkipButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilitySkipButton.FieldName;
  if (this->VisibilitySkipButton != *param_1) {
    this->VisibilitySkipButton = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityTalkDialogue @ 14bf1c0d0

void __thiscall
UDS_VM_NpcFunction_TalkDialogue::SetVisibilityTalkDialogue
          (UDS_VM_NpcFunction_TalkDialogue *this,EDS_InteractionFunctionType *param_1)

{
  EDS_InteractionFunctionType EVar1;
  ESlateVisibility EVar2;
  
  EVar1 = *param_1;
  if ((EVar1 == None) || (EVar1 == ReturnHomeRegistration)) {
    EVar2 = Collapsed;
    if (0 < this->NpcTalkDialogueTableID) {
      EVar2 = SelfHitTestInvisible;
    }
  }
  else if ((EVar1 == NormalTalk) || (EVar2 = Collapsed, EVar1 == Quest)) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
    return;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar2);
  return;
}

// UnbindModel @ 14bf1e6b0

void __thiscall UDS_VM_NpcFunction_TalkDialogue::UnbindModel(UDS_VM_NpcFunction_TalkDialogue *this)

{
  UDS_NpcFunctionEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedNpcFunctionDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedNormalTalkDelegate,this);
  }
  return;
}

