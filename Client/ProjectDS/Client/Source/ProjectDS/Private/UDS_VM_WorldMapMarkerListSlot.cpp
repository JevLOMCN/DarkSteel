// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetMarkerMemoButtonClickEvent_WrapperImpl @ 14b6fc640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMapMarkerListSlot::SetMarkerMemoButtonClickEvent_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_WindowManager *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr FStackX_18;
  void *pvStackX_20;
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool bStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStackX_18);
  bVar1 = FWeakObjectPtr::IsValid(&FStackX_18);
  if (bVar1) {
    pcStack_88 = OnOpenWorldMapNote;
    uStack_80 = 0;
    auStack_68 = (undefined1  [8])0x0;
    FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&FStack_50);
    pFStack_38 = &FStack_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapMarkerListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar2[3] = 0;
      pvStackX_20 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&pvStackX_20);
      puVar2[4] = pcStack_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (FStack_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &pcStack_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        auStack_68);
    UDS_WindowManager::OpenWindow(this,MapMarkerNote,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
               (FWriteAccessScope *)&pcStack_88);
    if ((FStack_60.DelegateSize != 0) &&
       (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&FStack_60,0,0,0x10);
      FStack_60.DelegateSize = 0;
    }
    if (bStack_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&pcStack_88);
    }
    if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_68);
  }
  return;
}

// SetSharedButtonClickEvent_WrapperImpl @ 14b6fc650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMapMarkerListSlot::SetSharedButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapMarkerManager *this;
  UDS_LogManager *pUVar1;
  FDS_WorldMapMarkerInfo *pFVar2;
  undefined1 auStackY_1c8 [32];
  FDS_WorldMapMarkerInfo FStack_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this = UDS_WorldMapMarkerManager::GetInst();
  if (this == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMapMarkerListSlot::OnSharedButtonClickEvent",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,TStack_138.Ptr,0x54,L"UDS_WorldMapMarkerManager nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar2 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
                       (&FStack_198,(FDS_WorldMapMarkerInfo *)((longlong)param_1 + 0x178));
    UDS_WorldMapMarkerManager::BeginMarkerInfoShare(this,pFVar2);
  }
  return;
}

// SetDeleteButtonClickEvent_WrapperImpl @ 14b6fc660

void __cdecl
UDS_VM_WorldMapMarkerListSlot::SetDeleteButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapEvent *pUVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x447b8,Complete_None_01,&TStack_28);
    FDS_EventDelegate<FDS_WorldMapMarkerInfo_const_&>::Broadcast
              (&pUVar1->MarkerInfoBasedDeleteDelegate,
               (FDS_WorldMapMarkerInfo *)((longlong)param_1 + 0x178));
  }
  return;
}

// SetFocusClickEvent_WrapperImpl @ 14b6fc670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_WorldMapMarkerListSlot::SetFocusClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WorldMapManager *this;
  UDS_LogManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  undefined1 auStackY_178 [32];
  TVector2<double>_u_0 TStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WorldMapManager::GetInst();
  if (this == (UDS_WorldMapManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldMapMarkerListSlot::OnFocusClickEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x69,L"worldMapMgr is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    TStack_148._s_0.X = *(double *)((longlong)param_1 + 0x1a0);
    TStack_148._s_0.Y = *(double *)((longlong)param_1 + 0x1a8);
    UDS_WorldMapManager::SetContentsFocusPosition(this,(TVector2<double> *)&TStack_148._s_0);
    pUVar2 = UDS_WorldMapEvent::GetEvent();
    if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<FDS_WorldMapMarkerInfo_const_&>::Broadcast
                (&pUVar2->MarkerInfoBasedFocusDelegate,
                 (FDS_WorldMapMarkerInfo *)((longlong)param_1 + 0x178));
    }
  }
  return;
}

// StaticClass @ 14b6fc680

UClass * __cdecl UDS_VM_WorldMapMarkerListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapMarkerListSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapMarkerListSlot,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMapMarkerListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapMarkerListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton;
}

// UDS_VM_WorldMapMarkerListSlot @ 14b702060

UDS_VM_WorldMapMarkerListSlot * __thiscall
UDS_VM_WorldMapMarkerListSlot::UDS_VM_WorldMapMarkerListSlot
          (UDS_VM_WorldMapMarkerListSlot *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->MarkerInfo).Widget;
  (this->MarkerMemoButtonClickEvent)._padding_ = '\0';
  (this->MarkerMemoButtonClickEvent).bIsCustomSelected = false;
  (this->MarkerMemoButtonClickEvent).bIsLacked = false;
  (this->MarkerMemoButtonClickEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->MarkerMemoButtonClickEvent).Delegate = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerListSlot__6B_;
  *(undefined8 *)&(this->MarkerMemoButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MarkerMemoButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SharedButtonClickEvent)._padding_ = '\0';
  (this->SharedButtonClickEvent).bIsCustomSelected = false;
  (this->SharedButtonClickEvent).bIsLacked = false;
  (this->SharedButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SharedButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SharedButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SharedButtonClickEvent).Delegate.field_0x10 = 0;
  (this->DeleteButtonClickEvent)._padding_ = '\0';
  (this->DeleteButtonClickEvent).bIsCustomSelected = false;
  (this->DeleteButtonClickEvent).bIsLacked = false;
  (this->DeleteButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->DeleteButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FocusClickEvent)._padding_ = '\0';
  (this->FocusClickEvent).bIsCustomSelected = false;
  (this->FocusClickEvent).bIsLacked = false;
  (this->FocusClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->FocusClickEvent).Delegate = 0;
  *(undefined8 *)&(this->FocusClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->FocusClickEvent).Delegate.field_0x10 = 0;
  this->IconID = 0;
  (this->MarkerName).StringTableType = None;
  (this->MarkerName).StringTableID = 0;
  (this->MarkerName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MarkerName).StringEnumTableNameID.Number = 0;
  (this->MarkerName).DateTime.Ticks = 0;
  (this->MarkerName).TimeSpan.Ticks = 0;
  (this->MarkerName).TimeExpressionType = None;
  (this->MarkerName).IsExpression = false;
  (this->MarkerName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerName).UniqueString.Data.ArrayNum = 0;
  (this->MarkerName).UniqueString.Data.ArrayMax = 0;
  (this->MarkerName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerName).FormatArgs.ArrayNum = 0;
  (this->MarkerName).FormatArgs.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  local_res8 = 0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerInfo).key = 0;
  (this->MarkerInfo).Floor = 0;
  (this->MarkerInfo).IslandID = 0;
  (this->MarkerInfo).IndoorGroupID = 0;
  (this->MarkerInfo).SavedScale = 0.0;
  (this->MarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerInfo).Memo.Data.ArrayNum = 0;
  (this->MarkerInfo).Memo.Data.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->SlotIndex = 0;
  return this;
}

// UDS_VM_WorldMapMarkerListSlot @ 14b702200

UDS_VM_WorldMapMarkerListSlot * __thiscall
UDS_VM_WorldMapMarkerListSlot::UDS_VM_WorldMapMarkerListSlot
          (UDS_VM_WorldMapMarkerListSlot *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this_00 = &(this->MarkerInfo).Widget;
  (this->MarkerMemoButtonClickEvent)._padding_ = '\0';
  (this->MarkerMemoButtonClickEvent).bIsCustomSelected = false;
  (this->MarkerMemoButtonClickEvent).bIsLacked = false;
  (this->MarkerMemoButtonClickEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->MarkerMemoButtonClickEvent).Delegate = 0;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerListSlot__6B_;
  *(undefined8 *)&(this->MarkerMemoButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->MarkerMemoButtonClickEvent).Delegate.field_0x10 = 0;
  (this->SharedButtonClickEvent)._padding_ = '\0';
  (this->SharedButtonClickEvent).bIsCustomSelected = false;
  (this->SharedButtonClickEvent).bIsLacked = false;
  (this->SharedButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->SharedButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->SharedButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->SharedButtonClickEvent).Delegate.field_0x10 = 0;
  (this->DeleteButtonClickEvent)._padding_ = '\0';
  (this->DeleteButtonClickEvent).bIsCustomSelected = false;
  (this->DeleteButtonClickEvent).bIsLacked = false;
  (this->DeleteButtonClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->DeleteButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->DeleteButtonClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->DeleteButtonClickEvent).Delegate.field_0x10 = 0;
  (this->FocusClickEvent)._padding_ = '\0';
  (this->FocusClickEvent).bIsCustomSelected = false;
  (this->FocusClickEvent).bIsLacked = false;
  (this->FocusClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->FocusClickEvent).Delegate = 0;
  *(undefined8 *)&(this->FocusClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->FocusClickEvent).Delegate.field_0x10 = 0;
  this->IconID = 0;
  (this->MarkerName).StringTableType = None;
  (this->MarkerName).StringTableID = 0;
  (this->MarkerName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MarkerName).StringEnumTableNameID.Number = 0;
  (this->MarkerName).DateTime.Ticks = 0;
  (this->MarkerName).TimeSpan.Ticks = 0;
  (this->MarkerName).TimeExpressionType = None;
  (this->MarkerName).IsExpression = false;
  (this->MarkerName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerName).UniqueString.Data.ArrayNum = 0;
  (this->MarkerName).UniqueString.Data.ArrayMax = 0;
  (this->MarkerName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerName).FormatArgs.ArrayNum = 0;
  (this->MarkerName).FormatArgs.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  local_res8 = 0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->MarkerInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerInfo).key = 0;
  (this->MarkerInfo).Floor = 0;
  (this->MarkerInfo).IslandID = 0;
  (this->MarkerInfo).IndoorGroupID = 0;
  (this->MarkerInfo).SavedScale = 0.0;
  (this->MarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkerInfo).Memo.Data.ArrayNum = 0;
  (this->MarkerInfo).Memo.Data.ArrayMax = 0;
  (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->SlotIndex = 0;
  return this;
}

// ~UDS_VM_WorldMapMarkerListSlot @ 14b7036b0

void __thiscall
UDS_VM_WorldMapMarkerListSlot::~UDS_VM_WorldMapMarkerListSlot(UDS_VM_WorldMapMarkerListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerListSlot__6B_;
  pFVar1 = (this->MarkerInfo).Memo.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MarkerName).FormatArgs.AllocatorInstance.Data,
             (this->MarkerName).FormatArgs.ArrayNum);
  pFVar1 = (this->MarkerName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FocusClickEvent).Delegate);
  pvVar2 = *(void **)&(this->FocusClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FocusClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DeleteButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->DeleteButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DeleteButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SharedButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->SharedButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SharedButtonClickEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->MarkerMemoButtonClickEvent).Delegate);
  pvVar2 = *(void **)&(this->MarkerMemoButtonClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MarkerMemoButtonClickEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7062a0

IClassDescriptor * __thiscall
UDS_VM_WorldMapMarkerListSlot::GetFieldNotificationDescriptor(UDS_VM_WorldMapMarkerListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldMapMarkerListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b707190

UClass * __cdecl UDS_VM_WorldMapMarkerListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldMapMarkerListSlot",
               &Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldMapMarkerListSlot,0x1e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldMapMarkerListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldMapMarkerListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldMapMarkerListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldMapMarkerListSlot @ 14b707760

void __cdecl UDS_VM_WorldMapMarkerListSlot::StaticRegisterNativesUDS_VM_WorldMapMarkerListSlot(void)

{
  return;
}

// __VTableCtorCaller @ 14b708510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_WorldMapMarkerListSlot::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)&this[1].Visibility = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDS_VM_WorldMapMarkerListSlot__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    local_res10 = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[2]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    this[2].ViewModelContext =
         (TSharedPtr<FDS_ViewModelContext,1>)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].Visibility =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&this[2].TextPropertyIDList,(FObjectPtr)&local_res10);
    this[2].TextPropertyIDList.ArrayNum = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14c004820

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapMarkerListSlot::BindModel(UDS_VM_WorldMapMarkerListSlot *this)

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

// InitViewModel @ 14c020510

void __thiscall UDS_VM_WorldMapMarkerListSlot::InitViewModel(UDS_VM_WorldMapMarkerListSlot *this)

{
  return;
}

// OnDeleteButtonClickEvent @ 14c029180

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnDeleteButtonClickEvent
          (UDS_VM_WorldMapMarkerListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapEvent *pUVar1;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x447b8,Complete_None_01,&local_28);
    FDS_EventDelegate<FDS_WorldMapMarkerInfo_const_&>::Broadcast
              (&pUVar1->MarkerInfoBasedDeleteDelegate,&this->MarkerInfo);
  }
  return;
}

// OnFocusClickEvent @ 14c02a060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnFocusClickEvent
          (UDS_VM_WorldMapMarkerListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  undefined1 auStackY_178 [32];
  TVector2<double>_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapMarkerListSlot::OnFocusClickEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x69,L"worldMapMgr is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148._s_0.X = (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.X;
    local_148._s_0.Y = (this->MarkerInfo).MarkerGlobalPos.field0_0x0._s_0.Y;
    UDS_WorldMapManager::SetContentsFocusPosition(this_00,(TVector2<double> *)&local_148._s_0);
    pUVar2 = UDS_WorldMapEvent::GetEvent();
    if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<FDS_WorldMapMarkerInfo_const_&>::Broadcast
                (&pUVar2->MarkerInfoBasedFocusDelegate,&this->MarkerInfo);
    }
  }
  return;
}

// OnMarkerMemoButtonClickEvent @ 14c02cdd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnMarkerMemoButtonClickEvent
          (UDS_VM_WorldMapMarkerListSlot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  FWeakObjectPtr local_res18;
  UDS_VM_WorldMapMarkerListSlot *local_res20;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    local_88 = OnOpenWorldMapNote;
    uStack_80 = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_WorldMapMarkerListSlot____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapMarkerListSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res20 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_WorldMapMarkerListSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res20);
      puVar2[4] = local_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_68);
    UDS_WindowManager::OpenWindow(this_00,MapMarkerNote,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// OnOpenWorldMapNote @ 14c02de00

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnOpenWorldMapNote
          (UDS_VM_WorldMapMarkerListSlot *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_WorldMapMarkerInfo *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  MakeContext<FDS_ViewModelContext_WorldMapMarkerInfo>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_WorldMapMarkerInfo *)0x0) {
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
  *(undefined4 *)&pFVar2->_padding_ = 0x1ac;
  FDS_WorldMapMarkerInfo::operator=(&pFVar2->WorldMapMarkerInfo,&this->MarkerInfo);
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  pFVar2->IsSharedMarker = false;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnSetViewModel @ 14c037af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnSetViewModel
          (UDS_VM_WorldMapMarkerListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar3;
  FDS_WorldMapMarkerInfo *pFVar4;
  FDS_MapIndexBaseTableRow *pFVar5;
  undefined1 auStackY_288 [32];
  uint uVar6;
  wchar_t *pwVar7;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_258;
  TSharedPtr<FDS_ViewModelContext_WorldMapMarkerListItemInfo,1> local_248;
  longlong local_238 [2];
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FDS_Text local_208;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  FDS_WorldMapMarkerInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_1b8.Object = param_1->Object;
  local_1b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldMapMarkerListItemInfo>(&local_248,&local_1b8);
  if (local_248.Object == (FDS_ViewModelContext_WorldMapMarkerListItemInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    goto LAB_14c037de8;
  }
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_WorldMapMarkerListSlot::OnSetViewModel",0x2d,Yes);
      pwVar7 = L"worldMapMarkerMgr nullptr";
      uVar6 = 0x1f;
LAB_14c037bd8:
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar6,pwVar7);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    FDS_WorldMapMarkerInfo::operator=(&this->MarkerInfo,&(local_248.Object)->WorldMapMarkerInfo);
    pFVar4 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
                       (&local_1a8,&(local_248.Object)->WorldMapMarkerInfo);
    iVar2 = UDS_WorldMapMarkerManager::GetMarkerIndex(this_00,pFVar4);
    pFVar5 = FDS_MapIndexBaseTableRow::Get((longlong)iVar2 + 0x1d,true);
    if (pFVar5 == (FDS_MapIndexBaseTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_WorldMapMarkerListSlot::OnSetViewModel",0x2d,Yes);
        pwVar7 = L"markerMapIndexBaseTableRow nullptr";
        uVar6 = 0x2a;
        goto LAB_14c037bd8;
      }
    }
    else {
      local_238[0] = (longlong)iVar2 + 1;
      local_208.StringTableType = None;
      local_208.StringTableID = 0;
      local_208.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_208.StringEnumTableNameID.Number = 0;
      local_208.TimeExpressionType = None;
      local_208.IsExpression = false;
      local_208.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.UniqueString.Data.ArrayNum = 0;
      local_208.UniqueString.Data.ArrayMax = 0;
      local_208.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.FormatArgs.ArrayNum = 0;
      local_208.FormatArgs.ArrayMax = 0;
      local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258.ArrayNum = 0;
      local_258.ArrayMax = 0;
      local_208.DateTime.Ticks = 0;
      local_208.TimeSpan.Ticks = 0;
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_258.AllocatorInstance,&local_258.ArrayMax);
      local_258.ArrayNum = iVar2 + 1;
      FDS_TextFormatArg::FDS_TextFormatArg<__int64>
                ((FDS_TextFormatArg *)(local_258.AllocatorInstance.Data + (longlong)iVar2 * 0x28),
                 local_238);
      FDS_Text::SetTextFormatFromStringTable(&local_208,StringUi,0x445db,&local_258);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_258.AllocatorInstance.Data,local_258.ArrayNum);
      if ((FDS_TextFormatArg *)local_258.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      FDS_Text::operator=(&this->MarkerName,&local_208);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_208.FormatArgs.AllocatorInstance.Data,
                 local_208.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_208.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_208.FormatArgs.AllocatorInstance.Data);
      }
      if (local_208.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.UniqueString.Data.AllocatorInstance.Data);
      }
      this->IconID = pFVar5->MapIndexIcon;
      local_220 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_228 = FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
      local_210 = FFieldNotificationClassDescriptor::MarkerName.BitNumber;
      local_218 = FFieldNotificationClassDescriptor::MarkerName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
LAB_14c037de8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSharedButtonClickEvent @ 14c0398b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldMapMarkerListSlot::OnSharedButtonClickEvent
          (UDS_VM_WorldMapMarkerListSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_WorldMapMarkerInfo *pFVar2;
  undefined1 auStackY_1c8 [32];
  FDS_WorldMapMarkerInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldMapMarkerListSlot::OnSharedButtonClickEvent",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x54,L"UDS_WorldMapMarkerManager nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar2 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_198,&this->MarkerInfo);
    UDS_WorldMapMarkerManager::BeginMarkerInfoShare(this_00,pFVar2);
  }
  return;
}

// UnbindModel @ 14c0493d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_WorldMapMarkerListSlot::UnbindModel(UDS_VM_WorldMapMarkerListSlot *this)

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

