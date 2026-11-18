// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetClickExpand_WrapperImpl @ 14b6fcf40

void __cdecl UDS_VM_WorldMapZoneListSlot::SetClickExpand_WrapperImpl(void *param_1,void *param_2)

{
  SetIsListItemExpanded(param_1,*(char *)((longlong)param_1 + 0x15b) == '\0');
  return;
}

// SetClickItem_WrapperImpl @ 14b6fcf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldMapZoneListSlot::SetClickItem_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_WorldMapManager *this;
  UDS_LogManager *pUVar3;
  UDS_WorldMapEvent *pUVar4;
  undefined1 auStackY_178 [32];
  TVector2<double>_u_0 TStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WorldMapManager::GetInst();
  if (this == (UDS_WorldMapManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMapZoneListSlot::OnClickItem",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x58,L"worldMapMgr is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    TStack_148._s_0.X = *(double *)((longlong)param_1 + 0x160);
    TStack_148._s_0.Y = *(double *)((longlong)param_1 + 0x168);
    UDS_WorldMapManager::SetContentsFocusPosition(this,(TVector2<double> *)&TStack_148._s_0);
    pUVar4 = UDS_WorldMapEvent::GetEvent();
    if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
      iVar1 = *(int *)((longlong)param_1 + 0x178);
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->MapFocuseDelgate);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->MapFocuseDelgate).Delegate,iVar1);
      }
    }
  }
  return;
}

// SetClickShared_WrapperImpl @ 14b6fcf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c026b3f) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldMapZoneListSlot::SetClickShared_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  TVector2<double> TVar3;
  double dVar4;
  int iVar5;
  UDS_WorldMapManager *this;
  UDS_LogManager *pUVar6;
  UDS_WorldMapMarkerManager *this_00;
  void *pvVar7;
  undefined1 auStackY_258 [32];
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  FWeakObjectPtr FStack_1c0;
  undefined8 uStack_1b8;
  FDS_WorldMapMarkerInfo FStack_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this = UDS_WorldMapManager::GetInst();
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  if (this == (UDS_WorldMapManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_WorldMapZoneListSlot::OnClickShared",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_148.Ptr,0x68,L"worldMapMgr is nullptr");
    pvVar7 = (void *)TStack_148._padding_;
  }
  else {
    FStack_1c0.ObjectIndex = 0;
    FStack_1c0.ObjectSerialNumber = 0;
    uStack_1b8 = 0;
    FWeakObjectPtr::operator=(&FStack_1c0,(FObjectPtr)&uStack_1b8);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + 0x160);
    iVar1 = *(int *)((longlong)param_1 + 0x17c);
    dStack_1e8 = TVar3.field0_0x0._8_8_;
    dVar4 = dStack_1e8;
    iVar5 = UDS_WorldMapManager::GetIslandIDByZoneID(this,*(int *)((longlong)param_1 + 0x178));
    this_00 = UDS_WorldMapMarkerManager::GetInst();
    if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_148,"UDS_VM_WorldMapZoneListSlot::OnClickShared",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,TStack_148.Ptr,0x77,L"UDS_WorldMapMarkerManager nullptr");
        if ((void *)TStack_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_148._padding_);
        }
      }
    }
    else {
      FStack_1b0.Memo.Data.ArrayMax = 0;
      FStack_1b0.Memo.Data.ArrayNum = 0;
      FStack_1b0.Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1b0.SavedScale = 0.0;
      FStack_1b0.Floor = 0;
      FStack_1b0.key = 0;
      dStack_1f0 = auVar2._0_8_;
      dStack_1e8 = auVar2._8_8_;
      dStack_1e0 = TVar3.field0_0x0._0_8_;
      FStack_1b0.Widget.WeakPtr = FStack_1c0;
      FStack_1b0.MarkerGlobalPos.field0_0x0._s_0.X = dStack_1f0;
      FStack_1b0.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_1e8;
      FStack_1b0.CurMapPositionOffset.field0_0x0._s_0.X = dStack_1e0;
      FStack_1b0.CurMapPositionOffset.field0_0x0._s_0.Y = dVar4;
      FStack_1b0.MakerVector2D.field0_0x0._s_0.X = dStack_1e0;
      FStack_1b0.MakerVector2D.field0_0x0._s_0.Y = dVar4;
      FStack_1b0.IslandID = iVar5;
      FStack_1b0.IndoorGroupID = iVar1;
      UDS_WorldMapMarkerManager::BeginMarkerInfoShare(this_00,&FStack_1b0);
    }
    pvVar7 = (void *)0x0;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// SetbIsListItemExpanded_WrapperImpl @ 14b6fcf70

void __cdecl
UDS_VM_WorldMapZoneListSlot::SetbIsListItemExpanded_WrapperImpl(void *param_1,void *param_2)

{
  SetIsListItemExpanded(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b6fcf80

UClass * __cdecl UDS_VM_WorldMapZoneListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapZoneListSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapZoneListSlot,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMapZoneListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapZoneListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton;
}

// UDS_VM_WorldMapZoneListSlot @ 14b7024c0

UDS_VM_WorldMapZoneListSlot * __thiscall
UDS_VM_WorldMapZoneListSlot::UDS_VM_WorldMapZoneListSlot
          (UDS_VM_WorldMapZoneListSlot *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickExpand)._padding_ = '\0';
  (this->ClickExpand).bIsCustomSelected = false;
  (this->ClickExpand).bIsLacked = false;
  (this->ClickExpand).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneListSlot__6B_;
  *(undefined8 *)&(this->ClickExpand).Delegate = 0;
  *(undefined8 *)&(this->ClickExpand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExpand).Delegate.field_0x10 = 0;
  (this->ClickItem)._padding_ = '\0';
  (this->ClickItem).bIsCustomSelected = false;
  (this->ClickItem).bIsLacked = false;
  (this->ClickItem).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItem).Delegate = 0;
  *(undefined8 *)&(this->ClickItem).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItem).Delegate.field_0x10 = 0;
  (this->ClickShared)._padding_ = '\0';
  (this->ClickShared).bIsCustomSelected = false;
  (this->ClickShared).bIsLacked = false;
  (this->ClickShared).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickShared).Delegate = 0;
  *(undefined8 *)&(this->ClickShared).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickShared).Delegate.field_0x10 = 0;
  (this->RegionName).StringTableType = None;
  (this->RegionName).StringTableID = 0;
  (this->RegionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RegionName).StringEnumTableNameID.Number = 0;
  (this->RegionName).DateTime.Ticks = 0;
  (this->RegionName).TimeSpan.Ticks = 0;
  (this->RegionName).TimeExpressionType = None;
  (this->RegionName).IsExpression = false;
  (this->RegionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionName).UniqueString.Data.ArrayNum = 0;
  (this->RegionName).UniqueString.Data.ArrayMax = 0;
  (this->RegionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionName).FormatArgs.ArrayNum = 0;
  (this->RegionName).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  this->ExpandedSwitcherIndex = 0;
  this->IsExpandedButtonVisibility = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->IsSpaceVisibility01 = false;
  this->IsSpaceVisibility02 = false;
  this->bIsListItemExpanded = false;
  (this->RegionLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->RegionLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ZoneID = 0;
  this->IndoorGroupID = 0;
  this->IsIndoor = false;
  (this->RegionLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_VM_WorldMapZoneListSlot @ 14b7025e0

UDS_VM_WorldMapZoneListSlot * __thiscall
UDS_VM_WorldMapZoneListSlot::UDS_VM_WorldMapZoneListSlot
          (UDS_VM_WorldMapZoneListSlot *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickExpand)._padding_ = '\0';
  (this->ClickExpand).bIsCustomSelected = false;
  (this->ClickExpand).bIsLacked = false;
  (this->ClickExpand).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneListSlot__6B_;
  *(undefined8 *)&(this->ClickExpand).Delegate = 0;
  *(undefined8 *)&(this->ClickExpand).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExpand).Delegate.field_0x10 = 0;
  (this->ClickItem)._padding_ = '\0';
  (this->ClickItem).bIsCustomSelected = false;
  (this->ClickItem).bIsLacked = false;
  (this->ClickItem).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickItem).Delegate = 0;
  *(undefined8 *)&(this->ClickItem).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickItem).Delegate.field_0x10 = 0;
  (this->ClickShared)._padding_ = '\0';
  (this->ClickShared).bIsCustomSelected = false;
  (this->ClickShared).bIsLacked = false;
  (this->ClickShared).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickShared).Delegate = 0;
  *(undefined8 *)&(this->ClickShared).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickShared).Delegate.field_0x10 = 0;
  (this->RegionName).StringTableType = None;
  (this->RegionName).StringTableID = 0;
  (this->RegionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RegionName).StringEnumTableNameID.Number = 0;
  (this->RegionName).DateTime.Ticks = 0;
  (this->RegionName).TimeSpan.Ticks = 0;
  (this->RegionName).TimeExpressionType = None;
  (this->RegionName).IsExpression = false;
  (this->RegionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionName).UniqueString.Data.ArrayNum = 0;
  (this->RegionName).UniqueString.Data.ArrayMax = 0;
  (this->RegionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegionName).FormatArgs.ArrayNum = 0;
  (this->RegionName).FormatArgs.ArrayMax = 0;
  this->IconID = 0;
  this->ExpandedSwitcherIndex = 0;
  this->IsExpandedButtonVisibility = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->IsSpaceVisibility01 = false;
  this->IsSpaceVisibility02 = false;
  this->bIsListItemExpanded = false;
  (this->RegionLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->RegionLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ZoneID = 0;
  this->IndoorGroupID = 0;
  this->IsIndoor = false;
  (this->RegionLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_VM_WorldMapZoneListSlot @ 14b703870

void __thiscall
UDS_VM_WorldMapZoneListSlot::~UDS_VM_WorldMapZoneListSlot(UDS_VM_WorldMapZoneListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapZoneListSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RegionName).FormatArgs.AllocatorInstance.Data,
             (this->RegionName).FormatArgs.ArrayNum);
  pFVar1 = (this->RegionName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegionName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickShared).Delegate);
  pvVar2 = *(void **)&(this->ClickShared).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickShared).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickItem).Delegate);
  pvVar2 = *(void **)&(this->ClickItem).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickItem).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExpand).Delegate);
  pvVar2 = *(void **)&(this->ClickExpand).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExpand).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706380

IClassDescriptor * __thiscall
UDS_VM_WorldMapZoneListSlot::GetFieldNotificationDescriptor(UDS_VM_WorldMapZoneListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMapZoneListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b707310

UClass * __cdecl UDS_VM_WorldMapZoneListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapZoneListSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapZoneListSlot,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMapZoneListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapZoneListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapZoneListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMapZoneListSlot @ 14b707780

void __cdecl UDS_VM_WorldMapZoneListSlot::StaticRegisterNativesUDS_VM_WorldMapZoneListSlot(void)

{
  return;
}

// BindModel @ 14c0048b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapZoneListSlot::BindModel(UDS_VM_WorldMapZoneListSlot *this)

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

// InitViewModel @ 14c020570

void __thiscall UDS_VM_WorldMapZoneListSlot::InitViewModel(UDS_VM_WorldMapZoneListSlot *this)

{
  return;
}

// OnClickExpand @ 14c0265e0

void __thiscall
UDS_VM_WorldMapZoneListSlot::OnClickExpand
          (UDS_VM_WorldMapZoneListSlot *this,FDS_ButtonEventField *param_1)

{
  SetIsListItemExpanded(this,this->bIsListItemExpanded == false);
  return;
}

// OnClickItem @ 14c026600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapZoneListSlot::OnClickItem
          (UDS_VM_WorldMapZoneListSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_WorldMapEvent *pUVar4;
  undefined1 auStackY_178 [32];
  TVector2<double>_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapZoneListSlot::OnClickItem",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x58,L"worldMapMgr is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148._s_0.X = (this->RegionLocation).field0_0x0._s_0.X;
    local_148._s_0.Y = (this->RegionLocation).field0_0x0._s_0.Y;
    UDS_WorldMapManager::SetContentsFocusPosition(this_00,(TVector2<double> *)&local_148._s_0);
    pUVar4 = UDS_WorldMapEvent::GetEvent();
    if (pUVar4 != (UDS_WorldMapEvent *)0x0) {
      iVar1 = this->ZoneID;
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->MapFocuseDelgate);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->MapFocuseDelgate).Delegate,iVar1);
      }
    }
  }
  return;
}

// OnClickShared @ 14c026940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c026b3f) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapZoneListSlot::OnClickShared
          (UDS_VM_WorldMapZoneListSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  TVector2<double> TVar3;
  double dVar4;
  int iVar5;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar6;
  UDS_WorldMapMarkerManager *this_01;
  void *pvVar7;
  undefined1 auStackY_258 [32];
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  FWeakObjectPtr local_1c0;
  undefined8 local_1b8;
  FDS_WorldMapMarkerInfo local_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = UDS_WorldMapManager::GetInst();
  TVar3 = UE::Math::TVector2<double>::ZeroVector;
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_WorldMapZoneListSlot::OnClickShared",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x68,L"worldMapMgr is nullptr");
    pvVar7 = (void *)local_148._padding_;
  }
  else {
    local_1c0.ObjectIndex = 0;
    local_1c0.ObjectSerialNumber = 0;
    local_1b8 = 0;
    FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1b8);
    auVar2 = *(undefined1 (*) [16])&(this->RegionLocation).field0_0x0;
    iVar1 = this->IndoorGroupID;
    dStack_1e8 = TVar3.field0_0x0._8_8_;
    dVar4 = dStack_1e8;
    iVar5 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,this->ZoneID);
    this_01 = UDS_WorldMapMarkerManager::GetInst();
    if (this_01 == (UDS_WorldMapMarkerManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_WorldMapZoneListSlot::OnClickShared",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x77,L"UDS_WorldMapMarkerManager nullptr");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      local_1b0.Memo.Data.ArrayMax = 0;
      local_1b0.Memo.Data.ArrayNum = 0;
      local_1b0.Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.SavedScale = 0.0;
      local_1b0.Floor = 0;
      local_1b0.key = 0;
      local_1f0 = auVar2._0_8_;
      dStack_1e8 = auVar2._8_8_;
      local_1e0 = TVar3.field0_0x0._0_8_;
      local_1b0.Widget.WeakPtr = local_1c0;
      local_1b0.MarkerGlobalPos.field0_0x0._s_0.X = local_1f0;
      local_1b0.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_1e8;
      local_1b0.CurMapPositionOffset.field0_0x0._s_0.X = local_1e0;
      local_1b0.CurMapPositionOffset.field0_0x0._s_0.Y = dVar4;
      local_1b0.MakerVector2D.field0_0x0._s_0.X = local_1e0;
      local_1b0.MakerVector2D.field0_0x0._s_0.Y = dVar4;
      local_1b0.IslandID = iVar5;
      local_1b0.IndoorGroupID = iVar1;
      UDS_WorldMapMarkerManager::BeginMarkerInfoShare(this_01,&local_1b0);
    }
    pvVar7 = (void *)0x0;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// OnCloseInit @ 14c028970

void __thiscall UDS_VM_WorldMapZoneListSlot::OnCloseInit(UDS_VM_WorldMapZoneListSlot *this)

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

// OnSetViewModel @ 14c037e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapZoneListSlot::OnSetViewModel
          (UDS_VM_WorldMapZoneListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_MapRegionCategory EVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  FDS_MapIndexSpawnTableRow *this_00;
  UDS_LogManager *pUVar8;
  FDS_MapIndexBaseTableRow *pFVar9;
  FDS_StringWorldTableRow *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_238 [32];
  TSharedPtr<FDS_ViewModelContext_WorldMapRegionCategory,1> local_208;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FReadAccessScope local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapRegionCategory>(&local_208,&local_198);
  if (local_208.Object == (FDS_ViewModelContext_WorldMapRegionCategory *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  else {
    this_00 = FDS_MapIndexSpawnTableRow::Get
                        ((longlong)(local_208.Object)->MapindexSpawnTableID,true);
    if (this_00 == (FDS_MapIndexSpawnTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_WorldMapZoneListSlot::OnSetViewModel",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_168.Ptr,0x21,L"mapIndexSpawnTableRow is nullptr");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar9 = FDS_MapIndexBaseTableRow::Get((ulonglong)this_00->MapIndex,true);
      if (pFVar9 == (FDS_MapIndexBaseTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_WorldMapZoneListSlot::OnSetViewModel",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_168.Ptr,0x28,L"mapIndexBaseTableRow is nullptr");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        dVar3 = (this_00->Location).field0_0x0._s_0.Y;
        (this->RegionLocation).field0_0x0._s_0.X = (this_00->Location).field0_0x0._s_0.X;
        (this->RegionLocation).field0_0x0._s_0.Y = dVar3;
        (this->RegionLocation).field0_0x0._s_0.Z = (this_00->Location).field0_0x0._s_0.Z;
        this->ZoneID = this_00->ID_Zone;
        this->IndoorGroupID = this_00->ID_MapIndoorGroup;
        uVar7 = false;
        this->IsIndoor = 0 < this_00->ID_MapIndoorGroup;
        bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &(local_208.Object)->OnGetExpanded);
        if (bVar6) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(local_208.Object)->OnGetExpanded,&local_188);
          if (*(int *)&((local_208.Object)->OnGetExpanded).field_0x10 == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)&((local_208.Object)->OnGetExpanded).field_0x8;
          }
          uVar7 = (**(code **)(*plVar11 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_188);
        }
        pFVar10 = FDS_MapIndexSpawnTableRow::MapIndexNameTable(this_00);
        FDS_Text::SetTextFromStringTable(&this->RegionName,pFVar10);
        local_1f0 = FFieldNotificationClassDescriptor::RegionName.BitNumber;
        local_1f8 = FFieldNotificationClassDescriptor::RegionName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
        this->IconID = pFVar9->MapIndexIcon;
        local_1e0 = FFieldNotificationClassDescriptor::IconID.BitNumber;
        local_1e8 = FFieldNotificationClassDescriptor::IconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
        iVar5 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.FieldName;
        if (this->ExpandedSwitcherIndex != (uint)(byte)uVar7) {
          this->ExpandedSwitcherIndex = (uint)(byte)uVar7;
          local_1d0 = iVar5;
          local_1d8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
        }
        SetIsListItemExpanded(this,(bool)uVar7);
        iVar5 = FFieldNotificationClassDescriptor::IsExpandedButtonVisibility.BitNumber;
        FVar4 = FFieldNotificationClassDescriptor::IsExpandedButtonVisibility.FieldName;
        if (this->IsExpandedButtonVisibility != (local_208.Object)->HasChild) {
          this->IsExpandedButtonVisibility = (local_208.Object)->HasChild;
          local_1c0 = iVar5;
          local_1c8 = FVar4;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
        }
        EVar1 = (local_208.Object)->MapRegionCategory;
        this->IsSpaceVisibility01 = false;
        this->IsSpaceVisibility02 = false;
        if (EVar1 == MID_CATEGORY) {
          this->IsSpaceVisibility01 = true;
        }
        else if (EVar1 == LOW_CATEGORY) {
          this->IsSpaceVisibility01 = true;
          this->IsSpaceVisibility02 = true;
        }
        local_1b0 = FFieldNotificationClassDescriptor::IsSpaceVisibility01.BitNumber;
        local_1b8 = FFieldNotificationClassDescriptor::IsSpaceVisibility01.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
        local_1a0 = FFieldNotificationClassDescriptor::IsSpaceVisibility02.BitNumber;
        local_1a8 = FFieldNotificationClassDescriptor::IsSpaceVisibility02.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegionUIProcessByCategoryType @ 14c03fb40

void __thiscall
UDS_VM_WorldMapZoneListSlot::RegionUIProcessByCategoryType
          (UDS_VM_WorldMapZoneListSlot *this,EDS_MapRegionCategory param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  this->IsSpaceVisibility01 = false;
  this->IsSpaceVisibility02 = false;
  if (param_1 == MID_CATEGORY) {
    this->IsSpaceVisibility01 = true;
  }
  else if (param_1 == LOW_CATEGORY) {
    this->IsSpaceVisibility01 = true;
    this->IsSpaceVisibility02 = true;
  }
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::IsSpaceVisibility01.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSpaceVisibility01.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSpaceVisibility02.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSpaceVisibility02.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// SetExpandedButtonVisibility @ 14c0413a0

void __thiscall
UDS_VM_WorldMapZoneListSlot::SetExpandedButtonVisibility
          (UDS_VM_WorldMapZoneListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsExpandedButtonVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsExpandedButtonVisibility.FieldName;
  if (this->IsExpandedButtonVisibility != param_1) {
    this->IsExpandedButtonVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExpandedSwitcherIndex @ 14c0413f0

void __thiscall
UDS_VM_WorldMapZoneListSlot::SetExpandedSwitcherIndex(UDS_VM_WorldMapZoneListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.FieldName;
  if (this->ExpandedSwitcherIndex != param_1) {
    this->ExpandedSwitcherIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIcon @ 14c041550

void __thiscall UDS_VM_WorldMapZoneListSlot::SetIcon(UDS_VM_WorldMapZoneListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsListItemExpanded @ 14c0417f0

void __thiscall
UDS_VM_WorldMapZoneListSlot::SetIsListItemExpanded(UDS_VM_WorldMapZoneListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsListItemExpanded.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsListItemExpanded.FieldName;
  if (this->bIsListItemExpanded != param_1) {
    this->bIsListItemExpanded = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ExpandedSwitcherIndex.FieldName;
    if (this->bIsListItemExpanded == true) {
      if (this->ExpandedSwitcherIndex == 1) {
        return;
      }
      this->ExpandedSwitcherIndex = 1;
    }
    else {
      if (this->ExpandedSwitcherIndex == 0) {
        return;
      }
      this->ExpandedSwitcherIndex = 0;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRegionName @ 14c042f70

void __thiscall
UDS_VM_WorldMapZoneListSlot::SetRegionName
          (UDS_VM_WorldMapZoneListSlot *this,FDS_StringWorldTableRow *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->RegionName,param_1);
  local_10 = FFieldNotificationClassDescriptor::RegionName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RegionName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14c049420

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapZoneListSlot::UnbindModel(UDS_VM_WorldMapZoneListSlot *this)

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

