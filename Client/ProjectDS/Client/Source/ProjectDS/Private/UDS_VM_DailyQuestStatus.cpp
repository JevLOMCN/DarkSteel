// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetClickResetButton_WrapperImpl @ 14b635d50

void __cdecl UDS_VM_DailyQuestStatus::SetClickResetButton_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 14b635d60

UClass * __cdecl UDS_VM_DailyQuestStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DailyQuestStatus",
               &Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_DailyQuestStatus,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_DailyQuestStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_DailyQuestStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton;
}

// UDS_VM_DailyQuestStatus @ 14b639d50

UDS_VM_DailyQuestStatus * __thiscall
UDS_VM_DailyQuestStatus::UDS_VM_DailyQuestStatus
          (UDS_VM_DailyQuestStatus *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickResetButton)._padding_ = '\0';
  (this->ClickResetButton).bIsCustomSelected = false;
  (this->ClickResetButton).bIsLacked = false;
  (this->ClickResetButton).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DailyQuestStatus__6B_;
  *(undefined8 *)&(this->ClickResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickResetButton).Delegate.field_0x10 = 0;
  FText::FText(&this->QuestSuggestCountText);
  FText::FText(&this->QuestCompleteCountText);
  return this;
}

// UDS_VM_DailyQuestStatus @ 14b639dd0

UDS_VM_DailyQuestStatus * __thiscall
UDS_VM_DailyQuestStatus::UDS_VM_DailyQuestStatus
          (UDS_VM_DailyQuestStatus *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickResetButton)._padding_ = '\0';
  (this->ClickResetButton).bIsCustomSelected = false;
  (this->ClickResetButton).bIsLacked = false;
  (this->ClickResetButton).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DailyQuestStatus__6B_;
  *(undefined8 *)&(this->ClickResetButton).Delegate = 0;
  *(undefined8 *)&(this->ClickResetButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickResetButton).Delegate.field_0x10 = 0;
  FText::FText(&this->QuestSuggestCountText);
  FText::FText(&this->QuestCompleteCountText);
  return this;
}

// ~UDS_VM_DailyQuestStatus @ 14b63c610

void __thiscall UDS_VM_DailyQuestStatus::~UDS_VM_DailyQuestStatus(UDS_VM_DailyQuestStatus *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DailyQuestStatus__6B_;
  pIVar1 = (this->QuestCompleteCountText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->QuestSuggestCountText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickResetButton).Delegate);
  pvVar2 = *(void **)&(this->ClickResetButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickResetButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f290

IClassDescriptor * __thiscall
UDS_VM_DailyQuestStatus::GetFieldNotificationDescriptor(UDS_VM_DailyQuestStatus *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_DailyQuestStatus::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63fb50

UClass * __cdecl UDS_VM_DailyQuestStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DailyQuestStatus",
               &Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton,
               StaticRegisterNativesUDS_VM_DailyQuestStatus,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_DailyQuestStatus>,
               InternalVTableHelperCtorCaller<UDS_VM_DailyQuestStatus>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DailyQuestStatus.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_DailyQuestStatus @ 14b640a80

void __cdecl UDS_VM_DailyQuestStatus::StaticRegisterNativesUDS_VM_DailyQuestStatus(void)

{
  return;
}

// BindModel @ 14bdb1910

void __thiscall UDS_VM_DailyQuestStatus::BindModel(UDS_VM_DailyQuestStatus *this)

{
  UDS_DailyQuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DailyQuestEvent::GetEvent();
  if (pUVar1 != (UDS_DailyQuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->UpdateQuestBoardText,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_DailyQuestStatus>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->UpdateQuestBoardText,(UDS_VM_DailyQuestStatus *)&stack0x00000010,
               (pmf_e6639e34 *)this);
  }
  return;
}

// InitViewModel @ 14bdc70d0

void __thiscall UDS_VM_DailyQuestStatus::InitViewModel(UDS_VM_DailyQuestStatus *this)

{
  OnUpdateQuestBoardText(this);
                    /* WARNING: Could not recover jumptable at 0x00014bdc70e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))(this);
  return;
}

// OnClickResetButton @ 14bdcd2f0

void __thiscall
UDS_VM_DailyQuestStatus::OnClickResetButton
          (UDS_VM_DailyQuestStatus *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnUpdateQuestBoardText @ 14bde0dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_VM_DailyQuestStatus::OnUpdateQuestBoardText(UDS_VM_DailyQuestStatus *this)

{
  int iVar1;
  int iVar2;
  UDS_DailyQuestManager *this_00;
  FText *pFVar3;
  longlong lVar4;
  undefined1 auStackY_f8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  undefined8 local_a0;
  FText local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_50;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this_00 = UDS_DailyQuestManager::GetInst();
  if (this_00 != (UDS_DailyQuestManager *)0x0) {
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_40[0] = 0;
    iVar1 = 0;
    if ((TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
         *)local_88 != &this_00->SuggestDailyQuestMap) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                (&local_50,local_40,
                 (ForElementType<FSetElementId> *)&(this_00->SuggestDailyQuestMap).field_0x38,
                 *(int *)&(this_00->SuggestDailyQuestMap).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_88,
                  (TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this_00->SuggestDailyQuestMap);
      iVar1 = local_88._8_4_;
    }
    iVar2 = local_54;
    if (local_b8.ArrayNum == local_b8.ArrayMax) {
      local_b8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
    }
    lVar4 = (longlong)local_b8.ArrayNum;
    local_b8.ArrayNum = local_b8.ArrayNum + 1;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)(local_b8.AllocatorInstance.Data + lVar4 * 0x20),iVar1 - iVar2);
    local_40[0] = 0;
    if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar1 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    iVar1 = DS_CommonDataHelper::DailyQuestSuggestZone();
    if (local_b8.ArrayNum == local_b8.ArrayMax) {
      local_b8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
    }
    lVar4 = (longlong)local_b8.ArrayNum;
    local_b8.ArrayNum = local_b8.ArrayNum + 1;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)(local_b8.AllocatorInstance.Data + lVar4 * 0x20),iVar1);
    local_a0 = 0xed85;
    local_a8 = (FName)&___7FDS_StringUiID__6B_;
    pFVar3 = FDS_StringIDWrapper::FormatText((FDS_StringIDWrapper *)&local_a8,&local_98,&local_b8);
    FText::operator=(&this->QuestSuggestCountText,pFVar3);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    iVar2 = UDS_DailyQuestManager::GetDailyQuestCompleteCount(this_00);
    iVar1 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar1 + 1;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)(local_c8.AllocatorInstance.Data + (longlong)iVar1 * 0x20),iVar2)
    ;
    iVar1 = this_00->MaxDailyQuestComplete;
    iVar2 = local_c8.ArrayNum;
    if (local_c8.ArrayNum == local_c8.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
    }
    local_c8.ArrayNum = iVar2 + 1;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)(local_c8.AllocatorInstance.Data + (longlong)iVar2 * 0x20),iVar1)
    ;
    local_a8 = (FName)&___7FDS_StringUiID__6B_;
    local_a0 = 0xed86;
    pFVar3 = FDS_StringIDWrapper::FormatText((FDS_StringIDWrapper *)&local_a8,&local_98,&local_c8);
    FText::operator=(&this->QuestCompleteCountText,pFVar3);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    local_a0._0_4_ = FFieldNotificationClassDescriptor::QuestSuggestCountText.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::QuestSuggestCountText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    local_a0 = CONCAT44(local_a0._4_4_,
                        FFieldNotificationClassDescriptor::QuestCompleteCountText.BitNumber);
    local_a8 = FFieldNotificationClassDescriptor::QuestCompleteCountText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FStringFormatArg *)local_c8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// UnbindModel @ 14bdecbd0

void __thiscall UDS_VM_DailyQuestStatus::UnbindModel(UDS_VM_DailyQuestStatus *this)

{
  UDS_DailyQuestEvent *pUVar1;
  
  pUVar1 = UDS_DailyQuestEvent::GetEvent();
  if (pUVar1 != (UDS_DailyQuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->UpdateQuestBoardText,
               this);
    return;
  }
  return;
}

