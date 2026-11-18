// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// SGridPanel @ 1428ba080

SGridPanel * __thiscall SGridPanel::SGridPanel(SGridPanel *this)

{
  EWidgetUpdateFlags EVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  SGridPanel *pSVar6;
  EWidgetUpdateFlags EVar7;
  FName local_res8 [4];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SGridPanel__6B_;
  pFVar5 = ::FName::FName(local_res8,5,L"Slots",FNAME_Add);
  FVar2 = *pFVar5;
  (this->Slots)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Slots)._padding_ = (longlong)this;
  (this->Slots)._padding_ = (longlong)FVar2;
  *(undefined2 *)&(this->Slots)._padding_ = 0xdc00;
  if (FVar2 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar6 = (SGridPanel *)(*pcVar3)();
      return pSVar6;
    }
  }
  (this->Slots)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SGridPanel____6B_;
  (this->Slots).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).Children.ArrayNum = 0;
  (this->Slots).Children.ArrayMax = 0;
  (this->Columns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).ArrayNum = 0;
  (this->Columns).ArrayMax = 0;
  (this->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rows).ArrayNum = 0;
  (this->Rows).ArrayMax = 0;
  (this->ColFillCoefficients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColFillCoefficients).ArrayNum = 0;
  (this->ColFillCoefficients).ArrayMax = 0;
  (this->RowFillCoefficients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowFillCoefficients).ArrayNum = 0;
  (this->RowFillCoefficients).ArrayMax = 0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar7 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar7;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar7);
  return this;
}

// ~SGridPanel @ 1428c1250

void __thiscall SGridPanel::~SGridPanel(SGridPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SGridPanel__6B_;
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)(this->RowFillCoefficients).AllocatorInstance.Data,
             (this->RowFillCoefficients).ArrayNum);
  pFVar1 = (this->RowFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)(this->ColFillCoefficients).AllocatorInstance.Data,
             (this->ColFillCoefficients).ArrayNum);
  pFVar1 = (this->ColFillCoefficients).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Columns).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
             (this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
  pFVar1 = (this->Slots).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Slots);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// operator() @ 1428c6c10

void __thiscall
`SGridPanel::AddSlot'::__l2::<lambda_1>::operator()(void *this,FSlot *param_1,int param_2)

{
  SWidget *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428c6c45;
      }
      LOCK();
      aVar2 = pTVar5->SharedReferenceCount;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    this_00 = *(SWidget **)this;
    if (this_00 != (SWidget *)0x0) {
      iVar3 = param_1->ColumnParam + param_1->ColumnSpanParam + 1;
      if (*(int *)&this_00[1].UpdateFlags < iVar3) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)&this_00[1].field_0x30,
                   iVar3 - *(int *)&this_00[1].UpdateFlags);
      }
      iVar4 = param_1->RowParam + param_1->RowSpanParam + 1;
      iVar3 = *(int *)&this_00[1].PersistentState.PaintParent.WeakReferenceCount.ReferenceController
      ;
      if (iVar3 < iVar4) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)&this_00[1].PersistentState,
                   iVar4 - iVar3);
      }
      SWidget::Invalidate(this_00,Layout);
    }
  }
LAB_1428c6c45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// AddSlot @ 1428d12a0

FScopedWidgetSlotArguments * __thiscall
SGridPanel::AddSlot(SGridPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1,
                   int param_2,Layer param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SGridPanel *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FSlot *pFVar8;
  undefined ***pppuVar9;
  FSlot *local_res8;
  TSharedRef<SWidget,1> local_68;
  code *local_58;
  undefined **local_48;
  SGridPanel *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined ***local_30;
  
  pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_68);
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  pSVar4 = (SGridPanel *)pTVar7->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar8 = ::operator_new(0x78);
  if (pFVar8 == (FSlot *)0x0) {
    pFVar8 = (FSlot *)0x0;
  }
  else {
    pFVar8 = FSlot::FSlot(pFVar8,param_1,param_2,param_3.TheLayer);
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar8->Panel).WeakReferenceCount.ReferenceController;
  (pFVar8->Panel).Object = pSVar4;
  (pFVar8->Panel).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  iVar6 = FindInsertSlotLocation(this,pFVar8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_30 = (undefined ***)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SGridPanel::AddSlot'::`2'::<lambda_1>,0,0>::_vftable_;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`SGridPanel::AddSlot'::__l2::<lambda_1>,void,SGridPanel::FSlot_const_*,int>
             ::Call;
  local_res8 = pFVar8;
  local_40 = pSVar4;
  local_38 = pTVar3;
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Index = iVar6;
  __return_storage_ptr__->Children = &this->Slots;
  *(code **)&__return_storage_ptr__->Added = local_58;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  if (local_58 != (code *)0x0) {
    pppuVar9 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar9 = local_30;
    }
    (*(code *)**pppuVar9)();
    if (local_58 != (code *)0x0) {
      pppuVar9 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar9 = local_30;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// CacheDesiredSize @ 1428d9df0

void __thiscall SGridPanel::CacheDesiredSize(SGridPanel *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  ComputeDesiredCellSizes(this,&this->Columns,&this->Rows);
  uVar6 = 0;
  (this->TotalDesiredSizes).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (0 < (this->Columns).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Columns).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = uVar6 + 1;
      pFVar1 = (this->Columns).AllocatorInstance.Data + lVar5;
      lVar5 = lVar5 + 4;
      (this->TotalDesiredSizes).field0_0x0._s_0.X =
           (double)*(float *)pFVar1 + (this->TotalDesiredSizes).field0_0x0._s_0.X;
    } while ((int)uVar6 < (this->Columns).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->Rows).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Rows).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = uVar6 + 1;
      pFVar1 = (this->Rows).AllocatorInstance.Data + lVar5;
      lVar5 = lVar5 + 4;
      (this->TotalDesiredSizes).field0_0x0._s_0.Y =
           (double)*(float *)pFVar1 + (this->TotalDesiredSizes).field0_0x0._s_0.Y;
    } while ((int)uVar6 < (this->Rows).ArrayNum);
  }
  SWidget::CacheDesiredSize((SWidget *)this,param_1);
  return;
}

// ClearChildren @ 1428daf20

void __thiscall SGridPanel::ClearChildren(SGridPanel *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  TArray<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  piVar1 = &(this->Columns).ArrayMax;
  (this->Columns).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Columns).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Rows).ArrayMax;
  (this->Rows).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Rows).AllocatorInstance,0,piVar1);
  }
  pTVar5 = &(this->Slots).Children;
  piVar1 = &(this->Slots).Children.ArrayMax;
  local_18.Data = (pTVar5->AllocatorInstance).Data;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Slots).Children.ArrayNum;
  local_10._4_4_ = (this->Slots).Children.ArrayMax;
  *piVar1 = 0;
  (this->Slots).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
             (pTVar5->AllocatorInstance).Data,0);
  (this->Slots).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar5->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar3 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar4 = 0;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar4 = (int)local_10;
  }
  if (pTVar5 != (TArray<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
              ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
               (pTVar5->AllocatorInstance).Data,(this->Slots).Children.ArrayNum);
    pFVar2 = (pTVar5->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar5->AllocatorInstance).Data = local_18.Data;
    (this->Slots).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar4 = 0;
  }
  DestructItems<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int>
            ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)local_18.Data,iVar4
            );
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ClearFill @ 1428db600

void __thiscall SGridPanel::ClearFill(SGridPanel *this)

{
  int *piVar1;
  int iVar2;
  TAttribute<float> *pTVar3;
  
  piVar1 = &(this->ColFillCoefficients).ArrayMax;
  pTVar3 = (TAttribute<float> *)(this->ColFillCoefficients).AllocatorInstance.Data;
  iVar2 = (this->ColFillCoefficients).ArrayNum;
  if ((this->ColFillCoefficients).ArrayMax < 0) {
    DestructItems<TAttribute<float>,int>(pTVar3,iVar2);
    (this->ColFillCoefficients).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->ColFillCoefficients).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TAttribute<float>,int>(pTVar3,iVar2);
    (this->ColFillCoefficients).ArrayNum = 0;
  }
  piVar1 = &(this->RowFillCoefficients).ArrayMax;
  pTVar3 = (TAttribute<float> *)(this->RowFillCoefficients).AllocatorInstance.Data;
  iVar2 = (this->RowFillCoefficients).ArrayNum;
  if ((this->RowFillCoefficients).ArrayMax < 0) {
    DestructItems<TAttribute<float>,int>(pTVar3,iVar2);
    (this->RowFillCoefficients).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->RowFillCoefficients).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TAttribute<float>,int>(pTVar3,iVar2);
    (this->RowFillCoefficients).ArrayNum = 0;
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// ComputeDesiredCellSizes @ 1428dfef0

void __thiscall
SGridPanel::ComputeDesiredCellSizes
          (SGridPanel *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVisibility EVar8;
  bool bVar9;
  FDeprecateSlateVector2D FVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  memset((param_1->AllocatorInstance).Data,0,(longlong)param_1->ArrayNum << 2);
  memset((param_2->AllocatorInstance).Data,0,(longlong)param_2->ArrayNum << 2);
  iVar14 = (this->Slots).Children.ArrayNum;
  uVar12 = 0;
  if (0 < iVar14) {
    lVar13 = 0;
    EVar8 = EVisibility::Collapsed;
    do {
      uVar11 = 0;
      if ((int)uVar12 < iVar14) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar8 = EVisibility::Collapsed, bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->Slots).Children.AllocatorInstance.Data + lVar13);
      if ((TEnumAsByte<EVisibility::Private>)(*(SWidget **)(lVar2 + 0x10))->VisibilityAttribute !=
          EVar8.Value.Value) {
        fVar4 = *(float *)(lVar2 + 0x28);
        fVar5 = *(float *)(lVar2 + 0x2c);
        fVar6 = *(float *)(lVar2 + 0x30);
        fVar7 = *(float *)(lVar2 + 0x34);
        FVar10 = SWidget::GetDesiredSize(*(SWidget **)(lVar2 + 0x10));
        fVar1 = *(float *)((longlong)FVar10 + 4);
        iVar14 = *(int *)(lVar2 + 0x5c);
        DistributeSizeContributions
                  ((fVar6 + fVar4 + *(float *)FVar10) / (float)*(int *)(lVar2 + 0x54),param_1,
                   *(int *)(lVar2 + 0x50),*(int *)(lVar2 + 0x50) + *(int *)(lVar2 + 0x54));
        DistributeSizeContributions
                  ((fVar7 + fVar5 + fVar1) / (float)iVar14,param_2,*(int *)(lVar2 + 0x58),
                   *(int *)(lVar2 + 0x5c) + *(int *)(lVar2 + 0x58));
        EVar8 = EVisibility::Collapsed;
      }
      iVar14 = (this->Slots).Children.ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < iVar14);
  }
  return;
}

// ComputeDesiredSize @ 1428e1030

TVector2<double> * __thiscall
SGridPanel::ComputeDesiredSize
          (SGridPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = (this->TotalDesiredSizes).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->TotalDesiredSizes).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// ComputePartialSums @ 1428e24c0

void __cdecl SGridPanel::ComputePartialSums(TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  fVar8 = 0.0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)((param_1->AllocatorInstance).Data + lVar7);
      uVar4 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((param_1->AllocatorInstance).Data + lVar7) = fVar8;
      lVar7 = lVar7 + 4;
      iVar5 = param_1->ArrayNum;
      fVar8 = fVar8 + fVar1;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// Construct @ 1428fc490

void __thiscall SGridPanel::Construct(SGridPanel *this,FArguments *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TSharedRef<SWidget,1> *pTVar12;
  int iVar13;
  uint uVar14;
  FSlotArguments *pFVar15;
  longlong lVar16;
  uint uVar17;
  longlong local_res10;
  undefined8 *local_58;
  undefined8 *local_50;
  TSharedRef<SWidget,1> local_48;
  
  (this->TotalDesiredSizes).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar17 = (param_1->_Slots).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &(this->Slots).Children.ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&(this->Slots).Children.AllocatorInstance,(this->Slots).Children.ArrayNum,
               piVar1);
  }
  uVar17 = 0;
  if (0 < (param_1->_Slots).ArrayNum) {
    local_res10 = 0;
    do {
      uVar14 = ~uVar17 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar17 < (param_1->_Slots).ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = FindInsertSlotLocation
                        (this,*(FSlot **)((param_1->_Slots).AllocatorInstance.Data + local_res10));
      iVar11 = (param_1->_Slots).ArrayNum;
      lVar16 = (longlong)(int)uVar9;
      if (uVar9 == 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar17 < iVar11) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = (FSlotArguments *)((param_1->_Slots).AllocatorInstance.Data + local_res10);
        local_58 = (undefined8 *)pFVar15->_padding_;
        pFVar15->_padding_ = 0;
        if ((local_58 == (undefined8 *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewSlot.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                               ,0x1fd,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar2 = &(this->Slots).Children;
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar3 + (longlong)(this->Slots).Children.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = (this->Slots).Children.ArrayNum;
        piVar1 = &(this->Slots).Children.ArrayMax;
        if (uVar9 == *piVar1) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        (this->Slots).Children.ArrayNum = uVar9 + 1;
        *(undefined8 **)(pFVar3 + (longlong)(int)uVar9 * 8) = local_58;
        local_58 = (undefined8 *)0x0;
        uVar14 = 0;
        if ((int)uVar9 < (this->Slots).Children.ArrayNum) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FSlot::Construct(*(FSlot **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8),
                         (FChildren *)&this->Slots,pFVar15);
        if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,1);
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar17 < iVar11) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = (FSlotArguments *)((param_1->_Slots).AllocatorInstance.Data + local_res10);
        local_50 = (undefined8 *)pFVar15->_padding_;
        pFVar15->_padding_ = 0;
        if ((local_50 == (undefined8 *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewSlot.Get()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                               ,0x23c,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (this->Slots).Children.AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_50) &&
            ((FScriptContainerElement *)&local_50 <
             pFVar3 + (longlong)(this->Slots).Children.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->Slots).Children.ArrayNum;
        piVar1 = &(this->Slots).Children.ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->Slots).Children.AllocatorInstance,piVar1);
        }
        (this->Slots).Children.ArrayNum = iVar11 + 1;
        pFVar3 = (this->Slots).Children.AllocatorInstance.Data + lVar16 * 8;
        memmove(pFVar3 + 8,pFVar3,(longlong)(int)(iVar11 - uVar9) << 3);
        *(undefined8 **)((this->Slots).Children.AllocatorInstance.Data + lVar16 * 8) = local_50;
        local_50 = (undefined8 *)0x0;
        uVar14 = 0;
        if ((int)uVar9 < (this->Slots).Children.ArrayNum) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FSlot::Construct(*(FSlot **)((this->Slots).Children.AllocatorInstance.Data + lVar16 * 8),
                         (FChildren *)&this->Slots,pFVar15);
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      uVar14 = 0;
      if ((int)uVar9 < (this->Slots).Children.ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar16 = *(longlong *)
                ((this->Slots).Children.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
      pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
      pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar12->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      *(SWidget **)(lVar16 + 0x40) = pSVar5;
      if (pTVar4 != *(TReferenceControllerBase<1> **)(lVar16 + 0x48)) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar6 = *(longlong **)(lVar16 + 0x48);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(TReferenceControllerBase<1> **)(lVar16 + 0x48) = pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar11 = (this->Columns).ArrayNum;
      iVar13 = *(int *)(lVar16 + 0x50) + 1 + *(int *)(lVar16 + 0x54);
      if (iVar11 < iVar13) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Columns,iVar13 - iVar11);
      }
      iVar11 = (this->Rows).ArrayNum;
      iVar13 = *(int *)(lVar16 + 0x58) + 1 + *(int *)(lVar16 + 0x5c);
      if (iVar11 < iVar13) {
        TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Rows,iVar13 - iVar11);
      }
      SWidget::Invalidate((SWidget *)this,Layout);
      local_res10 = local_res10 + 0x98;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (param_1->_Slots).ArrayNum);
  }
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ColFillCoefficients,&param_1->ColFillCoefficients);
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RowFillCoefficients,&param_1->RowFillCoefficients);
  return;
}

// DistributeSizeContributions @ 142925fd0

void __cdecl
SGridPanel::DistributeSizeContributions
          (float param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  uVar5 = (ulonglong)param_3;
  if (param_3 < param_4) {
    lVar6 = uVar5 * 4;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
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
      fVar7 = *(float *)((param_2->AllocatorInstance).Data + lVar6);
      if (fVar7 <= param_1) {
        fVar7 = param_1;
      }
      uVar3 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
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
      uVar5 = (ulonglong)(uVar4 + 1);
      *(float *)((param_2->AllocatorInstance).Data + lVar6) = fVar7;
      lVar6 = lVar6 + 4;
    } while ((int)(uVar4 + 1) < param_4);
  }
  return;
}

// FindInsertSlotLocation @ 142935580

int __thiscall SGridPanel::FindInsertSlotLocation(SGridPanel *this,FSlot *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->Slots).Children.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (param_1->LayerParam <
          *(int *)(*(longlong *)((this->Slots).Children.AllocatorInstance.Data + lVar6) + 0x60)) {
        return uVar5;
      }
      iVar4 = (this->Slots).Children.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// GetChildren @ 14293e500

FChildren * __thiscall SGridPanel::GetChildren(SGridPanel *this)

{
  return (FChildren *)&this->Slots;
}

// GetDesiredRegionSize @ 14293faf0

TVector2<double> * __thiscall
SGridPanel::GetDesiredRegionSize
          (SGridPanel *this,TVector2<double> *__return_storage_ptr__,TIntPoint<int> *param_1,
          int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector2<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar3 = (this->Columns).ArrayNum;
  if (0 < iVar3) {
    iVar4 = (this->Rows).ArrayNum;
    if (0 < iVar4) {
      uVar14 = (param_1->field0_0x0)._s_0.X;
      uVar13 = iVar4 - 1;
      uVar11 = (param_1->field0_0x0)._s_0.Y;
      uVar15 = iVar3 - 1;
      uVar10 = uVar15;
      if ((int)uVar14 < (int)uVar15) {
        uVar10 = uVar14;
      }
      uVar8 = 0;
      if (0 < (int)uVar10) {
        uVar8 = uVar10;
      }
      if ((int)(uVar14 + param_2) < (int)uVar15) {
        uVar15 = uVar14 + param_2;
      }
      uVar14 = 0;
      if (0 < (int)uVar15) {
        uVar14 = uVar15;
      }
      uVar15 = uVar13;
      if ((int)uVar11 < (int)uVar13) {
        uVar15 = uVar11;
      }
      uVar10 = 0;
      if (0 < (int)uVar15) {
        uVar10 = uVar15;
      }
      if ((int)(uVar11 + param_3) < (int)uVar13) {
        uVar13 = uVar11 + param_3;
      }
      uVar11 = 0;
      if (0 < (int)uVar13) {
        uVar11 = uVar13;
      }
      uVar15 = 0;
      if ((int)uVar10 < iVar4) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TVector2<double> *)(*pcVar7)();
          return pTVar12;
        }
      }
      pFVar5 = (this->Rows).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar11 < (this->Rows).ArrayNum) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TVector2<double> *)(*pcVar7)();
          return pTVar12;
        }
      }
      fVar1 = *(float *)((this->Rows).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
      fVar2 = *(float *)(pFVar5 + (longlong)(int)uVar10 * 4);
      uVar11 = 0;
      if ((int)uVar8 < (this->Columns).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TVector2<double> *)(*pcVar7)();
          return pTVar12;
        }
      }
      pFVar5 = (this->Columns).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar14 < (this->Columns).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TVector2<double> *)(*pcVar7)();
          return pTVar12;
        }
      }
      pFVar6 = (this->Columns).AllocatorInstance.Data;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 - fVar2);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)(*(float *)(pFVar6 + (longlong)(int)uVar14 * 4) -
                   *(float *)(pFVar5 + (longlong)(int)uVar8 * 4));
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 142946ef0

FSlateWidgetClassData * __cdecl SGridPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(&local_res18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&local_res8,&local_48,*pFVar1,0x218);
      local_38[0] = Layout;
      local_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&local_res18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&local_48,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
      if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c5d0

FSlateWidgetClassData * __thiscall SGridPanel::GetWidgetClass(SGridPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FContainerInitializer FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  FAttributeEntry FStack_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SGridPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      pFVar1 = ::FName::FName(&FStackX_18,5,L"Slots",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddContainer(&FStackX_8,&FStack_48,*pFVar1,0x218);
      auStack_38[0] = Layout;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      uStack_28 = 0;
      pFVar1 = ::FName::FName(&FStackX_18,"Slot.Padding");
      FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
                (&FStack_48,&FStack_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)auStack_38);
      if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        uStack_28 = uStack_28 & 0xffffffff00000000;
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SGridPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SGridPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// LayoutDebugPaint @ 142957e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SGridPanel::LayoutDebugPaint
          (SGridPanel *this,FGeometry *param_1,FSlateRect *param_2,FSlateWindowElementList *param_3,
          int param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  code *pcVar4;
  FLinearColor FVar5;
  float afVar6 [2];
  float afVar7 [2];
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  FGeometry *local_140;
  FLinearColor_u_0 local_138;
  TTransform2<float> *local_128;
  FSlateWindowElementList *local_120;
  TVector2<float>_u_0_s_0 local_114;
  TTransform2<float> local_108;
  TTransform2<float> local_f0;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc [2];
  float afStack_b4 [2];
  TVector2<float>_u_0 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  afVar7 = _UNK_15076b188;
  afVar6 = ___xmm_3f80000000000000000000003f800000;
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar12 = 0;
  fVar16 = 0.0;
  if (0 < (this->Columns).ArrayNum) {
    lVar13 = 0;
    local_140 = param_1;
    local_120 = param_3;
    do {
      uVar11 = 0;
      fVar15 = 0.0;
      if (0 < (this->Rows).ArrayNum) {
        local_128 = &param_1->AccumulatedRenderTransform;
        lVar14 = 0;
        local_158 = fVar16;
        do {
          FVar5.field0_0x0 = FLinearColor::White.field0_0x0;
          iVar10 = (this->Rows).ArrayNum;
          uVar9 = 0;
          if ((int)uVar11 < iVar10) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          fStack_154 = fVar15;
          if (uVar9 == 0) {
            local_168 = (longlong)(int)uVar11;
            local_160 = (longlong)iVar10;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
          }
          iVar10 = (this->Columns).ArrayNum;
          uVar1 = *(undefined4 *)((this->Rows).AllocatorInstance.Data + lVar14);
          uVar9 = 0;
          if ((int)uVar12 < iVar10) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_168 = (longlong)(int)uVar12;
            local_160 = (longlong)iVar10;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
          }
          fVar2 = param_1->Scale;
          local_148 = *(undefined4 *)((this->Columns).AllocatorInstance.Data + lVar13);
          local_114 = (param_1->AbsolutePosition).field0_0x0._s_0;
          local_108.Trans.field0_0x0._s_0.Y = fStack_154;
          local_108.Trans.field0_0x0._s_0.X = local_158;
          local_138._0_8_ = local_108.Trans.field0_0x0;
          local_150 = fVar2 * local_158 + local_114.X;
          local_108.M.M[0] = afVar6;
          local_108.M.M[1] = afVar7;
          fStack_14c = fVar2 * fStack_154 + local_114.Y;
          uStack_144 = uVar1;
          Concatenate<TTransform2<float>_>(&local_f0,&local_108,local_128);
          local_d8._s_0.Y = fStack_14c;
          local_d8._s_0.X = local_150;
          local_c4 = CONCAT44(uStack_144,local_148);
          local_a4 = param_1->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
          local_cc = 0;
          local_bc[0] = local_f0.M.M[0][0];
          local_bc[1] = local_f0.M.M[0][1];
          afStack_b4[0] = local_f0.M.M[1][0];
          afStack_b4[1] = local_f0.M.M[1][1];
          local_ac = local_f0.Trans.field0_0x0;
          local_138 = FVar5.field0_0x0;
          local_d0 = fVar2;
          FSlateDrawElement::MakeDebugQuad
                    (local_120,param_4,(FPaintGeometry *)&local_d8._s_0,
                     (FLinearColor *)&local_138._s_0);
          iVar10 = (this->Rows).ArrayNum;
          uVar9 = 0;
          if ((int)uVar11 < iVar10) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_168 = (longlong)(int)uVar11;
            local_160 = (longlong)iVar10;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
          }
          uVar11 = uVar11 + 1;
          fVar15 = fVar15 + *(float *)((this->Rows).AllocatorInstance.Data + lVar14);
          lVar14 = lVar14 + 4;
          param_1 = local_140;
        } while ((int)uVar11 < (this->Rows).ArrayNum);
      }
      iVar10 = (this->Columns).ArrayNum;
      uVar11 = 0;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_168 = (longlong)(int)uVar12;
        local_160 = (longlong)iVar10;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          iVar10 = (*pcVar4)();
          return iVar10;
        }
      }
      uVar12 = uVar12 + 1;
      fVar16 = fVar16 + *(float *)((this->Columns).AllocatorInstance.Data + lVar13);
      lVar13 = lVar13 + 4;
    } while ((int)uVar12 < (this->Columns).ArrayNum);
  }
  return param_4;
}

// NotifySlotChanged @ 14295cff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SGridPanel::NotifySlotChanged(SGridPanel *this,FSlot *param_1,bool param_2)

{
  int iVar1;
  FSlotBase *this_00;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FIdentityFunctor *local_res10;
  FIdentityFunctor local_res18 [16];
  
  iVar5 = param_1->ColumnParam + 1 + param_1->ColumnSpanParam;
  iVar1 = (this->Columns).ArrayNum;
  if (iVar1 < iVar5) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Columns,iVar5 - iVar1);
  }
  iVar5 = param_1->RowParam + param_1->RowSpanParam + 1;
  iVar1 = (this->Rows).ArrayNum;
  if (iVar1 < iVar5) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Rows,iVar5 - iVar1);
  }
  if ((param_2) && (iVar1 = (this->Slots).Children.ArrayNum, 0 < iVar1)) {
    local_res10 = local_res18;
    AlgoImpl::
    IntroSortInternal<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,int,FIdentityFunctor,TDereferenceWrapper<TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_>,_TPanelChildren<SGridPanel::FSlot>::Sort<_SGridPanel::NotifySlotChanged_::__l11::<lambda_1>_>_::__l5::<lambda_1>_>_>
              ((TUniquePtr<SGridPanel::FSlot,TDefaultDelete<SGridPanel::FSlot>_> *)
               (this->Slots).Children.AllocatorInstance.Data,iVar1,local_res18[0],
               (<lambda_1> *)&local_res10);
    if ((this->Slots).Children.ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FSlotBase **)(this->Slots).Children.AllocatorInstance.Data;
    pSVar4 = FSlotBase::GetOwnerWidget(this_00);
    if (pSVar4 == (SWidget *)0x0) {
      `TWidgetSlotWithAttributeSupport<SGridPanel::FSlot>::RequestSortAttribute'::__l2::<lambda_1>::
      operator()(local_res8);
    }
    else {
      SlateAttributePrivate::ISlateAttributeContainer::UpdateContainerSortOrder
                ((ISlateAttributeContainer *)(this_00 + 1),pSVar4);
    }
    if (*(char *)((longlong)&(this->Slots)._padding_ + 1) != -0x24) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3
                  ::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    SWidget::Invalidate((SWidget *)(this->Slots)._padding_,ChildOrder);
  }
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// OnArrangeChildren @ 14295e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SGridPanel::OnArrangeChildren(SGridPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  FDeprecateSlateVector2D *pFVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  ForElementType<FArrangedWidget> FVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FDeprecateSlateVector2D FVar12;
  ForElementType<FArrangedWidget> FVar13;
  longlong lVar14;
  uint uVar15;
  ForElementType<FArrangedWidget> FVar16;
  uint uVar17;
  FArrangedChildren *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_218 [32];
  TArray<float,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b8;
  undefined8 local_1a8;
  FArrangedChildren *local_1a0;
  FSlateLayoutTransform local_198;
  FDeprecateSlateVector2D local_18c;
  FGeometry *local_180;
  SGridPanel *local_178;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  double local_150;
  double dStack_148;
  undefined1 local_138 [32];
  float local_118 [3] [2];
  SWidget *local_100;
  FSharedReferencer<1> local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar19 = 0;
  iVar11 = (this->Columns).ArrayNum;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_1a0 = param_2;
  local_180 = param_1;
  local_178 = this;
  if (0 < iVar11) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11,&local_1b8.AllocatorInstance,&local_1b8.ArrayNum,&local_1b8.ArrayMax);
    uVar15 = local_1b8.ArrayNum - 1;
    uVar10 = 0;
    if ((int)uVar15 < local_1b8.ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = 0;
  }
  iVar11 = (this->Rows).ArrayNum;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  if (0 < iVar11) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11,&local_1c8.AllocatorInstance,&local_1c8.ArrayNum,&local_1c8.ArrayMax);
    uVar15 = local_1c8.ArrayNum - 1;
    uVar10 = 0;
    if ((int)uVar15 < local_1c8.ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = 0;
  }
  local_1a8 = param_1->Size;
  CalculateStretchedCellSizes(&local_1b8,(float)local_1a8,&this->Columns,&this->ColFillCoefficients)
  ;
  local_1a8 = param_1->Size;
  CalculateStretchedCellSizes(&local_1c8,local_1a8._4_4_,&this->Rows,&this->RowFillCoefficients);
  ComputePartialSums(&local_1b8);
  ComputePartialSums(&local_1c8);
  iVar11 = (this->Slots).Children.ArrayNum;
  pFVar18 = local_1a0;
  uVar21 = uVar19;
  if (0 < iVar11) {
    do {
      uVar15 = (uint)uVar21;
      uVar10 = 0;
      if ((int)uVar15 < iVar11) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar14 = *(longlong *)((this->Slots).Children.AllocatorInstance.Data + uVar19);
      bVar5 = *(byte *)(*(longlong *)(lVar14 + 0x10) + 0x39);
      if (((pFVar18->VisibilityFilter).Value.Value & bVar5) != 0) {
        uVar10 = *(uint *)(lVar14 + 0x58);
        uVar17 = 0;
        if ((int)uVar10 < local_1c8.ArrayNum) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar3 = *(float *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
        uVar10 = *(uint *)(lVar14 + 0x50);
        uVar17 = 0;
        if ((int)uVar10 < local_1b8.ArrayNum) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar4 = *(float *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
        uVar17 = *(int *)(lVar14 + 0x5c) + *(int *)(lVar14 + 0x58);
        uVar10 = 0;
        if ((int)uVar17 < local_1c8.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar20 = *(int *)(lVar14 + 0x54) + *(int *)(lVar14 + 0x50);
        fVar23 = *(float *)(local_1c8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
        uVar10 = 0;
        if ((int)uVar20 < local_1b8.ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar25 = *(float *)(lVar14 + 0x28);
        fVar24 = *(float *)(lVar14 + 0x2c);
        fVar26 = *(float *)(lVar14 + 0x30);
        fVar8 = *(float *)(lVar14 + 0x34);
        iVar11 = *(int *)(lVar14 + 0x38);
        fVar22 = (float)((double)*(float *)(local_1b8.AllocatorInstance.Data +
                                           (longlong)(int)uVar20 * 4) - (double)fVar4);
        local_160 = fVar25;
        fStack_15c = fVar24;
        fStack_158 = fVar26;
        fStack_154 = fVar8;
        if (iVar11 == 0) {
LAB_14295e7f6:
          fVar27 = fVar22 - (fVar26 + fVar25);
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
        }
        else {
          FVar12 = SWidget::GetDesiredSize(*(SWidget **)(lVar14 + 0x10));
          fVar27 = fVar22 - (fVar26 + fVar25);
          if (*(float *)FVar12 <= fVar27) {
            fVar27 = *(float *)FVar12;
          }
          if (fVar27 <= 0.0) {
            fVar27 = 0.0;
          }
          if (iVar11 != 1) {
            if (iVar11 == 2) {
              fVar25 = ((fVar22 - fVar27) * __real_3f000000 + fVar25) - fVar26;
            }
            else {
              if (iVar11 != 3) goto LAB_14295e7f6;
              fVar25 = (fVar22 - fVar27) - fVar26;
            }
          }
        }
        iVar11 = *(int *)(lVar14 + 0x3c);
        fVar23 = (float)((double)fVar23 - (double)fVar3);
        fVar26 = fVar23 - (fVar8 + fVar24);
        if (iVar11 == 0) {
LAB_14295e884:
          local_1a8._4_4_ = fVar26;
          if (fVar26 <= 0.0) {
            local_1a8._4_4_ = 0.0;
          }
        }
        else {
          FVar12 = SWidget::GetDesiredSize(*(SWidget **)(lVar14 + 0x10));
          local_1a8._4_4_ = *(float *)((longlong)FVar12 + 4);
          if (fVar26 <= *(float *)((longlong)FVar12 + 4)) {
            local_1a8._4_4_ = fVar26;
          }
          if (local_1a8._4_4_ <= 0.0) {
            local_1a8._4_4_ = 0.0;
          }
          if (iVar11 != 1) {
            if (iVar11 == 2) {
              fVar24 = ((fVar23 - local_1a8._4_4_) * __real_3f000000 + fVar24) - fVar8;
            }
            else {
              if (iVar11 != 3) goto LAB_14295e884;
              fVar24 = (fVar23 - local_1a8._4_4_) - fVar8;
            }
          }
        }
        local_150 = *(double *)(lVar14 + 0x68);
        dStack_148 = *(double *)(lVar14 + 0x70);
        local_198.Scale = 1.0;
        local_1a8._0_4_ = fVar27;
        local_18c = local_1a8;
        local_198.Translation.field0_0x0._s_0.X =
             (float)((double)fVar25 + (double)fVar4 + local_150);
        local_198.Translation.field0_0x0._s_0.Y =
             (float)((double)fVar24 + (double)fVar3 + dStack_148);
        FGeometry::MakeChild
                  (local_180,(FArrangedWidget *)local_138,(TSharedRef<SWidget,1> *)(lVar14 + 0x10),
                   (FDeprecateVector2DParameter *)&local_18c,&local_198);
        pFVar18 = local_1a0;
        if (((local_1a0->VisibilityFilter).Value.Value & bVar5) != 0) {
          FVar16 = (ForElementType<FArrangedWidget>)&local_1a0->Array;
          FVar6 = (local_1a0->Array).AllocatorInstance.SecondaryData;
          FVar13 = FVar16;
          if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
            FVar13 = FVar6;
          }
          if ((ulonglong)FVar13 <= local_138) {
            FVar13 = FVar16;
            if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
              FVar13 = FVar6;
            }
            if ((local_138 <
                 (undefined1 *)((longlong)FVar13 + (longlong)(local_1a0->Array).ArrayMax * 0x48)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          iVar11 = (pFVar18->Array).ArrayNum;
          piVar1 = &(pFVar18->Array).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                               (0x848,(ForElementType<FArrangedWidget> *)FVar16,piVar1);
          }
          (pFVar18->Array).ArrayNum = iVar11 + 1;
          FVar6 = (pFVar18->Array).AllocatorInstance.SecondaryData;
          lVar14 = (longlong)iVar11;
          if (FVar6 != (ForElementType<FArrangedWidget>)0x0) {
            FVar16 = FVar6;
          }
          pFVar2 = (FDeprecateSlateVector2D *)((longlong)FVar16 + lVar14 * 0x48);
          *pFVar2 = (FDeprecateSlateVector2D)local_138._0_8_;
          pFVar2[1] = (FDeprecateSlateVector2D)local_138._8_8_;
          *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar14 * 0x48) = local_138._16_8_;
          *(undefined8 *)((uchar *)((longlong)FVar16 + 0x10) + lVar14 * 0x48 + 8) = local_138._24_8_
          ;
          *(float (*) [2])((uchar *)((longlong)FVar16 + 0x20) + lVar14 * 0x48) = local_118[0];
          *(float (*) [2])((uchar *)((longlong)FVar16 + 0x20) + lVar14 * 0x48 + 8) = local_118[1];
          *(float (*) [2])((uchar *)((longlong)FVar16 + 0x30) + lVar14 * 0x48) = local_118[2];
          *(SWidget **)((uchar *)((longlong)FVar16 + 0x38) + lVar14 * 0x48) = local_100;
          *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar16 + 0x40) + lVar14 * 0x48) =
               local_f8.ReferenceController;
          if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
        this = local_178;
      }
      iVar11 = (this->Slots).Children.ArrayNum;
      uVar19 = uVar19 + 8;
      uVar21 = (ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < iVar11);
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  return;
}

// OnPaint @ 14297ec10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SGridPanel::OnPaint(SGridPanel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                   FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FSlot *pFVar7;
  int iVar8;
  ForElementType<FArrangedWidget> FVar9;
  uint uVar10;
  FArrangedWidget *pFVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_208 [32];
  bool local_1c8;
  FPaintArgs local_1b0;
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_180.VisibilityFilter = (EVisibility)EVisibility::All.Value.Value;
  local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_180.Array.ArrayNum = 0;
  local_180.Array.ArrayMax = 4;
  local_180.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_180,false);
  local_1b0.RootGrid = param_1->RootGrid;
  local_1b0.CurrentGrid = param_1->CurrentGrid;
  local_1b0.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_1b0.CurrentTime = param_1->CurrentTime;
  local_1b0.DeltaTime = param_1->DeltaTime;
  local_1b0._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  if ((!param_7) || (local_1c8 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    local_1c8 = false;
  }
  iVar5 = param_5;
  iVar6 = local_180.Array.ArrayNum;
  local_1b0.PaintParentPtr = (SWidget *)this;
  if (local_180.Array.ArrayNum != 0) {
    uVar10 = 0;
    iVar12 = 0;
    if (0 < local_180.Array.ArrayNum) {
      lVar13 = 0;
      do {
        if ((this->Slots).Children.ArrayNum <= (int)uVar10) break;
        uVar4 = 0;
        if ((int)uVar10 < iVar6) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar6 = local_180.Array.ArrayNum, bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        FVar9 = (ForElementType<FArrangedWidget>)&local_180.Array;
        if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar9 = local_180.Array.AllocatorInstance.SecondaryData;
        }
        pFVar11 = (FArrangedWidget *)((longlong)FVar9 + lVar13);
        iVar1 = iVar12;
        if (((byte)((pFVar11->Widget).Object)->VisibilityAttribute & 0x19) != 0) {
          pFVar7 = TPanelChildren<SGridPanel::FSlot>::operator[](&this->Slots,uVar10);
          bVar3 = SWidget::IsChildWidgetCulled((SWidget *)this,param_3,pFVar11);
          iVar6 = local_180.Array.ArrayNum;
          if (!bVar3) {
            iVar1 = pFVar7->LayerParam;
            iVar8 = iVar5 + 1;
            if (iVar12 == iVar1) {
              iVar8 = param_5;
            }
            iVar6 = SWidget::Paint((pFVar11->Widget).Object,&local_1b0,(FGeometry *)pFVar11,param_3,
                                   param_4,iVar8,param_6,local_1c8);
            if (iVar6 < iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
            iVar6 = local_180.Array.ArrayNum;
            param_5 = iVar8;
            if (iVar12 == iVar1) {
              iVar1 = iVar12;
            }
          }
        }
        iVar12 = iVar1;
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x48;
      } while ((int)uVar10 < iVar6);
    }
  }
  FVar9 = (ForElementType<FArrangedWidget>)&local_180.Array;
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar9 = local_180.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,iVar6);
  if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
  }
  return iVar5;
}

// PrivateRegisterAttributes @ 142985730

void __cdecl SGridPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  pFVar1 = ::FName::FName(local_res10,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_48,*pFVar1,0x218);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res10,"Slot.Padding");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&local_48,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// RemoveSlot @ 142989ca0

bool __thiscall SGridPanel::RemoveSlot(SGridPanel *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SGridPanel::FSlot>::Remove(&this->Slots,param_1);
  return iVar1 != -1;
}

// SetColumnFill @ 14298ecb0

void __thiscall SGridPanel::SetColumnFill(SGridPanel *this,int param_1,TAttribute<float> *param_2)

{
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  pTVar1 = &this->ColFillCoefficients;
  iVar5 = (this->ColFillCoefficients).ArrayNum;
  while (iVar5 <= param_1) {
    iVar5 = (this->ColFillCoefficients).ArrayNum;
    if (iVar5 == (this->ColFillCoefficients).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,&(this->ColFillCoefficients).ArrayMax);
    }
    (this->ColFillCoefficients).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x20;
    *(undefined4 *)(pFVar2 + lVar6) = 0;
    pFVar2[lVar6 + 4] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar2 + lVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar6 + 0x10) = 0;
    iVar5 = (this->ColFillCoefficients).ArrayNum;
  }
  uVar7 = 0;
  if (param_1 < (this->ColFillCoefficients).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  lVar6 = (longlong)param_1 * 0x20;
  *(float *)(pFVar2 + lVar6) = param_2->Value;
  pFVar2[lVar6 + 4] = (FScriptContainerElement)param_2->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + lVar6 + 8),
             &param_2->Getter);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetRowFill @ 142998990

void __thiscall SGridPanel::SetRowFill(SGridPanel *this,int param_1,TAttribute<float> *param_2)

{
  TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  pTVar1 = &this->RowFillCoefficients;
  iVar5 = (this->RowFillCoefficients).ArrayNum;
  while (iVar5 <= param_1) {
    iVar5 = (this->RowFillCoefficients).ArrayNum;
    if (iVar5 == (this->RowFillCoefficients).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar1->AllocatorInstance,&(this->RowFillCoefficients).ArrayMax);
    }
    (this->RowFillCoefficients).ArrayNum = iVar5 + 1;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x20;
    *(undefined4 *)(pFVar2 + lVar6) = 0;
    pFVar2[lVar6 + 4] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar2 + lVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
    *(undefined8 *)(pFVar2 + lVar6 + 0x10) = 0;
    iVar5 = (this->RowFillCoefficients).ArrayNum;
  }
  uVar7 = 0;
  if (param_1 < (this->RowFillCoefficients).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  lVar6 = (longlong)param_1 * 0x20;
  *(float *)(pFVar2 + lVar6) = param_2->Value;
  pFVar2[lVar6 + 4] = (FScriptContainerElement)param_2->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar2 + lVar6 + 8),
             &param_2->Getter);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// Slot @ 1429a1940

FSlotArguments * __cdecl
SGridPanel::Slot(FSlotArguments *__return_storage_ptr__,int param_1,int param_2,Layer param_3)

{
  FSlot *this;
  FSlot *local_res8;
  
  this = ::operator_new(0x78);
  local_res8 = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this,param_1,param_2,param_3.TheLayer);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)&local_res8);
  return __return_storage_ptr__;
}

