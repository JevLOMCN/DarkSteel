// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetTabButtonClickEvent_WrapperImpl @ 14b628790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ContentsFrame_Button::SetTabButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentManager *this;
  UDS_LogManager *pUVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_HistoryManager *this_00;
  UDS_HistoryBuilder *this_01;
  FDS_HistoryData *pFVar4;
  undefined1 auStackY_318 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsTabFrameType aEStack_2d8 [2];
  FWeakObjectPtr FStack_2d0;
  UDS_ContentsTabBuilder *apUStack_2c8 [2];
  undefined1 auStack_2b8 [256];
  void *pvStack_1b8;
  wchar_t *pwStack_1b0;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this = UDS_ContentManager::GetInst();
  if (this == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    pvStack_1b8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
               "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,0x67,L"contentManager is nullptr.");
  }
  else {
    aEStack_2d8[0] = UDS_ContentManager::GetCurrentTabFrameID(this);
    if ((aEStack_2d8[0] == None) ||
       (*(EDS_ContentsTabFrameType *)((longlong)param_1 + 0x114) == aEStack_2d8[0])) {
LAB_14bdded11:
      apUStack_2c8[0] = (UDS_ContentsTabBuilder *)0x0;
      UDS_ContentManager::OpenContent
                (this,(EDS_ContentsTabFrameType *)((longlong)param_1 + 0x114),
                 (TObjectPtr<UDS_ContentArguments>)apUStack_2c8);
      return;
    }
    pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)aEStack_2d8[0],true);
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)*(int *)((longlong)param_1 + 0x114),true);
    if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"currentTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x73;
    }
    else {
      if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
        if ((pFVar2->HistoryGroup != 0) && (pFVar2->HistoryGroup != pFVar3->HistoryGroup)) {
          apUStack_2c8[0] = UDS_ContentsTabBuilder::Create(aEStack_2d8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FStack_2d0.ObjectIndex = 0;
          FStack_2d0.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FWeakObjectPtr::operator=(&FStack_2d0,(FObjectPtr)apUStack_2c8);
          this_00 = UDS_HistoryManager::GetInst();
          if (this_00 != (UDS_HistoryManager *)0x0) {
            UDS_HistoryManager::CollectHistory
                      (this_00,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)FStack_2d0);
            this_01 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&FStack_2d0);
            pFVar4 = UDS_HistoryBuilder::Build(this_01,(FDS_HistoryData *)auStack_2b8);
            UDS_HistoryManager::AddHistoryData(this_00,pFVar4);
          }
        }
        goto LAB_14bdded11;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"clickedTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,uVar5,pwVar6);
  }
  if (pvStack_1b8 != (void *)0x0) {
    FMemory::Free(pvStack_1b8);
  }
  return;
}

// SetFocusReceivedTabButton_WrapperImpl @ 14b6287a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ContentsFrame_Button::SetFocusReceivedTabButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentManager *this;
  UDS_LogManager *pUVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_HistoryManager *this_00;
  UDS_HistoryBuilder *this_01;
  FDS_HistoryData *pFVar4;
  undefined1 auStackY_318 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsTabFrameType aEStack_2d8 [2];
  FWeakObjectPtr FStack_2d0;
  UDS_ContentsTabBuilder *apUStack_2c8 [2];
  undefined1 auStack_2b8 [256];
  void *pvStack_1b8;
  wchar_t *pwStack_1b0;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this = UDS_ContentManager::GetInst();
  if (this == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    pvStack_1b8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
               "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,0x67,L"contentManager is nullptr.");
  }
  else {
    aEStack_2d8[0] = UDS_ContentManager::GetCurrentTabFrameID(this);
    if ((aEStack_2d8[0] == None) ||
       (*(EDS_ContentsTabFrameType *)((longlong)param_1 + 0x114) == aEStack_2d8[0])) {
LAB_14bdded11:
      apUStack_2c8[0] = (UDS_ContentsTabBuilder *)0x0;
      UDS_ContentManager::OpenContent
                (this,(EDS_ContentsTabFrameType *)((longlong)param_1 + 0x114),
                 (TObjectPtr<UDS_ContentArguments>)apUStack_2c8);
      return;
    }
    pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)aEStack_2d8[0],true);
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)*(int *)((longlong)param_1 + 0x114),true);
    if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"currentTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x73;
    }
    else {
      if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
        if ((pFVar2->HistoryGroup != 0) && (pFVar2->HistoryGroup != pFVar3->HistoryGroup)) {
          apUStack_2c8[0] = UDS_ContentsTabBuilder::Create(aEStack_2d8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FStack_2d0.ObjectIndex = 0;
          FStack_2d0.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FWeakObjectPtr::operator=(&FStack_2d0,(FObjectPtr)apUStack_2c8);
          this_00 = UDS_HistoryManager::GetInst();
          if (this_00 != (UDS_HistoryManager *)0x0) {
            UDS_HistoryManager::CollectHistory
                      (this_00,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)FStack_2d0);
            this_01 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&FStack_2d0);
            pFVar4 = UDS_HistoryBuilder::Build(this_01,(FDS_HistoryData *)auStack_2b8);
            UDS_HistoryManager::AddHistoryData(this_00,pFVar4);
          }
        }
        goto LAB_14bdded11;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"clickedTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,uVar5,pwVar6);
  }
  if (pvStack_1b8 != (void *)0x0) {
    FMemory::Free(pvStack_1b8);
  }
  return;
}

// SetIsSelected_WrapperImpl @ 14b6287b0

void __cdecl UDS_VM_ContentsFrame_Button::SetIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x112) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6287c0

UClass * __cdecl UDS_VM_ContentsFrame_Button::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_Button",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_Button,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_Button>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_Button>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton;
}

// UDS_VM_ContentsFrame_Button @ 14b62d3d0

UDS_VM_ContentsFrame_Button * __thiscall
UDS_VM_ContentsFrame_Button::UDS_VM_ContentsFrame_Button
          (UDS_VM_ContentsFrame_Button *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_Button__6B_;
  (this->TabText).StringTableID = 0;
  (this->TabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabText).StringEnumTableNameID.Number = 0;
  (this->TabText).DateTime.Ticks = 0;
  (this->TabText).TimeSpan.Ticks = 0;
  (this->TabText).TimeExpressionType = None;
  (this->TabText).IsExpression = false;
  (this->TabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).UniqueString.Data.ArrayNum = 0;
  (this->TabText).UniqueString.Data.ArrayMax = 0;
  (this->TabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).FormatArgs.ArrayNum = 0;
  (this->TabText).FormatArgs.ArrayMax = 0;
  (this->TabButtonClickEvent)._padding_ = '\0';
  (this->TabButtonClickEvent).bIsCustomSelected = false;
  (this->TabButtonClickEvent).bIsLacked = false;
  (this->TabButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->TabButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->TabButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->TabButtonClickEvent).Delegate.field_0x10 = 0;
  this->FocusReceivedTabButton = false;
  this->FocusSetTabButton = false;
  this->TabFrameID = None;
  (this->TabText).StringTableType = None;
  return this;
}

// UDS_VM_ContentsFrame_Button @ 14b62d490

UDS_VM_ContentsFrame_Button * __thiscall
UDS_VM_ContentsFrame_Button::UDS_VM_ContentsFrame_Button
          (UDS_VM_ContentsFrame_Button *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_Button__6B_;
  (this->TabText).StringTableID = 0;
  (this->TabText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabText).StringEnumTableNameID.Number = 0;
  (this->TabText).DateTime.Ticks = 0;
  (this->TabText).TimeSpan.Ticks = 0;
  (this->TabText).TimeExpressionType = None;
  (this->TabText).IsExpression = false;
  (this->TabText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).UniqueString.Data.ArrayNum = 0;
  (this->TabText).UniqueString.Data.ArrayMax = 0;
  (this->TabText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabText).FormatArgs.ArrayNum = 0;
  (this->TabText).FormatArgs.ArrayMax = 0;
  (this->TabButtonClickEvent)._padding_ = '\0';
  (this->TabButtonClickEvent).bIsCustomSelected = false;
  (this->TabButtonClickEvent).bIsLacked = false;
  (this->TabButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->TabButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->TabButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->TabButtonClickEvent).Delegate.field_0x10 = 0;
  this->FocusReceivedTabButton = false;
  this->FocusSetTabButton = false;
  this->TabFrameID = None;
  (this->TabText).StringTableType = None;
  return this;
}

// ~UDS_VM_ContentsFrame_Button @ 14b62f1b0

void __thiscall
UDS_VM_ContentsFrame_Button::~UDS_VM_ContentsFrame_Button(UDS_VM_ContentsFrame_Button *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ContentsFrame_Button__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TabButtonClickEvent).Delegate);
  pvVar1 = *(void **)&(this->TabButtonClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TabButtonClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TabText).FormatArgs.AllocatorInstance.Data,
             (this->TabText).FormatArgs.ArrayNum);
  pFVar2 = (this->TabText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TabText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631b40

IClassDescriptor * __thiscall
UDS_VM_ContentsFrame_Button::GetFieldNotificationDescriptor(UDS_VM_ContentsFrame_Button *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ContentsFrame_Button::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6327e0

UClass * __cdecl UDS_VM_ContentsFrame_Button::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ContentsFrame_Button",
               &Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton,
               StaticRegisterNativesUDS_VM_ContentsFrame_Button,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ContentsFrame_Button>,
               InternalVTableHelperCtorCaller<UDS_VM_ContentsFrame_Button>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ContentsFrame_Button.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ContentsFrame_Button @ 14b633070

void __cdecl UDS_VM_ContentsFrame_Button::StaticRegisterNativesUDS_VM_ContentsFrame_Button(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ContentsFrame_Button_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsRedDotState @ 14b634220

void __cdecl
UDS_VM_ContentsFrame_Button::execIsRedDotState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRedDotState((UDS_VM_ContentsFrame_Button *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChangedRedDotState @ 14b634370

void __cdecl
UDS_VM_ContentsFrame_Button::execOnChangedRedDotState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedRedDotState((UDS_VM_ContentsFrame_Button *)param_1);
  return;
}

// BindModel @ 14bdb15a0

void __thiscall UDS_VM_ContentsFrame_Button::BindModel(UDS_VM_ContentsFrame_Button *this)

{
  UDS_NotificationManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 != (UDS_NotificationManager *)0x0) {
    pFVar1 = ::FName::FName(local_res10,"OnChangedRedDotState");
    UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this,*pFVar1)
    ;
  }
  return;
}

// IsRedDotState @ 14bdc88e0

bool __thiscall UDS_VM_ContentsFrame_Button::IsRedDotState(UDS_VM_ContentsFrame_Button *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_NotificationManager *this_00;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 == (UDS_NotificationManager *)0x0) {
    return false;
  }
  UDS_NotificationManager::GetSameMenuOrderTabList(this_00,&local_18,this->TabFrameID);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 4;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_ContentsTabFrameType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    bVar2 = UDS_NotificationManager::GetRedDotStateByTabFrame
                      (this_00,*(EDS_ContentsTabFrameType *)FVar4.Data);
    if (bVar2) {
      bVar2 = true;
LAB_14bdc8966:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar2;
    }
    FVar4.Data = FVar4.Data + 4;
  }
  bVar2 = false;
  goto LAB_14bdc8966;
}

// OnChangedRedDotState @ 14bdcaa70

void __thiscall UDS_VM_ContentsFrame_Button::OnChangedRedDotState(UDS_VM_ContentsFrame_Button *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsRedDotState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRedDotState.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnFocusReceivedTabButton @ 14bdcee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame_Button::OnFocusReceivedTabButton
          (UDS_VM_ContentsFrame_Button *this,FDS_WidgetEventField *param_1)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_HistoryManager *this_01;
  UDS_HistoryBuilder *this_02;
  FDS_HistoryData *pFVar4;
  undefined1 auStackY_318 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsTabFrameType aEStack_2d8 [2];
  FWeakObjectPtr FStack_2d0;
  UDS_ContentsTabBuilder *apUStack_2c8 [2];
  undefined1 auStack_2b8 [256];
  void *pvStack_1b8;
  wchar_t *pwStack_1b0;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    pvStack_1b8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
               "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,0x67,L"contentManager is nullptr.");
  }
  else {
    aEStack_2d8[0] = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    if ((aEStack_2d8[0] == None) || (this->TabFrameID == aEStack_2d8[0])) {
LAB_14bdded11:
      apUStack_2c8[0] = (UDS_ContentsTabBuilder *)0x0;
      UDS_ContentManager::OpenContent
                (this_00,&this->TabFrameID,(TObjectPtr<UDS_ContentArguments>)apUStack_2c8);
      return;
    }
    pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)aEStack_2d8[0],true);
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)this->TabFrameID,true);
    if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"currentTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x73;
    }
    else {
      if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
        if ((pFVar2->HistoryGroup != 0) && (pFVar2->HistoryGroup != pFVar3->HistoryGroup)) {
          apUStack_2c8[0] = UDS_ContentsTabBuilder::Create(aEStack_2d8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FStack_2d0.ObjectIndex = 0;
          FStack_2d0.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FWeakObjectPtr::operator=(&FStack_2d0,(FObjectPtr)apUStack_2c8);
          this_01 = UDS_HistoryManager::GetInst();
          if (this_01 != (UDS_HistoryManager *)0x0) {
            UDS_HistoryManager::CollectHistory
                      (this_01,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)FStack_2d0);
            this_02 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&FStack_2d0);
            pFVar4 = UDS_HistoryBuilder::Build(this_02,(FDS_HistoryData *)auStack_2b8);
            UDS_HistoryManager::AddHistoryData(this_01,pFVar4);
          }
        }
        goto LAB_14bdded11;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"clickedTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,uVar5,pwVar6);
  }
  if (pvStack_1b8 != (void *)0x0) {
    FMemory::Free(pvStack_1b8);
  }
  return;
}

// OnSetViewModel @ 14bdd9f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame_Button::OnSetViewModel
          (UDS_VM_ContentsFrame_Button *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  undefined1 auStackY_1c8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TSharedPtr<FDS_ViewModelContext_ContentsFrameButton,1> local_198;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ContentsFrameButton>(&local_198,&local_158);
  if (local_198.Object == (FDS_ViewModelContext_ContentsFrameButton *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bdda104;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)local_198.Object;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_ContentsFrame_Button::OnSetViewModel",0x2b,Yes);
    pwVar5 = L"context is nullptr";
    uVar4 = 0x18;
  }
  else {
    this->TabFrameID = (local_198.Object)->TabFrameID;
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)(local_198.Object)->TabFrameID,true);
    if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
      FDS_Text::SetTextFromStringID(&this->TabText,&pFVar3->ID_Name);
      local_180 = FFieldNotificationClassDescriptor::TabText.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::TabText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
      this->IsSelected = (local_198.Object)->IsSelected;
      local_170 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
      local_178 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      local_160 = FFieldNotificationClassDescriptor::IsRedDotState.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::IsRedDotState.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      goto LAB_14bdda104;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14bdda104;
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_ContentsFrame_Button::OnSetViewModel",0x2b,Yes);
    pwVar5 = L"contentsTabFrameTableRow is nullptr.";
    uVar4 = 0x21;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
  if ((FDS_ViewModelContext_ContentsFrameButton *)local_148._padding_ !=
      (FDS_ViewModelContext_ContentsFrameButton *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14bdda104:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTabButtonClick @ 14bddeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ContentsFrame_Button::OnTabButtonClick(UDS_VM_ContentsFrame_Button *this)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_HistoryManager *this_01;
  UDS_HistoryBuilder *this_02;
  FDS_HistoryData *pFVar4;
  undefined1 auStackY_318 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsTabFrameType local_2d8 [2];
  FWeakObjectPtr local_2d0;
  UDS_ContentsTabBuilder *local_2c8 [2];
  undefined1 local_2b8 [256];
  void *local_1b8;
  wchar_t *local_1b0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_1b8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_2b8,
               "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_1b0,0x67,L"contentManager is nullptr.");
  }
  else {
    local_2d8[0] = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    if ((local_2d8[0] == None) || (this->TabFrameID == local_2d8[0])) {
LAB_14bdded11:
      local_2c8[0] = (UDS_ContentsTabBuilder *)0x0;
      UDS_ContentManager::OpenContent
                (this_00,&this->TabFrameID,(TObjectPtr<UDS_ContentArguments>)local_2c8);
      return;
    }
    pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)local_2d8[0],true);
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)this->TabFrameID,true);
    if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"currentTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x73;
    }
    else {
      if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
        if ((pFVar2->HistoryGroup != 0) && (pFVar2->HistoryGroup != pFVar3->HistoryGroup)) {
          local_2c8[0] = UDS_ContentsTabBuilder::Create(local_2d8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_2c8[0]);
          }
          local_2d0.ObjectIndex = 0;
          local_2d0.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_2c8[0]);
          }
          FWeakObjectPtr::operator=(&local_2d0,(FObjectPtr)local_2c8);
          this_01 = UDS_HistoryManager::GetInst();
          if (this_01 != (UDS_HistoryManager *)0x0) {
            UDS_HistoryManager::CollectHistory
                      (this_01,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)local_2d0);
            this_02 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&local_2d0);
            pFVar4 = UDS_HistoryBuilder::Build(this_02,(FDS_HistoryData *)local_2b8);
            UDS_HistoryManager::AddHistoryData(this_01,pFVar4);
          }
        }
        goto LAB_14bdded11;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"clickedTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_1b0,uVar5,pwVar6);
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  return;
}

// OnTabButtonClickEvent @ 14bdded60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ContentsFrame_Button::OnTabButtonClickEvent
          (UDS_VM_ContentsFrame_Button *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_HistoryManager *this_01;
  UDS_HistoryBuilder *this_02;
  FDS_HistoryData *pFVar4;
  undefined1 auStackY_318 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsTabFrameType aEStack_2d8 [2];
  FWeakObjectPtr FStack_2d0;
  UDS_ContentsTabBuilder *apUStack_2c8 [2];
  undefined1 auStack_2b8 [256];
  void *pvStack_1b8;
  wchar_t *pwStack_1b0;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 == (UDS_ContentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    pvStack_1b8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
               "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,0x67,L"contentManager is nullptr.");
  }
  else {
    aEStack_2d8[0] = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    if ((aEStack_2d8[0] == None) || (this->TabFrameID == aEStack_2d8[0])) {
LAB_14bdded11:
      apUStack_2c8[0] = (UDS_ContentsTabBuilder *)0x0;
      UDS_ContentManager::OpenContent
                (this_00,&this->TabFrameID,(TObjectPtr<UDS_ContentArguments>)apUStack_2c8);
      return;
    }
    pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)aEStack_2d8[0],true);
    pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)this->TabFrameID,true);
    if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"currentTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x73;
    }
    else {
      if (pFVar3 != (FDS_ContentsTabFrameTableRow *)0x0) {
        if ((pFVar2->HistoryGroup != 0) && (pFVar2->HistoryGroup != pFVar3->HistoryGroup)) {
          apUStack_2c8[0] = UDS_ContentsTabBuilder::Create(aEStack_2d8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FStack_2d0.ObjectIndex = 0;
          FStack_2d0.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (apUStack_2c8[0] != (UDS_ContentsTabBuilder *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)apUStack_2c8[0]);
          }
          FWeakObjectPtr::operator=(&FStack_2d0,(FObjectPtr)apUStack_2c8);
          this_01 = UDS_HistoryManager::GetInst();
          if (this_01 != (UDS_HistoryManager *)0x0) {
            UDS_HistoryManager::CollectHistory
                      (this_01,(TWeakObjectPtr<UDS_HistoryBuilder,FWeakObjectPtr>)FStack_2d0);
            this_02 = (UDS_HistoryBuilder *)FWeakObjectPtr::Get(&FStack_2d0);
            pFVar4 = UDS_HistoryBuilder::Build(this_02,(FDS_HistoryData *)auStack_2b8);
            UDS_HistoryManager::AddHistoryData(this_01,pFVar4);
          }
        }
        goto LAB_14bdded11;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      pvStack_1b8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_2b8,
                 "UDS_VM_ContentsFrame_Button::OnTabButtonClick",0x2d,Yes);
      pwVar6 = L"clickedTabFrameTableRow is nullptr.  %d";
      uVar5 = 0x79;
    }
    UDS_LogManager::PrintLog(pUVar1,1,Warning,pwStack_1b0,uVar5,pwVar6);
  }
  if (pvStack_1b8 != (void *)0x0) {
    FMemory::Free(pvStack_1b8);
  }
  return;
}

// SetIsSelected @ 14bde6cf0

void __thiscall
UDS_VM_ContentsFrame_Button::SetIsSelected(UDS_VM_ContentsFrame_Button *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bdecac0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_ContentsFrame_Button::UnbindModel(UDS_VM_ContentsFrame_Button *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_NotificationManager *this_00;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 != (UDS_NotificationManager *)0x0) {
    UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
  }
  return;
}

