// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// SetScrollSettledTimerDuration_WrapperImpl @ 14b463030

void __cdecl
UDS_CommonTileView::SetScrollSettledTimerDuration_WrapperImpl(void *param_1,void *param_2)

{
  SetScrollSettledTimerDuration(param_1,*(float *)param_2);
  return;
}

// SetEntryBindingEventField_WrapperImpl @ 14b463040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_CommonTileView::SetEntryBindingEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  UDS_UserObjectListItem *pUVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy> *pTVar10;
  ForElementType<TAlignedBytes<16,16>_> *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  int aiStackX_10 [2];
  uint uStackX_18;
  void *pvStackX_20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_d8;
  FDelegateAllocation FStack_d0;
  FDestructionSentinel FStack_c0;
  FDelegateAllocation *pFStack_a8;
  FDestructionSentinel FStack_a0;
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  UDS_UserObjectListItem *pUStack_78;
  FScriptContainerElement *pFStack_70;
  code *pcStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_CommonTileView::OnEntryBindingEvent");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId79,"UDS_CommonTileView::OnEntryBindingEvent",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_CommonTileView.cpp"
               ,0x4f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId79);
  }
  ClearEntryItemsBinding(param_1);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x1130),param_2);
  UListView::ClearListItems(param_1);
  uVar3 = uStack_7c;
  uStackX_18 = *(uint *)((longlong)param_1 + 0x1138);
  uVar8 = (ulonglong)(int)uStackX_18;
  pFVar9 = (((TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_1 + 0x1130))->AllocatorInstance).Data;
  iVar5 = 0;
  pFVar12 = pFVar9 + uVar8 * 8;
  pFStack_70 = pFVar12;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x1138) != (int)uVar8) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(aiStackX_10);
    }
    if (pFVar9 == pFVar12) break;
    pUVar2 = *(UDS_UserObjectListItem **)pFVar9;
    pUStack_78 = pUVar2;
    if (pUVar2 != (UDS_UserObjectListItem *)0x0) {
      UListView::AddItem(param_1,(UObject *)pUVar2);
      UDS_UserObjectListItem::SetListItemIndex(pUVar2,iVar5);
      aiStackX_10[0] = iVar5 + 1;
      pTVar10 = &pUVar2->OnItemInteractionDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,param_1);
      uStack_5c = uVar3;
      uStack_60 = 0;
      pcStack_68 = OnFocusedItem;
      TStack_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      pFStack_a8 = &FStack_d0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_d0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTileView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar6[3] = 0;
        pvStackX_20 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&pvStackX_20);
        puVar6[4] = pcStack_68;
        puVar6[5] = CONCAT44(uStack_5c,uStack_60);
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
                 (FWriteAccessScope *)&FStack_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_d8,(FReadAccessScope *)&FStack_a0);
      if (((FStack_d0.DelegateSize == 0) ||
          (FStack_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x38))(), cVar4 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_a0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_a0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&TStack_d8,(FReadAccessScope *)&FStack_a0);
        if ((FStack_d0.DelegateSize != 0) &&
           (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x40))
                    (FStack_d0.DelegateAllocator,auStack_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_a0);
        iVar5 = *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10;
        puVar1 = &(pUVar2->OnItemInteractionDelegate).field_0x14;
        if (iVar5 == *(int *)puVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(pUVar2->OnItemInteractionDelegate).field_0x8,(int *)puVar1);
          *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10 = iVar5;
        }
        *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10 = iVar5 + 1;
        pFVar11 = (ForElementType<TAlignedBytes<16,16>_> *)
                  ((longlong)iVar5 * 0x10 +
                  *(longlong *)&(pUVar2->OnItemInteractionDelegate).field_0x8);
        *pFVar11 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar11 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_d8,(FWriteAccessScope *)&FStack_a0);
        if (*pFVar11 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar11);
        }
        *pFVar11 = FStack_d0.DelegateAllocator;
        FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar11 + 1) = FStack_d0.DelegateSize;
        FStack_d0.DelegateSize = 0;
        if (FStack_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a0.Accessor,&FStack_a0);
        }
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      if ((FStack_d0.DelegateSize != 0) &&
         (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_d0,0,0,0x10);
        FStack_d0.DelegateSize = 0;
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      if (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_d8.AccessDetector);
      pUVar2 = pUStack_78;
      pTVar10 = &pUStack_78->OnItemFocusLostDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,param_1);
      uStack_80 = 0;
      pcStack_88 = OnFocusLostedItem;
      TStack_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_d0.DelegateSize = 0;
      uStack_7c = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      pFStack_a8 = &FStack_d0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_d0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTileView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar6[3] = 0;
        pvStackX_20 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&pvStackX_20);
        puVar6[4] = pcStack_88;
        puVar6[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
                 (FWriteAccessScope *)&FStack_a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_d8,(FReadAccessScope *)&FStack_c0);
      if (((FStack_d0.DelegateSize == 0) ||
          (FStack_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x38))(), cVar4 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&TStack_d8,(FReadAccessScope *)&FStack_c0);
        if ((FStack_d0.DelegateSize != 0) &&
           (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x40))
                    (FStack_d0.DelegateAllocator,auStack_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
        iVar5 = *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10;
        puVar1 = &(pUVar2->OnItemFocusLostDelegate).field_0x14;
        if (iVar5 == *(int *)puVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&(pUVar2->OnItemFocusLostDelegate).field_0x8
                             ,(int *)puVar1);
          *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10 = iVar5;
        }
        *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10 = iVar5 + 1;
        pFVar11 = (ForElementType<TAlignedBytes<16,16>_> *)
                  ((longlong)iVar5 * 0x10 +
                  *(longlong *)&(pUVar2->OnItemFocusLostDelegate).field_0x8);
        *pFVar11 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar11 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
        if (*pFVar11 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar11);
        }
        *pFVar11 = FStack_d0.DelegateAllocator;
        FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar11 + 1) = FStack_d0.DelegateSize;
        FStack_d0.DelegateSize = 0;
        if (FStack_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
        }
      }
      if (FStack_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a0.Accessor,&FStack_a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      if ((FStack_d0.DelegateSize != 0) &&
         (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_d0,0,0,0x10);
        FStack_d0.DelegateSize = 0;
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      if (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_d8.AccessDetector);
      pFVar12 = pFStack_70;
      iVar5 = aiStackX_10[0];
    }
    uVar8 = (ulonglong)uStackX_18;
    pFVar9 = pFVar9 + 8;
  }
  UListViewBase::RequestRefresh(param_1);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StaticClass @ 14b463050

UClass * __cdecl UDS_CommonTileView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTileView",
               &Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton,
               StaticRegisterNativesUDS_CommonTileView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonTileView>,
               InternalVTableHelperCtorCaller<UDS_CommonTileView>,local_res8,
               UCommonTileView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton;
}

// UDS_CommonTileView @ 14b466240

UDS_CommonTileView * __thiscall
UDS_CommonTileView::UDS_CommonTileView(UDS_CommonTileView *this,FVTableHelper *param_1)

{
  UCommonTileView::UCommonTileView((UCommonTileView *)this,param_1);
  this->bUseScrollbar = false;
  this->KeepSelected = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CommonTileView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  (this->CategoryNameField).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryNameField).Data.ArrayNum = 0;
  (this->CategoryNameField).Data.ArrayMax = 0;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  this->ScrollSettledTimerDuration = 1.0;
  return this;
}

// ~UDS_CommonTileView @ 14b466990

void __thiscall UDS_CommonTileView::~UDS_CommonTileView(UDS_CommonTileView *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CommonTileView__6B_;
  pFVar1 = (this->CategoryNameField).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonTileView::~UCommonTileView((UCommonTileView *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467dc0

IClassDescriptor * __thiscall
UDS_CommonTileView::GetFieldNotificationDescriptor(UDS_CommonTileView *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonTileView::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4689e0

UClass * __cdecl UDS_CommonTileView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTileView",
               &Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton,
               StaticRegisterNativesUDS_CommonTileView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonTileView>,
               InternalVTableHelperCtorCaller<UDS_CommonTileView>,local_res8,
               UCommonTileView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTileView.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonTileView @ 14b468d50

void __cdecl UDS_CommonTileView::StaticRegisterNativesUDS_CommonTileView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_CommonTileView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execItemSelectionChangedEvent @ 14b46a1f0

void __cdecl
UDS_CommonTileView::execItemSelectionChangedEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  ItemSelectionChangedEvent((UDS_CommonTileView *)param_1,local_res10);
  return;
}

// execOnClickedItem @ 14b46a310

void __cdecl UDS_CommonTileView::execOnClickedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  OnClickedItem((UDS_CommonTileView *)param_1,local_res10);
  return;
}

// execOnDoubleClick @ 14b46a3a0

void __cdecl UDS_CommonTileView::execOnDoubleClick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
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
  OnDoubleClick((UDS_CommonTileView *)param_1,local_res10);
  return;
}

// execOnFocusLostedItem @ 14b46a4c0

void __cdecl
UDS_CommonTileView::execOnFocusLostedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserObjectListItem *local_res10;
  
  local_res10 = (UDS_UserObjectListItem *)0x0;
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
  OnFocusLostedItem((UDS_CommonTileView *)param_1,local_res10);
  return;
}

// execOnFocusedItem @ 14b46a5e0

void __cdecl UDS_CommonTileView::execOnFocusedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserObjectListItem *local_res10;
  
  local_res10 = (UDS_UserObjectListItem *)0x0;
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
  OnFocusedItem((UDS_CommonTileView *)param_1,local_res10);
  return;
}

// UDS_CommonTileView @ 14bc838a0

UDS_CommonTileView * __thiscall
UDS_CommonTileView::UDS_CommonTileView(UDS_CommonTileView *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UCommonTileView::UCommonTileView((UCommonTileView *)this,param_1);
  this->bUseScrollbar = false;
  this->KeepSelected = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->ScrollSettledTimerDuration = 1.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7UDS_CommonTileView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  (this->CategoryNameField).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CategoryNameField).Data.ArrayNum = 0;
  (this->CategoryNameField).Data.ArrayMax = 0;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  ::FName::FName(local_res8,"OnDoubleClick");
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  AddUFunction<UDS_CommonTileView>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
             &this->_padding_,(UDS_CommonTileView *)(local_res8 + 2),(FName *)this);
  return this;
}

// BeginDestroy @ 14bc87c40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonTileView::BeginDestroy(UDS_CommonTileView *this)

{
  longlong *plVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar2;
  
  plVar1 = &this->_padding_;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(**(code **)*plVar1)(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x48))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x58))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  ClearEntryItemsBinding(this);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UWidget::BeginDestroy((UWidget *)this);
  return;
}

// ClearEntryItemsBinding @ 14bc8c240

void __thiscall UDS_CommonTileView::ClearEntryItemsBinding(UDS_CommonTileView *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x40),this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x60),this);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ItemSelectionChangedEvent @ 14bca9010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonTileView::ItemSelectionChangedEvent(UDS_CommonTileView *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UDS_UserObjectListItem *this_00;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  FFieldId local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar4->_padding_)) &&
        (iVar3 = UDS_UserObjectListItem::GetListItemIndex((UDS_UserObjectListItem *)param_1),
        -1 < iVar3)) && (iVar3 != this->ListSlotIndex)) {
      if ((this->KeepSelected == true) &&
         (this_00 = (UDS_UserObjectListItem *)
                    UListView::GetItemAt((UListView *)this,this->ListSlotIndex),
         this_00 != (UDS_UserObjectListItem *)0x0)) {
        pUVar4 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) {
          UDS_UserObjectListItem::GetOwnerWidget(this_00);
          bVar2 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res10,
                             (void *)0x0);
          if (!bVar2) {
            pUVar5 = FWeakObjectPtr::Get(&local_res10);
            bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar5[0x19].field_0x20);
            if (bVar2) {
              pUVar5 = FWeakObjectPtr::Get(&local_res10);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar5[0x19].field_0x20);
            }
          }
        }
      }
      this->ListSlotIndex = iVar3;
      local_18.FieldName = FFieldNotificationClassDescriptor::ListSlotIndex.FieldName;
      local_18.BitNumber = FFieldNotificationClassDescriptor::ListSlotIndex.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    }
  }
  return;
}

// NativeOnEntryReleased @ 14bcac610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CommonTileView::NativeOnEntryReleased(UDS_CommonTileView *this,UUserWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UDS_UserWidget::OnReleasedListViewEvent((UDS_UserWidget *)param_1);
    }
  }
  return;
}

// OnClickedItem @ 14bcb22e0

void __thiscall UDS_CommonTileView::OnClickedItem(UDS_CommonTileView *this,UObject *param_1)

{
  SListView<UObject_*> *this_00;
  UObject *pUStackX_8;
  TOptional<UObject_*> TStack_18;
  
  if (param_1 == (UObject *)0x0) {
    return;
  }
  this_00 = (SListView<UObject_*> *)(**(code **)(this->_padding_ + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    pUStackX_8 = param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&TStack_18,&pUStackX_8);
    if (TStack_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this_00,TStack_18.TypedValue,Direct);
    }
  }
  return;
}

// OnDoubleClick @ 14bcb2e10

void __thiscall UDS_CommonTileView::OnDoubleClick(UDS_CommonTileView *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10 [3];
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      UDS_UserObjectListItem::GetOwnerWidget((UDS_UserObjectListItem *)param_1);
      bVar2 = FWeakObjectPtr::IsValid(local_res10);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(local_res10);
        (**(code **)(*(longlong *)pUVar4 + 0x510))(pUVar4);
      }
    }
  }
  return;
}

// OnEntryBindingEvent @ 14bcb3620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonTileView::OnEntryBindingEvent
          (UDS_CommonTileView *this,FDS_EntryBindingEventField *param_1)

{
  undefined1 *puVar1;
  UDS_UserObjectListItem *pUVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy> *pTVar10;
  ForElementType<TAlignedBytes<16,16>_> *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  int local_res10 [2];
  uint local_res18;
  UDS_CommonTileView *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FDestructionSentinel local_a0;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  UDS_UserObjectListItem *local_78;
  FScriptContainerElement *local_70;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"UDS_CommonTileView::OnEntryBindingEvent");
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId79,"UDS_CommonTileView::OnEntryBindingEvent",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_CommonTileView.cpp"
               ,0x4f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId79);
  }
  ClearEntryItemsBinding(this);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->EntryBindingEventField).UserObjectList,&param_1->UserObjectList);
  UListView::ClearListItems((UListView *)this);
  uVar3 = uStack_7c;
  local_res18 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar9 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar5 = 0;
  pFVar12 = pFVar9 + uVar8 * 8;
  local_70 = pFVar12;
  while( true ) {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar12) break;
    pUVar2 = *(UDS_UserObjectListItem **)pFVar9;
    local_78 = pUVar2;
    if (pUVar2 != (UDS_UserObjectListItem *)0x0) {
      UListView::AddItem((UListView *)this,(UObject *)pUVar2);
      UDS_UserObjectListItem::SetListItemIndex(pUVar2,iVar5);
      local_res10[0] = iVar5 + 1;
      pTVar10 = &pUVar2->OnItemInteractionDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,this);
      uStack_5c = uVar3;
      uStack_60 = 0;
      local_68 = OnFocusedItem;
      local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      local_a8 = &local_d0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTileView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonTileView *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonTileView *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
        puVar6[4] = local_68;
        puVar6[5] = CONCAT44(uStack_5c,uStack_60);
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
                 (FWriteAccessScope *)&local_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_d8,(FReadAccessScope *)&local_a0);
      if (((local_d0.DelegateSize == 0) ||
          (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_a0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_a0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_d8,(FReadAccessScope *)&local_a0);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                    (local_d0.DelegateAllocator,local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_a0);
        iVar5 = *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10;
        puVar1 = &(pUVar2->OnItemInteractionDelegate).field_0x14;
        if (iVar5 == *(int *)puVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(pUVar2->OnItemInteractionDelegate).field_0x8,(int *)puVar1);
          *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10 = iVar5;
        }
        *(int *)&(pUVar2->OnItemInteractionDelegate).field_0x10 = iVar5 + 1;
        pFVar11 = (ForElementType<TAlignedBytes<16,16>_> *)
                  ((longlong)iVar5 * 0x10 +
                  *(longlong *)&(pUVar2->OnItemInteractionDelegate).field_0x8);
        *pFVar11 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar11 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_a0);
        if (*pFVar11 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar11);
        }
        *pFVar11 = local_d0.DelegateAllocator;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar11 + 1) = local_d0.DelegateSize;
        local_d0.DelegateSize = 0;
        if (local_a0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
        }
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
      pUVar2 = local_78;
      pTVar10 = &local_78->OnItemFocusLostDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,this);
      uStack_80 = 0;
      local_88 = OnFocusLostedItem;
      local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      uStack_7c = uVar3;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      local_a8 = &local_d0;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTileView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonTileView *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar6[3] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonTileView *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res20);
        puVar6[4] = local_88;
        puVar6[5] = CONCAT44(uStack_7c,uStack_80);
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,
                 (FWriteAccessScope *)&local_a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_d8,(FReadAccessScope *)&local_c0);
      if (((local_d0.DelegateSize == 0) ||
          (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar10,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_d8,(FReadAccessScope *)&local_c0);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                    (local_d0.DelegateAllocator,local_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
        iVar5 = *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10;
        puVar1 = &(pUVar2->OnItemFocusLostDelegate).field_0x14;
        if (iVar5 == *(int *)puVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&(pUVar2->OnItemFocusLostDelegate).field_0x8
                             ,(int *)puVar1);
          *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10 = iVar5;
        }
        *(int *)&(pUVar2->OnItemFocusLostDelegate).field_0x10 = iVar5 + 1;
        pFVar11 = (ForElementType<TAlignedBytes<16,16>_> *)
                  ((longlong)iVar5 * 0x10 +
                  *(longlong *)&(pUVar2->OnItemFocusLostDelegate).field_0x8);
        *pFVar11 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar11 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_c0);
        if (*pFVar11 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar11);
        }
        *pFVar11 = local_d0.DelegateAllocator;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar11 + 1) = local_d0.DelegateSize;
        local_d0.DelegateSize = 0;
        if (local_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
        }
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
      pFVar12 = local_70;
      iVar5 = local_res10[0];
    }
    uVar8 = (ulonglong)local_res18;
    pFVar9 = pFVar9 + 8;
  }
  UListViewBase::RequestRefresh((UListViewBase *)this);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// OnFocusLostedItem @ 14bcb56c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonTileView::OnFocusLostedItem(UDS_CommonTileView *this,UDS_UserObjectListItem *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UDS_UserObjectListItem *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CommonTileView::OnFocusLostedItem",0x25,Yes);
    pwVar5 = L"OnFocusLostedItem is nullptr";
    uVar4 = 0x89;
  }
  else {
    UDS_UserObjectListItem::GetOwnerWidget(param_1);
    bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      if (this->KeepSelected != false) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(local_148);
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3[0x19].field_0x20);
      if (!bVar1) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar3[0x19].field_0x20);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CommonTileView::OnFocusLostedItem",0x25,Yes);
    pwVar5 = L"OnFocusLostedItem widget is nullptr";
    uVar4 = 0x90;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnFocusedItem @ 14bcb5cc0

void __thiscall
UDS_CommonTileView::OnFocusedItem(UDS_CommonTileView *this,UDS_UserObjectListItem *param_1)

{
  SListView<UObject_*> *this_00;
  UDS_UserObjectListItem *pUStackX_8;
  TOptional<UObject_*> TStack_18;
  
  if (param_1 == (UDS_UserObjectListItem *)0x0) {
    return;
  }
  this_00 = (SListView<UObject_*> *)(**(code **)(this->_padding_ + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    pUStackX_8 = param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable
              (this_00,&TStack_18,(UObject **)&pUStackX_8);
    if (TStack_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this_00,TStack_18.TypedValue,Direct);
    }
  }
  return;
}

// OnScrollingFinished @ 14bcba930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CommonTileView::OnScrollingFinished(UDS_CommonTileView *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  FTimerManager *pFVar8;
  UDS_LogManager *pUVar9;
  longlong *plVar10;
  undefined1 auStackY_318 [32];
  code *local_2d8;
  ulonglong uStack_2d0;
  FFieldId local_2c8;
  code *local_2b8;
  ulonglong uStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((this->bHasUserInteracted != false) &&
     ((STableViewBase *)this->_padding_ != (STableViewBase *)0x0)) {
    bVar6 = STableViewBase::IsPendingRefresh((STableViewBase *)this->_padding_);
    if ((!bVar6) && ((this->EntryBindingEventField).UserObjectList.ArrayNum != 0)) {
      if (this->_padding_ == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = (longlong *)(this->_padding_ + 0x2a8);
      lVar7 = (**(code **)(*plVar10 + 8))(plVar10,local_2a8);
      dVar1 = *(double *)(lVar7 + 8);
      if (this->_padding_ == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar10 = (longlong *)(this->_padding_ + 0x2a8);
      lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,local_298);
      fVar5 = __real_bf800000;
      fVar4 = __real_3a83126f;
      dVar2 = *(double *)(lVar7 + 8);
      (this->ScrollSettledEventField).IsTopScrollSettled = false;
      (this->ScrollSettledEventField).IsBottomScrollSettled = false;
      if (((float)dVar1 <= fVar4) && ((this->TopScrollSettledTimerHandle).Handle == 0)) {
        (this->ScrollSettledEventField).IsTopScrollSettled = true;
        pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        local_2d8 = ResetTopScrollSettledTimer;
        FTimerManager::SetTimer<UDS_CommonTileView>
                  (pFVar8,&this->TopScrollSettledTimerHandle,this,(pmf_ca9cbb43 *)&local_2d8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_CommonTileView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_288.Ptr,0x105,L"[OnScrollingFinished] Top Settled !!");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      if (((float)dVar2 <= __real_3a83126f) && ((this->BottomScrollSettledTimerHandle).Handle == 0))
      {
        (this->ScrollSettledEventField).IsBottomScrollSettled = true;
        pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
        local_2d8 = ResetBottomScrollSettledTimer;
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        local_2b8 = ResetBottomScrollSettledTimer;
        uStack_2b0 = uStack_2d0;
        FTimerManager::SetTimer<UDS_CommonTileView>
                  (pFVar8,&this->BottomScrollSettledTimerHandle,this,(pmf_ca9cbb43 *)&local_2b8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_CommonTileView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_168.Ptr,0x10d,L"[OnScrollingFinished] Bottom Settled !!"
                    );
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      if (((this->ScrollSettledEventField).IsTopScrollSettled == true) ||
         ((this->ScrollSettledEventField).IsBottomScrollSettled == true)) {
        local_2c8.FieldName = FFieldNotificationClassDescriptor::ScrollSettledEventField.FieldName;
        local_2c8.BitNumber = FFieldNotificationClassDescriptor::ScrollSettledEventField.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_2c8);
      }
      this->bHasUserInteracted = false;
    }
  }
  return;
}

// RebuildListWidget @ 14bcbddb0

TSharedRef<STableViewBase,1> * __thiscall
UDS_CommonTileView::RebuildListWidget
          (UDS_CommonTileView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_CommonTileView *local_res10;
  TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  UTileView::ConstructTileView<SDS_TileView>((UTileView *)this,&local_48);
  uVar2 = local_48.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_48.Object)->OnUserScrollInteracted,(FWriteAccessScope *)&local_38);
  local_20 = &((local_48.Object)->OnUserScrollInteracted).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonTileView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonTileView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonTileView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = SetHasUserInteracted;
    puVar3[5] = (ulonglong)uVar2 << 0x20;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar1 = (TReferenceControllerBase<1> *)
           CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                    local_48.SharedReferenceCount.ReferenceController._0_4_);
  __return_storage_ptr__->Object = (STableViewBase *)local_48.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ResetBottomScrollSettledTimer @ 14bcc43f0

void __thiscall UDS_CommonTileView::ResetBottomScrollSettledTimer(UDS_CommonTileView *this)

{
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  return;
}

// ResetTopScrollSettledTimer @ 14bcc4630

void __thiscall UDS_CommonTileView::ResetTopScrollSettledTimer(UDS_CommonTileView *this)

{
  (this->TopScrollSettledTimerHandle).Handle = 0;
  return;
}

// SetHasUserInteracted @ 14bcc6700

void __thiscall UDS_CommonTileView::SetHasUserInteracted(UDS_CommonTileView *this)

{
  this->bHasUserInteracted = true;
  return;
}

// SetScrollSettledTimerDuration @ 14bcc86a0

void __thiscall
UDS_CommonTileView::SetScrollSettledTimerDuration(UDS_CommonTileView *this,float param_1)

{
  this->ScrollSettledTimerDuration = param_1;
  return;
}

// SynchronizeProperties @ 14bccab10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonTileView::SynchronizeProperties(UDS_CommonTileView *this)

{
  longlong *plVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar2;
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *pTVar3;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  UListViewBase::SynchronizeProperties((UListViewBase *)this);
  plVar1 = &this->_padding_;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(**(code **)*plVar1)(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar3 = (TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
           (**(code **)*plVar1)(plVar1);
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTileView>(pTVar3,(UDS_CommonTileView *)&stack0x00000008,(pmf_72a7b26d *)this)
  ;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x48))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar3 = (TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x48))(plVar1);
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTileView>(pTVar3,(UDS_CommonTileView *)&stack0x00000008,(pmf_72a7b26d *)this)
  ;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x58))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(*plVar1 + 0x58))(plVar1);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonTileView>
            (this_00,(UDS_CommonTileView *)&stack0x00000008,(pmf_ca9cbb43 *)this);
  UListViewBase::SetScrollbarVisibility((UListViewBase *)this,this->bUseScrollbar == false);
  return;
}

