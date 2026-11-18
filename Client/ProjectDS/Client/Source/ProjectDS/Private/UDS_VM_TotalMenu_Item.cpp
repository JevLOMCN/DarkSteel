// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetIconID_WrapperImpl @ 14b6ed530

void __cdecl UDS_VM_TotalMenu_Item::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetName_WrapperImpl @ 14b6ed540

void __cdecl UDS_VM_TotalMenu_Item::SetName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa8),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::Name.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsDisable_WrapperImpl @ 14b6ed550

void __cdecl UDS_VM_TotalMenu_Item::SetbIsDisable_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xf8) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsDisable.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsDisable.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsEmpty_WrapperImpl @ 14b6ed560

void __cdecl UDS_VM_TotalMenu_Item::SetbIsEmpty_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::bIsEmpty.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsEmpty.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickEvent_WrapperImpl @ 14b6ed570

void __cdecl UDS_VM_TotalMenu_Item::SetClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ContentManager *this;
  
  this = UDS_ContentManager::GetInst();
  if (this != (UDS_ContentManager *)0x0) {
    UDS_ContentManager::OpenContent(this,(EDS_TotalMenuId *)((longlong)param_1 + 0x120));
    return;
  }
  return;
}

// StaticClass @ 14b6ed580

UClass * __cdecl UDS_VM_TotalMenu_Item::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_Item",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_Item,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu_Item>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_Item>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton;
}

// UDS_VM_TotalMenu_Item @ 14b6f2830

UDS_VM_TotalMenu_Item * __thiscall
UDS_VM_TotalMenu_Item::UDS_VM_TotalMenu_Item(UDS_VM_TotalMenu_Item *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_Item__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->Name).StringTableType = None;
  return this;
}

// UDS_VM_TotalMenu_Item @ 14b6f28e0

UDS_VM_TotalMenu_Item * __thiscall
UDS_VM_TotalMenu_Item::UDS_VM_TotalMenu_Item
          (UDS_VM_TotalMenu_Item *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_Item__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->Name).StringTableType = None;
  return this;
}

// ~UDS_VM_TotalMenu_Item @ 14b6f4430

void __thiscall UDS_VM_TotalMenu_Item::~UDS_VM_TotalMenu_Item(UDS_VM_TotalMenu_Item *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_Item__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar2 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6d90

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_Item::GetFieldNotificationDescriptor(UDS_VM_TotalMenu_Item *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_Item::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f77e0

UClass * __cdecl UDS_VM_TotalMenu_Item::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_Item",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_Item,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu_Item>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_Item>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_Item.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_Item @ 14b6f8450

void __cdecl UDS_VM_TotalMenu_Item::StaticRegisterNativesUDS_VM_TotalMenu_Item(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_TotalMenu_Item_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedRedDot @ 14b6f95b0

void __cdecl
UDS_VM_TotalMenu_Item::execOnChangedRedDot(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedRedDot((UDS_VM_TotalMenu_Item *)param_1);
  return;
}

// BindModel @ 14bf42220

void __thiscall UDS_VM_TotalMenu_Item::BindModel(UDS_VM_TotalMenu_Item *this)

{
  UDS_NotificationManager *this_00;
  FName *pFVar1;
  UDS_ContentManager *pUVar2;
  FName local_res10 [3];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 != (UDS_NotificationManager *)0x0) {
    UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
    pFVar1 = ::FName::FName(local_res10,"OnChangedRedDot");
    UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this,*pFVar1)
    ;
  }
  pUVar2 = UDS_ContentManager::GetInst();
  if (pUVar2 != (UDS_ContentManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_TotalMenu_Item>
              (&pUVar2->OpenContentEvent,(UDS_VM_TotalMenu_Item *)local_res10,(pmf_93e2cdd4 *)this);
  }
  return;
}

// OnChangedRedDot @ 14bf60960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TotalMenu_Item::OnChangedRedDot(UDS_VM_TotalMenu_Item *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FDS_ContentsTotalMenuTableRow *this_00;
  UDS_LogManager *pUVar4;
  UDS_NotificationManager *this_01;
  ForAnyElementType FVar5;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [16];
  TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->bIsRedDotVis = false;
  this_00 = FDS_ContentsTotalMenuTableRow::GetRef((longlong)(int)this->TotalMenuId,true);
  bVar3 = FDS_ContentsTotalMenuTableRow::IsValid(this_00);
  if (bVar3) {
    this_01 = UDS_NotificationManager::GetInst();
    if (this_01 == (UDS_NotificationManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)this_01;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_TotalMenu_Item::OnChangedRedDot",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,100,L"notificationManager is nullptr.");
        if ((UDS_NotificationManager *)local_148._padding_ != (UDS_NotificationManager *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else if (this_00->Type == Main) {
      UDS_NotificationManager::GetSameMenuOrderList(this_01,&local_158,this_00->ID_ContentsTabFrame)
      ;
      iVar2 = local_158.ArrayNum;
      pFVar1 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 4;
      FVar5.Data = local_158.AllocatorInstance.Data;
      while( true ) {
        if (local_158.ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_EDS_ContentsTabFrameType,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_168);
        }
        if (FVar5.Data == pFVar1) goto LAB_14bf60b44;
        bVar3 = UDS_NotificationManager::GetRedDotStateByTabFrame
                          (this_01,*(EDS_ContentsTabFrameType *)FVar5.Data);
        if (bVar3) break;
        FVar5.Data = FVar5.Data + 4;
      }
      this->bIsRedDotVis = true;
LAB_14bf60b44:
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TotalMenu_Item::OnChangedRedDot",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x5d,L"contentsTotalMenuTableRow is not valid.");
      if ((UDS_NotificationManager *)local_148._padding_ != (UDS_NotificationManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  local_158.ArrayNum = FFieldNotificationClassDescriptor::bIsRedDotVis.BitNumber;
  local_158.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::bIsRedDotVis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
  return;
}

// OnClickEvent @ 14bf62050

void __thiscall
UDS_VM_TotalMenu_Item::OnClickEvent(UDS_VM_TotalMenu_Item *this,FDS_ButtonEventField *param_1)

{
  UDS_ContentManager *this_00;
  
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    UDS_ContentManager::OpenContent(this_00,&this->TotalMenuId);
    return;
  }
  return;
}

// OnOpenContentEvent @ 14bf65970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_Item::OnOpenContentEvent
          (UDS_VM_TotalMenu_Item *this,EDS_ContentsTabFrameType param_1,bool param_2)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_WindowManager *this_00;
  UDS_ContentManager *this_01;
  bool bVar2;
  float local_res8 [2];
  uint local_res20 [2];
  
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)this->TotalMenuId,true);
  if ((pFVar1 != (FDS_ContentsTotalMenuTableRow *)0x0) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    bVar2 = pFVar1->ID_ContentsTabFrame == param_1;
    if ((!bVar2) && (this_01 = UDS_ContentManager::GetInst(), this_01 != (UDS_ContentManager *)0x0))
    {
      bVar2 = UDS_ContentManager::IsManualCondition_TotalMenu(this_01,this->TotalMenuId);
    }
    if (bVar2 != false) {
      local_res8[0] = 0.0;
      local_res20[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,TotalMenu,local_res20,local_res8);
    }
  }
  return;
}

// OnSetViewModel @ 14bf6e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TotalMenu_Item::OnSetViewModel
          (UDS_VM_TotalMenu_Item *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_TotalMenuId EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_LogManager *pUVar3;
  FDS_ContentsTotalMenuTableRow *pFVar4;
  undefined1 auStackY_238 [32];
  FName local_1f8;
  int local_1f0;
  TSharedPtr<FDS_ViewModelContext_TotalMenuItem,1> local_1e8;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FDS_Text local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_TotalMenuItem>(&local_1e8,&local_158);
  if (local_1e8.Object == (FDS_ViewModelContext_TotalMenuItem *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TotalMenu_Item::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x18,
                 L"FDS_ViewModelContext_TotalMenuItem is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
  }
  else {
    EVar1 = (local_1e8.Object)->TotalMenuId;
    this->TotalMenuId = EVar1;
    if (EVar1 == None) {
      this->bIsEmpty = true;
      local_1f0 = FFieldNotificationClassDescriptor::bIsEmpty.BitNumber;
      local_1f8 = FFieldNotificationClassDescriptor::bIsEmpty.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar4 = FDS_ContentsTotalMenuTableRow::Get((longlong)(int)EVar1,true);
      if (pFVar4 == (FDS_ContentsTotalMenuTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_TotalMenu_Item::OnSetViewModel",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_148.Ptr,0x27,
                     L"FDS_ContentsTotalMenuTableRow is nullptr ID - %d");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        this->bIsDisable = pFVar4->IsActivate == false;
        local_1f0 = FFieldNotificationClassDescriptor::bIsDisable.BitNumber;
        local_1f8 = FFieldNotificationClassDescriptor::bIsDisable.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
        this->IconID = pFVar4->ID_Icon;
        local_1d0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
        local_1d8 = FFieldNotificationClassDescriptor::IconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
        local_1a8.StringTableType = None;
        local_1a8.StringTableID = 0;
        local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1a8.StringEnumTableNameID.Number = 0;
        local_1a8.TimeExpressionType = None;
        local_1a8.DateTime.Ticks = 0;
        local_1a8.TimeSpan.Ticks = 0;
        local_1a8.IsExpression = false;
        local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.UniqueString.Data.ArrayNum = 0;
        local_1a8.UniqueString.Data.ArrayMax = 0;
        local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.FormatArgs.ArrayNum = 0;
        local_1a8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_1a8,&pFVar4->ID_Name);
        FDS_Text::operator=(&this->Name,&local_1a8);
        local_1c0 = FFieldNotificationClassDescriptor::Name.BitNumber;
        local_1c8 = FFieldNotificationClassDescriptor::Name.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
                   local_1a8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
        }
        this->bIsEmpty = false;
        local_1b0 = FFieldNotificationClassDescriptor::bIsEmpty.BitNumber;
        local_1b8 = FFieldNotificationClassDescriptor::bIsEmpty.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
        OnChangedRedDot(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bf7b1d0

void __thiscall UDS_VM_TotalMenu_Item::SetIconID(UDS_VM_TotalMenu_Item *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetName @ 14bf7c650

void __thiscall UDS_VM_TotalMenu_Item::SetName(UDS_VM_TotalMenu_Item *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->Name,param_1);
  local_10 = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetbIsDisable @ 14bf82420

void __thiscall UDS_VM_TotalMenu_Item::SetbIsDisable(UDS_VM_TotalMenu_Item *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsDisable = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsDisable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsDisable.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetbIsEmpty @ 14bf82460

void __thiscall UDS_VM_TotalMenu_Item::SetbIsEmpty(UDS_VM_TotalMenu_Item *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsEmpty = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsEmpty.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsEmpty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf85720

void __thiscall UDS_VM_TotalMenu_Item::UnbindModel(UDS_VM_TotalMenu_Item *this)

{
  UDS_NotificationManager *this_00;
  UDS_ContentManager *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 != (UDS_NotificationManager *)0x0) {
    UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
  }
  pUVar1 = UDS_ContentManager::GetInst();
  if (pUVar1 != (UDS_ContentManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OpenContentEvent,this)
    ;
    return;
  }
  return;
}

