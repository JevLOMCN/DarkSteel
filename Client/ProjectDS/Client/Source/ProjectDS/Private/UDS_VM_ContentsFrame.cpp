// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// SetCloseButtonClickEvent_WrapperImpl @ 14b6279a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_ContentsFrame::SetCloseButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_ContentManager::GetInst();
  if (this == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_ContentsFrame::OnCloseButtonClickEvent",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x11d,L"contentManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_ContentManager::CloseContent(this);
  }
  return;
}

// SetBackgroundButtonClickEvent_WrapperImpl @ 14b6279b0

void __cdecl
UDS_VM_ContentsFrame::SetBackgroundButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_ContentEvent *pUVar2;
  
  pUVar2 = UDS_ContentEvent::GetEvent();
  if (pUVar2 != (UDS_ContentEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnContentsBackgroundClickDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnContentsBackgroundClickDelegate).Delegate);
      return;
    }
  }
  return;
}

// SetBackButtonClickEvent_WrapperImpl @ 14b6279c0

void __cdecl UDS_VM_ContentsFrame::SetBackButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_ContentEvent *pUVar2;
  
  pUVar2 = UDS_ContentEvent::GetEvent();
  if (pUVar2 != (UDS_ContentEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnContentsBackButttonClickDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnContentsBackButttonClickDelegate).Delegate);
      return;
    }
  }
  return;
}

// SetBackgroundButtonVisibility_WrapperImpl @ 14b6279d0

void __cdecl
UDS_VM_ContentsFrame::SetBackgroundButtonVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x150) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetBackButtonVisibility_WrapperImpl @ 14b6279e0

void __cdecl UDS_VM_ContentsFrame::SetBackButtonVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x151) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::BackButtonVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::BackButtonVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6279f0

UClass * __cdecl UDS_VM_ContentsFrame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContentsFrame>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton;
}

// UDS_VM_ContentsFrame @ 14b62d210

UDS_VM_ContentsFrame * __thiscall
UDS_VM_ContentsFrame::UDS_VM_ContentsFrame(UDS_VM_ContentsFrame *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame__6B_;
  (this->ContentsFrame_ButtonList).field0_0x0.DebugPtr = (UDS_VM_ContentsFrame_ButtonList *)0x0;
  (this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr =
       (UDS_VM_ContentsFrame_SubButtonList *)0x0;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->LeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->LeftInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->RightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->RightInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->CloseButtonClickEvent)._padding_ = '\0';
  (this->CloseButtonClickEvent).bIsCustomSelected = false;
  (this->CloseButtonClickEvent).bIsLacked = false;
  (this->CloseButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseButtonClickEvent).Delegate.field_0x10 = 0;
  (this->BackgroundButtonClickEvent)._padding_ = '\0';
  (this->BackgroundButtonClickEvent).bIsCustomSelected = false;
  (this->BackgroundButtonClickEvent).bIsLacked = false;
  (this->BackgroundButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BackgroundButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->BackgroundButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BackgroundButtonClickEvent).Delegate.field_0x10 = 0;
  (this->BackButtonClickEvent)._padding_ = '\0';
  (this->BackButtonClickEvent).bIsCustomSelected = false;
  (this->BackButtonClickEvent).bIsLacked = false;
  (this->BackButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BackButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->BackButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BackButtonClickEvent).Delegate.field_0x10 = 0;
  FText::FText(&this->TitleName);
  return this;
}

// UDS_VM_ContentsFrame @ 14b62d2f0

UDS_VM_ContentsFrame * __thiscall
UDS_VM_ContentsFrame::UDS_VM_ContentsFrame(UDS_VM_ContentsFrame *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame__6B_;
  (this->ContentsFrame_ButtonList).field0_0x0.DebugPtr = (UDS_VM_ContentsFrame_ButtonList *)0x0;
  (this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr =
       (UDS_VM_ContentsFrame_SubButtonList *)0x0;
  (this->VM_MoneyGroup).field0_0x0.DebugPtr = (UDS_VM_MoneyGroup *)0x0;
  (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->VM_PlayerData).field0_0x0.DebugPtr = (UDS_VM_PlayerData *)0x0;
  (this->LeftButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->LeftInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->RightButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->RightInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = (UDS_VM_Common_CombinationKeyGroup *)0x0;
  (this->CloseButtonClickEvent)._padding_ = '\0';
  (this->CloseButtonClickEvent).bIsCustomSelected = false;
  (this->CloseButtonClickEvent).bIsLacked = false;
  (this->CloseButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->CloseButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseButtonClickEvent).Delegate.field_0x10 = 0;
  (this->BackgroundButtonClickEvent)._padding_ = '\0';
  (this->BackgroundButtonClickEvent).bIsCustomSelected = false;
  (this->BackgroundButtonClickEvent).bIsLacked = false;
  (this->BackgroundButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BackgroundButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->BackgroundButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BackgroundButtonClickEvent).Delegate.field_0x10 = 0;
  (this->BackButtonClickEvent)._padding_ = '\0';
  (this->BackButtonClickEvent).bIsCustomSelected = false;
  (this->BackButtonClickEvent).bIsLacked = false;
  (this->BackButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->BackButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->BackButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->BackButtonClickEvent).Delegate.field_0x10 = 0;
  FText::FText(&this->TitleName);
  return this;
}

// ~UDS_VM_ContentsFrame @ 14b62f0d0

void __thiscall UDS_VM_ContentsFrame::~UDS_VM_ContentsFrame(UDS_VM_ContentsFrame *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame__6B_;
  pIVar1 = (this->TitleName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->BackButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->BackgroundButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->BackgroundButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->CloseButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseButtonClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631ad0

IClassDescriptor * __thiscall
UDS_VM_ContentsFrame::GetFieldNotificationDescriptor(UDS_VM_ContentsFrame *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContentsFrame::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632720

UClass * __cdecl UDS_VM_ContentsFrame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ContentsFrame>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContentsFrame @ 14b633030

void __cdecl UDS_VM_ContentsFrame::StaticRegisterNativesUDS_VM_ContentsFrame(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ContentsFrame_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnContentVerticalButtonEvent @ 14b634390

void __cdecl
UDS_VM_ContentsFrame::execOnContentVerticalButtonEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  int local_res10 [2];
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  int local_38;
  
  local_50[0] = '\0';
  local_50[1] = false;
  local_50[2] = false;
  local_50[3] = false;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_res10[0] = 0;
  pFVar2 = (FDS_ButtonEventField *)local_50;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnContentVerticalButtonEvent((UDS_VM_ContentsFrame *)param_1,pFVar2,local_res10[0]);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if ((local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// execOnLeftKeyButtonEvent @ 14b634500

void __cdecl
UDS_VM_ContentsFrame::execOnLeftKeyButtonEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLeftKeyButtonEvent((UDS_VM_ContentsFrame *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnRightKeyButtonEvent @ 14b634620

void __cdecl
UDS_VM_ContentsFrame::execOnRightKeyButtonEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRightKeyButtonEvent((UDS_VM_ContentsFrame *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// InitViewModel @ 14bdc6b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ContentsFrame::InitViewModel(UDS_VM_ContentsFrame *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_ContentsFrame_ButtonList *pUVar3;
  UDS_VM_ContentsFrame_SubButtonList *pUVar4;
  UDS_VM_MoneyGroup *pUVar5;
  UDS_VM_MoneyTooltipDetector *pUVar6;
  UDS_VM_PlayerData *pUVar7;
  UDS_VM_InputKey *pUVar8;
  UDS_VM_CommonIconTextButton *pUVar9;
  UDS_VM_Common_CombinationKeyGroup *pUVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->ContentsFrame_ButtonList).field0_0x0.DebugPtr == (UDS_VM_ContentsFrame_ButtonList *)0x0
     ) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ContentsFrame_ButtonList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ContentsFrame_ButtonList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar3 = (UDS_VM_ContentsFrame_ButtonList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_ContentsFrame_ButtonList *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_ContentsFrame_ButtonList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ContentsFrame_ButtonList).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr ==
      (UDS_VM_ContentsFrame_SubButtonList *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_ContentsFrame_SubButtonList_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_ContentsFrame_SubButtonList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_ContentsFrame_SubButtonList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_ContentsFrame_SubButtonList *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_ContentsFrame_SubButtonList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_MoneyGroup).field0_0x0.DebugPtr == (UDS_VM_MoneyGroup *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_MoneyGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_MoneyGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_MoneyGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_MoneyGroup *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_MoneyGroup).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr == (UDS_VM_MoneyTooltipDetector *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar6 = (UDS_VM_MoneyTooltipDetector *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_MoneyTooltipDetector *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_MoneyTooltipDetector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_PlayerData).field0_0x0.DebugPtr == (UDS_VM_PlayerData *)0x0) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_PlayerData_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_PlayerData_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar7 = (UDS_VM_PlayerData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_PlayerData *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_PlayerData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_PlayerData).field0_0x0.DebugPtr = pUVar7;
  }
  if ((this->LeftInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->LeftInputKey).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->LeftButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->LeftButton).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->RightButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->RightButton).field0_0x0.DebugPtr = pUVar9;
  }
  if ((this->RightInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->RightInputKey).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->VM_CombinationKeyGroup).field0_0x0.DebugPtr == (UDS_VM_Common_CombinationKeyGroup *)0x0
     ) {
    local_b8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_Common_CombinationKeyGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar1);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar10 = (UDS_VM_Common_CombinationKeyGroup *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar10 != (UDS_VM_Common_CombinationKeyGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UDS_VM_Common_CombinationKeyGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr = pUVar10;
  }
  return;
}

// OnBackButtonClickEvent @ 14bdca2d0

void __thiscall
UDS_VM_ContentsFrame::OnBackButtonClickEvent
          (UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_ContentEvent *pUVar2;
  
  pUVar2 = UDS_ContentEvent::GetEvent();
  if (pUVar2 != (UDS_ContentEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnContentsBackButttonClickDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnContentsBackButttonClickDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnBackgroundButtonClickEvent @ 14bdca380

void __thiscall
UDS_VM_ContentsFrame::OnBackgroundButtonClickEvent
          (UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_ContentEvent *pUVar2;
  
  pUVar2 = UDS_ContentEvent::GetEvent();
  if (pUVar2 != (UDS_ContentEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnContentsBackgroundClickDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnContentsBackgroundClickDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnCloseButtonClickEvent @ 14bdcda00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnCloseButtonClickEvent
          (UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ContentsFrame::OnCloseButtonClickEvent",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x11d,L"contentManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_ContentManager::CloseContent(this_00);
  }
  return;
}

// OnCloseInit @ 14bdcdb60

void __thiscall UDS_VM_ContentsFrame::OnCloseInit(UDS_VM_ContentsFrame *this)

{
  UDS_HistoryManager *this_00;
  EDS_HistoryDataType local_res10 [24];
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  this_00 = UDS_HistoryManager::GetInst();
  if (this_00 != (UDS_HistoryManager *)0x0) {
    local_res10[0] = ContentsTab;
    UDS_HistoryManager::Clear(this_00,local_res10);
  }
  return;
}

// OnContentVerticalButtonEvent @ 14bdcdd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnContentVerticalButtonEvent
          (UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1,int param_2)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ContentsFrame::OnContentVerticalButtonEvent",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x18e,L"contentManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_140 = 0;
    local_148[0] = param_2;
    UDS_ContentManager::OpenContent(this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
  }
  return;
}

// OnInputAction @ 14bdcf0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnInputAction
          (UDS_VM_ContentsFrame *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  ulonglong local_170;
  FDestructionSentinel local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_ContentsFrame::OnInputAction",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x105,L"contentManager is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_ContentManager::OnInputActionToContent(this_00,param_1,param_2);
    if (param_2->TriggerEvent == Started) {
      if (*param_1 == IA_UI_Category_Left) {
        local_188[0] = '\0';
        local_188[1] = false;
        local_188[2] = false;
        local_188[3] = false;
        local_188._4_4_ = None;
        local_170 = 0;
        local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_178.Data = (FScriptContainerElement *)0x0;
        OnLeftKeyButtonEvent(this,(FDS_ButtonEventField *)local_188);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_180,(FWriteAccessScope *)&local_168);
      }
      else {
        if (*param_1 != IA_UI_Category_Right) {
          return;
        }
        local_188[0] = '\0';
        local_188[1] = false;
        local_188[2] = false;
        local_188[3] = false;
        local_188._4_4_ = None;
        local_170 = 0;
        local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_178.Data = (FScriptContainerElement *)0x0;
        OnRightKeyButtonEvent(this,(FDS_ButtonEventField *)local_188);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_180,(FWriteAccessScope *)&local_168);
      }
      if (((int)local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_178.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
        local_170 = local_170 & 0xffffffff00000000;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      if (FStack_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_178.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
    }
  }
  return;
}

// OnLeftKeyButtonEvent @ 14bdcfda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnLeftKeyButtonEvent(UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_ContentsTabFrameTableRow *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_ContentsFrame::OnLeftKeyButtonEvent",0x2a,Yes);
    pwVar4 = L"contentManager is nullptr.";
    uVar3 = 0x168;
  }
  else {
    EVar1 = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    this_01 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)EVar1,true);
    if (this_01 != (FDS_ContentsTabFrameTableRow *)0x0) {
      local_140 = 0;
      local_148[0] = FDS_ContentsTabFrameTableRow::GetLeftTabFrameType(this_01);
      UDS_ContentManager::OpenContent
                (this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_ContentsFrame::OnLeftKeyButtonEvent",0x2a,Yes);
    pwVar4 = L"contentsTabFrameTableRow is nullptr.";
    uVar3 = 0x16f;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnRightKeyButtonEvent @ 14bdd1ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnRightKeyButtonEvent
          (UDS_VM_ContentsFrame *this,FDS_ButtonEventField *param_1)

{
  EDS_ContentsTabFrameType EVar1;
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_ContentsTabFrameTableRow *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  EDS_ContentsTabFrameType local_148 [2];
  undefined8 local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_ContentsFrame::OnRightKeyButtonEvent",0x2b,Yes);
    pwVar4 = L"contentManager is nullptr.";
    uVar3 = 0x17b;
  }
  else {
    EVar1 = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    this_01 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)EVar1,true);
    if (this_01 != (FDS_ContentsTabFrameTableRow *)0x0) {
      local_140 = 0;
      local_148[0] = FDS_ContentsTabFrameTableRow::GetRightTabFrameType(this_01);
      UDS_ContentManager::OpenContent
                (this_00,local_148,(TObjectPtr<UDS_ContentArguments>)&local_140);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_ContentsFrame::OnRightKeyButtonEvent",0x2b,Yes);
    pwVar4 = L"contentsTabFrameTableRow is nullptr.";
    uVar3 = 0x182;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnSetViewModel @ 14bdd9040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame::OnSetViewModel
          (UDS_VM_ContentsFrame *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_KeyRemoveType EVar1;
  EDS_ContentsTabFrameType EVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_VM_ContentsFrame_ButtonList *this_00;
  UDS_VM_ContentsFrame_SubButtonList *this_01;
  UDS_VM_MoneyGroup *this_02;
  UDS_VM_MoneyTooltipDetector *this_03;
  UDS_VM_PlayerData *this_04;
  UDS_VM_CommonIconTextButton *pUVar4;
  UDS_VM_InputKey *pUVar5;
  UDS_VM_Common_CombinationKeyGroup *this_05;
  code *pcVar6;
  FDS_ViewModelContext_InputKeyGroup *pFVar7;
  FDS_ContentsTabFrameStyleTableRow *pFVar8;
  FDS_ViewModelContext_ContentsFrameButtonList *pFVar9;
  FDS_ViewModelContext_CommonIconTextButton *pFVar10;
  FDS_ViewModelContext_InputKey *pFVar11;
  bool bVar12;
  ESlateVisibility EVar13;
  UDS_LogManager *pUVar14;
  FDS_ContentsTabFrameTableRow *pFVar15;
  FDS_ViewModelContext *pFVar16;
  FDS_ViewModelContext *pFVar17;
  UScriptStruct *pUVar18;
  UDS_ViewModelContextManager *pUVar19;
  FDS_KeyMappingDataTableRow *pFVar20;
  FDS_ViewModelContext_InputKeyGroup *pFVar21;
  UDS_ContentEvent *pUVar22;
  FString *pFVar23;
  FText *pFVar24;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *this_06;
  FDS_ViewModelContext *pFVar25;
  FDS_ViewModelContext *pFVar26;
  ESlateVisibility EVar27;
  undefined1 auStackY_678 [32];
  uint uStack_62c;
  TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> local_628;
  TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> local_618;
  FDS_ContentsTabFrameStyleTableRow *local_608;
  FName local_5f8;
  int local_5f0;
  FName local_5e8;
  int local_5e0;
  FName local_5d8;
  int local_5d0;
  FName local_5c8;
  int local_5c0;
  FName local_5b8;
  int local_5b0;
  FName local_5a8;
  int local_5a0;
  FName local_598;
  int local_590;
  FName local_588;
  int local_580;
  FName local_578;
  int local_570;
  FName local_568;
  int local_560;
  FName local_558;
  int local_550;
  FName local_548;
  int local_540;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> local_538;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButtonList,1> local_528;
  TSharedPtr<FDS_ViewModelContext,1> local_518;
  TSharedPtr<FDS_ViewModelContext,1> local_508;
  TSharedPtr<FDS_ViewModelContext,1> local_4f8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_4e8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_4d8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_4c8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_4b8;
  TSharedPtr<FDS_ViewModelContext,1> local_4a8;
  TSharedPtr<FDS_ViewModelContext,1> local_498;
  TSharedPtr<FDS_ViewModelContext,1> local_488;
  TSharedPtr<FDS_ViewModelContext,1> local_478;
  undefined1 local_468 [24];
  TReferenceControllerBase<1> *pTStack_450;
  TSharedPtr<FDS_ViewModelContext,1> local_448;
  code *local_438;
  longlong lStack_430;
  TSharedPtr<FDS_ViewModelContext,1> local_428;
  TSharedPtr<FDS_ViewModelContext,1> local_418;
  code *local_408;
  longlong lStack_400;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  TSharedPtr<FDS_ViewModelContext,1> local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  code *local_3c8;
  TObjectPtr<UDS_VM_ContentsFrame_SubButtonList>_u_0 TStack_3c0;
  TObjectPtr<UDS_VM_MoneyGroup>_u_0 local_3b8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_4a8.Object = param_1->Object;
  local_4a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsFrame>(&local_628,&local_4a8);
  if (local_628.Object == (FDS_ViewModelContext_ContentsFrame *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_ContentsFrame::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_3a8.Ptr,0x62,L"ContentsFrameContext is nullptr.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd9eb1;
  }
  EVar2 = (local_628.Object)->TabFrameID;
  this->CurrentContentTabFrameID = EVar2;
  pFVar15 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)EVar2,true);
  if (pFVar15 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_ContentsFrame::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_288.Ptr,0x6b,
                 L"contentsTabFrameTableRow is nullptr. TabFrameID - %d");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    local_608 = FDS_ContentsTabFrameStyleTableRow::Get((longlong)pFVar15->MenuOrder,true);
    if (local_608 == (FDS_ContentsTabFrameStyleTableRow *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      if (pUVar14 != (UDS_LogManager *)0x0) {
        pUVar14 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_ContentsFrame::OnSetViewModel",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar14,1,Warning,local_168.Ptr,0x72,
                   L"FDS_ContentsTabFrameStyleTableRow is nullptr. MenuOrder(ID) - %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      this->TabVisibility = SelfHitTestInvisible;
      local_5f0 = FFieldNotificationClassDescriptor::TabVisibility.BitNumber;
      local_5f8 = FFieldNotificationClassDescriptor::TabVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5f8);
      this->TabInputKeyVisibility = SelfHitTestInvisible;
      local_5e0 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.BitNumber;
      local_5e8 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5e8);
      this->TitleVisibility = SelfHitTestInvisible;
      local_5d0 = FFieldNotificationClassDescriptor::TitleVisibility.BitNumber;
      local_5d8 = FFieldNotificationClassDescriptor::TitleVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5d8);
      this->ExitButtonVisibility = SelfHitTestInvisible;
      local_5c0 = FFieldNotificationClassDescriptor::ExitButtonVisibility.BitNumber;
      local_5c8 = FFieldNotificationClassDescriptor::ExitButtonVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5c8);
    }
    else {
      if ((this->ContentsFrame_ButtonList).field0_0x0.DebugPtr !=
          (UDS_VM_ContentsFrame_ButtonList *)0x0) {
        MakeContext<FDS_ViewModelContext_ContentsFrameButtonList>(&local_538);
        pFVar9 = local_538.Object;
        if ((local_538.Object == (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar9->_padding_ = 0x3f;
        pFVar9->TabFrameID = this->CurrentContentTabFrameID;
        this_00 = (this->ContentsFrame_ButtonList).field0_0x0.DebugPtr;
        local_468._16_8_ = local_538.Object;
        pTStack_450 = local_538.SharedReferenceCount.ReferenceController;
        if (local_538.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext
                  ((UDS_ViewModelBase *)this_00,
                   (TSharedPtr<FDS_ViewModelContext,1> *)(local_468 + 0x10));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_538.SharedReferenceCount.ReferenceController);
      }
      if ((this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr !=
          (UDS_VM_ContentsFrame_SubButtonList *)0x0) {
        MakeContext<FDS_ViewModelContext_ContentsFrameButtonList>(&local_528);
        pFVar9 = local_528.Object;
        if ((local_528.Object == (FDS_ViewModelContext_ContentsFrameButtonList *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar9->_padding_ = 0x40;
        pFVar9->TabFrameID = this->CurrentContentTabFrameID;
        this_01 = (this->ContentsFrame_SubButtonList).field0_0x0.DebugPtr;
        local_448.Object = (FDS_ViewModelContext *)local_528.Object;
        local_448.SharedReferenceCount.ReferenceController =
             local_528.SharedReferenceCount.ReferenceController;
        if (local_528.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_448);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_528.SharedReferenceCount.ReferenceController);
      }
      pFVar26 = (FDS_ViewModelContext *)0x0;
      if ((this->VM_MoneyGroup).field0_0x0.DebugPtr != (UDS_VM_MoneyGroup *)0x0) {
        pFVar16 = ::operator_new(0x30);
        pFVar25 = pFVar26;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar16->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar16->DerivedStaticStruct = 0;
          (pFVar16->ViewModelName).ComparisonIndex = 0;
          (pFVar16->ViewModelName).Number = 0;
          pFVar16->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyGroup__6B_;
          pFVar16[1]._padding_ = 0;
          *(undefined8 *)&pFVar16[1].DerivedStaticStruct = 0;
          pFVar25 = pFVar16;
        }
        pFVar17 = ::operator_new(0x20);
        pFVar16 = pFVar26;
        if (pFVar17 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar17->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar17->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar17->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar17->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar17->ViewModelTemplateKey = pFVar25;
          pFVar16 = pFVar17;
        }
        if ((pFVar25 == (FDS_ViewModelContext *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar18 = FDS_ViewModelContext_MoneyGroup::StaticStruct();
        *(UScriptStruct **)&pFVar25->DerivedStaticStruct = pUVar18;
        pUVar19 = UDS_ViewModelContextManager::GetInst();
        if (pUVar19 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar16 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar16->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_518.Object = pFVar25;
          local_518.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar16;
          UDS_ViewModelContextManager::RegisterContext(pUVar19,&local_518);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_518.SharedReferenceCount.ReferenceController);
        }
        pFVar25->ViewModelTemplateKey = W_MoneyGroup;
        TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=
                  (pFVar25 + 1,&pFVar15->DisplayMoney);
        this_02 = (this->VM_MoneyGroup).field0_0x0.DebugPtr;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_498.Object = pFVar25;
        local_498.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_498);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
      }
      if ((this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr != (UDS_VM_MoneyTooltipDetector *)0x0)
      {
        pFVar16 = ::operator_new(0x48);
        pFVar25 = pFVar26;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar16->ViewModelTemplateKey = 0;
          pFVar16[1].ViewModelName.ComparisonIndex = 0;
          pFVar16[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar16->DerivedStaticStruct = 0;
          (pFVar16->ViewModelName).ComparisonIndex = 0;
          (pFVar16->ViewModelName).Number = 0;
          pFVar16->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyTooltipDetector__6B_;
          pFVar16[1]._padding_ = 0;
          *(undefined8 *)&pFVar16[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar16[1].ViewModelTemplateKey = 0;
          pFVar16[2]._padding_ = 0;
          pFVar25 = pFVar16;
        }
        pFVar17 = ::operator_new(0x20);
        pFVar16 = pFVar26;
        if (pFVar17 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar17->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar17->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar17->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyTooltipDetector__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar17->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar17->ViewModelTemplateKey = pFVar25;
          pFVar16 = pFVar17;
        }
        if ((pFVar25 == (FDS_ViewModelContext *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar18 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
        *(UScriptStruct **)&pFVar25->DerivedStaticStruct = pUVar18;
        pUVar19 = UDS_ViewModelContextManager::GetInst();
        if (pUVar19 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar16 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar16->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_508.Object = pFVar25;
          local_508.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar16;
          UDS_ViewModelContextManager::RegisterContext(pUVar19,&local_508);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_508.SharedReferenceCount.ReferenceController);
        }
        pFVar25->ViewModelTemplateKey = MoneyTooltipDetector;
        TArray<enum_EDS_MoneyType,TSizedDefaultAllocator<32>_>::operator=
                  (pFVar25 + 1,&pFVar15->DisplayMoney);
        *(undefined1 *)&pFVar25[1].ViewModelName.ComparisonIndex.Value = 1;
        *(undefined8 *)&pFVar25[1].ViewModelTemplateKey = 0x4084500000000000;
        pFVar25[2]._padding_ = 0x4051800000000000;
        this_03 = (this->VM_MoneyTooltipDetector).field0_0x0.DebugPtr;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_488.Object = pFVar25;
        local_488.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_488);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
      }
      if ((this->VM_PlayerData).field0_0x0.DebugPtr != (UDS_VM_PlayerData *)0x0) {
        pFVar16 = ::operator_new(0x28);
        pFVar25 = pFVar26;
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar16->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar16->DerivedStaticStruct = 0;
          (pFVar16->ViewModelName).ComparisonIndex = 0;
          (pFVar16->ViewModelName).Number = 0;
          pFVar16->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerData__6B_;
          pFVar16[1]._padding_ = 0;
          pFVar25 = pFVar16;
        }
        pFVar16 = ::operator_new(0x20);
        if (pFVar16 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar16->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar25;
          pFVar26 = pFVar16;
        }
        if ((pFVar25 == (FDS_ViewModelContext *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pUVar18 = FDS_ViewModelContext_PlayerData::StaticStruct();
        *(UScriptStruct **)&pFVar25->DerivedStaticStruct = pUVar18;
        pUVar19 = UDS_ViewModelContextManager::GetInst();
        if (pUVar19 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar26 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar26->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar26->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_4f8.Object = pFVar25;
          local_4f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar26;
          UDS_ViewModelContextManager::RegisterContext(pUVar19,&local_4f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4f8.SharedReferenceCount.ReferenceController);
        }
        pFVar25->ViewModelTemplateKey = Data_PlayerData;
        pFVar25[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
        this_04 = (this->VM_PlayerData).field0_0x0.DebugPtr;
        if (pFVar26 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar26->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar26->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_478.Object = pFVar25;
        local_478.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar26;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_04,&local_478);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar26);
      }
      if ((this->LeftButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
        MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_4e8);
        pFVar10 = local_4e8.Object;
        if ((local_4e8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar10->_padding_ = 0x15b;
        pFVar10->KeyActionType = IA_UI_Category_Left;
        lStack_430 = (ulonglong)uStack_62c << 0x20;
        local_438 = OnLeftKeyButtonEvent;
        pFVar10->ParentWindowWidget = ContentsTabFrame;
        TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
        ::BindUObject<UDS_VM_ContentsFrame>
                  ((TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
                    *)&pFVar10->OnClickDelegate,this,(pmf_d82d45ba *)&local_438);
        pUVar4 = (this->LeftButton).field0_0x0.DebugPtr;
        local_428.Object = (FDS_ViewModelContext *)local_4e8.Object;
        local_428.SharedReferenceCount.ReferenceController =
             local_4e8.SharedReferenceCount.ReferenceController;
        if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_428);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4e8.SharedReferenceCount.ReferenceController);
      }
      if ((this->LeftInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_4d8);
        pFVar11 = local_4d8.Object;
        if ((local_4d8.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar11->_padding_ = 0x15d;
        pFVar11->KeyActionType = IA_UI_Category_Left;
        pUVar5 = (this->LeftInputKey).field0_0x0.DebugPtr;
        local_418.Object = (FDS_ViewModelContext *)local_4d8.Object;
        local_418.SharedReferenceCount.ReferenceController =
             local_4d8.SharedReferenceCount.ReferenceController;
        if (local_4d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_418);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d8.SharedReferenceCount.ReferenceController);
      }
      if ((this->RightButton).field0_0x0.DebugPtr != (UDS_VM_CommonIconTextButton *)0x0) {
        MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_4c8);
        pFVar10 = local_4c8.Object;
        if ((local_4c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar10->_padding_ = 0x15b;
        pFVar10->KeyActionType = IA_UI_Category_Right;
        lStack_400 = (ulonglong)uStack_62c << 0x20;
        local_408 = OnRightKeyButtonEvent;
        pFVar10->ParentWindowWidget = ContentsTabFrame;
        TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
        ::BindUObject<UDS_VM_ContentsFrame>
                  ((TDelegateRegistration<void___cdecl(FDS_ButtonEventField_const_&),FDefaultDelegateUserPolicy>
                    *)&pFVar10->OnClickDelegate,this,(pmf_d82d45ba *)&local_408);
        pUVar4 = (this->RightButton).field0_0x0.DebugPtr;
        local_3f8.Object = (FDS_ViewModelContext *)local_4c8.Object;
        local_3f8.SharedReferenceCount.ReferenceController =
             local_4c8.SharedReferenceCount.ReferenceController;
        if (local_4c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_3f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4c8.SharedReferenceCount.ReferenceController);
      }
      if ((this->RightInputKey).field0_0x0.DebugPtr != (UDS_VM_InputKey *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKey>(&local_4b8);
        pFVar11 = local_4b8.Object;
        if ((local_4b8.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar11->_padding_ = 0x15d;
        pFVar11->KeyActionType = IA_UI_Category_Right;
        pUVar5 = (this->RightInputKey).field0_0x0.DebugPtr;
        local_3e8.Object = (FDS_ViewModelContext *)local_4b8.Object;
        local_3e8.SharedReferenceCount.ReferenceController =
             local_4b8.SharedReferenceCount.ReferenceController;
        if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_3e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b8.SharedReferenceCount.ReferenceController);
      }
      if ((this->VM_CombinationKeyGroup).field0_0x0.DebugPtr !=
          (UDS_VM_Common_CombinationKeyGroup *)0x0) {
        MakeContext<FDS_ViewModelContext_InputKeyGroup>(&local_618);
        pFVar7 = local_618.Object;
        if ((local_618.Object == (FDS_ViewModelContext_InputKeyGroup *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)&pFVar7->_padding_ = 0x15e;
        pFVar20 = FDS_KeyMappingDataTableRow::Get((longlong)pFVar15->ID_KeyMappingData,true);
        if (pFVar20 != (FDS_KeyMappingDataTableRow *)0x0) {
          EVar1 = pFVar20->KeyRemoveType;
          if (EVar1 == Fixed) {
            pFVar21 = TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1>::operator->(&local_618);
            this_06 = &pFVar21->DefaultKeys;
          }
          else if (EVar1 == Same) {
            pFVar21 = TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1>::operator->(&local_618);
            this_06 = &pFVar21->TypeDelKeys;
          }
          else {
            if (EVar1 != Self) goto LAB_14bdd9bf3;
            pFVar21 = TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1>::operator->(&local_618);
            this_06 = &pFVar21->SelfDelKeys;
          }
          TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
                    (this_06,&pFVar20->ID_KeyAction);
        }
LAB_14bdd9bf3:
        pFVar7->InputKeyGroupType = ContentsTabFrame;
        local_3d8.Object = (FDS_ViewModelContext *)local_618.Object;
        local_3d8.SharedReferenceCount.ReferenceController =
             local_618.SharedReferenceCount.ReferenceController;
        pFVar7->WindowWidget = ContentsTabFrame;
        this_05 = (this->VM_CombinationKeyGroup).field0_0x0.DebugPtr;
        if (local_618.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_05,&local_3d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_618.SharedReferenceCount.ReferenceController);
      }
      if ((local_628.Object == (FDS_ViewModelContext_ContentsFrame *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this->BackgroundButtonVisibility = (local_628.Object)->BackgroundButtonVisibility;
      local_5b0 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.BitNumber;
      local_5b8 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5b8);
      this->BackButtonVisibility = Collapsed;
      local_5a0 = FFieldNotificationClassDescriptor::BackButtonVisibility.BitNumber;
      local_5a8 = FFieldNotificationClassDescriptor::BackButtonVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5a8);
      pUVar22 = UDS_ContentEvent::GetEvent();
      if (pUVar22 != (UDS_ContentEvent *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar22->OnContentsBackButtonVisibilityChangedDelegate,this);
        TStack_3c0.DebugPtr = (UDS_VM_ContentsFrame_SubButtonList *)((ulonglong)uStack_62c << 0x20);
        local_3c8 = SetBackButtonVisibility;
        TMulticastDelegateRegistration<void___cdecl(enum_ESlateVisibility_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_ContentsFrame>
                  (&pUVar22->OnContentsBackButtonVisibilityChangedDelegate,
                   (UDS_VM_ContentsFrame *)local_468,(pmf_abaee1d3 *)this);
      }
      EVar27 = Collapsed;
      EVar13 = Collapsed;
      if (pFVar15->IsPlayerInfo != false) {
        EVar13 = SelfHitTestInvisible;
      }
      this->PlayerInfoVisibility = EVar13;
      local_590 = FFieldNotificationClassDescriptor::PlayerInfoVisibility.BitNumber;
      local_598 = FFieldNotificationClassDescriptor::PlayerInfoVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_598);
      pFVar8 = local_608;
      EVar13 = Collapsed;
      if (local_608->IsTab != false) {
        EVar13 = SelfHitTestInvisible;
      }
      this->TabVisibility = EVar13;
      local_580 = FFieldNotificationClassDescriptor::TabVisibility.BitNumber;
      local_588 = FFieldNotificationClassDescriptor::TabVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_588);
      EVar13 = Collapsed;
      if (pFVar8->IsTabHotKey != false) {
        EVar13 = SelfHitTestInvisible;
      }
      this->TabInputKeyVisibility = EVar13;
      local_570 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.BitNumber;
      local_578 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_578);
      EVar13 = Collapsed;
      if (pFVar8->IsTitle != false) {
        EVar13 = SelfHitTestInvisible;
      }
      this->TitleVisibility = EVar13;
      local_560 = FFieldNotificationClassDescriptor::TitleVisibility.BitNumber;
      local_568 = FFieldNotificationClassDescriptor::TitleVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_568);
      if (pFVar8->IsExitBtn != false) {
        EVar27 = SelfHitTestInvisible;
      }
      this->ExitButtonVisibility = EVar27;
      local_550 = FFieldNotificationClassDescriptor::ExitButtonVisibility.BitNumber;
      local_558 = FFieldNotificationClassDescriptor::ExitButtonVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_558);
      if (pFVar8->IsTitle != false) {
        pFVar23 = (FString *)(**(code **)((pFVar15->ID_Name)._padding_ + 8))(&pFVar15->ID_Name);
        pFVar24 = FText::FromString((FText *)&local_3b8[0].ObjectPtr,pFVar23);
        FText::operator=(&this->TitleName,pFVar24);
        local_540 = FFieldNotificationClassDescriptor::TitleName.BitNumber;
        local_548 = FFieldNotificationClassDescriptor::TitleName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_548);
        if (local_3b8[0].DebugPtr != (UDS_VM_MoneyGroup *)0x0) {
          (**(code **)((local_3b8[0].DebugPtr)->_padding_ + 0x10))();
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_628.SharedReferenceCount.ReferenceController);
LAB_14bdd9eb1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetBackButtonVisibility @ 14bde3650

void __thiscall
UDS_VM_ContentsFrame::SetBackButtonVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->BackButtonVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::BackButtonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BackButtonVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetBackgroundButtonVisibility @ 14bde3690

void __thiscall
UDS_VM_ContentsFrame::SetBackgroundButtonVisibility
          (UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->BackgroundButtonVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BackgroundButtonVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetExitButtonVisibility @ 14bde6160

void __thiscall
UDS_VM_ContentsFrame::SetExitButtonVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->ExitButtonVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::ExitButtonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExitButtonVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetPlayerInfoVisibility @ 14bde8230

void __thiscall
UDS_VM_ContentsFrame::SetPlayerInfoVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->PlayerInfoVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::PlayerInfoVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerInfoVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTabInputKeyVisibility @ 14bde9590

void __thiscall
UDS_VM_ContentsFrame::SetTabInputKeyVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->TabInputKeyVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabInputKeyVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTabVisibility @ 14bde9880

void __thiscall
UDS_VM_ContentsFrame::SetTabVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->TabVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::TabVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTitleName @ 14bde9980

void __thiscall UDS_VM_ContentsFrame::SetTitleName(UDS_VM_ContentsFrame *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->TitleName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->TitleName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->TitleName).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::TitleName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TitleName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTitleVisibility @ 14bde9a10

void __thiscall
UDS_VM_ContentsFrame::SetTitleVisibility(UDS_VM_ContentsFrame *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->TitleVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::TitleVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TitleVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

