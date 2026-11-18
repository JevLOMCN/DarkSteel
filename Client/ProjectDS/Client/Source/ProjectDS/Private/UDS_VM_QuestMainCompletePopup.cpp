// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// SetClickRewardButton_WrapperImpl @ 14b6c5a60

void __cdecl
UDS_VM_QuestMainCompletePopup::SetClickRewardButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_QuestManager *this;
  UDS_QuestDialogueSceneManager *this_00;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x120));
    this_00 = UDS_QuestDialogueSceneManager::GetInst();
    if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
      UDS_QuestDialogueSceneManager::OnDialogueSceneEnd(this_00,false,true);
      return;
    }
  }
  return;
}

// StaticClass @ 14b6c5a70

UClass * __cdecl UDS_VM_QuestMainCompletePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainCompletePopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainCompletePopup,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainCompletePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainCompletePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton;
}

// UDS_VM_QuestMainCompletePopup @ 14b6cab90

UDS_VM_QuestMainCompletePopup * __thiscall
UDS_VM_QuestMainCompletePopup::UDS_VM_QuestMainCompletePopup
          (UDS_VM_QuestMainCompletePopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainCompletePopup__6B_;
  *(undefined8 *)&(this->ClickRewardButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardButton).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->ClickRewardButton)._padding_ = '\0';
  (this->ClickRewardButton).bIsCustomSelected = false;
  (this->ClickRewardButton).bIsLacked = false;
  (this->ClickRewardButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  return this;
}

// UDS_VM_QuestMainCompletePopup @ 14b6cac50

UDS_VM_QuestMainCompletePopup * __thiscall
UDS_VM_QuestMainCompletePopup::UDS_VM_QuestMainCompletePopup
          (UDS_VM_QuestMainCompletePopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainCompletePopup__6B_;
  *(undefined8 *)&(this->ClickRewardButton).Delegate = 0;
  *(undefined8 *)&(this->ClickRewardButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRewardButton).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->ClickRewardButton)._padding_ = '\0';
  (this->ClickRewardButton).bIsCustomSelected = false;
  (this->ClickRewardButton).bIsLacked = false;
  (this->ClickRewardButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  return this;
}

// ~UDS_VM_QuestMainCompletePopup @ 14b6cc920

void __thiscall
UDS_VM_QuestMainCompletePopup::~UDS_VM_QuestMainCompletePopup(UDS_VM_QuestMainCompletePopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainCompletePopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRewardButton).Delegate);
  pvVar2 = *(void **)&(this->ClickRewardButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRewardButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfae0

IClassDescriptor * __thiscall
UDS_VM_QuestMainCompletePopup::GetFieldNotificationDescriptor(UDS_VM_QuestMainCompletePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainCompletePopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0840

UClass * __cdecl UDS_VM_QuestMainCompletePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainCompletePopup",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainCompletePopup,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainCompletePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainCompletePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainCompletePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainCompletePopup @ 14b6d10b0

void __cdecl UDS_VM_QuestMainCompletePopup::StaticRegisterNativesUDS_VM_QuestMainCompletePopup(void)

{
  return;
}

// OnClickRewardButton @ 14bf62710

void __thiscall
UDS_VM_QuestMainCompletePopup::OnClickRewardButton
          (UDS_VM_QuestMainCompletePopup *this,FDS_ButtonEventField *param_1)

{
  UDS_QuestManager *this_00;
  UDS_QuestDialogueSceneManager *this_01;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::OnReqQuestComplete(this_00,this->QuestID);
    this_01 = UDS_QuestDialogueSceneManager::GetInst();
    if (this_01 != (UDS_QuestDialogueSceneManager *)0x0) {
      UDS_QuestDialogueSceneManager::OnDialogueSceneEnd(this_01,false,true);
      return;
    }
  }
  return;
}

// OnCloseInit @ 14bf634c0

void __thiscall UDS_VM_QuestMainCompletePopup::OnCloseInit(UDS_VM_QuestMainCompletePopup *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnCloseMySelf @ 14bf63650

void __thiscall UDS_VM_QuestMainCompletePopup::OnCloseMySelf(UDS_VM_QuestMainCompletePopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bf6c020

void __thiscall
UDS_VM_QuestMainCompletePopup::OnSetViewModel
          (UDS_VM_QuestMainCompletePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_QuestManager *pUVar5;
  UDS_VM_QuestInfo *pUVar6;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1->Object == (FDS_ViewModelContext *)0x0) ||
     (pUVar5 = UDS_QuestManager::GetInst(), pUVar5 == (UDS_QuestManager *)0x0)) goto LAB_14bf6c13d;
  iVar4 = UDS_QuestManager::GetProgressMainQuestID();
  pUVar6 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
  this->QuestID = iVar4;
  if (pUVar6 == (UDS_VM_QuestInfo *)0x0) {
    pUVar6 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 != (UDS_VM_QuestInfo *)0x0) goto LAB_14bf6c095;
  }
  else {
LAB_14bf6c095:
    MakeContext<FDS_ViewModelContext_Quest>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x76;
      pFVar2->QuestID = this->QuestID;
      pUVar6 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar6,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  UDS_WindowInfoBase::SetEscapeLock(QuestMainComplete,true);
LAB_14bf6c13d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_QuestInfo @ 14bf80740

void __thiscall UDS_VM_QuestMainCompletePopup::SetVM_QuestInfo(UDS_VM_QuestMainCompletePopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestInfo *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestInfo).field0_0x0.DebugPtr == (UDS_VM_QuestInfo *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestInfo *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x76;
  pFVar2->QuestID = this->QuestID;
  pUVar4 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
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

