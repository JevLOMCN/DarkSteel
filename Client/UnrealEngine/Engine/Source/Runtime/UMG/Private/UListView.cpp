// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 122

// StaticClass @ 1469454f0

UClass * __cdecl UListView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UListView.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListView",&Z_Registration_Info_UClass_UListView.InnerSingleton,
               StaticRegisterNativesUListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UListView>,InternalVTableHelperCtorCaller<UListView>,aFStackX_8,
               UListViewBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UListView.InnerSingleton;
}

// GetShadowBrushStyle_WrapperImpl @ 14695e620

void __cdecl UListView::GetShadowBrushStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBoxStyle local_2f8;
  
  local_2f8.BarThickness = *(float *)((longlong)param_1 + 0xc68);
  local_2f8._padding_ = (longlong)&___7FScrollBoxStyle__6B_;
  FSlateBrush::FSlateBrush(&local_2f8.TopShadowBrush,(FSlateBrush *)((longlong)param_1 + 0xc70));
  FSlateBrush::FSlateBrush(&local_2f8.BottomShadowBrush,(FSlateBrush *)((longlong)param_1 + 0xd20));
  FSlateBrush::FSlateBrush(&local_2f8.LeftShadowBrush,(FSlateBrush *)((longlong)param_1 + 0xdd0));
  FSlateBrush::FSlateBrush(&local_2f8.RightShadowBrush,(FSlateBrush *)((longlong)param_1 + 0xe80));
  local_2f8.HorizontalScrolledContentPadding._0_8_ = *(undefined8 *)((longlong)param_1 + 0xf30);
  local_2f8.HorizontalScrolledContentPadding._8_8_ = *(undefined8 *)((longlong)param_1 + 0xf38);
  local_2f8.VerticalScrolledContentPadding._0_8_ = *(undefined8 *)((longlong)param_1 + 0xf40);
  local_2f8.VerticalScrolledContentPadding._8_8_ = *(undefined8 *)((longlong)param_1 + 0xf48);
  FScrollBoxStyle::operator=(param_2,&local_2f8);
  FScrollBoxStyle::~FScrollBoxStyle(&local_2f8);
  return;
}

// SetShadowBrushStyle_WrapperImpl @ 14695e720

void __cdecl UListView::SetShadowBrushStyle_WrapperImpl(void *param_1,void *param_2)

{
  FScrollBoxStyle::operator=((FScrollBoxStyle *)((longlong)param_1 + 0xc60),param_2);
  return;
}

// GetHorizontalEntrySpacing_WrapperImpl @ 14695e780

void __cdecl UListView::GetHorizontalEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0xf78);
  return;
}

// SetHorizontalEntrySpacing_WrapperImpl @ 14695e790

void __cdecl UListView::SetHorizontalEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  SetHorizontalEntrySpacing(param_1,*(float *)param_2);
  return;
}

// GetVerticalEntrySpacing_WrapperImpl @ 14695e860

void __cdecl UListView::GetVerticalEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0xf7c);
  return;
}

// SetVerticalEntrySpacing_WrapperImpl @ 14695e8b0

void __cdecl UListView::SetVerticalEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  SetVerticalEntrySpacing(param_1,*(float *)param_2);
  return;
}

// GetScrollBarPadding_WrapperImpl @ 14695e8c0

void __cdecl UListView::GetScrollBarPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xf88);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0xf80);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetScrollBarPadding_WrapperImpl @ 14695e8e0

void __cdecl UListView::SetScrollBarPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin *pFVar1;
  STableViewBase *this;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)((longlong)param_2 + 8);
  pFVar1 = (FMargin *)((longlong)param_1 + 0xf80);
  this = *(STableViewBase **)((longlong)param_1 + 0xf68);
  pFVar1->Left = (float)(int)uVar2;
  pFVar1->Top = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)((longlong)param_1 + 0xf88) = uVar3;
  if (this != (STableViewBase *)0x0) {
    STableViewBase::SetScrollbarPadding(this,pFVar1);
    return;
  }
  return;
}

// ConstructListView<SListView> @ 146970290

TSharedRef<SListView<UObject_*>,1> * __thiscall
UListView::ConstructListView<SListView>
          (UListView *this,TSharedRef<SListView<UObject_*>,1> *__return_storage_ptr__)

{
  TSharedPtr<SListView<UObject_*>,1> *pTVar1;
  SListView<UObject_*> *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<SListView<UObject_*>,1> *pTVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UListView *local_res8;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  SListView<UObject_*> *local_e0;
  FSharedReferencer<1> local_d8 [2];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  bool local_b8;
  FListViewConstructArgs local_a8;
  TSharedRef<SListView<UObject_*>,1> local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  ITypedUMGListView<UObject_*>::FListViewConstructArgs::FListViewConstructArgs(&local_a8);
  local_a8.bAllowFocus = this->bIsFocusable;
  local_a8.ScrollBarPadding.Left = (this->ScrollBarPadding).Left;
  local_a8.ScrollBarPadding.Top = (this->ScrollBarPadding).Top;
  local_a8.ScrollBarPadding.Right = (this->ScrollBarPadding).Right;
  local_a8.ScrollBarPadding.Bottom = (this->ScrollBarPadding).Bottom;
  local_a8.SelectionMode = (Type)(this->SelectionMode).Value;
  local_a8.bClearSelectionOnClick = this->bClearSelectionOnClick;
  local_a8.ConsumeMouseWheel = this->ConsumeMouseWheel;
  local_a8.bReturnFocusToSelection = this->bReturnFocusToSelection;
  local_a8.bClearScrollVelocityOnSelection = this->bClearScrollVelocityOnSelection;
  local_a8.Orientation = (EOrientation)(this->Orientation).Value;
  local_a8.ListViewStyle = &this->WidgetStyle;
  local_a8.ScrollBarStyle = &this->ScrollBarStyle;
  local_a8.ShadowBoxStyle = &this->ShadowBrushStyle;
  local_a8.bEnableShadowBoxStyle = this->bEnableShadowBrush;
  local_a8.ScrollIntoViewAlignment = this->ScrollIntoViewAlignment;
  pTVar6 = ITypedUMGListView<UObject_*>::ConstructListView<SListView,UListView>
                     (&local_58,this,
                      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->ListItems,&local_a8);
  local_d8[0].ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_e0 = pTVar6->Object;
  if (local_d8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyListView;
  if (pTVar1 != (TSharedPtr<SListView<UObject_*>,1> *)&local_e0) {
    pTVar1->Object = local_e0;
    local_e0 = (SListView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyListView).SharedReferenceCount,local_d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                      local_58.SharedReferenceCount.ReferenceController._0_4_));
  if (pTVar1->Object == (SListView<UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SListView<UObject_*>,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pSVar2 = pTVar1->Object;
  local_c8 = HandleOnEntryInitializedInternal;
  uStack_bc = local_58.SharedReferenceCount.ReferenceController._4_4_;
  uStack_c0 = 0;
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_f0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__AEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
    puVar7[4] = local_c8;
    puVar7[5] = CONCAT44(uStack_bc,uStack_c0);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=(&pSVar2->OnEntryInitialized,
            (TDelegate<void___cdecl(UObject_*,TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_c8);
  if ((local_f0.DelegateSize != 0) &&
     (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f0,0,0,0x10);
    local_f0.DelegateSize = 0;
  }
  if (local_b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_bc,uStack_c0),
               (FDestructionSentinel *)&local_c8);
  }
  if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  if (pTVar1->Object == (SListView<UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SListView<UObject_*>,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->MyListView).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SListView<UObject_*> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SListView<UObject_*>,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// SetListItems<UObject_*,TSizedDefaultAllocator<32>_> @ 14697fcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListView::SetListItems<UObject_*,TSizedDefaultAllocator<32>_>
          (UListView *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FSlateApplication *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  UObject *local_48;
  void *local_40;
  undefined8 local_38;
  
  ClearListItems(this);
  uVar4 = param_1->ArrayNum;
  pTVar2 = &this->ListItems;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->ListItems).ArrayMax;
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar2->AllocatorInstance,(this->ListItems).ArrayNum,piVar1);
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar3) break;
    pUVar6 = *(UObject **)pFVar12;
    if (pUVar6 != (UObject *)0x0) {
      local_48 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar7 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar10 = (this->ListItems).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ListItems).ArrayNum = iVar10 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48);
      }
    }
    pFVar12 = pFVar12 + 8;
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  (**(code **)(*(longlong *)this + 0x388))(this,pTVar2,&local_40);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
  }
  if (this->field_0x240 != '\0') {
    this->field_0x240 = 0;
    pFVar11 = FSlateApplication::Get();
    bVar9 = FSlateApplication::IsDragDropping(pFVar11);
    if (bVar9) {
      pFVar11 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar11);
    }
  }
  return;
}

// UListView @ 14698ade0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListView * __thiscall UListView::UListView(UListView *this,FVTableHelper *param_1)

{
  UListViewBase::UListViewBase((UListViewBase *)this,param_1);
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemClickedEvent = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UListView__6B_;
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnItemDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragDetectedEvent = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragEnterEvent = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragLeaveEvent = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragCancelledEvent = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemCanAcceptDropEvent = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemAcceptDropEvent = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemSelectionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemIsHoveredChangedEvent = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemScrolledIntoViewEvent = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnListViewScrolledEvent = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFinishedScrollingEvent = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemExpansionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnGetEntryClassForItemDelegate = 0;
  *(undefined8 *)&(this->OnGetEntryClassForItemDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetEntryClassForItemDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnIsItemSelectableOrNavigableDelegate = 0;
  *(undefined8 *)&(this->OnIsItemSelectableOrNavigableDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnIsItemSelectableOrNavigableDelegate).field_0x10 = 0;
  FTableViewStyle::FTableViewStyle(&this->WidgetStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  this->bEnableShadowBrush = false;
  FScrollBoxStyle::FScrollBoxStyle(&this->ShadowBrushStyle);
  this->SelectionMode = '\x01';
  this->ConsumeMouseWheel = WhenScrollingPossible;
  this->bClearSelectionOnClick = false;
  this->bIsFocusable = true;
  this->bClearScrollVelocityOnSelection = true;
  this->bReturnFocusToSelection = false;
  this->ScrollIntoViewAlignment = CenterAligned;
  (this->ListItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListItems).ArrayNum = 0;
  (this->ListItems).ArrayMax = 0;
  (this->MyListView).Object = (SListView<UObject_*> *)0x0;
  (this->MyListView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->HorizontalEntrySpacing = 0.0;
  this->VerticalEntrySpacing = 0.0;
  (this->ScrollBarPadding).Left = 0.0;
  (this->ScrollBarPadding).Top = 0.0;
  (this->ScrollBarPadding).Right = 0.0;
  (this->ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&this->BP_OnEntryInitialized = 0;
  *(undefined8 *)&(this->BP_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemClicked = 0;
  *(undefined8 *)&(this->BP_OnItemClicked).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemClicked).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDoubleClicked = 0;
  *(undefined8 *)&(this->BP_OnItemDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragDetected = 0;
  *(undefined8 *)&(this->BP_OnItemDragDetected).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragEnter = 0;
  *(undefined8 *)&(this->BP_OnItemDragEnter).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragLeave = 0;
  *(undefined8 *)&(this->BP_OnItemDragLeave).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemAcceptDrop = 0;
  *(undefined8 *)&(this->BP_OnItemAcceptDrop).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragCancelled = 0;
  *(undefined8 *)&(this->BP_OnItemDragCancelled).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragCancelled).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewDraggingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnListViewDraggingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewDraggingStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemIsHoveredChanged = 0;
  *(undefined8 *)&(this->BP_OnItemIsHoveredChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemIsHoveredChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemSelectionChanged = 0;
  *(undefined8 *)&(this->BP_OnItemSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->BP_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewScrolled = 0;
  *(undefined8 *)&(this->BP_OnListViewScrolled).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewFinishedScrolling = 0;
  *(undefined8 *)&(this->BP_OnListViewFinishedScrolling).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnIsItemSelectableOrNavigable = 0;
  *(undefined8 *)&(this->BP_OnIsItemSelectableOrNavigable).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnIsItemSelectableOrNavigable).field_0x10 = 0;
  return this;
}

// UListView @ 14698b1d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListView * __thiscall UListView::UListView(UListView *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UListViewBase::UListViewBase((UListViewBase *)this,param_1);
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemClickedEvent = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UListView__6B_;
  *(undefined8 *)&(this->OnItemClickedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnItemDoubleClickedEvent = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDoubleClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragDetectedEvent = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragDetectedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragEnterEvent = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragEnterEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragLeaveEvent = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragLeaveEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemDragCancelledEvent = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemDragCancelledEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemCanAcceptDropEvent = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemCanAcceptDropEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemAcceptDropEvent = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemAcceptDropEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemSelectionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemSelectionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemIsHoveredChangedEvent = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemIsHoveredChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemScrolledIntoViewEvent = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemScrolledIntoViewEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnListViewScrolledEvent = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnListViewScrolledEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnFinishedScrollingEvent = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnFinishedScrollingEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnItemExpansionChangedEvent = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnItemExpansionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnGetEntryClassForItemDelegate = 0;
  *(undefined8 *)&(this->OnGetEntryClassForItemDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetEntryClassForItemDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnIsItemSelectableOrNavigableDelegate = 0;
  *(undefined8 *)&(this->OnIsItemSelectableOrNavigableDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnIsItemSelectableOrNavigableDelegate).field_0x10 = 0;
  FTableViewStyle::FTableViewStyle(&this->WidgetStyle);
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  this->bEnableShadowBrush = false;
  FScrollBoxStyle::FScrollBoxStyle(&this->ShadowBrushStyle);
  this->Orientation = '\x01';
  this->SelectionMode = '\x01';
  this->ConsumeMouseWheel = WhenScrollingPossible;
  this->bClearSelectionOnClick = false;
  this->bIsFocusable = true;
  this->bClearScrollVelocityOnSelection = true;
  this->bReturnFocusToSelection = false;
  this->ScrollIntoViewAlignment = CenterAligned;
  (this->ListItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListItems).ArrayNum = 0;
  (this->ListItems).ArrayMax = 0;
  (this->MyListView).Object = (SListView<UObject_*> *)0x0;
  (this->MyListView).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->HorizontalEntrySpacing = 0.0;
  this->VerticalEntrySpacing = 0.0;
  (this->ScrollBarPadding).Left = 0.0;
  (this->ScrollBarPadding).Top = 0.0;
  (this->ScrollBarPadding).Right = 0.0;
  (this->ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&this->BP_OnEntryInitialized = 0;
  *(undefined8 *)&(this->BP_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemClicked = 0;
  *(undefined8 *)&(this->BP_OnItemClicked).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemClicked).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDoubleClicked = 0;
  *(undefined8 *)&(this->BP_OnItemDoubleClicked).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDoubleClicked).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragDetected = 0;
  *(undefined8 *)&(this->BP_OnItemDragDetected).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragEnter = 0;
  *(undefined8 *)&(this->BP_OnItemDragEnter).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragLeave = 0;
  *(undefined8 *)&(this->BP_OnItemDragLeave).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemAcceptDrop = 0;
  *(undefined8 *)&(this->BP_OnItemAcceptDrop).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemDragCancelled = 0;
  *(undefined8 *)&(this->BP_OnItemDragCancelled).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemDragCancelled).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewDraggingStateChanged = 0;
  *(undefined8 *)&(this->BP_OnListViewDraggingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewDraggingStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemIsHoveredChanged = 0;
  *(undefined8 *)&(this->BP_OnItemIsHoveredChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemIsHoveredChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemSelectionChanged = 0;
  *(undefined8 *)&(this->BP_OnItemSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->BP_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewScrolled = 0;
  *(undefined8 *)&(this->BP_OnListViewScrolled).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnListViewFinishedScrolling = 0;
  *(undefined8 *)&(this->BP_OnListViewFinishedScrolling).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnListViewFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->BP_OnIsItemSelectableOrNavigable = 0;
  *(undefined8 *)&(this->BP_OnIsItemSelectableOrNavigable).field_0x8 = 0;
  *(undefined8 *)&(this->BP_OnIsItemSelectableOrNavigable).field_0x10 = 0;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSlateBrush::operator=
            (&(this->WidgetStyle).BackgroundBrush,&(pFVar1->Runtime).ListViewStyle.BackgroundBrush);
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->ScrollBarStyle,&(pFVar1->Runtime).ScrollBarStyle);
  return this;
}

// ~UListView @ 146993160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::~UListView(UListView *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UListView__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnIsItemSelectableOrNavigable);
  pvVar1 = *(void **)&(this->BP_OnListViewFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnListViewFinishedScrolling);
  pvVar1 = *(void **)&(this->BP_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnListViewScrolled);
  pvVar1 = *(void **)&(this->BP_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->BP_OnItemSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemSelectionChanged);
  pvVar1 = *(void **)&(this->BP_OnItemIsHoveredChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemIsHoveredChanged);
  pvVar1 = *(void **)&(this->BP_OnListViewDraggingStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnListViewDraggingStateChanged);
  pvVar1 = *(void **)&(this->BP_OnItemDragCancelled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemDragCancelled);
  pvVar1 = *(void **)&(this->BP_OnItemAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemAcceptDrop);
  pvVar1 = *(void **)&(this->BP_OnItemDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemDragLeave);
  pvVar1 = *(void **)&(this->BP_OnItemDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemDragEnter);
  pvVar1 = *(void **)&(this->BP_OnItemDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemDragDetected);
  pvVar1 = *(void **)&(this->BP_OnItemDoubleClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemDoubleClicked);
  pvVar1 = *(void **)&(this->BP_OnItemClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnItemClicked);
  pvVar1 = *(void **)&(this->BP_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BP_OnEntryInitialized);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyListView).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ListItems).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FScrollBoxStyle::~FScrollBoxStyle(&this->ShadowBrushStyle);
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  FTableViewStyle::~FTableViewStyle(&this->WidgetStyle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnIsItemSelectableOrNavigableDelegate);
  pvVar1 = *(void **)&(this->OnIsItemSelectableOrNavigableDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnIsItemSelectableOrNavigableDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetEntryClassForItemDelegate);
  pvVar1 = *(void **)&(this->OnGetEntryClassForItemDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetEntryClassForItemDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemExpansionChangedEvent).field_0x8,
             *(int *)&(this->OnItemExpansionChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemExpansionChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemExpansionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFinishedScrollingEvent).field_0x8,
             *(int *)&(this->OnFinishedScrollingEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnFinishedScrollingEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFinishedScrollingEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnListViewScrolledEvent).field_0x8,
             *(int *)&(this->OnListViewScrolledEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnListViewScrolledEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnListViewScrolledEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemScrolledIntoViewEvent).field_0x8,
             *(int *)&(this->OnItemScrolledIntoViewEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemScrolledIntoViewEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemScrolledIntoViewEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemIsHoveredChangedEvent).field_0x8,
             *(int *)&(this->OnItemIsHoveredChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemIsHoveredChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemIsHoveredChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemSelectionChangedEvent).field_0x8,
             *(int *)&(this->OnItemSelectionChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemSelectionChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemSelectionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemAcceptDropEvent).field_0x8,
             *(int *)&(this->OnItemAcceptDropEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemAcceptDropEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemAcceptDropEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemCanAcceptDropEvent).field_0x8,
             *(int *)&(this->OnItemCanAcceptDropEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemCanAcceptDropEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemCanAcceptDropEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemDragCancelledEvent).field_0x8,
             *(int *)&(this->OnItemDragCancelledEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemDragCancelledEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemDragCancelledEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemDragLeaveEvent).field_0x8,
             *(int *)&(this->OnItemDragLeaveEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemDragLeaveEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemDragLeaveEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemDragEnterEvent).field_0x8,
             *(int *)&(this->OnItemDragEnterEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemDragEnterEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemDragEnterEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemDragDetectedEvent).field_0x8,
             *(int *)&(this->OnItemDragDetectedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemDragDetectedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemDragDetectedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemDoubleClickedEvent).field_0x8,
             *(int *)&(this->OnItemDoubleClickedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemDoubleClickedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemDoubleClickedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnItemClickedEvent).field_0x8,*(int *)&(this->OnItemClickedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnItemClickedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnItemClickedEvent);
  UListViewBase::~UListViewBase((UListViewBase *)this);
  return;
}

// AddItem @ 1469a2400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UListView::AddItem(UListView *this,UObject *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FName local_res18 [2];
  UObject *local_48;
  ForAnyElementType local_40;
  undefined4 local_38;
  int local_34;
  void *local_30;
  undefined8 local_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"NullListViewItem");
    FFrame::KismetExecutionMessage(L"Cannot add null item into ListView.",Warning,*pFVar7);
    return;
  }
  pTVar2 = &this->ListItems;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar8 + (longlong)(this->ListItems).ArrayNum * 8;
  for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 8) {
    if ((*(UObject **)pFVar8 != (UObject *)0x0) && (*(UObject **)pFVar8 == param_1)) {
      pFVar7 = ::FName::FName(local_res18,"DuplicateListViewItem");
      FFrame::KismetExecutionMessage(L"Cannot add duplicate item into ListView.",Warning,*pFVar7);
      return;
    }
  }
  local_48 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->ListItems).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->ListItems).ArrayNum;
  piVar1 = &(this->ListItems).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ListItems).ArrayNum = iVar6 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  local_38 = 1;
  local_40.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_40,1,&local_34);
  *(UObject **)local_40.Data = param_1;
  local_30 = (void *)0x0;
  local_28 = 0;
  (**(code **)(*(longlong *)this + 0x388))(this,&local_40,&local_30);
  UListViewBase::RequestRefresh((UListViewBase *)this);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// BP_CancelScrollIntoView @ 1469a2c20

void __thiscall UListView::BP_CancelScrollIntoView(UListView *this)

{
  SListView<UObject_*> *pSVar1;
  
  pSVar1 = (this->MyListView).Object;
  if (pSVar1 != (SListView<UObject_*> *)0x0) {
    pSVar1->UserRequestingScrollIntoView = 0;
    pSVar1->bNavigateOnScrollIntoView = false;
    pSVar1->ItemToScrollIntoView = (UObject *)0x0;
  }
  return;
}

// BP_ClearSelection @ 1469a2c50

void __thiscall UListView::BP_ClearSelection(UListView *this)

{
  SListView<UObject_*> *this_00;
  
  this_00 = (SListView<UObject_*> *)(**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    SListView<UObject_*>::ClearSelection(this_00);
    return;
  }
  return;
}

// BP_GetNumItemsSelected @ 1469a2d80

int __thiscall UListView::BP_GetNumItemsSelected(UListView *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x820) - *(int *)(lVar1 + 0x84c);
  }
  return 0;
}

// BP_GetSelectedItem @ 1469a2dc0

UObject * __thiscall UListView::BP_GetSelectedItem(UListView *this)

{
  UObject *pUVar1;
  longlong lVar2;
  undefined8 *local_18;
  int local_10;
  
  lVar2 = (**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x598) + 0xd0))((longlong *)(lVar2 + 0x598),&local_18);
    if (0 < local_10) {
      pUVar1 = (UObject *)*local_18;
      FMemory::Free(local_18);
      return pUVar1;
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return (UObject *)0x0;
}

// BP_GetSelectedItems @ 1469a2e30

bool __thiscall
UListView::BP_GetSelectedItems
          (UListView *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  SListView<UObject_*> *this_00;
  
  this_00 = (SListView<UObject_*> *)(**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    iVar1 = SListView<UObject_*>::GetSelectedItems(this_00,param_1);
    return 0 < iVar1;
  }
  return false;
}

// BP_IsItemVisible @ 1469a2e80

bool __thiscall UListView::BP_IsItemVisible(UListView *this,UObject *param_1)

{
  longlong lVar1;
  TSharedRef<ITableRow,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITableRow *pIVar4;
  
  lVar1 = (**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (lVar1 == 0) {
    return false;
  }
  pTVar2 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)(lVar1 + 0x5a8),param_1);
  if (pTVar2 == (TSharedRef<ITableRow,1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pIVar4 = (ITableRow *)0x0;
  }
  else {
    pTVar3 = (pTVar2->SharedReferenceCount).ReferenceController;
    pIVar4 = pTVar2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pIVar4 != (ITableRow *)0x0;
}

// BP_NavigateToItem @ 1469a2f00

void __thiscall UListView::BP_NavigateToItem(UListView *this,UObject *param_1)

{
  UObject *local_res10 [3];
  
  if (param_1 != (UObject *)0x0) {
    local_res10[0] = param_1;
    ITypedUMGListView<UObject_*>::RequestNavigateToItem
              ((ITypedUMGListView<UObject_*> *)&this->field_0x348,local_res10);
  }
  return;
}

// BP_ScrollItemIntoView @ 1469a2f30

void __thiscall UListView::BP_ScrollItemIntoView(UListView *this,UObject *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  STableViewBase *this_00;
  
  if (param_1 != (UObject *)0x0) {
    puVar1 = &this->field_0x348;
    this_00 = (STableViewBase *)(**(code **)(*(longlong *)puVar1 + 0x88))(puVar1);
    if (this_00 != (STableViewBase *)0x0) {
      fVar2 = (float)(**(code **)(*(longlong *)puVar1 + 0x90))(puVar1);
      *(UObject **)&this_00[1].bStartedTouchInteraction = param_1;
      this_00[1].PressedScreenSpacePosition.field0_0x0._s_0.X = fVar2;
      STableViewBase::RequestLayoutRefresh(this_00);
    }
  }
  return;
}

// BP_SetItemSelection @ 1469a2fa0

void __thiscall UListView::BP_SetItemSelection(UListView *this,UObject *param_1,bool param_2)

{
  longlong lVar1;
  Type *pTVar2;
  undefined7 in_register_00000081;
  
  lVar1 = (**(code **)(*(longlong *)&this->field_0x348 + 0x88))
                    (&this->field_0x348,param_1,CONCAT71(in_register_00000081,param_2));
  if (lVar1 != 0) {
    pTVar2 = TAttribute<enum_ESelectionMode::Type>::Get((void *)(lVar1 + 1000));
    if (*pTVar2 != None) {
      (**(code **)(*(longlong *)(lVar1 + 0x598) + 0x28))(lVar1 + 0x598,param_1,param_2,0);
      (**(code **)(*(longlong *)(lVar1 + 0x598) + 0x40))(lVar1 + 0x598,3);
    }
  }
  return;
}

// BP_SetListItems @ 1469a3030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UListView::BP_SetListItems(UListView *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FSlateApplication *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackX_8 [8];
  UObject *pUStack_48;
  void *pvStack_40;
  undefined8 uStack_38;
  
  ClearListItems(this);
  uVar4 = param_1->ArrayNum;
  pTVar2 = &this->ListItems;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->ListItems).ArrayMax;
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar2->AllocatorInstance,(this->ListItems).ArrayNum,piVar1);
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar5 = param_1->ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar12 == pFVar3) break;
    pUVar6 = *(UObject **)pFVar12;
    if (pUVar6 != (UObject *)0x0) {
      pUStack_48 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&pUStack_48) &&
         ((FScriptContainerElement *)&pUStack_48 < pFVar7 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar10 = (this->ListItems).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ListItems).ArrayNum = iVar10 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = pUStack_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStack_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStack_48);
      }
    }
    pFVar12 = pFVar12 + 8;
  }
  pvStack_40 = (void *)0x0;
  uStack_38 = 0;
  (**(code **)(*(longlong *)this + 0x388))(this,pTVar2,&pvStack_40);
  if (pvStack_40 != (void *)0x0) {
    FMemory::Free(pvStack_40);
  }
  if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
  }
  if (this->field_0x240 != '\0') {
    this->field_0x240 = 0;
    pFVar11 = FSlateApplication::Get();
    bVar9 = FSlateApplication::IsDragDropping(pFVar11);
    if (bVar9) {
      pFVar11 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar11);
    }
  }
  return;
}

// BP_SetSelectedItem @ 1469a3040

void __thiscall UListView::BP_SetSelectedItem(UListView *this,UObject *param_1)

{
  SListView<UObject_*> *this_00;
  UObject *local_res8 [4];
  TOptional<UObject_*> local_18;
  
  this_00 = (this->MyListView).Object;
  if (this_00 != (SListView<UObject_*> *)0x0) {
    local_res8[0] = param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&local_18,local_res8);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this_00,local_18.TypedValue,Direct);
      return;
    }
  }
  return;
}

// ClearListItems @ 1469a6580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::ClearListItems(UListView *this)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FSlateApplication *pFVar3;
  longlong lVar4;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  void *local_18;
  undefined8 local_10;
  
  local_20 = (this->ListItems).ArrayNum;
  lVar4 = (longlong)local_20;
  _Src = (this->ListItems).AllocatorInstance.Data;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,lVar4 << 3);
  }
  piVar1 = &(this->ListItems).ArrayMax;
  (this->ListItems).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ListItems).AllocatorInstance,0,piVar1);
  }
  (**(code **)(*(longlong *)this + 0x388))(this,&local_18,&local_28);
  if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
  }
  if (this->field_0x240 != '\0') {
    this->field_0x240 = 0;
    pFVar3 = FSlateApplication::Get();
    bVar2 = FSlateApplication::IsDragDropping(pFVar3);
    if (bVar2) {
      pFVar3 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar3);
    }
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// GetDefaultEntryClass @ 1469cf1f0

TSubclassOf<UUserWidget> __thiscall UListView::GetDefaultEntryClass(UListView *this)

{
  UObject *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = *(UObject **)&this[-1].BP_OnItemClicked;
  *(UObject **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TSubclassOf<UUserWidget>)in_RDX.field0_0x0;
}

// GetDesiredEntryPadding @ 1469cfb00

/* WARNING: Type propagation algorithm not settling */

FMargin * __thiscall
UListView::GetDesiredEntryPadding(UListView *this,FMargin *__return_storage_ptr__,UObject *param_1)

{
  uchar uVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  FMargin *pFVar5;
  
  if (0 < (int)(this->ScrollBarStyle).DraggedThumbImage.UVRegion.Max.field0_0x0._s_0.X) {
    if (((int)(this->ScrollBarStyle).DraggedThumbImage.UVRegion.Max.field0_0x0._s_0.X < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMargin *)(*pcVar3)();
      return pFVar5;
    }
    pUVar2 = *(UObject **)(this->ScrollBarStyle).DraggedThumbImage.UVRegion.Min.field0_0x0;
    if (pUVar2 == (UObject *)0x0) {
      bVar4 = param_1 == (UObject *)0x0;
    }
    else {
      bVar4 = pUVar2 == param_1;
    }
    if (!bVar4) {
      uVar1 = (this->ScrollBarStyle).DraggedThumbImage.OutlineSettings.RoundingType.Value;
      __return_storage_ptr__->Right = 0.0;
      __return_storage_ptr__->Bottom = 0.0;
      if (uVar1 == '\0') {
        __return_storage_ptr__->Left =
             *(float *)&(this->ScrollBarStyle).DraggedThumbImage.ResourceHandle.Data.
                        SharedReferenceCount.ReferenceController;
        __return_storage_ptr__->Top = 0.0;
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->Top =
           *(float *)((longlong)
                      &(this->ScrollBarStyle).DraggedThumbImage.ResourceHandle.Data.
                       SharedReferenceCount.ReferenceController + 4);
      __return_storage_ptr__->Left = 0.0;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  return __return_storage_ptr__;
}

// GetIndexForItem @ 1469d1530

int __thiscall UListView::GetIndexForItem(UListView *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar1 = (this->ListItems).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->ListItems).ArrayNum * 8) {
      return -1;
    }
    if (*(UObject **)pFVar2 == (UObject *)0x0) {
      bVar3 = param_1 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
}

// GetItemAt @ 1469d1760

UObject * __thiscall UListView::GetItemAt(UListView *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ListItems).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ListItems).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UObject *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UObject **)((this->ListItems).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetListObjectFromEntry @ 1469d1bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __thiscall UListView::GetListObjectFromEntry(UListView *this,UUserWidget *param_1)

{
  TObjectPtr<UObject> TVar1;
  TObjectPtr<UObject>_u_0 *pTVar2;
  
  pTVar2 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                      ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UObject>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.field0_0x0 != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    return (UObject *)TVar1.field0_0x0;
  }
  return (UObject *)0x0;
}

// GetMyListView @ 1469d1f20

SListView<UObject_*> * __thiscall UListView::GetMyListView(UListView *this)

{
  return *(SListView<UObject_*> **)&(this->ScrollBarStyle).DraggedThumbImage.UVRegion.bIsValid;
}

// GetNumItems @ 1469d2010

int __thiscall UListView::GetNumItems(UListView *this)

{
  return (this->ListItems).ArrayNum;
}

// GetOwningUserIndex @ 1469d34e0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UListView::GetOwningUserIndex(UListView *this)

{
  uint uVar1;
  longlong lVar2;
  FSlateApplication *this_00;
  uint uVar3;
  
  lVar2 = (*(code *)this[-1].ShadowBrushStyle.BottomShadowBrush.ResourceHandle.Data.Object[0x5c].
                    Proxy)();
  if (lVar2 == 0) {
    return 0;
  }
  this_00 = FSlateApplication::Get();
  uVar1 = FSlateApplication::GetUserIndexForController(this_00,*(int *)(lVar2 + 0xf0));
  uVar3 = 0;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  return uVar3;
}

// GetPrivateStaticClass @ 1469d4630

UClass * __cdecl UListView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ListView",&Z_Registration_Info_UClass_UListView.InnerSingleton,
               StaticRegisterNativesUListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UListView>,InternalVTableHelperCtorCaller<UListView>,local_res8,
               UListViewBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UListView.InnerSingleton;
}

// GetShadowBrushStyle @ 1469d8530

FScrollBoxStyle * __thiscall UListView::GetShadowBrushStyle(UListView *this)

{
  return &this->ShadowBrushStyle;
}

// HandleListEntryAcceptDrop @ 1469dc390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UListView::HandleListEntryAcceptDrop
          (UListView *this,FReply *__return_storage_ptr__,FDragDropEvent *param_1,
          EItemDropZone param_2,UUserWidget *param_3)

{
  TObjectPtr<UDragDropOperation>_u_0 TVar1;
  bool bVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_01;
  EItemDropZone local_res8;
  undefined1 local_resc;
  TSharedPtr<FUMGDragDropOp,1> local_f8;
  TObjectPtr<UObject>_u_0 local_e8;
  EUMGItemDropZone local_e0;
  TObjectPtr<UDragDropOperation>_u_0 local_d8;
  FReply local_d0;
  
  this->field_0x240 = 0;
  local_res8 = local_res8 & 0xffffff00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->BP_OnListViewDraggingStateChanged,&local_res8);
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_1,&local_f8);
  pTVar3 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                      ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_3)->field0_0x0;
  if (local_f8.Object == (FUMGDragDropOp *)0x0) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    if (pTVar3 != (TObjectPtr<UObject>_u_0 *)0x0) {
      TVar1 = ((local_f8.Object)->DragOperation).field0_0x0;
      local_resc = 1;
      local_res8 = param_2;
      local_e0 = UDragDropOperation::ConvertSlateDropZoneToUMG
                           ((TOptional<EItemDropZone>)&local_res8);
      local_e8.DebugPtr = *(UObject **)pTVar3;
      local_d8 = TVar1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnItemAcceptDrop,
                 &local_e8);
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(*(longlong *)&this->field_0x348 + 0x18))(&this->field_0x348);
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
      if (bVar2) {
        this_01 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                  (**(code **)(*(longlong *)&this->field_0x348 + 0x18))(&this->field_0x348);
        TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                  (this_01,pTVar3->DebugPtr);
      }
    }
    FReply::FReply(&local_d0,true);
    local_d0.bEndDragDrop = 1;
    FReply::FReply(__return_storage_ptr__,&local_d0);
    FReply::~FReply(&local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleListEntryCanAcceptDrop @ 1469dc520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
UListView::HandleListEntryCanAcceptDrop
          (UListView *this,FDragDropEvent *param_1,EItemDropZone param_2,UUserWidget *param_3)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TObjectPtr<UObject>_u_0 *pTVar2;
  TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this_01;
  undefined1 *this_02;
  undefined4 in_register_00000084;
  UUserWidget *in_stack_00000028;
  TSharedPtr<FUMGDragDropOp,1> local_18;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>
            ((FDragDropEvent *)CONCAT44(in_register_00000084,param_2),&local_18);
  if (local_18.Object == (FUMGDragDropOp *)0x0) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  else {
    this_02 = &this->field_0x348;
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)this_02 + 0x38))(this_02);
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
    if ((bVar1) &&
       (pTVar2 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                            ((ITypedUMGListView<UObject_*> *)this_02,in_stack_00000028)->field0_0x0,
       pTVar2 != (TObjectPtr<UObject>_u_0 *)0x0)) {
      this_01 = (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
                (**(code **)(*(longlong *)this_02 + 0x38))(this_02);
      TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::Broadcast
                (this_01,pTVar2->DebugPtr,true);
    }
    *(int *)&param_1->_padding_ = (int)param_3;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (TOptional<EItemDropZone>)param_1;
}

// HandleListEntryDragCancelled @ 1469dc5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UListView::HandleListEntryDragCancelled(UListView *this,FDragDropEvent *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar8;
  uint uVar9;
  longlong lVar10;
  FUMGDragDropOp *pFVar11;
  undefined1 local_res8 [8];
  TObjectPtr<UDragDropOperation>_u_0 local_res18;
  TSharedPtr<FUMGDragDropOp,1> local_58;
  FDestructionSentinel local_48;
  
  this->field_0x240 = 0;
  local_res8[0] = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->BP_OnListViewDraggingStateChanged,local_res8);
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_1,&local_58);
  pFVar11 = local_58.Object;
  if (local_58.Object != (FUMGDragDropOp *)0x0) {
    pTVar8 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(*(longlong *)&this->field_0x348 + 0x30))(&this->field_0x348);
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar8);
    if (bVar4) {
      pTVar8 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (**(code **)(*(longlong *)&this->field_0x348 + 0x30))(&this->field_0x348);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar8,
                 (FWriteAccessScope *)&local_48);
      pTVar8->InvocationListLockCount = pTVar8->InvocationListLockCount + 1;
      bVar4 = false;
      uVar9 = (pTVar8->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        bVar4 = false;
        do {
          uVar7 = 0;
          if ((int)uVar9 < (pTVar8->InvocationList).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (pTVar8->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
              (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
          pFVar11 = local_58.Object;
        } while (-1 < (int)uVar9);
      }
      pTVar8->InvocationListLockCount = pTVar8->InvocationListLockCount + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar8,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    if ((pFVar11 == (FUMGDragDropOp *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res18 = (pFVar11->DragOperation).field0_0x0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnItemDragCancelled
               ,&local_res18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// HandleListEntryDragDetected @ 1469dc7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDragDropOperation * __thiscall
UListView::HandleListEntryDragDetected
          (UListView *this,FGeometry *param_1,FPointerEvent *param_2,UUserWidget *param_3)

{
  TObjectPtr<UObject>_u_0 TVar1;
  bool bVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_01;
  UDragDropOperation *pUVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  TObjectPtr<UObject>_u_0 local_68;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this->field_0x210 != '\0') &&
     (pTVar3 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                          ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_3)->field0_0x0,
     pTVar3 != (TObjectPtr<UObject>_u_0 *)0x0)) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)&this->field_0x348 + 0x10))(&this->field_0x348);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
    if (bVar2) {
      this_01 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                (**(code **)(*(longlong *)&this->field_0x348 + 0x10))(&this->field_0x348);
      TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                (this_01,pTVar3->DebugPtr);
      TVar1.DebugPtr = *(UObject **)pTVar3;
      FGeometry::FGeometry(&local_60);
      local_68.DebugPtr = TVar1.DebugPtr;
      FGeometry::operator=(&local_60,param_1);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->BP_OnItemDragDetected,&local_68);
    }
    this->field_0x240 = 1;
    local_78[0] = 1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->BP_OnListViewDraggingStateChanged,local_78);
    pUVar4 = UListViewBase::CreateDragDropOperation((UListViewBase *)this,pTVar3->DebugPtr);
    return pUVar4;
  }
  return (UDragDropOperation *)0x0;
}

// HandleListEntryDragEnter @ 1469dc900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UListView::HandleListEntryDragEnter(UListView *this,FDragDropEvent *param_1,UUserWidget *param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_01;
  TSharedPtr<FUMGDragDropOp,1> local_28;
  TObjectPtr<UObject>_u_0 local_18;
  TObjectPtr<UDragDropOperation>_u_0 local_10;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_1,&local_28);
  if ((local_28.Object != (FUMGDragDropOp *)0x0) &&
     (pTVar3 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                          ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_2)->field0_0x0,
     pTVar3 != (TObjectPtr<UObject>_u_0 *)0x0)) {
    if ((local_28.Object == (FUMGDragDropOp *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18.DebugPtr = *(UObject **)pTVar3;
    local_10 = ((local_28.Object)->DragOperation).field0_0x0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnItemDragEnter,
               &local_18);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)&this->field_0x348 + 0x20))(&this->field_0x348);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
    if (bVar2) {
      this_01 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                (**(code **)(*(longlong *)&this->field_0x348 + 0x20))(&this->field_0x348);
      TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                (this_01,pTVar3->DebugPtr);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// HandleListEntryDragLeave @ 1469dca30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UListView::HandleListEntryDragLeave(UListView *this,FDragDropEvent *param_1,UUserWidget *param_2)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_01;
  TSharedPtr<FUMGDragDropOp,1> local_28;
  TObjectPtr<UObject>_u_0 local_18;
  TObjectPtr<UDragDropOperation>_u_0 local_10;
  
  FDragDropEvent::GetOperationAs<FUMGDragDropOp>(param_1,&local_28);
  if ((local_28.Object != (FUMGDragDropOp *)0x0) &&
     (pTVar3 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                          ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_2)->field0_0x0,
     pTVar3 != (TObjectPtr<UObject>_u_0 *)0x0)) {
    if ((local_28.Object == (FUMGDragDropOp *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18.DebugPtr = *(UObject **)pTVar3;
    local_10 = ((local_28.Object)->DragOperation).field0_0x0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnItemDragLeave,
               &local_18);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)&this->field_0x348 + 0x28))(&this->field_0x348);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
    if (bVar2) {
      this_01 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
                (**(code **)(*(longlong *)&this->field_0x348 + 0x28))(&this->field_0x348);
      TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast
                (this_01,pTVar3->DebugPtr);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// HandleListEntryHovered @ 1469dcb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UListView::HandleListEntryHovered(UListView *this,UUserWidget *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this_00;
  TObjectPtr<UObject>_u_0 local_18;
  undefined1 local_10;
  
  pTVar1 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                      ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<UObject>_u_0 *)0x0) {
    this_00 = (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)&this->field_0x348 + 0x40))(&this->field_0x348);
    TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::Broadcast
              (this_00,pTVar1->DebugPtr,true);
    local_18.DebugPtr = *(UObject **)pTVar1;
    local_10 = 1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->BP_OnItemIsHoveredChanged,&local_18);
  }
  return;
}

// HandleListEntryUnhovered @ 1469dcbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UListView::HandleListEntryUnhovered(UListView *this,UUserWidget *param_1)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this_00;
  TObjectPtr<UObject>_u_0 local_18;
  undefined1 local_10;
  
  pTVar1 = &ITypedUMGListView<UObject_*>::ItemFromEntryWidget
                      ((ITypedUMGListView<UObject_*> *)&this->field_0x348,param_1)->field0_0x0;
  if (pTVar1 != (TObjectPtr<UObject>_u_0 *)0x0) {
    this_00 = (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)&this->field_0x348 + 0x40))(&this->field_0x348);
    TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::Broadcast
              (this_00,pTVar1->DebugPtr,false);
    local_18.DebugPtr = *(UObject **)pTVar1;
    local_10 = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->BP_OnItemIsHoveredChanged,&local_18);
  }
  return;
}

// HandleOnEntryInitializedInternal @ 1469dcfb0

void __thiscall
UListView::HandleOnEntryInitializedInternal
          (UListView *this,UObject *param_1,TSharedRef<ITableRow,1> *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  UObject *local_res8;
  UObject *local_28;
  TReferenceControllerBase<1> *local_20;
  
  if (param_1 == (UObject *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    local_res8 = param_1;
    lVar1 = (**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
    if (lVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
      local_20 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      (**(code **)(*(longlong *)(lVar1 + 0x598) + 0xd8))
                ((longlong *)(lVar1 + 0x598),&local_28,&local_res8);
      puVar2 = (undefined1 *)0x0;
      puVar3 = &local_28[-0x13].field_0x8;
      if (local_28 == (UObject *)0x0) {
        puVar3 = puVar2;
      }
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      if (puVar3 != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x2b8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  local_28 = param_1;
  local_20 = (TReferenceControllerBase<1> *)puVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BP_OnEntryInitialized,
             &local_28);
  return;
}

// InitHorizontalEntrySpacing @ 1469dfd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::InitHorizontalEntrySpacing(UListView *this,float param_1)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  if (param_1 != this->HorizontalEntrySpacing) {
    this->HorizontalEntrySpacing = param_1;
    if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
    }
    if (this->field_0x240 != '\0') {
      this->field_0x240 = 0;
      pFVar2 = FSlateApplication::Get();
      bVar1 = FSlateApplication::IsDragDropping(pFVar2);
      if (bVar1) {
        pFVar2 = FSlateApplication::Get();
        FSlateApplication::CancelDragDrop(pFVar2);
        return;
      }
    }
  }
  return;
}

// InitVerticalEntrySpacing @ 1469e0230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::InitVerticalEntrySpacing(UListView *this,float param_1)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  if (param_1 != this->VerticalEntrySpacing) {
    this->VerticalEntrySpacing = param_1;
    if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
    }
    if (this->field_0x240 != '\0') {
      this->field_0x240 = 0;
      pFVar2 = FSlateApplication::Get();
      bVar1 = FSlateApplication::IsDragDropping(pFVar2);
      if (bVar1) {
        pFVar2 = FSlateApplication::Get();
        FSlateApplication::CancelDragDrop(pFVar2);
        return;
      }
    }
  }
  return;
}

// IsDesignerPreview @ 1469e1520

bool __thiscall UListView::IsDesignerPreview(UListView *this)

{
  return false;
}

// IsRefreshPending @ 1469e2830

bool __thiscall UListView::IsRefreshPending(UListView *this)

{
  SListView<UObject_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pSVar1 = (this->MyListView).Object;
  if (pSVar1 == (SListView<UObject_*> *)0x0) {
    return false;
  }
  if (*(char *)((longlong)&pSVar1->_padding_ + 2) == '\0') {
    if (pSVar1->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(char *)(pSVar1->_padding_ + 0x254) == '\0') {
      return false;
    }
  }
  return true;
}

// NavigateToIndex @ 1469e4630

void __thiscall UListView::NavigateToIndex(UListView *this,int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  UObject *pUVar3;
  SListView<UObject_*> *this_00;
  UObject *local_res8;
  TOptional<UObject_*> local_18;
  
  puVar1 = &this->field_0x348;
  pUVar3 = GetItemAt(this,param_1);
  this_00 = (SListView<UObject_*> *)(**(code **)(*(longlong *)puVar1 + 0x88))(puVar1);
  if (this_00 != (SListView<UObject_*> *)0x0) {
    uVar2 = (**(code **)(*(longlong *)puVar1 + 0x90))(puVar1);
    local_res8 = pUVar3;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&local_18,&local_res8);
    if (local_18.bIsSet != false) {
      this_00->ItemToScrollIntoView = local_18.TypedValue;
      this_00->bNavigateOnScrollIntoView = true;
      this_00->UserRequestingScrollIntoView = uVar2;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this_00);
    }
  }
  return;
}

// OnFinishedScrolling @ 1469e7e70

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnFinishedScrolling(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x188;
}

// OnGenerateEntryWidgetInternal @ 1469e7e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UListView::OnGenerateEntryWidgetInternal
          (UListView *this,UObject *param_1,TSubclassOf<UUserWidget> param_2,
          TSharedRef<STableViewBase,1> *param_3)

{
  FSlateResourceHandle *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UUserWidget *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  FSlateResourceHandle *local_28;
  TSharedRef<STableViewBase,1> *local_20;
  code *local_18;
  FSlateResourceHandle **local_10;
  
  pFVar1 = &this[-1].ShadowBrushStyle.BottomShadowBrush.ResourceHandle;
  pUVar7 = *(UObject **)param_2.Class.field0_0x0;
  local_28 = pFVar1;
  local_20 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
LAB_1469e7edd:
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1469e7f0d;
    }
  }
  else if (pUVar7 != (UObject *)0x0) goto LAB_1469e7edd;
  pUVar7 = (UObject *)0x0;
LAB_1469e7f0d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_10 = &local_28;
  local_res8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  pUVar6 = FUserWidgetPool::AddActiveWidgetInternal<UUserWidget>
                     ((FUserWidgetPool *)&this[-1].BP_OnItemDragLeave.field_0x10,
                      (TSubclassOf<UUserWidget>)&local_res8,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_18);
  if (pUVar6 == (UUserWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListEntryWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x2be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UUserWidget *)(*pcVar3)();
      return pUVar6;
    }
  }
  (*(code *)(pFVar1->Data).Object[0x6c].Proxy)(pFVar1,pUVar6);
  return pUVar6;
}

// OnGetEntryClassForItem @ 1469e8190

TDelegate<TSubclassOf<UUserWidget>___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnGetEntryClassForItem(UListView *this)

{
  return (TDelegate<TSubclassOf<UUserWidget>___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
         &this->field_0x1c8;
}

// OnIsItemSelectableOrNavigable @ 1469e81e0

TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnIsItemSelectableOrNavigable(UListView *this)

{
  return (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x1e0;
}

// OnIsSelectableOrNavigableInternal @ 1469e82c0

bool __thiscall UListView::OnIsSelectableOrNavigableInternal(UListView *this,UObject *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar4;
  atomic<unsigned___int64> aVar5;
  FReadAccessScope local_28;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &(this->ShadowBrushStyle).BottomShadowBrush.OutlineSettings.RoundingType);
  if (bVar1) {
    local_28.DestructionSentinel.Accessor._0_1_ = '\0';
    local_28.DestructionSentinel._0_8_ = param_1;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
               &(this->ShadowBrushStyle).BottomShadowBrush.OutlineSettings.RoundingType,&local_28);
    return (char)local_28.DestructionSentinel.Accessor != '\0';
  }
  pTVar4 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           (**(code **)(*(longlong *)this + 0x80))(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar4,&local_28);
  if ((*(int *)&pTVar4[2].AccessDetector.State != 0) &&
     (aVar5 = pTVar4[1].AccessDetector.State, aVar5 != (atomic<unsigned___int64>)0x0)) {
    cVar2 = (**(code **)(*(longlong *)aVar5 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar4 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (**(code **)(*(longlong *)this + 0x80))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar4,&local_28);
      if (*(int *)&pTVar4[2].AccessDetector.State == 0) {
        aVar5 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar5 = pTVar4[1].AccessDetector.State;
      }
      uVar3 = (**(code **)(*(longlong *)aVar5 + 0x60))(aVar5,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// OnItemAcceptDrop @ 1469e83d0

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemAcceptDrop(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0xe8
  ;
}

// OnItemCanAcceptDrop @ 1469e83e0

TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemCanAcceptDrop(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
         &this->field_0xc8;
}

// OnItemClicked @ 1469e83f0

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemClicked(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x8;
}

// OnItemClickedInternal @ 1469e8410

void __thiscall UListView::OnItemClickedInternal(UListView *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ShadowBrushStyle,
             local_res8);
  return;
}

// OnItemDoubleClicked @ 1469e85c0

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemDoubleClicked(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x28
  ;
}

// OnItemDoubleClickedInternal @ 1469e85e0

void __thiscall UListView::OnItemDoubleClickedInternal(UListView *this,UObject *param_1)

{
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->ShadowBrushStyle).TopShadowBrush.TintColor,local_res8);
  return;
}

// OnItemDragCancelled @ 1469e8610

TMulticastDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemDragCancelled(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *)
         &this->field_0xa8;
}

// OnItemDragDetected @ 1469e8620

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemDragDetected(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x48
  ;
}

// OnItemDragEnter @ 1469e8630

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemDragEnter(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x68
  ;
}

// OnItemDragLeave @ 1469e8640

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemDragLeave(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x88
  ;
}

// OnItemExpansionChanged @ 1469e8650

TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemExpansionChanged(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
         &this->field_0x1a8;
}

// OnItemIsHoveredChanged @ 1469e86a0

TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemIsHoveredChanged(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
         &this->field_0x128;
}

// OnItemScrolledIntoView @ 1469e86b0

TMulticastDelegate<void___cdecl(UObject_*,UUserWidget_&),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemScrolledIntoView(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*,UUserWidget_&),FDefaultDelegateUserPolicy> *)
         &this->field_0x148;
}

// OnItemScrolledIntoViewInternal @ 1469e86d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UListView::OnItemScrolledIntoViewInternal(UListView *this,UObject *param_1,UUserWidget *param_2)

{
  UObject *local_18;
  UUserWidget *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->ShadowBrushStyle).BottomShadowBrush.Margin.Right,&local_18);
  return;
}

// OnItemSelectionChanged @ 1469e8db0

TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnItemSelectionChanged(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
         &this->field_0x108;
}

// OnItemsChanged @ 1469e8dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UListView::OnItemsChanged
          (UListView *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  UObjectBase *pUVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  UClass *pUVar11;
  char *pcVar12;
  UObject *pUVar13;
  UFunction *pUVar14;
  UClass *pUVar15;
  UListView *pUVar16;
  FScriptContainerElement *pFVar17;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FWeakObjectPtr local_140;
  FName local_138;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FWeakObjectPtr local_128;
  FName local_120;
  undefined8 local_118;
  FName local_110;
  FScriptContainerElement *local_108;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_100;
  FName local_e8;
  UListView *local_e0;
  FName *local_d8;
  FName local_d0;
  FName local_c8 [2];
  code *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  code *local_a8;
  longlong lStack_a0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  pFVar19 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_108 = pFVar19 + (longlong)iVar2 * 8;
  pFVar17 = local_108;
  local_res18 = param_2;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar19 == pFVar17) {
        pFVar17 = (local_res18->AllocatorInstance).Data;
        iVar2 = local_res18->ArrayNum;
        pFVar19 = pFVar17 + (longlong)iVar2 * 8;
        pTVar18 = local_res18;
        while( true ) {
          if (pTVar18->ArrayNum != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar17 == pFVar19) break;
          pUVar4 = *(UObjectBase **)pFVar17;
          if (pUVar4 != (UObjectBase *)0x0) {
            pUVar11 = Z_Construct_UClass_AActor_NoRegister();
            pUVar15 = (pUVar4->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
            iVar3 = (int)pUVar11->_padding_;
            if ((iVar3 <= (int)pUVar15->_padding_) &&
               ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar3 * 8) ==
                &pUVar11->_padding_)) {
              pcVar12 = strstr("&UListView::OnListItemEndPlayed","::");
              pcVar7 = (char *)0x0;
              while (pcVar6 = pcVar12, pcVar6 != (char *)0x0) {
                pcVar12 = strstr(pcVar6 + 1,"::");
                pcVar7 = pcVar6;
              }
              if (((pcVar7 == (char *)0x0) || (pcVar7[2] == '0')) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Result && Result[2] != \'0\'",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                                      ,0x1da,L"\'%hs\' does not look like a member function"),
                 bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              ::FName::FName(local_c8,pcVar7 + 2);
              FVar8 = local_c8[0];
              if ((this == (UListView *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InUserObject != nullptr && InMethodPtr != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                                      ,0x1a1,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar18 = local_res18;
              if (*(char *)((longlong)&pUVar4[0xd].InternalIndex + 3) != '\0') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) <
                     `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                     ::__l2::_thread_safe_static_guard_0__) &&
                   (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                         ::__l2::_thread_safe_static_guard_0__),
                   `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                   ::__l2::_thread_safe_static_guard_0__ == -1)) {
                  ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                  ::__l2::DelegateFName,"OnEndPlay");
                  _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                       ::__l2::_thread_safe_static_guard_0__);
                }
                FVar9 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName;
                bVar10 = UObjectBase::IsValidLowLevelFast(pUVar4,false);
                if ((!bVar10) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("DelegateOwner->IsValidLowLevelFast(false)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                                        ,0xd7,L""), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                bVar10 = FSparseDelegateStorage::Remove
                                   ((UObject *)pUVar4,FVar9,(UObject *)this,FVar8);
                *(bool *)((longlong)&pUVar4[0xd].InternalIndex + 3) = bVar10;
                pTVar18 = local_res18;
              }
            }
          }
          pFVar17 = pFVar17 + 8;
        }
        return;
      }
      pUVar4 = *(UObjectBase **)pFVar19;
      if (pUVar4 != (UObjectBase *)0x0) break;
LAB_1469e90ff:
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar4,pUVar15);
      if (pUVar13 != (UObject *)0x0) {
        pcVar12 = strstr("&UListView::OnListItemOuterEndPlayed","::");
        pcVar7 = (char *)0x0;
        while (pcVar6 = pcVar12, pcVar6 != (char *)0x0) {
          pcVar12 = strstr(pcVar6 + 1,"::");
          pcVar7 = pcVar6;
        }
        if (((pcVar7 == (char *)0x0) || (pcVar7[2] == '0')) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result && Result[2] != \'0\'",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                                ,0x1da,L"\'%hs\' does not look like a member function"), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FName::FName(&local_d0,pcVar7 + 2);
        local_b8 = OnListItemOuterEndPlayed;
        uStack_b0 = 0;
        lStack_a0 = (ulonglong)uStack_ac << 0x20;
        local_a8 = OnListItemOuterEndPlayed;
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::__Internal_AddUniqueDynamic<UListView>
                  ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                    *)&pUVar13[0xd].field_0xf,this,(pmf_e3e975d4 *)&local_a8,local_d0);
        pFVar17 = local_108;
      }
      pFVar19 = pFVar19 + 8;
    }
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    pUVar15 = (pUVar4->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar3 = (int)pUVar11->_padding_;
    if (((int)pUVar15->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar11->_padding_)) goto LAB_1469e90ff;
    pcVar12 = strstr("&UListView::OnListItemEndPlayed","::");
    pcVar7 = (char *)0x0;
    while (pcVar6 = pcVar12, pcVar6 != (char *)0x0) {
      pcVar12 = strstr(pcVar6 + 1,"::");
      pcVar7 = pcVar6;
    }
    if (((pcVar7 == (char *)0x0) || (pcVar7[2] == '0')) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Result && Result[2] != \'0\'",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                            ,0x1da,L"\'%hs\' does not look like a member function"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FName::FName(&local_e8,pcVar7 + 2);
    FVar8 = local_e8;
    if ((this == (UListView *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                            ,0x173,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_110 = FVar8;
    local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_140.ObjectIndex = 0;
    local_140.ObjectSerialNumber = 0;
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    pUVar16 = this;
    if ((this == (UListView *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && InMethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                            ,0x46d,L""), pUVar16 = (UListView *)0x0, bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_e0 = pUVar16;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    FWeakObjectPtr::operator=(&local_140,(FObjectPtr)&local_e0);
    local_138 = local_110;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_148,&local_98)
    ;
    local_118 = 0;
    if ((local_138 == (FName)0x0) ||
       (pUVar13 = FWeakObjectPtr::Get(&local_140), pUVar13 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
LAB_1469e8fd0:
      local_d8 = &local_110;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,AActor_*,enum_EEndPlayReason::Type>::
      __Internal_BindDynamic<UListView>'::__l2::<lambda_1>::operator()(&local_d8);
    }
    else {
      pUVar14 = UObject::FindFunction(pUVar13,local_138);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      if (pUVar14 == (UFunction *)0x0) goto LAB_1469e8fd0;
    }
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_120.ComparisonIndex.Value = 0;
    local_120.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_148,&local_80)
    ;
    local_128 = local_140;
    local_120 = local_138;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    bVar1 = *(byte *)((longlong)&pUVar4[0xd].InternalIndex + 3);
    local_100._padding_ = 0;
    local_100.Object.ObjectIndex = 0;
    local_100.Object.ObjectSerialNumber = 0;
    local_100.FunctionName.ComparisonIndex.Value = 0;
    local_100.FunctionName.Number = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_130,&local_68)
    ;
    local_100.Object = local_128;
    local_100.FunctionName = local_120;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar8 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar10 = UObjectBase::IsValidLowLevelFast(pUVar4,false);
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DelegateOwner->IsValidLowLevelFast(false)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                            ,0xd7,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar10 = FSparseDelegateStorage::Add((UObject *)pUVar4,FVar8,&local_100);
    *(byte *)((longlong)&pUVar4[0xd].InternalIndex + 3) = bVar10 | bVar1;
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
    pFVar19 = pFVar19 + 8;
    pFVar17 = local_108;
  } while( true );
}

// OnListItemEndPlayed @ 1469eb8a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UListView::OnListItemEndPlayed(UListView *this,AActor *param_1,Type param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  AActor *pAVar5;
  FSlateApplication *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  AActor *pAStack_68;
  ForAnyElementType FStack_60;
  undefined4 uStack_58;
  int iStack_54;
  void *pvStack_50;
  undefined8 uStack_48;
  
  pAStack_68 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ListItems).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&pAStack_68) &&
      ((FScriptContainerElement *)&pAStack_68 < pFVar2 + (longlong)(this->ListItems).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ListItems).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->ListItems).AllocatorInstance.Data;
    bVar4 = *(AActor **)pFVar2 != pAStack_68;
    lVar9 = 0;
    pAVar5 = pAStack_68;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar4 == (*(AActor **)(pFVar2 + lVar9 * 8) != pAVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pAVar5 = pAStack_68;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < iVar1);
    (this->ListItems).ArrayNum = iVar10;
  }
  pvStack_50 = (void *)0x0;
  uStack_48 = 0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&FStack_60,1,&iStack_54);
  *(AActor **)FStack_60.Data = param_1;
  (**(code **)(*(longlong *)this + 0x388))(this,&pvStack_50,&FStack_60);
  if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
  }
  if (this->field_0x240 != '\0') {
    this->field_0x240 = 0;
    pFVar6 = FSlateApplication::Get();
    bVar4 = FSlateApplication::IsDragDropping(pFVar6);
    if (bVar4) {
      pFVar6 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar6);
    }
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  return;
}

// OnListItemOuterEndPlayed @ 1469eb8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UListView::OnListItemOuterEndPlayed(UListView *this,AActor *param_1,Type param_2)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = (this->ListItems).ArrayNum - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (longlong)(int)uVar4 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->ListItems).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(UObjectBaseUtility **)((this->ListItems).AllocatorInstance.Data + lVar5);
      bVar2 = UObjectBaseUtility::IsIn(this_00,(UObject *)param_1);
      if (bVar2) {
        RemoveItem(this,(UObject *)this_00);
      }
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  return;
}

// OnListViewFinishedScrollingInternal @ 1469eb9a0

void __thiscall UListView::OnListViewFinishedScrollingInternal(UListView *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->ShadowBrushStyle).BottomShadowBrush.OutlineSettings.Color,(void *)0x0);
  return;
}

// OnListViewScrolled @ 1469eb9c0

TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy> * __thiscall
UListView::OnListViewScrolled(UListView *this)

{
  return (TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy> *)
         &this->field_0x168;
}

// OnListViewScrolledInternal @ 1469eb9e0

void __thiscall UListView::OnListViewScrolledInternal(UListView *this,float param_1,float param_2)

{
  float local_res8;
  float local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             ((longlong)
              &(this->ShadowBrushStyle).BottomShadowBrush.OutlineSettings.CornerRadii.field0_0x0 + 8
             ),&local_res8);
  return;
}

// OnSelectionChangedInternal @ 1469f0320

void __thiscall UListView::OnSelectionChangedInternal(UListView *this,UObject *param_1)

{
  UObject *local_18;
  undefined1 local_10;
  
  local_10 = param_1 != (UObject *)0x0;
  local_18 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &(this->ShadowBrushStyle).BottomShadowBrush.TintColor.ColorUseRule,&local_18);
  return;
}

// PostLoad @ 1469f3fb0

void __thiscall UListView::PostLoad(UListView *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UListView **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// RebuildListWidget @ 1469f8ca0

TSharedRef<STableViewBase,1> * __thiscall
UListView::RebuildListWidget(UListView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SListView<UObject_*>,1> *pTVar2;
  TSharedRef<SListView<UObject_*>,1> local_18;
  
  pTVar2 = ConstructListView<SListView>(this,&local_18);
  __return_storage_ptr__->Object = (STableViewBase *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a800

void __thiscall UListView::ReleaseSlateResources(UListView *this,bool param_1)

{
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x338 != &local_28) {
    *(undefined8 *)&this->field_0x338 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x340,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  FUserWidgetPool::ResetPool((FUserWidgetPool *)&this->field_0x260);
  *(undefined4 *)&this->field_0x1e8 = 0;
  if (*(int *)&this->field_0x1ec < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->field_0x1e0,0,(int *)&this->field_0x1ec);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyListView != (TSharedPtr<SListView<UObject_*>,1> *)&local_18) {
    (this->MyListView).Object = (SListView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyListView).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RemoveItem @ 146a0c880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::RemoveItem(UListView *this,UObject *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FSlateApplication *pFVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  UObject *local_68;
  ForAnyElementType local_60;
  undefined4 local_58;
  int local_54;
  void *local_50;
  undefined8 local_48;
  
  local_68 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->ListItems).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)(this->ListItems).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ListItems).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->ListItems).AllocatorInstance.Data;
    bVar4 = *(UObject **)pFVar2 != local_68;
    lVar9 = 0;
    pUVar5 = local_68;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar4 == (*(UObject **)(pFVar2 + lVar9 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_68;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < iVar1);
    (this->ListItems).ArrayNum = iVar10;
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_60,1,&local_54);
  *(UObject **)local_60.Data = param_1;
  (**(code **)(*(longlong *)this + 0x388))(this,&local_50,&local_60);
  if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
  }
  if (this->field_0x240 != '\0') {
    this->field_0x240 = 0;
    pFVar6 = FSlateApplication::Get();
    bVar4 = FSlateApplication::IsDragDropping(pFVar6);
    if (bVar4) {
      pFVar6 = FSlateApplication::Get();
      FSlateApplication::CancelDragDrop(pFVar6);
    }
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// ScrollIndexIntoView @ 146a0ec80

void __thiscall UListView::ScrollIndexIntoView(UListView *this,int param_1)

{
  float fVar1;
  UObject *pUVar2;
  STableViewBase *this_00;
  
  pUVar2 = GetItemAt(this,param_1);
  if ((pUVar2 != (UObject *)0x0) &&
     (this_00 = (STableViewBase *)
                (**(code **)(*(longlong *)&this->field_0x348 + 0x88))(&this->field_0x348),
     this_00 != (STableViewBase *)0x0)) {
    fVar1 = (float)(**(code **)(*(longlong *)&this->field_0x348 + 0x90))(&this->field_0x348);
    *(UObject **)&this_00[1].bStartedTouchInteraction = pUVar2;
    this_00[1].PressedScreenSpacePosition.field0_0x0._s_0.X = fVar1;
    STableViewBase::RequestLayoutRefresh(this_00);
  }
  return;
}

// SetHorizontalEntrySpacing @ 146a15510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::SetHorizontalEntrySpacing(UListView *this,float param_1)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  if (param_1 != this->HorizontalEntrySpacing) {
    this->HorizontalEntrySpacing = param_1;
    if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
    }
    if (this->field_0x240 != '\0') {
      this->field_0x240 = 0;
      pFVar2 = FSlateApplication::Get();
      bVar1 = FSlateApplication::IsDragDropping(pFVar2);
      if (bVar1) {
        pFVar2 = FSlateApplication::Get();
        FSlateApplication::CancelDragDrop(pFVar2);
        return;
      }
    }
  }
  return;
}

// SetScrollBarPadding @ 146a19e10

void __thiscall UListView::SetScrollBarPadding(UListView *this,FMargin *param_1)

{
  FMargin *pFVar1;
  SListView<UObject_*> *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_1->Top;
  fVar3 = param_1->Right;
  fVar4 = param_1->Bottom;
  pFVar1 = &this->ScrollBarPadding;
  this_00 = (this->MyListView).Object;
  pFVar1->Left = param_1->Left;
  pFVar1->Top = fVar2;
  (this->ScrollBarPadding).Right = fVar3;
  (this->ScrollBarPadding).Bottom = fVar4;
  if (this_00 != (SListView<UObject_*> *)0x0) {
    STableViewBase::SetScrollbarPadding((STableViewBase *)this_00,pFVar1);
    return;
  }
  return;
}

// SetScrollIntoViewAlignment @ 146a19eb0

void __thiscall
UListView::SetScrollIntoViewAlignment(UListView *this,EScrollIntoViewAlignment param_1)

{
  SListView<UObject_*> *pSVar1;
  
  pSVar1 = (this->MyListView).Object;
  this->ScrollIntoViewAlignment = param_1;
  if (pSVar1 != (SListView<UObject_*> *)0x0) {
    pSVar1->ScrollIntoViewAlignment = param_1;
  }
  return;
}

// SetSelectedIndex @ 146a1a6a0

void __thiscall UListView::SetSelectedIndex(UListView *this,int param_1)

{
  UObject *pUVar1;
  SListView<UObject_*> *this_00;
  UObject *local_res8;
  TOptional<UObject_*> local_18;
  
  pUVar1 = GetItemAt(this,param_1);
  this_00 = (SListView<UObject_*> *)
            (**(code **)(*(longlong *)&this->field_0x348 + 0x88))(&this->field_0x348);
  if (this_00 != (SListView<UObject_*> *)0x0) {
    local_res8 = pUVar1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&local_18,&local_res8);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this_00,local_18.TypedValue,Direct);
    }
  }
  return;
}

// SetSelectedItem @ 146a1a8a0

void __thiscall UListView::SetSelectedItem(UListView *this,UObject *param_1)

{
  SListView<UObject_*> *this_00;
  UObject *local_res8;
  TOptional<UObject_*> local_18;
  
  this_00 = (SListView<UObject_*> *)(**(code **)(*(longlong *)&this->field_0x348 + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    local_res8 = param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&local_18,&local_res8);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this_00,local_18.TypedValue,Direct);
    }
  }
  return;
}

// SetSelectionMode @ 146a1ab70

void __thiscall
UListView::SetSelectionMode(UListView *this,TEnumAsByte<ESelectionMode::Type> param_1)

{
  Type TVar1;
  SListView<UObject_*> *this_00;
  char cVar2;
  Type TVar3;
  Type *pTVar4;
  ForAnyElementType FVar5;
  undefined1 local_58 [28];
  int local_3c;
  undefined1 local_28 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this_00 = (this->MyListView).Object;
  (this->SelectionMode).Value = param_1.Value;
  if (this_00 == (SListView<UObject_*> *)0x0) {
    return;
  }
  local_28._0_4_ = ZEXT14(param_1.Value);
  local_10 = 0;
  local_28[4] = true;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get(&this_00->_padding_);
  TVar1 = *pTVar4;
  TAttribute<enum_ESelectionMode::Type>::operator=
            (&this_00->_padding_,(TAttribute<ESelectionMode::Type> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_20,(FReadAccessScope *)local_58);
  if ((((int)local_10 == 0) || (FStack_18.Data == (FScriptContainerElement *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_20,(FReadAccessScope *)local_58);
    FVar5.Data = (FScriptContainerElement *)0x0;
    if ((int)local_10 != 0) {
      FVar5.Data = FStack_18.Data;
    }
    TVar3 = (**(code **)(*(longlong *)FVar5.Data + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_58);
    local_28._0_4_ = TVar3;
  }
  if (TVar1 == local_28._0_4_) goto LAB_146a1ac8d;
  if (local_28._0_4_ != None) {
    if (TVar1 != Multi) goto LAB_146a1ac8d;
    if (*(int *)&(this_00->SelectedItems).Elements.field_0x8 -
        *(int *)&(this_00->SelectedItems).Elements.field_0x34 == 1) {
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      TIterator::TIterator((TIterator *)local_58,&this_00->SelectedItems);
      SListView<UObject_*>::SetSelection
                (this_00,*(UObject **)(*(longlong *)local_58._0_8_ + (longlong)local_3c * 0x10),
                 Direct);
      goto LAB_146a1ac8d;
    }
  }
  SListView<UObject_*>::ClearSelection(this_00);
LAB_146a1ac8d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)local_58);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_58[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_58._8_8_,(FDestructionSentinel *)local_58);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  return;
}

// SetShadowBrushStyle @ 146a1ad20

void __thiscall UListView::SetShadowBrushStyle(UListView *this,FScrollBoxStyle *param_1)

{
  FScrollBoxStyle::operator=(&this->ShadowBrushStyle,param_1);
  return;
}

// SetVerticalEntrySpacing @ 146a1d910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UListView::SetVerticalEntrySpacing(UListView *this,float param_1)

{
  bool bVar1;
  FSlateApplication *pFVar2;
  
  if (param_1 != this->VerticalEntrySpacing) {
    this->VerticalEntrySpacing = param_1;
    if (*(longlong **)&this->field_0x338 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field_0x338 + 0x248))();
    }
    if (this->field_0x240 != '\0') {
      this->field_0x240 = 0;
      pFVar2 = FSlateApplication::Get();
      bVar1 = FSlateApplication::IsDragDropping(pFVar2);
      if (bVar1) {
        pFVar2 = FSlateApplication::Get();
        FSlateApplication::CancelDragDrop(pFVar2);
        return;
      }
    }
  }
  return;
}

// StaticRegisterNativesUListView @ 146a1ea20

void __cdecl UListView::StaticRegisterNativesUListView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1e;
  local_18.DataPtr = Z_Construct_UClass_UListView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddItem @ 146a31f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UListView::execAddItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UObject *pUVar5;
  int iVar6;
  FName *pFVar7;
  longlong *plVar8;
  bool bVar9;
  UObject *local_res10;
  FName local_res20;
  UObject *local_58;
  FName local_50 [2];
  ForAnyElementType local_40;
  undefined4 local_38;
  int local_34;
  void *local_30;
  undefined8 local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"NullListViewItem");
    FFrame::KismetExecutionMessage(L"Cannot add null item into ListView.",Warning,*pFVar7);
  }
  else {
    puVar1 = &param_1[0x62].field_0x8;
    plVar8 = *(longlong **)puVar1;
    plVar2 = plVar8 + *(int *)&param_1[0x62].field_0x10;
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      if ((UObject *)*plVar8 == (UObject *)0x0) {
        bVar9 = local_res10 == (UObject *)0x0;
      }
      else {
        bVar9 = (UObject *)*plVar8 == local_res10;
      }
      if (bVar9) {
        pFVar7 = ::FName::FName(local_50,"DuplicateListViewItem");
        FFrame::KismetExecutionMessage(L"Cannot add duplicate item into ListView.",Warning,*pFVar7);
        return;
      }
    }
    local_58 = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if (((*(UObject ***)puVar1 <= &local_58) &&
        (&local_58 < *(UObject ***)puVar1 + *(int *)&param_1[0x62].field_0x14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&param_1[0x62].field_0x10;
    if (iVar6 == *(int *)&param_1[0x62].field_0x14) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[0x62].field_0x14);
    }
    *(int *)&param_1[0x62].field_0x10 = iVar6 + 1;
    *(UObject **)(*(longlong *)puVar1 + (longlong)iVar6 * 8) = local_58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58);
    }
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_40,1,&local_34);
    *(UObject **)local_40.Data = pUVar5;
    local_30 = (void *)0x0;
    local_28 = 0;
    (**(code **)(*(longlong *)param_1 + 0x388))(param_1,&local_40,&local_30);
    UListViewBase::RequestRefresh((UListViewBase *)param_1);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
}

// execBP_CancelScrollIntoView @ 146a32340

void __cdecl UListView::execBP_CancelScrollIntoView(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x62].field_0x18;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x8d8) = 0;
    *(undefined1 *)(lVar1 + 0x992) = 0;
    *(undefined8 *)(lVar1 + 0x8d0) = 0;
  }
  return;
}

// execBP_ClearSelection @ 146a32380

void __cdecl UListView::execBP_ClearSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  SListView<UObject_*> *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (SListView<UObject_*> *)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (this != (SListView<UObject_*> *)0x0) {
    SListView<UObject_*>::ClearSelection(this);
    return;
  }
  return;
}

// execBP_GetNumItemsSelected @ 146a32640

void __cdecl UListView::execBP_GetNumItemsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (lVar1 != 0) {
    *(int *)param_3 = *(int *)(lVar1 + 0x820) - *(int *)(lVar1 + 0x84c);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execBP_GetSelectedItem @ 146a326a0

void __cdecl UListView::execBP_GetSelectedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x598) + 0xd0))((longlong *)(lVar2 + 0x598),&local_18);
    if (0 < local_10) {
      uVar1 = *local_18;
      FMemory::Free(local_18);
      *(undefined8 *)param_3 = uVar1;
      return;
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free(local_18);
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execBP_GetSelectedItems @ 146a32730

void __cdecl UListView::execBP_GetSelectedItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  SListView<UObject_*> *this;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (SListView<UObject_*> *)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (this != (SListView<UObject_*> *)0x0) {
    iVar2 = SListView<UObject_*>::GetSelectedItems(this,pTVar3);
  }
  *(bool *)param_3 = 0 < iVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execBP_IsItemVisible @ 146a32820

void __cdecl UListView::execBP_IsItemVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong lVar3;
  TSharedRef<ITableRow,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  ITableRow *pIVar6;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (lVar3 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pTVar4 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)(lVar3 + 0x5a8),pUVar2);
  if (pTVar4 == (TSharedRef<ITableRow,1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pIVar6 = (ITableRow *)0x0;
  }
  else {
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    pIVar6 = pTVar4->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(bool *)param_3 = pIVar6 != (ITableRow *)0x0;
  return;
}

// execBP_NavigateToItem @ 146a32920

void __cdecl UListView::execBP_NavigateToItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  
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
  local_res20 = local_res10;
  if (local_res10 != (UObject *)0x0) {
    ITypedUMGListView<UObject_*>::RequestNavigateToItem
              ((ITypedUMGListView<UObject_*> *)(param_1 + 0x15),&local_res20);
  }
  return;
}

// execBP_ScrollItemIntoView @ 146a329c0

void __cdecl UListView::execBP_ScrollItemIntoView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  STableViewBase *this;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    this = (STableViewBase *)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))(param_1 + 0x15);
    if (this != (STableViewBase *)0x0) {
      fVar4 = (float)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x90))(param_1 + 0x15);
      lVar3 = local_res10;
      local_res10._0_1_ = (undefined1)lVar2;
      local_res10._1_3_ = SUB83(lVar2,1);
      local_res10._4_4_ = SUB84(lVar2,4);
      this[1].bStartedTouchInteraction = (bool)(undefined1)local_res10;
      *(undefined3 *)&this[1].field_0x341 = local_res10._1_3_;
      this[1].AmountScrolledWhileRightMouseDown = (float)local_res10._4_4_;
      this[1].PressedScreenSpacePosition.field0_0x0._s_0.X = fVar4;
      local_res10 = lVar3;
      STableViewBase::RequestLayoutRefresh(this);
    }
  }
  return;
}

// execBP_SetItemSelection @ 146a32aa0

void __cdecl UListView::execBP_SetItemSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  Type *pTVar4;
  bool bVar5;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res10;
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))();
  if (lVar3 != 0) {
    pTVar4 = TAttribute<enum_ESelectionMode::Type>::Get((void *)(lVar3 + 1000));
    if (*pTVar4 != None) {
      (**(code **)(*(longlong *)(lVar3 + 0x598) + 0x28))(lVar3 + 0x598,uVar2,bVar5,0);
      (**(code **)(*(longlong *)(lVar3 + 0x598) + 0x40))(lVar3 + 0x598,3);
    }
  }
  return;
}

// execBP_SetListItems @ 146a32bc0

void __cdecl UListView::execBP_SetListItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetListItems<UObject_*,TSizedDefaultAllocator<32>_>((UListView *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execBP_SetSelectedItem @ 146a32c70

void __cdecl UListView::execBP_SetSelectedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SListView<UObject_*> *this;
  UObject *local_res8;
  UObject *local_res10;
  TOptional<UObject_*> local_18;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SListView<UObject_*> **)&param_1[0x62].field_0x18;
  if (this != (SListView<UObject_*> *)0x0) {
    local_res10 = local_res8;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this,&local_18,&local_res10);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this,local_18.TypedValue,Direct);
    }
  }
  return;
}

// execClearListItems @ 146a33010

void __cdecl UListView::execClearListItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearListItems((UListView *)param_1);
  return;
}

// execGetHorizontalEntrySpacing @ 146a35480

void __cdecl
UListView::execGetHorizontalEntrySpacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 99);
  return;
}

// execGetIndexForItem @ 146a354b0

void __cdecl UListView::execGetIndexForItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x62].field_0x8;
  plVar3 = plVar2;
  while( true ) {
    if (plVar3 == plVar2 + *(int *)&param_1[0x62].field_0x10) {
      *(undefined4 *)param_3 = 0xffffffff;
      return;
    }
    if (*plVar3 == 0) {
      bVar4 = local_res8 == 0;
    }
    else {
      bVar4 = *plVar3 == local_res8;
    }
    if (bVar4) break;
    plVar3 = plVar3 + 1;
  }
  *(int *)param_3 = (int)((longlong)plVar3 - (longlong)plVar2 >> 3);
  return;
}

// execGetItemAt @ 146a356e0

void __cdecl UListView::execGetItemAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
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
  pUVar2 = GetItemAt((UListView *)param_1,local_res10[0]);
  *(UObject **)param_3 = pUVar2;
  return;
}

// execGetListItems @ 146a357b0

void __cdecl UListView::execGetListItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&param_1[0x62].field_0x8);
  return;
}

// execGetNumItems @ 146a35a60

void __cdecl UListView::execGetNumItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x62].field_0x10;
  return;
}

// execGetScrollBarPadding @ 146a35f20

void __cdecl UListView::execGetScrollBarPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[99].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[99].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetVerticalEntrySpacing @ 146a366e0

void __cdecl UListView::execGetVerticalEntrySpacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[99].field_0x4;
  return;
}

// execIsRefreshPending @ 146a37750

void __cdecl UListView::execIsRefreshPending(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(STableViewBase **)&param_1[0x62].field_0x18 != (STableViewBase *)0x0) {
    bVar1 = STableViewBase::IsPendingRefresh(*(STableViewBase **)&param_1[0x62].field_0x18);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execNavigateToIndex @ 146a37dd0

void __cdecl UListView::execNavigateToIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  uint uVar3;
  UObject *pUVar4;
  SListView<UObject_*> *this;
  int local_res8 [2];
  UObject *local_res10;
  TOptional<UObject_*> local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = param_1 + 0x15;
  pUVar4 = GetItemAt((UListView *)param_1,local_res8[0]);
  this = (SListView<UObject_*> *)(**(code **)(*(longlong *)pUVar1 + 0x88))(pUVar1);
  if (this != (SListView<UObject_*> *)0x0) {
    uVar3 = (**(code **)(*(longlong *)pUVar1 + 0x90))(pUVar1);
    local_res10 = pUVar4;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this,&local_18,&local_res10);
    if (local_18.bIsSet != false) {
      this->ItemToScrollIntoView = local_18.TypedValue;
      this->bNavigateOnScrollIntoView = true;
      this->UserRequestingScrollIntoView = uVar3;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this);
    }
  }
  return;
}

// execOnListItemEndPlayed @ 146a37ed0

void __cdecl UListView::execOnListItemEndPlayed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [8];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveItem((UListView *)param_1,local_res20);
  return;
}

// execOnListItemOuterEndPlayed @ 146a37fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UListView::execOnListItemOuterEndPlayed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  AActor *local_res20;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnListItemOuterEndPlayed((UListView *)param_1,local_res20,(uint)local_res10[0]);
  return;
}

// execRemoveItem @ 146a388e0

void __cdecl UListView::execRemoveItem(UObject *param_1,FFrame *param_2,void *param_3)

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
  RemoveItem((UListView *)param_1,local_res10);
  return;
}

// execScrollIndexIntoView @ 146a395b0

void __cdecl UListView::execScrollIndexIntoView(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UObject *pUVar3;
  STableViewBase *this;
  int local_res10 [2];
  
  local_res10[0] = 0;
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
  pUVar3 = GetItemAt((UListView *)param_1,local_res10[0]);
  if (pUVar3 != (UObject *)0x0) {
    this = (STableViewBase *)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))(param_1 + 0x15);
    if (this != (STableViewBase *)0x0) {
      fVar2 = (float)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x90))(param_1 + 0x15);
      *(UObject **)&this[1].bStartedTouchInteraction = pUVar3;
      this[1].PressedScreenSpacePosition.field0_0x0._s_0.X = fVar2;
      STableViewBase::RequestLayoutRefresh(this);
    }
  }
  return;
}

// execSetScrollBarPadding @ 146a418e0

void __cdecl UListView::execSetScrollBarPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  STableViewBase *this;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  this = *(STableViewBase **)&param_1[0x62].field_0x18;
  param_1[99].field_0x8 = puVar17[0];
  param_1[99].field_0x9 = uVar2;
  param_1[99].field_0xa = uVar3;
  param_1[99].field_0xb = uVar4;
  param_1[99].field_0xc = uVar5;
  param_1[99].field_0xd = uVar6;
  param_1[99].field_0xe = uVar7;
  param_1[99].field_0xf = uVar8;
  param_1[99].field_0x10 = uVar9;
  param_1[99].field_0x11 = uVar10;
  param_1[99].field_0x12 = uVar11;
  param_1[99].field_0x13 = uVar12;
  param_1[99].field_0x14 = uVar13;
  param_1[99].field_0x15 = uVar14;
  param_1[99].field_0x16 = uVar15;
  param_1[99].field_0x17 = uVar16;
  if (this != (STableViewBase *)0x0) {
    STableViewBase::SetScrollbarPadding(this,(FMargin *)&param_1[99].field_0x8);
  }
  return;
}

// execSetScrollIntoViewAlignment @ 146a41ac0

void __cdecl
UListView::execSetScrollIntoViewAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x62].field_0x7 = local_res8[0];
  if (*(longlong *)&param_1[0x62].field_0x18 != 0) {
    *(undefined1 *)(*(longlong *)&param_1[0x62].field_0x18 + 0x8e8) = local_res8[0];
  }
  return;
}

// execSetSelectedIndex @ 146a41fe0

void __cdecl UListView::execSetSelectedIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  SListView<UObject_*> *this;
  int local_res8 [2];
  UObject *local_res10;
  TOptional<UObject_*> local_18;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetItemAt((UListView *)param_1,local_res8[0]);
  this = (SListView<UObject_*> *)(**(code **)(*(longlong *)(param_1 + 0x15) + 0x88))(param_1 + 0x15)
  ;
  if (this != (SListView<UObject_*> *)0x0) {
    local_res10 = pUVar2;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this,&local_18,&local_res10);
    if (local_18.bIsSet != false) {
      SListView<UObject_*>::Private_SetSelection(this,local_18.TypedValue,Direct);
    }
  }
  return;
}

// execSetSelectionMode @ 146a42380

void __cdecl UListView::execSetSelectionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TEnumAsByte<ESelectionMode::Type> local_res10 [24];
  
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSelectionMode((UListView *)param_1,local_res10[0]);
  return;
}

