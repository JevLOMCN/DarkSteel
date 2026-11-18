// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickButtonEvent_WrapperImpl @ 14b61b580

void __cdecl UDS_VM_CommonEditableText::SetClickButtonEvent_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x138),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x148) != 0) &&
     (plVar1 = *(longlong **)((longlong)param_1 + 0x140), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,(longlong)param_1 + 0x128);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetTextChangedEvent_WrapperImpl @ 14b61b590

void __cdecl UDS_VM_CommonEditableText::SetTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  int iVar5;
  FName FStack_78;
  int iStack_70;
  ForAnyElementType FStack_68;
  int iStack_60;
  int iStack_5c;
  wchar_t *pwStack_58;
  FMRSWRecursiveAccessDetector *pFStack_50;
  bool bStack_48;
  undefined1 auStack_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_38;
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  pFVar2 = FText::ToString(param_2);
  FStack_68.Data = (FScriptContainerElement *)0x0;
  iStack_60 = (pFVar2->Data).ArrayNum;
  lVar4 = (longlong)iStack_60;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (iStack_60 == 0) {
    iStack_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iStack_60,0,&FStack_68,iStack_60,&iStack_5c);
    memcpy(FStack_68.Data,_Src,lVar4 * 2);
  }
  iVar5 = iStack_60 + -1;
  if (iStack_60 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange((FString *)((longlong)param_1 + 0x128),(wchar_t *)FStack_68.Data,iVar5);
  if (*(int *)((longlong)param_2 + 0x10) == 1) {
    auStack_40[0] = '\0';
    auStack_40[1] = false;
    auStack_40[2] = false;
    auStack_40[3] = false;
    auStack_40._4_4_ = None;
    uStack_28 = 0;
    TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>::
    ExecuteIfBound((TDelegate<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>
                    *)((longlong)param_1 + 0x138),(FDS_ButtonEventField *)auStack_40,
                   (FString *)((longlong)param_1 + 0x128));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_38,(FWriteAccessScope *)&pwStack_58);
    if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      uStack_28 = uStack_28 & 0xffffffff00000000;
    }
    if (bStack_48 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_50,(FDestructionSentinel *)&pwStack_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  }
  else {
    iVar5 = *(int *)((longlong)param_1 + 0x150);
    iVar1 = iStack_60 + -1;
    if (iStack_60 == 0) {
      iVar1 = 0;
    }
    if (iVar5 < iVar1) {
      iVar1 = 0;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (iStack_60 != 0) {
        FVar3.Data = FStack_68.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)&pwStack_58,(wchar_t *)FVar3.Data,iVar1);
      iVar5 = (int)pFStack_50 + -1;
      if ((int)pFStack_50 == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange((FString *)((longlong)param_1 + 0x128),pwStack_58,iVar5);
      iStack_70 = FFieldNotificationClassDescriptor::CurrentText.BitNumber;
      FStack_78 = FFieldNotificationClassDescriptor::CurrentText.FieldName;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_78);
      if ((FScriptContainerElement *)pwStack_58 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pwStack_58);
      }
    }
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  return;
}

// StaticClass @ 14b61b5a0

UClass * __cdecl UDS_VM_CommonEditableText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonEditableText",
               &Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonEditableText,0x158,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_CommonEditableText>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonEditableText>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton;
}

// UDS_VM_CommonEditableText @ 14b6202f0

UDS_VM_CommonEditableText * __thiscall
UDS_VM_CommonEditableText::UDS_VM_CommonEditableText
          (UDS_VM_CommonEditableText *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickButtonEvent)._padding_ = '\0';
  (this->ClickButtonEvent).bIsCustomSelected = false;
  (this->ClickButtonEvent).bIsLacked = false;
  (this->ClickButtonEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditableText__6B_;
  *(undefined8 *)&(this->ClickButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonEvent).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->DefaultText).StringTableType = None;
  (this->DefaultText).StringTableID = 0;
  (this->DefaultText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DefaultText).StringEnumTableNameID.Number = 0;
  (this->DefaultText).DateTime.Ticks = 0;
  (this->DefaultText).TimeSpan.Ticks = 0;
  (this->DefaultText).TimeExpressionType = None;
  (this->DefaultText).IsExpression = false;
  (this->DefaultText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultText).UniqueString.Data.ArrayNum = 0;
  (this->DefaultText).UniqueString.Data.ArrayMax = 0;
  (this->DefaultText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultText).FormatArgs.ArrayNum = 0;
  (this->DefaultText).FormatArgs.ArrayMax = 0;
  (this->CurrentText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentText).Data.ArrayNum = 0;
  (this->CurrentText).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnTextChangedDelegate = 0;
  *(undefined8 *)&(this->OnTextChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChangedDelegate).field_0x10 = 0;
  this->MaxTextLength = 0;
  return this;
}

// UDS_VM_CommonEditableText @ 14b6203e0

UDS_VM_CommonEditableText * __thiscall
UDS_VM_CommonEditableText::UDS_VM_CommonEditableText
          (UDS_VM_CommonEditableText *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickButtonEvent)._padding_ = '\0';
  (this->ClickButtonEvent).bIsCustomSelected = false;
  (this->ClickButtonEvent).bIsLacked = false;
  (this->ClickButtonEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditableText__6B_;
  *(undefined8 *)&(this->ClickButtonEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickButtonEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButtonEvent).Delegate.field_0x10 = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->DefaultText).StringTableType = None;
  (this->DefaultText).StringTableID = 0;
  (this->DefaultText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DefaultText).StringEnumTableNameID.Number = 0;
  (this->DefaultText).DateTime.Ticks = 0;
  (this->DefaultText).TimeSpan.Ticks = 0;
  (this->DefaultText).TimeExpressionType = None;
  (this->DefaultText).IsExpression = false;
  (this->DefaultText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultText).UniqueString.Data.ArrayNum = 0;
  (this->DefaultText).UniqueString.Data.ArrayMax = 0;
  (this->DefaultText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultText).FormatArgs.ArrayNum = 0;
  (this->DefaultText).FormatArgs.ArrayMax = 0;
  (this->CurrentText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentText).Data.ArrayNum = 0;
  (this->CurrentText).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnTextChangedDelegate = 0;
  *(undefined8 *)&(this->OnTextChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChangedDelegate).field_0x10 = 0;
  this->MaxTextLength = 0;
  return this;
}

// ~UDS_VM_CommonEditableText @ 14b621750

void __thiscall
UDS_VM_CommonEditableText::~UDS_VM_CommonEditableText(UDS_VM_CommonEditableText *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditableText__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate);
  pvVar1 = *(void **)&(this->OnTextChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChangedDelegate);
  pFVar2 = (this->CurrentText).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DefaultText).FormatArgs.AllocatorInstance.Data,
             (this->DefaultText).FormatArgs.ArrayNum);
  pFVar2 = (this->DefaultText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DefaultText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButtonEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickButtonEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButtonEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6239d0

IClassDescriptor * __thiscall
UDS_VM_CommonEditableText::GetFieldNotificationDescriptor(UDS_VM_CommonEditableText *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6242b0

UClass * __cdecl UDS_VM_CommonEditableText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonEditableText",
               &Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonEditableText,0x158,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_CommonEditableText>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonEditableText>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonEditableText.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonEditableText @ 14b624b50

void __cdecl UDS_VM_CommonEditableText::StaticRegisterNativesUDS_VM_CommonEditableText(void)

{
  return;
}

// BindModel @ 14bdb1180

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CommonEditableText::BindModel(UDS_VM_CommonEditableText *this)

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

// InitViewModel @ 14bdc6950

void __thiscall UDS_VM_CommonEditableText::InitViewModel(UDS_VM_CommonEditableText *this)

{
  return;
}

// OnClickButtonEvent @ 14bdcb920

void __thiscall
UDS_VM_CommonEditableText::OnClickButtonEvent
          (UDS_VM_CommonEditableText *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate,
             &local_28);
  if ((*(int *)&(this->OnTextChangedDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTextChangedDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,&this->CurrentText);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseInit @ 14bdcdb50

void __thiscall UDS_VM_CommonEditableText::OnCloseInit(UDS_VM_CommonEditableText *this)

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

// OnSetViewModel @ 14bdd6960

void __thiscall
UDS_VM_CommonEditableText::OnSetViewModel
          (UDS_VM_CommonEditableText *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_CommonEditableText,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonEditableText>(&local_68,&local_58);
  if (local_68.Object == (FDS_ViewModelContext_CommonEditableText *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    FDS_Text::operator=(&this->DefaultText,&(local_68.Object)->DefaultText);
    this->MaxTextLength = (local_68.Object)->MaxTextLength;
    if (&(local_68.Object)->OnTextChangedDelegate != &this->OnTextChangedDelegate) {
      local_98 = (undefined1  [8])0x0;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->OnTextChangedDelegate,&local_30);
      if ((*(int *)&((local_68.Object)->OnTextChangedDelegate).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&((local_68.Object)->OnTextChangedDelegate).field_0x8,
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_98);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_48);
      if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_90.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
        local_88 = 0;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
    }
    local_70 = FFieldNotificationClassDescriptor::DefaultText.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::DefaultText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextChangedEvent @ 14bdded70

void __thiscall
UDS_VM_CommonEditableText::OnTextChangedEvent
          (UDS_VM_CommonEditableText *this,FDS_TextCommittedEventField *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  int iVar5;
  FName local_78;
  int local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  FMRSWRecursiveAccessDetector *local_50;
  bool local_48;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pFVar2 = FText::ToString(&param_1->NewText);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = (pFVar2->Data).ArrayNum;
  lVar4 = (longlong)local_60;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60,0,&local_68,local_60,&local_5c);
    memcpy(local_68.Data,_Src,lVar4 * 2);
  }
  iVar5 = local_60 + -1;
  if (local_60 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange(&this->CurrentText,(wchar_t *)local_68.Data,iVar5);
  if (param_1->CommitType == OnEnter) {
    local_40[0] = '\0';
    local_40[1] = false;
    local_40[2] = false;
    local_40[3] = false;
    local_40._4_4_ = None;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(FDS_ButtonEventField_const_&,FString_&),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnTextChangedDelegate,(FDS_ButtonEventField *)local_40,&this->CurrentText)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_48 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50,(FDestructionSentinel *)&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  else {
    iVar5 = this->MaxTextLength;
    iVar1 = local_60 + -1;
    if (local_60 == 0) {
      iVar1 = 0;
    }
    if (iVar5 < iVar1) {
      iVar1 = 0;
      if (0 < iVar5) {
        iVar1 = iVar5;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_60 != 0) {
        FVar3.Data = local_68.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)&local_58,(wchar_t *)FVar3.Data,iVar1);
      iVar5 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&this->CurrentText,local_58,iVar5);
      local_70 = FFieldNotificationClassDescriptor::CurrentText.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::CurrentText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      if ((FScriptContainerElement *)local_58 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// UnbindModel @ 14bdec590

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CommonEditableText::UnbindModel(UDS_VM_CommonEditableText *this)

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

