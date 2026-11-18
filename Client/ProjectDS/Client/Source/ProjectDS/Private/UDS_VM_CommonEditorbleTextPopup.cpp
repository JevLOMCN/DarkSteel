// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetTextChangedEvent_WrapperImpl @ 14b61bf20

void __cdecl
UDS_VM_CommonEditorbleTextPopup::SetTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_2);
  ::FString::operator=((FString *)((longlong)param_1 + 600),pFVar1);
  return;
}

// SetClickOkEvnet_WrapperImpl @ 14b61bf30

void __cdecl
UDS_VM_CommonEditorbleTextPopup::SetClickOkEvnet_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_UIEvent *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    pFVar4 = ::FString::FString(&FStack_38,(FString *)((longlong)param_1 + 600));
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->EditorbleTextStringDel);
    if (bVar2) {
      pFVar5 = ::FString::FString(&FStack_28,pFVar4);
      pFVar6 = ::FString::FString(&FStack_18,pFVar5);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->EditorbleTextStringDel,pFVar6);
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// SetClickCancleEvnet_WrapperImpl @ 14b61bf40

void __cdecl
UDS_VM_CommonEditorbleTextPopup::SetClickCancleEvnet_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_UIEvent *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    pFVar4 = ::FString::FString(&FStack_38,(FString *)((longlong)param_1 + 600));
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->EditorbleTextStringDel);
    if (bVar2) {
      pFVar5 = ::FString::FString(&FStack_28,pFVar4);
      pFVar6 = ::FString::FString(&FStack_18,pFVar5);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->EditorbleTextStringDel,pFVar6);
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// StaticClass @ 14b61bf50

UClass * __cdecl UDS_VM_CommonEditorbleTextPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonEditorbleTextPopup",
               &Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonEditorbleTextPopup,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CommonEditorbleTextPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonEditorbleTextPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton;
}

// UDS_VM_CommonEditorbleTextPopup @ 14b6204d0

UDS_VM_CommonEditorbleTextPopup * __thiscall
UDS_VM_CommonEditorbleTextPopup::UDS_VM_CommonEditorbleTextPopup
          (UDS_VM_CommonEditorbleTextPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ErrorTextVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_CommonIconTextButtonCancle).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditorbleTextPopup__6B_;
  (this->VM_CommonIconTextButtonConfirm).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  (this->ContextText).StringTableType = None;
  (this->ContextText).StringTableID = 0;
  (this->ContextText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContextText).StringEnumTableNameID.Number = 0;
  (this->ContextText).DateTime.Ticks = 0;
  (this->ContextText).TimeSpan.Ticks = 0;
  (this->ContextText).TimeExpressionType = None;
  (this->ContextText).IsExpression = false;
  (this->ContextText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).UniqueString.Data.ArrayNum = 0;
  (this->ContextText).UniqueString.Data.ArrayMax = 0;
  (this->ContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).FormatArgs.ArrayNum = 0;
  (this->ContextText).FormatArgs.ArrayMax = 0;
  (this->InputText).StringTableType = None;
  (this->InputText).StringTableID = 0;
  (this->InputText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InputText).StringEnumTableNameID.Number = 0;
  (this->InputText).DateTime.Ticks = 0;
  (this->InputText).TimeSpan.Ticks = 0;
  (this->InputText).TimeExpressionType = None;
  (this->InputText).IsExpression = false;
  (this->InputText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputText).UniqueString.Data.ArrayNum = 0;
  (this->InputText).UniqueString.Data.ArrayMax = 0;
  (this->InputText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputText).FormatArgs.ArrayNum = 0;
  (this->InputText).FormatArgs.ArrayMax = 0;
  (this->ErrorText).StringTableType = None;
  (this->ErrorText).StringTableID = 0;
  (this->ErrorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ErrorText).StringEnumTableNameID.Number = 0;
  (this->ErrorText).DateTime.Ticks = 0;
  (this->ErrorText).TimeSpan.Ticks = 0;
  (this->ErrorText).TimeExpressionType = None;
  (this->ErrorText).IsExpression = false;
  (this->ErrorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).UniqueString.Data.ArrayNum = 0;
  (this->ErrorText).UniqueString.Data.ArrayMax = 0;
  (this->ErrorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).FormatArgs.ArrayNum = 0;
  (this->ErrorText).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->ClickOkEvnet)._padding_ = '\0';
  (this->ClickOkEvnet).bIsCustomSelected = false;
  (this->ClickOkEvnet).bIsLacked = false;
  (this->ClickOkEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOkEvnet).Delegate.field_0x10 = 0;
  (this->ClickCancleEvnet)._padding_ = '\0';
  (this->ClickCancleEvnet).bIsCustomSelected = false;
  (this->ClickCancleEvnet).bIsLacked = false;
  (this->ClickCancleEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancleEvnet).Delegate.field_0x10 = 0;
  (this->TitleText).StringTableType = None;
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
  (this->EditorbleTextConext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorbleTextConext).Data.ArrayNum = 0;
  (this->EditorbleTextConext).Data.ArrayMax = 0;
  return this;
}

// UDS_VM_CommonEditorbleTextPopup @ 14b6206c0

UDS_VM_CommonEditorbleTextPopup * __thiscall
UDS_VM_CommonEditorbleTextPopup::UDS_VM_CommonEditorbleTextPopup
          (UDS_VM_CommonEditorbleTextPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ErrorTextVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_CommonIconTextButtonCancle).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditorbleTextPopup__6B_;
  (this->VM_CommonIconTextButtonConfirm).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr = (UDS_VM_W_ContentsPopupTitle *)0x0;
  (this->ContextText).StringTableType = None;
  (this->ContextText).StringTableID = 0;
  (this->ContextText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ContextText).StringEnumTableNameID.Number = 0;
  (this->ContextText).DateTime.Ticks = 0;
  (this->ContextText).TimeSpan.Ticks = 0;
  (this->ContextText).TimeExpressionType = None;
  (this->ContextText).IsExpression = false;
  (this->ContextText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).UniqueString.Data.ArrayNum = 0;
  (this->ContextText).UniqueString.Data.ArrayMax = 0;
  (this->ContextText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextText).FormatArgs.ArrayNum = 0;
  (this->ContextText).FormatArgs.ArrayMax = 0;
  (this->InputText).StringTableType = None;
  (this->InputText).StringTableID = 0;
  (this->InputText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InputText).StringEnumTableNameID.Number = 0;
  (this->InputText).DateTime.Ticks = 0;
  (this->InputText).TimeSpan.Ticks = 0;
  (this->InputText).TimeExpressionType = None;
  (this->InputText).IsExpression = false;
  (this->InputText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputText).UniqueString.Data.ArrayNum = 0;
  (this->InputText).UniqueString.Data.ArrayMax = 0;
  (this->InputText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputText).FormatArgs.ArrayNum = 0;
  (this->InputText).FormatArgs.ArrayMax = 0;
  (this->ErrorText).StringTableType = None;
  (this->ErrorText).StringTableID = 0;
  (this->ErrorText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ErrorText).StringEnumTableNameID.Number = 0;
  (this->ErrorText).DateTime.Ticks = 0;
  (this->ErrorText).TimeSpan.Ticks = 0;
  (this->ErrorText).TimeExpressionType = None;
  (this->ErrorText).IsExpression = false;
  (this->ErrorText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).UniqueString.Data.ArrayNum = 0;
  (this->ErrorText).UniqueString.Data.ArrayMax = 0;
  (this->ErrorText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorText).FormatArgs.ArrayNum = 0;
  (this->ErrorText).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->TextChangedEvent).NewText);
  (this->ClickOkEvnet)._padding_ = '\0';
  (this->ClickOkEvnet).bIsCustomSelected = false;
  (this->ClickOkEvnet).bIsLacked = false;
  (this->ClickOkEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickOkEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickOkEvnet).Delegate.field_0x10 = 0;
  (this->ClickCancleEvnet)._padding_ = '\0';
  (this->ClickCancleEvnet).bIsCustomSelected = false;
  (this->ClickCancleEvnet).bIsLacked = false;
  (this->ClickCancleEvnet).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate = 0;
  *(undefined8 *)&(this->ClickCancleEvnet).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancleEvnet).Delegate.field_0x10 = 0;
  (this->TitleText).StringTableType = None;
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
  (this->EditorbleTextConext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditorbleTextConext).Data.ArrayNum = 0;
  (this->EditorbleTextConext).Data.ArrayMax = 0;
  return this;
}

// ~UDS_VM_CommonEditorbleTextPopup @ 14b621840

void __thiscall
UDS_VM_CommonEditorbleTextPopup::~UDS_VM_CommonEditorbleTextPopup
          (UDS_VM_CommonEditorbleTextPopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CommonEditorbleTextPopup__6B_;
  pFVar1 = (this->EditorbleTextConext).Data.AllocatorInstance.Data;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancleEvnet).Delegate);
  pvVar2 = *(void **)&(this->ClickCancleEvnet).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancleEvnet).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickOkEvnet).Delegate);
  pvVar2 = *(void **)&(this->ClickOkEvnet).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickOkEvnet).Delegate);
  pIVar3 = (this->TextChangedEvent).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ErrorText).FormatArgs.AllocatorInstance.Data,
             (this->ErrorText).FormatArgs.ArrayNum);
  pFVar1 = (this->ErrorText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ErrorText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InputText).FormatArgs.AllocatorInstance.Data,
             (this->InputText).FormatArgs.ArrayNum);
  pFVar1 = (this->InputText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ContextText).FormatArgs.AllocatorInstance.Data,
             (this->ContextText).FormatArgs.ArrayNum);
  pFVar1 = (this->ContextText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ContextText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623a40

IClassDescriptor * __thiscall
UDS_VM_CommonEditorbleTextPopup::GetFieldNotificationDescriptor
          (UDS_VM_CommonEditorbleTextPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonEditorbleTextPopup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624370

UClass * __cdecl UDS_VM_CommonEditorbleTextPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonEditorbleTextPopup",
               &Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonEditorbleTextPopup,0x268,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_CommonEditorbleTextPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonEditorbleTextPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonEditorbleTextPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonEditorbleTextPopup @ 14b624b60

void __cdecl
UDS_VM_CommonEditorbleTextPopup::StaticRegisterNativesUDS_VM_CommonEditorbleTextPopup(void)

{
  return;
}

// BindModel @ 14bdb1190

void __thiscall UDS_VM_CommonEditorbleTextPopup::BindModel(UDS_VM_CommonEditorbleTextPopup *this)

{
  UDS_LoginEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnErrorEvent,this);
    TMulticastDelegateRegistration<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_CommonEditorbleTextPopup>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ErrorMessageInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnErrorEvent,(UDS_VM_CommonEditorbleTextPopup *)&stack0x00000010,
               (pmf_c6a77ff6 *)this);
  }
  return;
}

// CloseWidget @ 14bdb3630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CommonEditorbleTextPopup::CloseWidget(UDS_VM_CommonEditorbleTextPopup *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CommonEditorbleTextPopup::CloseWidget",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x80,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupInput,local_144,&local_148);
  }
  return;
}

// InitViewModel @ 14bdc6960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_CommonEditorbleTextPopup::InitViewModel(UDS_VM_CommonEditorbleTextPopup *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_ContentsPopupTitle *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr == (UDS_VM_W_ContentsPopupTitle *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_ContentsPopupTitle_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_W_ContentsPopupTitle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_ContentsPopupTitle *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_ContentsPopupTitle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickCancleEvent @ 14bdcba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CommonEditorbleTextPopup::OnClickCancleEvent
          (UDS_VM_CommonEditorbleTextPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CommonEditorbleTextPopup::CloseWidget",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x80,L"windowMng is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupInput,local_144,&local_148);
  }
  return;
}

// OnClickOkEvent @ 14bdcd1e0

void __thiscall
UDS_VM_CommonEditorbleTextPopup::OnClickOkEvent
          (UDS_VM_CommonEditorbleTextPopup *this,FDS_ButtonEventField *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_UIEvent *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
    pFVar4 = ::FString::FString(&local_38,&this->EditorbleTextConext);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->EditorbleTextStringDel);
    if (bVar2) {
      pFVar5 = ::FString::FString(&local_28,pFVar4);
      pFVar6 = ::FString::FString(&local_18,pFVar5);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->EditorbleTextStringDel,pFVar6);
      pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// OnLoginPacketError @ 14bdd01a0

void __thiscall
UDS_VM_CommonEditorbleTextPopup::OnLoginPacketError
          (UDS_VM_CommonEditorbleTextPopup *this,FDS_ErrorMessageInfo *param_1)

{
  EDS_ErrorCode EVar1;
  FName local_18;
  int local_10;
  
  EVar1 = param_1->ErrorCode;
  if ((EVar1 == DuplicatedNickname) || (EVar1 == InvalidNickname)) {
    FDS_Text::SetTextFromStringTable(&this->ErrorText,StringError,(longlong)(int)EVar1);
    local_10 = FFieldNotificationClassDescriptor::ErrorText.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ErrorText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::ErrorTextVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ErrorTextVisibility.FieldName;
    if (this->ErrorTextVisibility != SelfHitTestInvisible) {
      this->ErrorTextVisibility = SelfHitTestInvisible;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnSetViewModel @ 14bdd6b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CommonEditorbleTextPopup::OnSetViewModel
          (UDS_VM_CommonEditorbleTextPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_W_ContentsPopupTitle *this_00;
  code *pcVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_VM_CommonIconTextButton *pUVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  undefined1 auStackY_328 [32];
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2f8;
  FName local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2d8;
  UDS_VM_CommonEditorbleTextPopup *local_2c8;
  UDS_VM_CommonEditorbleTextPopup *local_2c0;
  FName local_2b8;
  int local_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext_CommonEditorblePopup,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  FDS_Text local_278;
  FDS_Text local_228;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  FDestructionSentinel local_1b8;
  undefined1 *local_1a0;
  FDestructionSentinel local_198;
  undefined1 *local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1d8.Object = param_1->Object;
  local_1d8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonEditorblePopup>(&local_298,&local_1d8);
  if (local_298.Object == (FDS_ViewModelContext_CommonEditorblePopup *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8512387338268049367>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonEditorbleTextPopup.cpp"
                       ,0x29,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_CommonEditorbleTextPopup::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x2a,L"context is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  else {
    FDS_Text::operator=(&this->TitleText,&(local_298.Object)->TitleText);
    FDS_Text::operator=(&this->ContextText,&(local_298.Object)->ContextText);
    FDS_Text::operator=(&this->InputText,&(local_298.Object)->HintText);
    local_2b0 = FFieldNotificationClassDescriptor::InputText.BitNumber;
    local_2b8 = FFieldNotificationClassDescriptor::InputText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2d8);
    FVar4.ReferenceController = local_2d8.SharedReferenceCount.ReferenceController;
    pFVar3 = local_2d8.Object;
    pFVar13 = (FDS_ViewModelContext *)0x0;
    if (local_2d8.Object != (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
      *(undefined4 *)&(local_2d8.Object)->_padding_ = 0x15b;
      local_278.StringTableType = None;
      local_278.StringTableID = 0;
      local_278.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_278.StringEnumTableNameID.Number = 0;
      local_278.DateTime.Ticks = 0;
      local_278.TimeSpan.Ticks = 0;
      local_278.TimeExpressionType = None;
      local_278.IsExpression = false;
      local_278.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.UniqueString.Data.ArrayNum = 0;
      local_278.UniqueString.Data.ArrayMax = 0;
      local_278.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.FormatArgs.ArrayNum = 0;
      local_278.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_278,StringUi,0x66);
      FDS_Text::operator=(&pFVar3->DSText,&local_278);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_278.FormatArgs.AllocatorInstance.Data,
                 local_278.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_278.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_278.FormatArgs.AllocatorInstance.Data);
      }
      if (local_278.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.UniqueString.Data.AllocatorInstance.Data);
      }
      local_2f8.SharedReferenceCount.ReferenceController._0_4_ = 0;
      local_2f8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickCancleEvent;
      local_2f8.SharedReferenceCount.ReferenceController._4_4_ =
           local_288.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
                 (FWriteAccessScope *)&local_1b8);
      local_1a0 = &(pFVar3->OnClickDelegate).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_1a0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CommonEditorbleTextPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_2c8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_2c8);
        puVar7[4] = local_2f8.Object;
        puVar7[5] = CONCAT44(local_2f8.SharedReferenceCount.ReferenceController._4_4_,
                             local_2f8.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      local_178.Object = (FDS_ViewModelContext *)local_2d8.Object;
      local_178.SharedReferenceCount.ReferenceController =
           local_2d8.SharedReferenceCount.ReferenceController;
      if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar4.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                         ((UObject *)this,&local_178);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->VM_CommonIconTextButtonCancle).field0_0x0.DebugPtr = pUVar9;
    }
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2f8);
    pFVar3 = local_2f8.Object;
    pTVar1 = (TReferenceControllerBase<1> *)
             CONCAT44(local_2f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_2f8.SharedReferenceCount.ReferenceController._0_4_);
    if (local_2f8.Object != (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
      *(undefined4 *)&(local_2f8.Object)->_padding_ = 0x15b;
      local_228.StringTableType = None;
      local_228.StringTableID = 0;
      local_228.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_228.StringEnumTableNameID.Number = 0;
      local_228.DateTime.Ticks = 0;
      local_228.TimeSpan.Ticks = 0;
      local_228.TimeExpressionType = None;
      local_228.IsExpression = false;
      local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.UniqueString.Data.ArrayNum = 0;
      local_228.UniqueString.Data.ArrayMax = 0;
      local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.FormatArgs.ArrayNum = 0;
      local_228.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_228,StringUi,0x65);
      FDS_Text::operator=(&pFVar3->DSText,&local_228);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data,
                 local_228.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_228.FormatArgs.AllocatorInstance.Data);
      }
      if (local_228.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.UniqueString.Data.AllocatorInstance.Data);
      }
      iStack_2e0 = 0;
      local_2e8 = (FName)OnClickOkEvent;
      uStack_2dc = local_288.SharedReferenceCount.ReferenceController._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
                 (FWriteAccessScope *)&local_198);
      local_180 = &(pFVar3->OnClickDelegate).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_180);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_CommonEditorbleTextPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_2c0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_2c0);
        *(FName *)(puVar7 + 4) = local_2e8;
        puVar7[5] = CONCAT44(uStack_2dc,iStack_2e0);
      }
      if (local_198.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
      }
      local_288.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           CONCAT44(local_2f8.SharedReferenceCount.ReferenceController._4_4_,
                    local_2f8.SharedReferenceCount.ReferenceController._0_4_);
      local_288.Object = (FDS_ViewModelContext *)local_2f8.Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                         ((UObject *)this,&local_288);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->VM_CommonIconTextButtonConfirm).field0_0x0.DebugPtr = pUVar9;
    }
    if ((this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr != (UDS_VM_W_ContentsPopupTitle *)0x0) {
      pFVar10 = ::operator_new(0x70);
      pFVar12 = pFVar13;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(undefined4 *)&pFVar10->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 1) = 0;
        *(undefined2 *)((longlong)&pFVar10[1]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar10[1]._padding_ + 7) = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar10[2].DerivedStaticStruct)[1].field_0x1 = 0;
        ((atomic<int> *)&pFVar10[2].DerivedStaticStruct)[1].field_0x3 = 0;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
        *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->ViewModelTemplateKey = None;
        *(undefined1 *)&pFVar10[1]._padding_ = 0;
        *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
        pFVar10[1].ViewModelName.ComparisonIndex = 0;
        pFVar10[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[1].ViewModelTemplateKey = 0;
        pFVar10[2]._padding_ = 0;
        *(atomic<int> *)&pFVar10[2].DerivedStaticStruct = (atomic<int>)0x0;
        *(undefined1 *)((atomic<int> *)&pFVar10[2].DerivedStaticStruct + 1) = 0;
        pFVar10[2].ViewModelName.ComparisonIndex = 0;
        pFVar10[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar10[2].ViewModelTemplateKey = 0;
        pFVar10[3]._padding_ = 0;
        *(undefined8 *)&pFVar10[3].DerivedStaticStruct = 0;
        pFVar12 = pFVar10;
      }
      pFVar10 = ::operator_new(0x20);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar12;
        pFVar13 = pFVar10;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_PopupTitle::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar11;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_2a8.Object = pFVar12;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_2a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
      }
      pFVar12->ViewModelTemplateKey = W_ContentsPopupTitle;
      FDS_Text::operator=((FDS_Text *)(pFVar12 + 1),&this->TitleText);
      this_00 = (this->VM_W_ContentsPopupTitle).field0_0x0.DebugPtr;
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1c8.Object = pFVar12;
      local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
    }
    iStack_2e0 = FFieldNotificationClassDescriptor::ContextText.BitNumber;
    local_2e8 = FFieldNotificationClassDescriptor::ContextText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar4.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTextChangedEvent @ 14bddef70

void __thiscall
UDS_VM_CommonEditorbleTextPopup::OnTextChangedEvent
          (UDS_VM_CommonEditorbleTextPopup *this,FDS_TextCommittedEventField *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(&param_1->NewText);
  ::FString::operator=(&this->EditorbleTextConext,pFVar1);
  return;
}

// UnbindModel @ 14bdec5e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CommonEditorbleTextPopup::UnbindModel(UDS_VM_CommonEditorbleTextPopup *this)

{
  UDS_LoginEvent *pUVar1;
  UDS_LanguageManager *pUVar2;
  
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnErrorEvent,this);
  }
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  return;
}

