// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// SetClickConfirm_WrapperImpl @ 14b6bb7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_PlayerIcon_Popup::SetClickConfirm_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&FStack_158);
  if (bVar2) {
    this = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_158);
    bVar2 = UDS_PlayerData::IsHavePlayerIcon(this,*(int *)((longlong)param_1 + 0x1f0));
    if (bVar2) {
      if ((bool)*(char *)((longlong)param_1 + 0xf8) != bVar2) {
        FDS_PlayerService::RequestPlayerIconChange(*(int *)((longlong)param_1 + 0x1f0));
      }
    }
    else if (*(char *)((longlong)param_1 + 0xf8) == '\x01') {
      TStack_150._0_8_ = 0;
      TStack_150._8_8_ = 0;
      TStack_150._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2b11,Alert_None_01,&TStack_150);
    }
    else {
      FDS_PlayerService::RequestPlayerIconOpen(*(int *)((longlong)param_1 + 0x1f0));
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_PlayerIcon_Popup::OnClickConfirm",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0xc0,L"mainPlayerData is Invalid.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5663735212450775233>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_PlayerIcon_Popup.cpp"
                       ,0xc1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b6bb7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_PlayerIcon_Popup::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,PlayerIconPopup,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b6bb7f0

UClass * __cdecl UDS_VM_PlayerIcon_Popup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerIcon_Popup",
               &Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerIcon_Popup,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerIcon_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerIcon_Popup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton;
}

// UDS_VM_PlayerIcon_Popup @ 14b6bd810

UDS_VM_PlayerIcon_Popup * __thiscall
UDS_VM_PlayerIcon_Popup::UDS_VM_PlayerIcon_Popup
          (UDS_VM_PlayerIcon_Popup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerIcon_Popup__6B_;
  (this->VM_Player_IconSlot).field0_0x0.DebugPtr = (UDS_VM_Player_IconSlot *)0x0;
  (this->EntryBindingEventField_SlotList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SlotList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SlotList).UserObjectList.ArrayMax = 0;
  (this->ClickConfirm)._padding_ = '\0';
  (this->ClickConfirm).bIsCustomSelected = false;
  (this->ClickConfirm).bIsLacked = false;
  (this->ClickConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirm).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ConfirmBtnText).StringTableType = None;
  (this->ConfirmBtnText).StringTableID = 0;
  (this->ConfirmBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmBtnText).StringEnumTableNameID.Number = 0;
  (this->ConfirmBtnText).DateTime.Ticks = 0;
  (this->ConfirmBtnText).TimeSpan.Ticks = 0;
  (this->ConfirmBtnText).TimeExpressionType = None;
  (this->ConfirmBtnText).IsExpression = false;
  (this->ConfirmBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmBtnText).FormatArgs.ArrayNum = 0;
  (this->ConfirmBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x2b13;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// UDS_VM_PlayerIcon_Popup @ 14b6bd980

UDS_VM_PlayerIcon_Popup * __thiscall
UDS_VM_PlayerIcon_Popup::UDS_VM_PlayerIcon_Popup
          (UDS_VM_PlayerIcon_Popup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerIcon_Popup__6B_;
  (this->VM_Player_IconSlot).field0_0x0.DebugPtr = (UDS_VM_Player_IconSlot *)0x0;
  (this->EntryBindingEventField_SlotList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SlotList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SlotList).UserObjectList.ArrayMax = 0;
  (this->ClickConfirm)._padding_ = '\0';
  (this->ClickConfirm).bIsCustomSelected = false;
  (this->ClickConfirm).bIsLacked = false;
  (this->ClickConfirm).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirm).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirm).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirm).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ConfirmBtnText).StringTableType = None;
  (this->ConfirmBtnText).StringTableID = 0;
  (this->ConfirmBtnText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ConfirmBtnText).StringEnumTableNameID.Number = 0;
  (this->ConfirmBtnText).DateTime.Ticks = 0;
  (this->ConfirmBtnText).TimeSpan.Ticks = 0;
  (this->ConfirmBtnText).TimeExpressionType = None;
  (this->ConfirmBtnText).IsExpression = false;
  (this->ConfirmBtnText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmBtnText).UniqueString.Data.ArrayNum = 0;
  (this->ConfirmBtnText).UniqueString.Data.ArrayMax = 0;
  (this->ConfirmBtnText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfirmBtnText).FormatArgs.ArrayNum = 0;
  (this->ConfirmBtnText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Cancel).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Cancel).DateTime.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Cancel).TimeExpressionType = None;
  (this->FixedText_Btn_Cancel).IsExpression = false;
  (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Cancel).FormatArgs.ArrayMax = 0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x2b13;
  (this->FixedText_Btn_Cancel).StringTableType = StringUi;
  (this->FixedText_Btn_Cancel).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_PlayerIcon_Popup @ 14b6bf1f0

void __thiscall UDS_VM_PlayerIcon_Popup::~UDS_VM_PlayerIcon_Popup(UDS_VM_PlayerIcon_Popup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerIcon_Popup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Cancel).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Cancel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Cancel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ConfirmBtnText).FormatArgs.AllocatorInstance.Data,
             (this->ConfirmBtnText).FormatArgs.ArrayNum);
  pFVar1 = (this->ConfirmBtnText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfirmBtnText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar2 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirm).Delegate);
  pvVar2 = *(void **)&(this->ClickConfirm).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirm).Delegate);
  pFVar1 = (this->EntryBindingEventField_SlotList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0d20

IClassDescriptor * __thiscall
UDS_VM_PlayerIcon_Popup::GetFieldNotificationDescriptor(UDS_VM_PlayerIcon_Popup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PlayerIcon_Popup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c12e0

UClass * __cdecl UDS_VM_PlayerIcon_Popup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerIcon_Popup",
               &Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerIcon_Popup,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerIcon_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerIcon_Popup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerIcon_Popup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PlayerIcon_Popup @ 14b6c1980

void __cdecl UDS_VM_PlayerIcon_Popup::StaticRegisterNativesUDS_VM_PlayerIcon_Popup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_PlayerIcon_Popup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b6c2380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_PlayerIcon_Popup::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UDS_VM_PlayerIcon_Popup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
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
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    this[1].VMName.Number = 0;
    this[1].bIsCloseInit = false;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x2b13;
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
    this[2]._padding_ = 0x66;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    this[2].VMName.Number = 0;
    this[2].bIsCloseInit = false;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnUpdatePlayerData @ 14b6c2f80

void __cdecl
UDS_VM_PlayerIcon_Popup::execOnUpdatePlayerData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdatePlayerData((UDS_VM_PlayerIcon_Popup *)param_1,local_res10);
  return;
}

// BindModel @ 14bf411c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_PlayerIcon_Popup::BindModel(UDS_VM_PlayerIcon_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UDS_PlayerEvent *pUVar6;
  char *pcVar7;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_c8;
  FName local_b8;
  UDS_VM_PlayerIcon_Popup *local_b0;
  FName *local_a8;
  FDestructionSentinel local_a0;
  undefined1 local_88 [56];
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14bf41427;
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_PlayerIcon_Popup::OnUpdatePlayerData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf4126b:
    pcVar7 = &DAT_00000002;
LAB_14bf41270:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bf4126b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bf41270;
  }
  ::FName::FName(&local_b8,pcVar7);
  if ((this == (UDS_VM_PlayerIcon_Popup *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_res20 = local_b8;
  if ((this == (UDS_VM_PlayerIcon_Popup *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_PlayerIcon_Popup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_b0);
  local_d8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_e8,(FReadAccessScope *)(local_88 + 0x20));
  if ((local_d8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_e0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
LAB_14bf413a1:
    local_a8 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
    __Internal_BindDynamic<UDS_VM_PlayerIcon_Popup>'::__l2::<lambda_1>::operator()(&local_a8);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_88 + 0x20));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14bf413a1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_50);
  local_c8.Object = local_e0;
  local_c8.FunctionName = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_a0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_c8);
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
LAB_14bf41427:
  pUVar6 = UDS_PlayerEvent::GetEvent();
  if (pUVar6 != (UDS_PlayerEvent *)0x0) {
    local_c8.FunctionName = (FName)((ulonglong)local_c8.FunctionName & 0xffffffff00000000);
    local_c8.Object = (FWeakObjectPtr)OnSelectPlayerIconSlot;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnSelectPlayerIcon,
               this);
    local_88._16_4_ = local_c8.Object.ObjectIndex;
    local_88._20_4_ = local_c8.Object.ObjectSerialNumber;
    local_88._24_4_ = local_c8.FunctionName.ComparisonIndex.Value;
    local_88._28_4_ = local_c8.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PlayerIcon_Popup>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnSelectPlayerIcon,(UDS_VM_PlayerIcon_Popup *)local_88,(pmf_c6c727dc *)this)
    ;
  }
  return;
}

// ExecuteChangeIcon @ 14bf51290

void __thiscall UDS_VM_PlayerIcon_Popup::ExecuteChangeIcon(UDS_VM_PlayerIcon_Popup *this)

{
  if (this->IsDisableConfirmBtn != true) {
    FDS_PlayerService::RequestPlayerIconChange(this->SelectedPlayerIconID);
    return;
  }
  return;
}

// ExecuteUnLockIcon @ 14bf56980

void __thiscall UDS_VM_PlayerIcon_Popup::ExecuteUnLockIcon(UDS_VM_PlayerIcon_Popup *this)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->IsDisableConfirmBtn == true) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x2b11,Alert_None_01,&local_28);
    return;
  }
  FDS_PlayerService::RequestPlayerIconOpen(this->SelectedPlayerIconID);
  return;
}

// InitViewModel @ 14bf5b630

void __thiscall UDS_VM_PlayerIcon_Popup::InitViewModel(UDS_VM_PlayerIcon_Popup *this)

{
  UDS_VM_Player_IconSlot *pUVar1;
  
  if ((this->VM_Player_IconSlot).field0_0x0.DebugPtr == (UDS_VM_Player_IconSlot *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Player_IconSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Player_IconSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Player_IconSlot).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnClickClose @ 14bf61c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerIcon_Popup::OnClickClose(UDS_VM_PlayerIcon_Popup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PlayerIconPopup,local_res20,local_res18);
  }
  return;
}

// OnClickConfirm @ 14bf61c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerIcon_Popup::OnClickConfirm(UDS_VM_PlayerIcon_Popup *this,FDS_ButtonEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar2) {
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_158);
    bVar2 = UDS_PlayerData::IsHavePlayerIcon(this_00,this->SelectedPlayerIconID);
    if (bVar2) {
      if (this->IsDisableConfirmBtn != bVar2) {
        FDS_PlayerService::RequestPlayerIconChange(this->SelectedPlayerIconID);
      }
    }
    else if (this->IsDisableConfirmBtn == true) {
      local_150._0_8_ = 0;
      local_150._8_8_ = 0;
      local_150._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x2b11,Alert_None_01,&local_150);
    }
    else {
      FDS_PlayerService::RequestPlayerIconOpen(this->SelectedPlayerIconID);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_PlayerIcon_Popup::OnClickConfirm",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xc0,L"mainPlayerData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5663735212450775233>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_PlayerIcon_Popup.cpp"
                       ,0xc1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSelectPlayerIconSlot @ 14bf67770

void __thiscall
UDS_VM_PlayerIcon_Popup::OnSelectPlayerIconSlot(UDS_VM_PlayerIcon_Popup *this,int param_1)

{
  this->SelectedPlayerIconID = param_1;
  UpdateSelectedSlot(this);
  UpdateConfirmButton(this);
  return;
}

// OnSetViewModel @ 14bf69cc0

void __thiscall
UDS_VM_PlayerIcon_Popup::OnSetViewModel
          (UDS_VM_PlayerIcon_Popup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    this->SelectedPlayerIconID = *(int *)&pUVar3[8].field_0x1c;
  }
  UpdateSelectedSlot(this);
  UpdateSlotList(this);
  UpdateConfirmButton(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdatePlayerData @ 14bf72710

void __thiscall
UDS_VM_PlayerIcon_Popup::OnUpdatePlayerData(UDS_VM_PlayerIcon_Popup *this,UDS_DataBase *param_1)

{
  UpdateSelectedSlot(this);
  UpdateSlotList(this);
  UpdateConfirmButton(this);
  return;
}

// UnbindModel @ 14bf85030

void __thiscall UDS_VM_PlayerIcon_Popup::UnbindModel(UDS_VM_PlayerIcon_Popup *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_PlayerEvent *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_PlayerEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnSelectPlayerIcon,
               this);
  }
  return;
}

// UpdateConfirmButton @ 14bf87610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PlayerIcon_Popup::UpdateConfirmButton(UDS_VM_PlayerIcon_Popup *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this_00;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> this_01;
  long64 lVar5;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178 [2];
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_178);
  if (bVar2) {
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(local_178);
    bVar2 = UDS_PlayerData::IsHavePlayerIcon(this_00,this->SelectedPlayerIconID);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(local_178);
      lVar5 = 0x65;
      bVar2 = this->SelectedPlayerIconID == *(int *)&pUVar4[8].field_0x1c;
    }
    else {
      FDS_PlayerIconTableRow::GetRef((longlong)this->SelectedPlayerIconID,true);
      this_01 = DS_ItemDataUtil::GetItemDataByTID((int)local_148);
      lVar5 = 0x1fbe6;
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01.WeakPtr);
      bVar2 = !bVar2;
    }
    this->IsDisableConfirmBtn = bVar2;
    FDS_Text::SetTextFromStringTable(&this->ConfirmBtnText,StringUi,lVar5);
    local_160 = FFieldNotificationClassDescriptor::ConfirmBtnText.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::ConfirmBtnText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    local_150 = FFieldNotificationClassDescriptor::IsDisableConfirmBtn.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::IsDisableConfirmBtn.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_PlayerIcon_Popup::UpdateConfirmButton",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x93,L"mainPlayerData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5663735212450775188>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_PlayerIcon_Popup.cpp"
                       ,0x94,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateSelectedSlot @ 14bf89e30

void __thiscall UDS_VM_PlayerIcon_Popup::UpdateSelectedSlot(UDS_VM_PlayerIcon_Popup *this)

{
  UDS_VM_Player_IconSlot *this_00;
  code *pcVar1;
  FDS_ViewModelContext_PlayerIconSlot *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_Player_IconSlot).field0_0x0.DebugPtr != (UDS_VM_Player_IconSlot *)0x0) {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      MakeContext<FDS_ViewModelContext_PlayerIconSlot>(&local_28);
      pFVar2 = local_28.Object;
      if (local_28.Object == (FDS_ViewModelContext_PlayerIconSlot *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x1bf;
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_18.Object = (FDS_ViewModelContext *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      pFVar2->PlayerIconID = *(int *)&pUVar4[8].field_0x1c;
      pFVar2->PlayerIconSlotType = Base;
      this_00 = (this->VM_Player_IconSlot).field0_0x0.DebugPtr;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// UpdateSlotList @ 14bf8a620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PlayerIcon_Popup::UpdateSlotList(UDS_VM_PlayerIcon_Popup *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext_PlayerIconSlot *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_00;
  UDS_PlayerData *this_01;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> this_02;
  UObject *pUVar12;
  ulonglong uVar13;
  UDS_UserObjectListItem *this_03;
  FDS_ViewModelContext *pFVar14;
  atomic<int> *paVar15;
  TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *pTVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [7];
  TArray<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>,TSizedDefaultAllocator<32>_> local_1e0;
  FWeakObjectPtr local_1d0;
  UDS_VM_PlayerIcon_Popup *local_1c8;
  TArray<FDS_PlayerIconTableRow_const_*,TSizedDefaultAllocator<32>_> local_1c0;
  UDS_UserObjectListItem *local_1b0;
  FDS_EntryBindingEventField *local_1a8;
  FName local_198;
  int local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = this;
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = FWeakObjectPtr::IsValid(&local_1d0);
  if (bVar6) {
    local_1a8 = &this->EntryBindingEventField_SlotList;
    FDS_EntryBindingEventField::Reset(local_1a8);
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    FDS_PlayerIconTableRow::GetAll(&local_1c0);
    iVar5 = local_1c0.ArrayNum;
    pFVar1 = local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayNum * 8;
    FVar17.Data = local_1c0.AllocatorInstance.Data;
    while( true ) {
      if (local_1c0.ArrayNum != iVar5) {
        local_1e8 = 0;
        `TCheckedPointerIterator<FDS_PlayerIconTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e8);
      }
      if (FVar17.Data == pFVar1) break;
      if (*(longlong *)FVar17.Data != 0) {
        pFVar9 = ::operator_new(0x30);
        pFVar14 = (FDS_ViewModelContext *)0x0;
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
          pFVar9[1]._padding_ = 0;
          *(undefined8 *)&pFVar9[1].DerivedStaticStruct = 0;
          *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
          (pFVar9->ViewModelName).ComparisonIndex = 0;
          (pFVar9->ViewModelName).Number = 0;
          pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerIconSlot__6B_;
          pFVar14 = pFVar9;
        }
        pFVar10 = ::operator_new(0x20);
        pFVar9 = (FDS_ViewModelContext *)0x0;
        if (pFVar10 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerIconSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar14;
          pFVar9 = pFVar10;
        }
        if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar11 = FDS_ViewModelContext_PlayerIconSlot::StaticStruct();
        *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar11;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar9 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar9->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_188.Object = pFVar14;
          local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9
          ;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_188);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
        }
        pFVar14->ViewModelTemplateKey = Player_IconSlot;
        *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(*(longlong *)FVar17.Data + 8);
        *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 3;
        *(bool *)&pFVar14[1].DerivedStaticStruct =
             *(int *)(*(longlong *)FVar17.Data + 8) == this->SelectedPlayerIconID;
        this_01 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_1d0);
        bVar6 = UDS_PlayerData::IsHavePlayerIcon(this_01,*(int *)(*(longlong *)FVar17.Data + 8));
        ((atomic<int> *)&pFVar14[1].DerivedStaticStruct)->field_0x2 = bVar6;
        if (bVar6) {
LAB_14bf8a8dc:
          bVar6 = false;
        }
        else {
          this_02 = DS_ItemDataUtil::GetItemDataByTID((int)local_168);
          bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_02.WeakPtr);
          if (!bVar6) goto LAB_14bf8a8dc;
        }
        ((atomic<int> *)&pFVar14[1].DerivedStaticStruct)->field_0x1 = bVar6;
        pUVar12 = FWeakObjectPtr::Get(&local_1d0);
        ((atomic<int> *)&pFVar14[1].DerivedStaticStruct)->field_0x3 =
             *(int *)(*(longlong *)FVar17.Data + 8) == *(int *)&pUVar12[8].field_0x1c;
        iVar7 = local_1e0.ArrayNum;
        if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
        }
        local_1e0.ArrayNum = iVar7 + 1;
        *(FDS_ViewModelContext **)
         &local_1e0.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 = pFVar14;
        *(FDS_ViewModelContext **)(local_1e0.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
             pFVar9;
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar9->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar9);
      }
      FVar17.Data = FVar17.Data + 8;
    }
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
    DS_Sorting<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>_>::Sort
              (&local_1e0,PlayerIcon,Ascend);
    iVar5 = local_1e0.ArrayNum;
    uVar13 = (ulonglong)local_1e0.ArrayNum;
    pTVar16 = (TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)
              (local_1e0.AllocatorInstance.Data + uVar13 * 0x10);
    FVar17.Data = local_1e0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar5) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1e7);
      }
      if ((TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)FVar17.Data == pTVar16) break;
      pTVar2 = (((TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)FVar17.Data)->
               SharedReferenceCount).ReferenceController;
      pFVar3 = ((TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)FVar17.Data)->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        paVar15 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar15 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      this_03 = NewObject<UDS_UserObjectListItem>((UObject *)local_1c8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_03 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_178.Object = (FDS_ViewModelContext *)pFVar3;
      local_178.SharedReferenceCount.ReferenceController = pTVar2;
      UDS_UserObjectListItem::AddContext(this_03,&local_178);
      local_1b0 = this_03;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_03 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      FDS_EntryBindingEventField::Add(local_1a8,(TObjectPtr<UDS_UserObjectListItem>)&local_1b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar13 = local_1e0._8_8_ & 0xffffffff;
      FVar17.Data = FVar17.Data + 0x10;
    }
    local_190 = FFieldNotificationClassDescriptor::EntryBindingEventField_SlotList.BitNumber;
    local_198 = FFieldNotificationClassDescriptor::EntryBindingEventField_SlotList.FieldName;
    (**(code **)(local_1c8->_padding_ + 0x38))(&local_1c8->_padding_,&local_198);
    DestructItems<TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1>,int>
              ((TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)local_1e0.AllocatorInstance.Data
               ,local_1e0.ArrayNum);
    if ((TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)local_1e0.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ViewModelContext_PlayerIconSlot,1> *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_PlayerIcon_Popup::UpdateSlotList",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x68,L"mainPlayerData is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5663735212450775145>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerIcon\\DS_VM_PlayerIcon_Popup.cpp"
                       ,0x69,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

