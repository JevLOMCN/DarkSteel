// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 39

// SetEntryBindingEventField_WrapperImpl @ 14b463c10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_CommonListView::SetEntryBindingEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy> *this;
  UDS_UserObjectListItem *this_00;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  int iVar7;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  FTimerHandle FVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  int aiStackX_8 [2];
  uint uStackX_10;
  FScriptContainerElement *pFStackX_18;
  void *pvStackX_20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_d8;
  FDelegateAllocation FStack_d0;
  FDestructionSentinel FStack_c0;
  FDelegateAllocation *pFStack_a8;
  code *pcStack_98;
  undefined8 uStack_90;
  FDestructionSentinel FStack_88;
  FScriptContainerElement *pFStack_70;
  code *pcStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  ClearEntryItemsBinding(param_1);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x1118),param_2);
  iVar7 = 0;
  if (*(char *)((longlong)param_1 + 0x1135) != '\0') {
    UWidget::SetRenderOpacity(param_1,0.0);
    if (*(longlong *)((longlong)param_1 + 0x1150) != 0) {
      pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar9 = FTimerManager::FindTimer(pFVar8,(FTimerHandle *)((longlong)param_1 + 0x1150));
      if (pFVar9 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar8,(FTimerHandle)*(ulong64 *)((longlong)param_1 + 0x1150));
      }
      *(undefined8 *)((longlong)param_1 + 0x1150) = 0;
    }
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
    pcStack_98 = OnNextTickEvent;
    FVar10 = FTimerManager::SetTimerForNextTick<UDS_CommonListView>
                       (pFVar8,(UDS_CommonListView *)aiStackX_8,param_1);
    *(undefined8 *)((longlong)param_1 + 0x1150) = *(undefined8 *)FVar10.Handle;
  }
  UListView::ClearListItems(param_1);
  uStackX_10 = *(uint *)((longlong)param_1 + 0x1120);
  uVar13 = (ulonglong)(int)uStackX_10;
  pFVar15 = (((TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x1118))->AllocatorInstance).Data;
  uVar4 = uStack_90._4_4_;
  pFStack_70 = pFVar15 + uVar13 * 8;
  while( true ) {
    pFVar5 = pFStack_70;
    pFStackX_18 = pFVar15;
    if (*(int *)((longlong)param_1 + 0x1120) != (int)uVar13) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(aiStackX_8);
    }
    if (pFVar15 == pFVar5) break;
    this_00 = *(UDS_UserObjectListItem **)pFVar15;
    if (this_00 != (UDS_UserObjectListItem *)0x0) {
      if ((*(char *)((longlong)param_1 + 0x1135) != '\0') &&
         (*(FName *)((longlong)param_1 + 0x1138) != (FName)0x0)) {
        fVar16 = *(float *)((longlong)param_1 + 0x1144);
        if (*(char *)((longlong)param_1 + 0x1140) != '\0') {
          fVar16 = (float)iVar7 * fVar16;
        }
        UDS_UserObjectListItem::SetAnimation(this_00,(FName *)((longlong)param_1 + 0x1138),fVar16);
      }
      UListView::AddItem(param_1,(UObject *)this_00);
      UDS_UserObjectListItem::SetListItemIndex(this_00,iVar7);
      aiStackX_8[0] = iVar7 + 1;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnItemInteractionDelegate,param_1);
      uStack_5c = uVar4;
      uStack_60 = 0;
      pcStack_68 = OnFocusedItem;
      TStack_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      pFStack_a8 = &FStack_d0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&FStack_d0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonListView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar11[3] = 0;
        pvStackX_20 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&pvStackX_20);
        puVar11[4] = pcStack_68;
        puVar11[5] = CONCAT44(uStack_5c,uStack_60);
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->OnItemInteractionDelegate,(FWriteAccessScope *)&FStack_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_d8,(FReadAccessScope *)&FStack_88);
      if (((FStack_d0.DelegateSize == 0) ||
          (FStack_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x38))(), cVar6 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_88);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_88);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this_00->OnItemInteractionDelegate,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&TStack_d8,(FReadAccessScope *)&FStack_88);
        if ((FStack_d0.DelegateSize != 0) &&
           (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x40))
                    (FStack_d0.DelegateAllocator,auStack_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_88);
        iVar7 = *(int *)&(this_00->OnItemInteractionDelegate).field_0x10;
        puVar1 = &(this_00->OnItemInteractionDelegate).field_0x14;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(this_00->OnItemInteractionDelegate).field_0x8,(int *)puVar1);
          *(int *)&(this_00->OnItemInteractionDelegate).field_0x10 = iVar7;
        }
        lVar2 = *(longlong *)&(this_00->OnItemInteractionDelegate).field_0x8;
        lVar14 = (longlong)iVar7;
        *(int *)&(this_00->OnItemInteractionDelegate).field_0x10 = iVar7 + 1;
        *(undefined8 *)(lVar2 + lVar14 * 0x10) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar14 * 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_d8,(FWriteAccessScope *)&FStack_88);
        pvVar3 = *(void **)(lVar2 + lVar14 * 0x10);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(lVar2 + lVar14 * 0x10) =
             FStack_d0.DelegateAllocator;
        FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(lVar2 + 8 + lVar14 * 0x10) = FStack_d0.DelegateSize;
        FStack_d0.DelegateSize = 0;
        if (FStack_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
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
      this = &this_00->OnItemFocusLostDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,param_1);
      uStack_90 = (ulonglong)uVar4 << 0x20;
      pcStack_98 = OnFocusLostedItem;
      TStack_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
      pFStack_a8 = &FStack_d0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&FStack_d0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonListView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar11[3] = 0;
        pvStackX_20 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&pvStackX_20);
        puVar11[4] = pcStack_98;
        puVar11[5] = uStack_90;
      }
      if (FStack_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&TStack_d8,(FReadAccessScope *)&FStack_c0);
      if (((FStack_d0.DelegateSize == 0) ||
          (FStack_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x38))(), cVar6 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&TStack_d8,(FReadAccessScope *)&FStack_c0);
        if ((FStack_d0.DelegateSize != 0) &&
           (FStack_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)FStack_d0.DelegateAllocator + 0x40))
                    (FStack_d0.DelegateAllocator,auStack_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&FStack_c0);
        iVar7 = *(int *)&(this_00->OnItemFocusLostDelegate).field_0x10;
        puVar1 = &(this_00->OnItemFocusLostDelegate).field_0x14;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(this_00->OnItemFocusLostDelegate).field_0x8,(int *)puVar1);
          *(int *)&(this_00->OnItemFocusLostDelegate).field_0x10 = iVar7;
        }
        lVar2 = *(longlong *)&(this_00->OnItemFocusLostDelegate).field_0x8;
        lVar14 = (longlong)iVar7;
        *(int *)&(this_00->OnItemFocusLostDelegate).field_0x10 = iVar7 + 1;
        *(undefined8 *)(lVar2 + lVar14 * 0x10) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar14 * 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&TStack_d8,(FWriteAccessScope *)&FStack_c0);
        pvVar3 = *(void **)(lVar2 + lVar14 * 0x10);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(lVar2 + lVar14 * 0x10) =
             FStack_d0.DelegateAllocator;
        FStack_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(lVar2 + 8 + lVar14 * 0x10) = FStack_d0.DelegateSize;
        FStack_d0.DelegateSize = 0;
        if (FStack_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
        }
      }
      if (FStack_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
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
      pFVar15 = pFStackX_18;
      iVar7 = aiStackX_8[0];
    }
    uVar13 = (ulonglong)uStackX_10;
    pFVar15 = pFVar15 + 8;
  }
  UListViewBase::RequestRefresh(param_1);
  UListView::SetSelectedIndex(param_1,*(int *)((longlong)param_1 + 0x1114));
  *(undefined1 *)((longlong)param_1 + 0x1168) = 0;
  return;
}

// SetEntryFocusEventField_WrapperImpl @ 14b463c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_CommonListView::SetEntryFocusEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar5 [16];
  
  fVar7 = *(float *)((longlong)param_2 + 4);
  if (0.0 <= fVar7) {
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_8_ = 0;
      uVar1 = movmskps(in_EAX,auVar3);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar7 - fVar4;
  }
  else {
    fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    auVar6._4_4_ = _UNK_150651574;
    auVar6._0_4_ = fVar7;
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar6._8_4_ = _UNK_150651574;
      auVar6._12_4_ = _UNK_150651574;
      auVar5._8_8_ = auVar6._8_8_;
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      uVar1 = movmskps(in_EAX,auVar5);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar4 - fVar7;
  }
  UListViewBase::SetScrollOffset(param_1,(float)*(int *)param_2 + fVar4);
  return;
}

// SetScrollUpEventField_WrapperImpl @ 14b463c30

void __cdecl UDS_CommonListView::SetScrollUpEventField_WrapperImpl(void *param_1,void *param_2)

{
  STableViewBase *this;
  
  this = *(STableViewBase **)((longlong)param_1 + 0x338);
  if (this == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  STableViewBase::SetScrollOffset(this,0.0);
  STableViewBase::RequestLayoutRefresh(this);
  return;
}

// SetScrollDownEventField_WrapperImpl @ 14b463c40

void __cdecl UDS_CommonListView::SetScrollDownEventField_WrapperImpl(void *param_1,void *param_2)

{
  STableViewBase *this;
  int iVar1;
  
  this = *(STableViewBase **)((longlong)param_1 + 0x338);
  if (this == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  this->bIsInertialScroll = false;
  iVar1 = (**(code **)(*(longlong *)this + 0x2a0))(this);
  STableViewBase::SetScrollOffset(this,(float)iVar1);
  STableViewBase::RequestLayoutRefresh(this);
  return;
}

// SetAnimationCancelEventField_WrapperImpl @ 14b463c50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_CommonListView::SetAnimationCancelEventField_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  FTimerManager *this;
  FTimerData *pFVar4;
  longlong *plVar5;
  undefined1 auStackX_8 [8];
  FReadAccessScope FStack_38;
  
  iVar2 = *(int *)((longlong)param_1 + 0x1120);
  if (iVar2 != 0) {
    plVar5 = *(longlong **)((longlong)param_1 + 0x1118);
    plVar1 = plVar5 + iVar2;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x1120) != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_8);
      }
      if (plVar5 == plVar1) break;
      if ((UDS_UserObjectListItem *)*plVar5 != (UDS_UserObjectListItem *)0x0) {
        UDS_UserObjectListItem::SetStopAnimation((UDS_UserObjectListItem *)*plVar5);
        lVar3 = *plVar5;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x80),
                   &FStack_38);
        if ((*(int *)(lVar3 + 0x90) != 0) && (*(longlong **)(lVar3 + 0x88) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(lVar3 + 0x88) + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_38);
      }
      plVar5 = plVar5 + 1;
    }
    UWidget::SetRenderOpacity(param_1,__real_3f800000);
    if (*(longlong *)((longlong)param_1 + 0x1150) != 0) {
      this = FDS_TimerManager::Get((UObject *)0x0);
      pFVar4 = FTimerManager::FindTimer(this,(FTimerHandle *)((longlong)param_1 + 0x1150));
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (this,(FTimerHandle)*(ulong64 *)((longlong)param_1 + 0x1150));
      }
      *(undefined8 *)((longlong)param_1 + 0x1150) = 0;
    }
  }
  return;
}

// SetScrollSettledTimerDuration_WrapperImpl @ 14b463c60

void __cdecl
UDS_CommonListView::SetScrollSettledTimerDuration_WrapperImpl(void *param_1,void *param_2)

{
  SetScrollSettledTimerDuration(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b463c70

UClass * __cdecl UDS_CommonListView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonListView",
               &Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton,
               StaticRegisterNativesUDS_CommonListView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonListView>,
               InternalVTableHelperCtorCaller<UDS_CommonListView>,local_res8,
               UCommonListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton;
}

// UDS_CommonListView @ 14b465950

UDS_CommonListView * __thiscall
UDS_CommonListView::UDS_CommonListView(UDS_CommonListView *this,FVTableHelper *param_1)

{
  UCommonListView::UCommonListView((UCommonListView *)this,param_1);
  this->bUseScrollbar = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CommonListView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  (this->AnimationCancelEventField).bIsActivate = false;
  (this->EntryWidgetAnimationName).ComparisonIndex = 0;
  (this->EntryWidgetAnimationName).Number = 0;
  this->bIsDelayToEach = false;
  this->bIsLoopOnEntryBinding = false;
  (this->NextTickTimerHandle).Handle = 0;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  this->ScrollBarThickness = 16.0;
  (this->DSScrollbarPadding).Left = 2.0;
  (this->DSScrollbarPadding).Top = 2.0;
  (this->DSScrollbarPadding).Right = 2.0;
  (this->DSScrollbarPadding).Bottom = 2.0;
  this->KeepSelected = false;
  this->ScrollSettledTimerDuration = 1.0;
  return this;
}

// ~UDS_CommonListView @ 14b4665e0

void __thiscall UDS_CommonListView::~UDS_CommonListView(UDS_CommonListView *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CommonListView__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonListView::~UCommonListView((UCommonListView *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467c00

IClassDescriptor * __thiscall
UDS_CommonListView::GetFieldNotificationDescriptor(UDS_CommonListView *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonListView::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b468320

UClass * __cdecl UDS_CommonListView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonListView",
               &Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton,
               StaticRegisterNativesUDS_CommonListView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonListView>,
               InternalVTableHelperCtorCaller<UDS_CommonListView>,local_res8,
               UCommonListView::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonListView.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonListView @ 14b468c90

void __cdecl UDS_CommonListView::StaticRegisterNativesUDS_CommonListView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UDS_CommonListView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetWidgetName @ 14b46a0e0

void __cdecl UDS_CommonListView::execGetWidgetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetWidgetName((UDS_CommonListView *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execItemSelectionChangedEvent @ 14b46a160

void __cdecl
UDS_CommonListView::execItemSelectionChangedEvent(UObject *param_1,FFrame *param_2,void *param_3)

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
  ItemSelectionChangedEvent((UDS_CommonListView *)param_1,local_res10);
  return;
}

// execOnClickedItem @ 14b46a280

void __cdecl UDS_CommonListView::execOnClickedItem(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnClickedItem((UDS_CommonListView *)param_1,local_res10);
  return;
}

// execOnFocusLostedItem @ 14b46a430

void __cdecl
UDS_CommonListView::execOnFocusLostedItem(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnFocusLostedItem((UDS_CommonListView *)param_1,local_res10);
  return;
}

// execOnFocusedItem @ 14b46a550

void __cdecl UDS_CommonListView::execOnFocusedItem(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnFocusedItem((UDS_CommonListView *)param_1,local_res10);
  return;
}

// UDS_CommonListView @ 14bc83680

UDS_CommonListView * __thiscall
UDS_CommonListView::UDS_CommonListView(UDS_CommonListView *this,FObjectInitializer *param_1)

{
  UCommonListView::UCommonListView((UCommonListView *)this,param_1);
  this->bUseScrollbar = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_CommonListView__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  (this->ScrollSettledEventField).IsTopScrollSettled = false;
  (this->ScrollSettledEventField).IsBottomScrollSettled = false;
  (this->AnimationCancelEventField).bIsActivate = false;
  (this->EntryWidgetAnimationName).ComparisonIndex = 0;
  (this->EntryWidgetAnimationName).Number = 0;
  this->bIsDelayToEach = false;
  this->bIsLoopOnEntryBinding = false;
  (this->NextTickTimerHandle).Handle = 0;
  (this->TopScrollSettledTimerHandle).Handle = 0;
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  this->bHasUserInteracted = false;
  this->ScrollBarThickness = 16.0;
  (this->DSScrollbarPadding).Left = 2.0;
  (this->DSScrollbarPadding).Top = 2.0;
  (this->DSScrollbarPadding).Right = 2.0;
  (this->DSScrollbarPadding).Bottom = 2.0;
  this->KeepSelected = false;
  this->ScrollSettledTimerDuration = 1.0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// BeginDestroy @ 14bc87bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonListView::BeginDestroy(UDS_CommonListView *this)

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

// ClearEntryItemsBinding @ 14bc8c080

void __thiscall UDS_CommonListView::ClearEntryItemsBinding(UDS_CommonListView *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UDS_UserObjectListItem *this_00;
  undefined8 *puVar4;
  bool bVar5;
  UObject *pUVar6;
  longlong *plVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FDestructionSentinel local_58;
  
  pFVar9 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
LAB_14bc8c0b0:
  do {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    this_00 = *(UDS_UserObjectListItem **)pFVar9;
    if (this_00 != (UDS_UserObjectListItem *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnItemInteractionDelegate,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->OnItemFocusLostDelegate,this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_00->OnAnimationCancelDelegate,(FWriteAccessScope *)&local_58);
      if ((*(int *)&(this_00->OnAnimationCancelDelegate).field_0x10 != 0) &&
         (puVar4 = *(undefined8 **)&(this_00->OnAnimationCancelDelegate).field_0x8,
         puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this_00->OnAnimationCancelDelegate).field_0x8,0,0,0x10);
        *(undefined4 *)&(this_00->OnAnimationCancelDelegate).field_0x10 = 0;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      UDS_UserObjectListItem::GetOwnerWidget(this_00);
      bVar5 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res10,(void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pUVar6[0x19].field_0x20,(FReadAccessScope *)&local_58);
        iVar3 = *(int *)&pUVar6[0x1a].field_0x8;
        plVar7 = *(longlong **)(pUVar6 + 0x1a);
        plVar8 = plVar7 + (longlong)iVar3 * 2;
        while( true ) {
          if (*(int *)&pUVar6[0x1a].field_0x8 != iVar3) {
            `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (plVar7 == plVar8) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope((FReadAccessScope *)&local_58);
            goto LAB_14bc8c210;
          }
          if (((int)plVar7[1] != 0) && (*plVar7 != 0)) break;
          plVar7 = plVar7 + 2;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_58);
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar6[0x19].field_0x20);
        pFVar9 = pFVar9 + 8;
        goto LAB_14bc8c0b0;
      }
    }
LAB_14bc8c210:
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// GetWidgetName @ 14bca2ac0

FString * __thiscall
UDS_CommonListView::GetWidgetName(UDS_CommonListView *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ItemSelectionChangedEvent @ 14bca8ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonListView::ItemSelectionChangedEvent(UDS_CommonListView *this,UObject *param_1)

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

// NativeOnEntryReleased @ 14bcac5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_CommonListView::NativeOnEntryReleased(UDS_CommonListView *this,UUserWidget *param_1)

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

// OnAnimationCancelEventField @ 14bcaf900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_CommonListView::OnAnimationCancelEventField
          (UDS_CommonListView *this,FDS_WidgetEventField *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FTimerManager *this_00;
  FTimerData *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  if (iVar2 != 0) {
    pFVar5 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if (*(UDS_UserObjectListItem **)pFVar5 != (UDS_UserObjectListItem *)0x0) {
        UDS_UserObjectListItem::SetStopAnimation(*(UDS_UserObjectListItem **)pFVar5);
        lVar3 = *(longlong *)pFVar5;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x80),
                   &local_38);
        if ((*(int *)(lVar3 + 0x90) != 0) && (*(longlong **)(lVar3 + 0x88) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(lVar3 + 0x88) + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
      }
      pFVar5 = pFVar5 + 8;
    }
    UWidget::SetRenderOpacity((UWidget *)this,__real_3f800000);
    if ((this->NextTickTimerHandle).Handle != 0) {
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar4 = FTimerManager::FindTimer(this_00,&this->NextTickTimerHandle);
      if (pFVar4 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->NextTickTimerHandle).Handle);
      }
      (this->NextTickTimerHandle).Handle = 0;
    }
  }
  return;
}

// OnClickedItem @ 14bcb22d0

void __thiscall UDS_CommonListView::OnClickedItem(UDS_CommonListView *this,UObject *param_1)

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

// OnEntryBindingEvent @ 14bcb2fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_CommonListView::OnEntryBindingEvent
          (UDS_CommonListView *this,FDS_EntryBindingEventField *param_1)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy> *this_00;
  UDS_UserObjectListItem *this_01;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  int iVar7;
  FTimerManager *pFVar8;
  FTimerData *pFVar9;
  FTimerHandle FVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  int local_res8 [2];
  uint local_res10;
  FScriptContainerElement *local_res18;
  UDS_CommonListView *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  code *local_98;
  undefined8 uStack_90;
  FDestructionSentinel local_88;
  FScriptContainerElement *local_70;
  code *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  ClearEntryItemsBinding(this);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->EntryBindingEventField).UserObjectList,&param_1->UserObjectList);
  iVar7 = 0;
  if (this->bIsShowAnimationOption != false) {
    UWidget::SetRenderOpacity((UWidget *)this,0.0);
    if ((this->NextTickTimerHandle).Handle != 0) {
      pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar9 = FTimerManager::FindTimer(pFVar8,&this->NextTickTimerHandle);
      if (pFVar9 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar8,(FTimerHandle)(this->NextTickTimerHandle).Handle);
      }
      (this->NextTickTimerHandle).Handle = 0;
    }
    pFVar8 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
    local_98 = OnNextTickEvent;
    FVar10 = FTimerManager::SetTimerForNextTick<UDS_CommonListView>
                       (pFVar8,(UDS_CommonListView *)local_res8,(pmf_91de9153 *)this);
                    /* WARNING: Load size is inaccurate */
    (this->NextTickTimerHandle).Handle = *FVar10.Handle;
  }
  UListView::ClearListItems((UListView *)this);
  local_res10 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  uVar13 = (ulonglong)(int)local_res10;
  pFVar15 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  uVar4 = uStack_90._4_4_;
  local_70 = pFVar15 + uVar13 * 8;
  while( true ) {
    pFVar5 = local_70;
    local_res18 = pFVar15;
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar5) break;
    this_01 = *(UDS_UserObjectListItem **)pFVar15;
    if (this_01 != (UDS_UserObjectListItem *)0x0) {
      if ((this->bIsShowAnimationOption != false) && (this->EntryWidgetAnimationName != (FName)0x0))
      {
        fVar16 = this->AnimationDelay;
        if (this->bIsDelayToEach != false) {
          fVar16 = (float)iVar7 * fVar16;
        }
        UDS_UserObjectListItem::SetAnimation(this_01,&this->EntryWidgetAnimationName,fVar16);
      }
      UListView::AddItem((UListView *)this,(UObject *)this_01);
      UDS_UserObjectListItem::SetListItemIndex(this_01,iVar7);
      local_res8[0] = iVar7 + 1;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_01->OnItemInteractionDelegate,this);
      uStack_5c = uVar4;
      uStack_60 = 0;
      local_68 = OnFocusedItem;
      local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      local_a8 = &local_d0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonListView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_res20 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
        puVar11[4] = local_68;
        puVar11[5] = CONCAT44(uStack_5c,uStack_60);
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_01->OnItemInteractionDelegate,(FWriteAccessScope *)&local_c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_d8,(FReadAccessScope *)&local_88);
      if (((local_d0.DelegateSize == 0) ||
          (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar6 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_88);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_88);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this_01->OnItemInteractionDelegate,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_d8,(FReadAccessScope *)&local_88);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                    (local_d0.DelegateAllocator,local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_88);
        iVar7 = *(int *)&(this_01->OnItemInteractionDelegate).field_0x10;
        puVar1 = &(this_01->OnItemInteractionDelegate).field_0x14;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(this_01->OnItemInteractionDelegate).field_0x8,(int *)puVar1);
          *(int *)&(this_01->OnItemInteractionDelegate).field_0x10 = iVar7;
        }
        lVar2 = *(longlong *)&(this_01->OnItemInteractionDelegate).field_0x8;
        lVar14 = (longlong)iVar7;
        *(int *)&(this_01->OnItemInteractionDelegate).field_0x10 = iVar7 + 1;
        *(undefined8 *)(lVar2 + lVar14 * 0x10) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar14 * 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_88);
        pvVar3 = *(void **)(lVar2 + lVar14 * 0x10);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(lVar2 + lVar14 * 0x10) =
             local_d0.DelegateAllocator;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(lVar2 + 8 + lVar14 * 0x10) = local_d0.DelegateSize;
        local_d0.DelegateSize = 0;
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
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
      this_00 = &this_01->OnItemFocusLostDelegate;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
      uStack_90 = (ulonglong)uVar4 << 0x20;
      local_98 = OnFocusLostedItem;
      local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_c0);
      local_a8 = &local_d0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonListView____A6AXPEAVUDS_UserObjectListItem___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_res20 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
        puVar11[4] = local_98;
        puVar11[5] = uStack_90;
      }
      if (local_c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_d8,(FReadAccessScope *)&local_c0);
      if (((local_d0.DelegateSize == 0) ||
          (local_d0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar6 = (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x38))(), cVar6 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_d8,(FReadAccessScope *)&local_c0);
        if ((local_d0.DelegateSize != 0) &&
           (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x40))
                    (local_d0.DelegateAllocator,local_50);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_c0);
        iVar7 = *(int *)&(this_01->OnItemFocusLostDelegate).field_0x10;
        puVar1 = &(this_01->OnItemFocusLostDelegate).field_0x14;
        if (iVar7 == *(int *)puVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)
                                   &(this_01->OnItemFocusLostDelegate).field_0x8,(int *)puVar1);
          *(int *)&(this_01->OnItemFocusLostDelegate).field_0x10 = iVar7;
        }
        lVar2 = *(longlong *)&(this_01->OnItemFocusLostDelegate).field_0x8;
        lVar14 = (longlong)iVar7;
        *(int *)&(this_01->OnItemFocusLostDelegate).field_0x10 = iVar7 + 1;
        *(undefined8 *)(lVar2 + lVar14 * 0x10) = 0;
        *(undefined4 *)(lVar2 + 8 + lVar14 * 0x10) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_d8,(FWriteAccessScope *)&local_c0);
        pvVar3 = *(void **)(lVar2 + lVar14 * 0x10);
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(ForElementType<TAlignedBytes<16,16>_> *)(lVar2 + lVar14 * 0x10) =
             local_d0.DelegateAllocator;
        local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(lVar2 + 8 + lVar14 * 0x10) = local_d0.DelegateSize;
        local_d0.DelegateSize = 0;
        if (local_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
        }
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
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
      pFVar15 = local_res18;
      iVar7 = local_res8[0];
    }
    uVar13 = (ulonglong)local_res10;
    pFVar15 = pFVar15 + 8;
  }
  UListViewBase::RequestRefresh((UListViewBase *)this);
  UListView::SetSelectedIndex((UListView *)this,this->ListSlotIndex);
  this->bHasUserInteracted = false;
  return;
}

// OnEntryFocusEvent @ 14bcb4b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonListView::OnEntryFocusEvent(UDS_CommonListView *this,FDS_EntryFocusEventField *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar5 [16];
  
  fVar7 = param_1->Offset;
  if (0.0 <= fVar7) {
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_8_ = 0;
      uVar1 = movmskps(in_EAX,auVar3);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar7 - fVar4;
  }
  else {
    fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    auVar6._4_4_ = _UNK_150651574;
    auVar6._0_4_ = fVar7;
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar6._8_4_ = _UNK_150651574;
      auVar6._12_4_ = _UNK_150651574;
      auVar5._8_8_ = auVar6._8_8_;
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      uVar1 = movmskps(in_EAX,auVar5);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar4 - fVar7;
  }
  UListViewBase::SetScrollOffset((UListViewBase *)this,(float)param_1->FocusIndex + fVar4);
  return;
}

// OnFocusLostedItem @ 14bcb5540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonListView::OnFocusLostedItem(UDS_CommonListView *this,UDS_UserObjectListItem *param_1)

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
              (&local_138,"UDS_CommonListView::OnFocusLostedItem",0x25,Yes);
    pwVar5 = L"OnFocusLostedItem is nullptr";
    uVar4 = 0xd4;
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
              (&local_138,"UDS_CommonListView::OnFocusLostedItem",0x25,Yes);
    pwVar5 = L"OnFocusLostedItem widget is nullptr";
    uVar4 = 0xdb;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnFocusedItem @ 14bcb5cb0

void __thiscall
UDS_CommonListView::OnFocusedItem(UDS_CommonListView *this,UDS_UserObjectListItem *param_1)

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

// OnNextTickEvent @ 14bcb7b60

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

void __thiscall UDS_CommonListView::OnNextTickEvent(UDS_CommonListView *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  FTimerHandle FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (this->bIsShowAnimationOption != false) {
    pFVar7 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
    bVar3 = false;
    iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      if ((*(longlong *)pFVar7 != 0) && (*(char *)(*(longlong *)pFVar7 + 0xb4) == '\0')) {
        bVar3 = true;
      }
      pFVar7 = pFVar7 + 8;
    }
    if (!bVar3) {
      if ((this->NextTickTimerHandle).Handle != 0) {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        pFVar5 = FTimerManager::FindTimer(pFVar4,&this->NextTickTimerHandle);
        if (pFVar5 != (FTimerData *)0x0) {
          FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)(this->NextTickTimerHandle).Handle)
          ;
        }
        (this->NextTickTimerHandle).Handle = 0;
      }
      pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
      FVar6 = FTimerManager::SetTimerForNextTick<UDS_CommonListView>
                        (pFVar4,(UDS_CommonListView *)local_res8,(pmf_91de9153 *)this);
                    /* WARNING: Load size is inaccurate */
      (this->NextTickTimerHandle).Handle = *FVar6.Handle;
      return;
    }
    pFVar7 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
    iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) break;
      if (*(UDS_UserObjectListItem **)pFVar7 != (UDS_UserObjectListItem *)0x0) {
        UDS_UserObjectListItem::SetStopAnimation(*(UDS_UserObjectListItem **)pFVar7);
      }
      pFVar7 = pFVar7 + 8;
    }
    UWidget::SetRenderOpacity((UWidget *)this,__real_3f800000);
    if (this->bIsLoopOnEntryBinding == false) {
      this->bIsShowAnimationOption = false;
    }
  }
  if ((this->NextTickTimerHandle).Handle != 0) {
    pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(pFVar4,&this->NextTickTimerHandle);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar4,(FTimerHandle)(this->NextTickTimerHandle).Handle);
    }
    (this->NextTickTimerHandle).Handle = 0;
  }
  return;
}

// OnScrollToBottomEvent @ 14bcba560

void __thiscall
UDS_CommonListView::OnScrollToBottomEvent
          (UDS_CommonListView *this,FDS_ScrollDownEventField *param_1)

{
  STableViewBase *this_00;
  int iVar1;
  
  this_00 = (STableViewBase *)this->_padding_;
  if (this_00 == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this_00->InertialScrollManager,false);
  this_00->bIsInertialScroll = false;
  iVar1 = (**(code **)(*(longlong *)this_00 + 0x2a0))(this_00);
  STableViewBase::SetScrollOffset(this_00,(float)iVar1);
  STableViewBase::RequestLayoutRefresh(this_00);
  return;
}

// OnScrollToTopEvent @ 14bcba570

void __thiscall
UDS_CommonListView::OnScrollToTopEvent(UDS_CommonListView *this,FDS_ScrollUpEventField *param_1)

{
  STableViewBase *this_00;
  
  this_00 = (STableViewBase *)this->_padding_;
  if (this_00 == (STableViewBase *)0x0) {
    return;
  }
  FInertialScrollManager::ClearScrollVelocity(&this_00->InertialScrollManager,false);
  this_00->bIsInertialScroll = false;
  STableViewBase::SetScrollOffset(this_00,0.0);
  STableViewBase::RequestLayoutRefresh(this_00);
  return;
}

// OnScrollingFinished @ 14bcba580

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

void __thiscall UDS_CommonListView::OnScrollingFinished(UDS_CommonListView *this)

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
        FTimerManager::SetTimer<UDS_CommonListView>
                  (pFVar8,&this->TopScrollSettledTimerHandle,this,(pmf_91de9153 *)&local_2d8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_CommonListView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_288.Ptr,0x182,L"[OnScrollingFinished] Top Settled !!");
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
        FTimerManager::SetTimer<UDS_CommonListView>
                  (pFVar8,&this->BottomScrollSettledTimerHandle,this,(pmf_91de9153 *)&local_2b8,
                   this->ScrollSettledTimerDuration,false,fVar5);
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_CommonListView::OnScrollingFinished",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Display,local_168.Ptr,0x18a,L"[OnScrollingFinished] Bottom Settled !!"
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

// RebuildListWidget @ 14bcbdb30

TSharedRef<STableViewBase,1> * __thiscall
UDS_CommonListView::RebuildListWidget
          (UDS_CommonListView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  longlong lVar1;
  SBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  atomic<int> aVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  SBox *pSVar11;
  SBox *this_00;
  bool bVar12;
  UDS_CommonListView *local_res8;
  code *local_88;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> TStack_80;
  TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> local_68;
  undefined1 local_58 [16];
  bool local_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  UListView::ConstructListView<SDS_ListView>((UListView *)this,&local_68);
  SDS_TableViewBase<SListView,UObject_*>::UpdateScrollBarThickness
            (local_68.Object,&this->ScrollBarThickness);
  fVar5 = (this->DSScrollbarPadding).Top;
  fVar6 = (this->DSScrollbarPadding).Right;
  fVar7 = (this->DSScrollbarPadding).Bottom;
  lVar1 = (local_68.Object)->_padding_;
  ((local_68.Object)->Padding).Left = (this->DSScrollbarPadding).Left;
  ((local_68.Object)->Padding).Top = fVar5;
  ((local_68.Object)->Padding).Right = fVar6;
  ((local_68.Object)->Padding).Bottom = fVar7;
  if (lVar1 != 0) {
    pSVar2 = *(SBox **)(lVar1 + 0x1d0);
    pSVar11 = pSVar2;
    this_00 = (SBox *)0x0;
    if (pSVar2 != (SBox *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      do {
        pSVar11 = (SBox *)0x0;
        this_00 = (SBox *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14bcbdbc5;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar2->_padding_;
        bVar12 = aVar4 == aVar8;
        if (bVar12) {
          *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar12);
      this_00 = *(SBox **)(lVar1 + 0x1c8);
      LOCK();
      *(atomic<int> *)&pSVar2->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar2->_padding_ + 1);
      UNLOCK();
      pSVar11 = pSVar2;
    }
LAB_14bcbdbc5:
    if (this_00 != (SBox *)0x0) {
      local_88 = (code *)CONCAT35(local_88._5_3_,0x100000000);
      TStack_80._16_8_ = 0;
      local_88 = (code *)CONCAT44(local_88._4_4_,
                                  (this->DSScrollbarPadding).Bottom + (this->DSScrollbarPadding).Top
                                 );
      TStack_80._0_8_ = 0;
      TStack_80._8_8_ = 0;
      SBox::SetHeightOverride(this_00,(TAttribute<FOptionalSize> *)&local_88);
      local_88 = (code *)CONCAT35(local_88._5_3_,0x100000000);
      TStack_80._16_8_ = 0;
      TStack_80._0_8_ = 0;
      TStack_80._8_8_ = 0;
      local_88 = (code *)CONCAT44(local_88._4_4_,
                                  (this->DSScrollbarPadding).Right + (this->DSScrollbarPadding).Left
                                  + (local_68.Object)->Thickness);
      SBox::SetWidthOverride(this_00,(TAttribute<FOptionalSize> *)&local_88);
      local_58._0_4_ = (EAccessType)(this->DSScrollbarPadding).Left;
      local_58._4_4_ = (this->DSScrollbarPadding).Top;
      local_58._8_8_ = *(undefined8 *)&(this->DSScrollbarPadding).Right;
      local_48 = true;
      local_30 = 0;
      local_40 = (undefined1 *)0x0;
      uStack_38 = 0;
      SBox::SetPadding(this_00,(TAttribute<FMargin> *)local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar11);
  }
  local_88 = SetHasUserInteracted;
  TStack_80._0_8_ = (ulonglong)local_68.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_68.Object)->OnUserScrollInteracted,(FWriteAccessScope *)local_58);
  local_40 = &((local_68.Object)->OnUserScrollInteracted).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_40);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_CommonListView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonListView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonListView *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = local_88;
    puVar9[5] = TStack_80._0_8_;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                    local_68.SharedReferenceCount.ReferenceController._0_4_);
  __return_storage_ptr__->Object = (STableViewBase *)local_68.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ResetBottomScrollSettledTimer @ 14bcc43d0

void __thiscall UDS_CommonListView::ResetBottomScrollSettledTimer(UDS_CommonListView *this)

{
  (this->BottomScrollSettledTimerHandle).Handle = 0;
  return;
}

// ResetTopScrollSettledTimer @ 14bcc4610

void __thiscall UDS_CommonListView::ResetTopScrollSettledTimer(UDS_CommonListView *this)

{
  (this->TopScrollSettledTimerHandle).Handle = 0;
  return;
}

// SetHasUserInteracted @ 14bcc66f0

void __thiscall UDS_CommonListView::SetHasUserInteracted(UDS_CommonListView *this)

{
  this->bHasUserInteracted = true;
  return;
}

// SetScrollSettledTimerDuration @ 14bcc8690

void __thiscall
UDS_CommonListView::SetScrollSettledTimerDuration(UDS_CommonListView *this,float param_1)

{
  this->ScrollSettledTimerDuration = param_1;
  return;
}

// SynchronizeProperties @ 14bcca8e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonListView::SynchronizeProperties(UDS_CommonListView *this)

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
  AddUObject<UDS_CommonListView>(pTVar3,(UDS_CommonListView *)&stack0x00000008,(pmf_30a5887d *)this)
  ;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x48))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  pTVar3 = (TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x48))(plVar1);
  TMulticastDelegateRegistration<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonListView>(pTVar3,(UDS_CommonListView *)&stack0x00000008,(pmf_30a5887d *)this)
  ;
  pTVar2 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(*plVar1 + 0x58))(plVar1);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar2,this);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(*plVar1 + 0x58))(plVar1);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_CommonListView>
            (this_00,(UDS_CommonListView *)&stack0x00000008,(pmf_91de9153 *)this);
  UListViewBase::SetScrollbarVisibility((UListViewBase *)this,this->bUseScrollbar == false);
  return;
}

