// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetClickSlotButton_WrapperImpl @ 14b6c4970

void __cdecl
UDS_VM_QuestDialogueScene_SelectTalkSlot::SetClickSlotButton_WrapperImpl
          (void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_QuestDialogueSceneManager *this;
  UDS_QuestEvent *pUVar3;
  
  this = UDS_QuestDialogueSceneManager::GetInst();
  if (this != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_QuestDialogueSceneManager::OnTalkSelect(this);
  }
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0x110);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedTalkSlotDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedTalkSlotDelegate).Delegate,iVar1);
    }
  }
  return;
}

// StaticClass @ 14b6c4980

UClass * __cdecl UDS_VM_QuestDialogueScene_SelectTalkSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestDialogueScene_SelectTalkSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestDialogueScene_SelectTalkSlot,0x118,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_QuestDialogueScene_SelectTalkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestDialogueScene_SelectTalkSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton;
}

// UDS_VM_QuestDialogueScene_SelectTalkSlot @ 14b6c9650

UDS_VM_QuestDialogueScene_SelectTalkSlot * __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::UDS_VM_QuestDialogueScene_SelectTalkSlot
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene_SelectTalkSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->SlotName).StringTableType = None;
  (this->SlotName).StringTableID = 0;
  (this->SlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SlotName).StringEnumTableNameID.Number = 0;
  (this->SlotName).DateTime.Ticks = 0;
  (this->SlotName).TimeSpan.Ticks = 0;
  (this->SlotName).TimeExpressionType = None;
  (this->SlotName).IsExpression = false;
  (this->SlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).UniqueString.Data.ArrayNum = 0;
  (this->SlotName).UniqueString.Data.ArrayMax = 0;
  (this->SlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).FormatArgs.ArrayNum = 0;
  (this->SlotName).FormatArgs.ArrayMax = 0;
  this->SlotIndex = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestDialogueScene_SelectTalkSlot @ 14b6c9700

UDS_VM_QuestDialogueScene_SelectTalkSlot * __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::UDS_VM_QuestDialogueScene_SelectTalkSlot
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene_SelectTalkSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->SlotName).StringTableType = None;
  (this->SlotName).StringTableID = 0;
  (this->SlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SlotName).StringEnumTableNameID.Number = 0;
  (this->SlotName).DateTime.Ticks = 0;
  (this->SlotName).TimeSpan.Ticks = 0;
  (this->SlotName).TimeExpressionType = None;
  (this->SlotName).IsExpression = false;
  (this->SlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).UniqueString.Data.ArrayNum = 0;
  (this->SlotName).UniqueString.Data.ArrayMax = 0;
  (this->SlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).FormatArgs.ArrayNum = 0;
  (this->SlotName).FormatArgs.ArrayMax = 0;
  this->SlotIndex = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestDialogueScene_SelectTalkSlot @ 14b6cc050

void __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::~UDS_VM_QuestDialogueScene_SelectTalkSlot
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestDialogueScene_SelectTalkSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SlotName).FormatArgs.AllocatorInstance.Data,
             (this->SlotName).FormatArgs.ArrayNum);
  pFVar1 = (this->SlotName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SlotName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar2 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf5a0

IClassDescriptor * __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::GetFieldNotificationDescriptor
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestDialogueScene_SelectTalkSlot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6cff40

UClass * __cdecl UDS_VM_QuestDialogueScene_SelectTalkSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestDialogueScene_SelectTalkSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestDialogueScene_SelectTalkSlot,0x118,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_QuestDialogueScene_SelectTalkSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestDialogueScene_SelectTalkSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestDialogueScene_SelectTalkSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestDialogueScene_SelectTalkSlot @ 14b6d0fc0

void __cdecl
UDS_VM_QuestDialogueScene_SelectTalkSlot::
StaticRegisterNativesUDS_VM_QuestDialogueScene_SelectTalkSlot(void)

{
  return;
}

// OnClickSlot @ 14bf62a90

void __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::OnClickSlot
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_QuestDialogueSceneManager *this_00;
  UDS_QuestEvent *pUVar3;
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    UDS_QuestDialogueSceneManager::OnTalkSelect(this_00);
  }
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = this->SlotIndex;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedTalkSlotDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedTalkSlotDelegate).Delegate,iVar1);
    }
  }
  return;
}

// OnSetViewModel @ 14bf6a580

void __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::OnSetViewModel
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this,
          TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDS_Text local_68;
  
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
  SafeCast<FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot>(&local_88,&local_78);
  if (local_88.Object != (FDS_ViewModelContext_QuestDialogueScene_SelectTalkSlot *)0x0) {
    this->SlotIndex = (local_88.Object)->SlotIndex;
    if (0 < (local_88.Object)->StringDialogueID) {
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
      local_68.StringTableType = None;
      FDS_Text::SetTextFromStringTable(&local_68,StringDialogue,(local_88.Object)->StringDialogueID)
      ;
      iVar3 = FFieldNotificationClassDescriptor::SlotName.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::SlotName.FieldName;
      FDS_Text::operator=(&this->SlotName,&local_68);
      local_98 = FVar2;
      local_90 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetName @ 14bf7c5f0

void __thiscall
UDS_VM_QuestDialogueScene_SelectTalkSlot::SetName
          (UDS_VM_QuestDialogueScene_SelectTalkSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::SlotName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SlotName.FieldName;
  FDS_Text::operator=(&this->SlotName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

