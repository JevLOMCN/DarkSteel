// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 26

// FSlateAccessibleWidget @ 1425bd970

FSlateAccessibleWidget * __thiscall
FSlateAccessibleWidget::FSlateAccessibleWidget
          (FSlateAccessibleWidget *this,TWeakPtr<SWidget,1> *param_1,EAccessibleWidgetType param_2)

{
  int iVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateAccessibleWidget__6B_;
  (this->Widget).Object = param_1->Object;
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  (this->Widget).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->WidgetType = param_2;
  this->SiblingIndex = -1;
  (this->Parent).Object = (FSlateAccessibleWidget *)0x0;
  (this->Parent).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->ChildrenBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenBuffer).ArrayNum = 0;
  (this->ChildrenBuffer).ArrayMax = 0;
  if (RuntimeIdCounter == 0x7fffffff) {
    RuntimeIdCounter = -0x80000000;
  }
  else if (RuntimeIdCounter == -1) {
    RuntimeIdCounter = 0;
  }
  iVar1 = RuntimeIdCounter + 1;
  this->Id = RuntimeIdCounter;
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  RuntimeIdCounter = iVar1;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))();
    }
  }
  return this;
}

// ~FSlateAccessibleWidget @ 1425c16d0

void __thiscall FSlateAccessibleWidget::~FSlateAccessibleWidget(FSlateAccessibleWidget *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  this->_padding_ = (longlong)&___7FSlateAccessibleWidget__6B_;
  DestructItems<TWeakPtr<FSlateAccessibleWidget,1>,int>
            ((TWeakPtr<FSlateAccessibleWidget,1> *)(this->ChildrenBuffer).AllocatorInstance.Data,
             (this->ChildrenBuffer).ArrayNum);
  pFVar5 = (this->ChildrenBuffer).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TWeakPtr<FSlateAccessibleWidget,1>,int>
            ((TWeakPtr<FSlateAccessibleWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar5 = (this->Children).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pTVar6 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IAccessibleWidget__6B_;
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// CanCurrentlyAcceptAccessibleFocus @ 1425d1430

bool __thiscall
FSlateAccessibleWidget::CanCurrentlyAcceptAccessibleFocus(FSlateAccessibleWidget *this)

{
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  bool bVar12;
  
  if ((this->Widget).Object == (SWidget *)0x0) {
    return false;
  }
  pTVar3 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
  if ((int)pTVar3->SharedReferenceCount < 1) {
    return false;
  }
  pSVar11 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar9 = (SWidget *)0x0;
  pSVar8 = pSVar9;
  pSVar10 = pSVar11;
  if (pSVar11 == (SWidget *)0x0) {
LAB_1425d1495:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar11 = pSVar10;
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar8 = (SWidget *)0x0;
      pSVar10 = pSVar9;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1425d1495;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar11->_padding_;
      bVar12 = aVar5 == aVar7;
      if (bVar12) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar12);
    pSVar8 = (this->Widget).Object;
    pSVar10 = pSVar11;
    if (pSVar8 == (SWidget *)0x0) goto LAB_1425d1495;
  }
  TVar1 = *(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
           (&pSVar8->field_0x30 + 10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  if (TVar1 == (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    return false;
  }
  if ((this->Widget).Object == (SWidget *)0x0) {
    return false;
  }
  pTVar3 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    return false;
  }
  if ((int)pTVar3->SharedReferenceCount < 1) {
    return false;
  }
  pSVar11 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar11;
  if (pSVar11 != (SWidget *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar8 = pSVar9;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1425d1512;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar11->_padding_;
      bVar12 = aVar5 == aVar7;
      if (bVar12) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar12);
    pSVar9 = (this->Widget).Object;
    pSVar8 = pSVar11;
    if (pSVar9 != (SWidget *)0x0) goto LAB_1425d1538;
  }
LAB_1425d1512:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar11 = pSVar8;
  if (bVar12) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_1425d1538:
  TVar2 = *(TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
           (&pSVar9->field_0x30 + 9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  if (((byte)TVar2 & 0x19) == 0) {
    return false;
  }
  return true;
}

// GetBounds @ 1425de340

/* WARNING: Type propagation algorithm not settling */

TBox2<double> * __thiscall
FSlateAccessibleWidget::GetBounds
          (FSlateAccessibleWidget *this,TBox2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TReferenceControllerBase<1> *pTVar5;
  FDeprecateSlateVector2D FVar6;
  code *pcVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  TBox2<double> *pTVar10;
  SWidget *pSVar11;
  SWidget *pSVar12;
  SWidget *pSVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  float fStackX_c;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    *(undefined8 *)&__return_storage_ptr__->bIsValid = 0;
    return __return_storage_ptr__;
  }
  pSVar12 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar13 = (SWidget *)0x0;
  pSVar11 = pSVar12;
  if (pSVar12 != (SWidget *)0x0) {
    aVar8 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar11 = pSVar13;
      if (aVar8 == (atomic<int>)0x0) goto LAB_1425de3b5;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar12->_padding_;
      bVar14 = aVar8 == aVar9;
      if (bVar14) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar8 + 1);
        aVar9 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar9;
    } while (!bVar14);
    pSVar13 = (this->Widget).Object;
    pSVar11 = pSVar12;
    if (pSVar13 != (SWidget *)0x0) goto LAB_1425de3db;
  }
LAB_1425de3b5:
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar12 = pSVar11;
  if (bVar14) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TBox2<double> *)(*pcVar7)();
    return pTVar10;
  }
LAB_1425de3db:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  fVar1 = *(float *)((longlong)
                     ((pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.M.M + 1)
                    + 4);
  fVar2 = *(float *)((longlong)
                     (pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.M.M[0] +
                    4);
  fVar3 = (pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.M.M[1][0];
  fVar4 = (pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.M.M[0][0];
  fStackX_c = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fVar15 = fVar4 * local_res8 + fVar3 * fStackX_c +
           (pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.Trans.field0_0x0.
           _s_0.X;
  fVar16 = fVar2 * local_res8 + fVar1 * fStackX_c +
           (pSVar13->PersistentState).DesktopGeometry.AccumulatedRenderTransform.Trans.field0_0x0.
           _s_0.Y;
  FVar6 = (pSVar13->PersistentState).DesktopGeometry.Size;
  local_res8 = FVar6._0_4_;
  fStackX_c = FVar6._4_4_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)fVar15;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)fVar16;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       (double)(fVar4 * local_res8 + fVar3 * fStackX_c + fVar15);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y =
       (double)(fVar2 * local_res8 + fVar1 * fStackX_c + fVar16);
  __return_storage_ptr__->bIsValid = true;
  return __return_storage_ptr__;
}

// GetChildAt @ 1425debb0

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetChildAt
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  uint uVar5;
  atomic<int> aVar6;
  TSharedPtr<IAccessibleWidget,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  
  if (((param_1 < 0) || ((this->Children).ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Children.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateCoreAccessibleWidgets.cpp"
                         ,0x152,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
    return pTVar7;
  }
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->Children).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar2)();
      return pTVar7;
    }
    pFVar8 = (this->Children).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      __return_storage_ptr__->Object = *(IAccessibleWidget **)pFVar8;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  return __return_storage_ptr__;
}

// GetClassName @ 1425dfd10

FString * __thiscall
FSlateAccessibleWidget::GetClassName(FSlateAccessibleWidget *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pSVar6 = (SWidget *)0x0;
  pSVar8 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  if (pSVar8 != (SWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = pSVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425dfd71;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pSVar6 = (this->Widget).Object;
    pSVar7 = pSVar8;
    if (pSVar6 != (SWidget *)0x0) goto LAB_1425dfd97;
  }
LAB_1425dfd71:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_1425dfd97:
  ::FName::ToString(&pSVar6->TypeOfWidget,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return __return_storage_ptr__;
}

// GetHelpText @ 1425e12b0

FString * __thiscall
FSlateAccessibleWidget::GetHelpText(FSlateAccessibleWidget *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  FText *this_00;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  bool bVar8;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FText local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar6 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_1425e1429;
  pTVar6 = (this->Widget).WeakReferenceCount.ReferenceController;
  pSVar7 = (SWidget *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425e1314:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425e1314;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pSVar7 = (this->Widget).Object;
    if (pSVar7 == (SWidget *)0x0) goto LAB_1425e1314;
  }
  if (pSVar7->AccessibleBehavior != ToolTip) {
    (**(code **)(pSVar7->_padding_ + 0x1b8))(pSVar7,&local_38);
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      puVar5 = (undefined8 *)(**(code **)(*local_38 + 8))(local_38,local_18);
      this_00 = SWidget::GetAccessibleText((SWidget *)*puVar5,&local_28,Main);
      pFVar4 = FText::ToString(this_00);
      ::FString::FString(__return_storage_ptr__,pFVar4);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_1425e1429:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetId @ 1425e1510

int __thiscall FSlateAccessibleWidget::GetId(FSlateAccessibleWidget *this)

{
  return this->Id;
}

// GetNextSibling @ 1425e18a0

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetNextSibling
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<IAccessibleWidget,1> *pTVar9;
  FSlateAccessibleWidget *pFVar10;
  FSlateAccessibleWidget *pFVar11;
  FSlateAccessibleWidget *pFVar12;
  FScriptContainerElement *pFVar13;
  FSlateAccessibleWidget *pFVar14;
  bool bVar15;
  
  pFVar14 = (FSlateAccessibleWidget *)0x0;
  if ((((this->Parent).Object != (FSlateAccessibleWidget *)0x0) &&
      (pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    pFVar10 = (FSlateAccessibleWidget *)(this->Parent).WeakReferenceCount.ReferenceController;
    pFVar11 = pFVar14;
    pFVar12 = pFVar10;
    if (pFVar10 != (FSlateAccessibleWidget *)0x0) {
      aVar5 = *(atomic<int> *)&pFVar10->_padding_;
      do {
        pFVar11 = (FSlateAccessibleWidget *)0x0;
        pFVar12 = pFVar14;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1425e1915;
        LOCK();
        aVar6 = *(atomic<int> *)&pFVar10->_padding_;
        bVar15 = aVar5 == aVar6;
        if (bVar15) {
          *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar15);
      pFVar11 = (this->Parent).Object;
      pFVar12 = pFVar10;
    }
LAB_1425e1915:
    if (-1 < this->SiblingIndex) {
      if ((pFVar11 == (FSlateAccessibleWidget *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
      if (this->SiblingIndex < (pFVar11->Children).ArrayNum + -1) {
        uVar1 = this->SiblingIndex + 1;
        uVar7 = 0;
        if ((int)uVar1 < (pFVar11->Children).ArrayNum) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
          return pTVar9;
        }
        pFVar13 = (pFVar11->Children).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
        pFVar10 = *(FSlateAccessibleWidget **)(pFVar13 + 8);
        if (pFVar10 == (FSlateAccessibleWidget *)0x0) {
          __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          iVar4 = (int)pFVar10->_padding_;
          do {
            if (iVar4 == 0) {
              __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar10 = pFVar14;
              goto LAB_1425e19fc;
            }
            LOCK();
            iVar8 = (int)pFVar10->_padding_;
            bVar15 = iVar4 == iVar8;
            if (bVar15) {
              *(int *)&pFVar10->_padding_ = iVar4 + 1;
              iVar8 = iVar4;
            }
            UNLOCK();
            iVar4 = iVar8;
          } while (!bVar15);
          __return_storage_ptr__->Object = *(IAccessibleWidget **)pFVar13;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)pFVar10;
          LOCK();
          *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
          UNLOCK();
        }
LAB_1425e19fc:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNextWidgetInHierarchy @ 1425e1a50

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetNextWidgetInHierarchy
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TSharedPtr<IAccessibleWidget,1> *pTVar7;
  IAccessibleWidget **ppIVar8;
  FSlateAccessibleWidget **ppFVar9;
  FSlateAccessibleWidget *pFVar10;
  FSharedReferencer<1> FVar11;
  FSlateAccessibleWidget *local_58;
  FSharedReferencer<1> local_50;
  IAccessibleWidget *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedPtr<IAccessibleWidget,1> local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (((((this->Widget).Object == (SWidget *)0x0) ||
       (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) ||
     ((this->Children).ArrayNum < 1)) {
    GetNextSibling(this,&local_38);
    if (local_38.Object == (IAccessibleWidget *)0x0) {
      pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController;
      FVar11.ReferenceController = pTVar1;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425e1cf5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
      }
      else {
        aVar4 = pTVar1->SharedReferenceCount;
        do {
          FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (aVar4 == (atomic<int>)0x0) goto LAB_1425e1cf5;
          LOCK();
          aVar6 = pTVar1->SharedReferenceCount;
          bVar5 = aVar4 == aVar6;
          if (bVar5) {
            pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar5);
        pFVar10 = (this->Parent).Object;
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        local_58 = pFVar10;
        local_50.ReferenceController = pTVar1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        FVar11.ReferenceController = pTVar1;
        if (pFVar10 != (FSlateAccessibleWidget *)0x0) {
          local_48 = (IAccessibleWidget *)0x0;
          FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          do {
            ppIVar8 = (IAccessibleWidget **)
                      (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,local_28);
            if (&local_48 != ppIVar8) {
              local_48 = *ppIVar8;
              *ppIVar8 = (IAccessibleWidget *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_40,(FSharedReferencer<1> *)(ppIVar8 + 1));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_20);
            if (local_48 != (IAccessibleWidget *)0x0) {
              __return_storage_ptr__->Object = local_48;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   FStack_40.ReferenceController;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_50.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_38.SharedReferenceCount.ReferenceController);
              return __return_storage_ptr__;
            }
            if ((pFVar10 == (FSlateAccessibleWidget *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
              return pTVar7;
            }
            ppFVar9 = (FSlateAccessibleWidget **)
                      (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,local_18);
            if (&local_58 != ppFVar9) {
              local_58 = *ppFVar9;
              *ppFVar9 = (FSlateAccessibleWidget *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_50,(FSharedReferencer<1> *)(ppFVar9 + 1));
              pFVar10 = local_58;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_10);
          } while (pFVar10 != (FSlateAccessibleWidget *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_40.ReferenceController);
          FVar11.ReferenceController = local_50.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      __return_storage_ptr__->Object = local_38.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  else if ((((this->Widget).Object == (SWidget *)0x0) ||
           (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
           pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)
          ) {
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (((this->Children).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar2 = (this->Children).AllocatorInstance.Data;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      aVar4 = pTVar1->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          return __return_storage_ptr__;
        }
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      __return_storage_ptr__->Object = *(IAccessibleWidget **)pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
  }
  return __return_storage_ptr__;
}

// GetNumberOfChildren @ 1425e1e50

int __thiscall FSlateAccessibleWidget::GetNumberOfChildren(FSlateAccessibleWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->Widget).Object != (SWidget *)0x0) &&
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return (this->Children).ArrayNum;
  }
  return 0;
}

// GetParent @ 1425e2100

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetParent
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  aVar2 = pTVar1->SharedReferenceCount;
  do {
    if (aVar2 == (atomic<int>)0x0) {
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    LOCK();
    aVar3 = pTVar1->SharedReferenceCount;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
      aVar3 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar3;
  } while (!bVar4);
  __return_storage_ptr__->Object = (IAccessibleWidget *)(this->Parent).Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  LOCK();
  pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPreviousSibling @ 1425e21f0

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetPreviousSibling
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  TSharedPtr<IAccessibleWidget,1> *pTVar9;
  FSlateAccessibleWidget *pFVar10;
  FSlateAccessibleWidget *pFVar11;
  FSlateAccessibleWidget *pFVar12;
  FScriptContainerElement *pFVar13;
  FSlateAccessibleWidget *pFVar14;
  bool bVar15;
  
  pFVar14 = (FSlateAccessibleWidget *)0x0;
  if ((((this->Parent).Object != (FSlateAccessibleWidget *)0x0) &&
      (pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    pFVar10 = (FSlateAccessibleWidget *)(this->Parent).WeakReferenceCount.ReferenceController;
    pFVar11 = pFVar14;
    pFVar12 = pFVar10;
    if (pFVar10 != (FSlateAccessibleWidget *)0x0) {
      aVar5 = *(atomic<int> *)&pFVar10->_padding_;
      do {
        pFVar11 = (FSlateAccessibleWidget *)0x0;
        pFVar12 = pFVar14;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1425e2265;
        LOCK();
        aVar6 = *(atomic<int> *)&pFVar10->_padding_;
        bVar15 = aVar5 == aVar6;
        if (bVar15) {
          *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar15);
      pFVar11 = (this->Parent).Object;
      pFVar12 = pFVar10;
    }
LAB_1425e2265:
    if (0 < this->SiblingIndex) {
      if ((pFVar11 == (FSlateAccessibleWidget *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
      if (this->SiblingIndex < (pFVar11->Children).ArrayNum) {
        uVar1 = this->SiblingIndex - 1;
        uVar7 = 0;
        if ((int)uVar1 < (pFVar11->Children).ArrayNum) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
          return pTVar9;
        }
        pFVar13 = (pFVar11->Children).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
        pFVar10 = *(FSlateAccessibleWidget **)(pFVar13 + 8);
        if (pFVar10 == (FSlateAccessibleWidget *)0x0) {
          __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
        }
        else {
          iVar4 = (int)pFVar10->_padding_;
          do {
            if (iVar4 == 0) {
              __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              pFVar10 = pFVar14;
              goto LAB_1425e234a;
            }
            LOCK();
            iVar8 = (int)pFVar10->_padding_;
            bVar15 = iVar4 == iVar8;
            if (bVar15) {
              *(int *)&pFVar10->_padding_ = iVar4 + 1;
              iVar8 = iVar4;
            }
            UNLOCK();
            iVar4 = iVar8;
          } while (!bVar15);
          __return_storage_ptr__->Object = *(IAccessibleWidget **)pFVar13;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)pFVar10;
          LOCK();
          *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
          UNLOCK();
        }
LAB_1425e234a:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
  }
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPreviousWidgetInHierarchy @ 1425e2390

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetPreviousWidgetInHierarchy
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<IAccessibleWidget,1> *pTVar4;
  IAccessibleWidget **ppIVar5;
  IAccessibleWidget *pIVar6;
  IAccessibleWidget *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedPtr<IAccessibleWidget,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  GetPreviousSibling(this,&local_28);
  if (local_28.Object == (IAccessibleWidget *)0x0) {
    GetParent(this,__return_storage_ptr__);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  local_38 = local_28.Object;
  FStack_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar6 = local_28.Object;
  if ((local_28.Object == (IAccessibleWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar4;
  }
  while( true ) {
    iVar3 = (**(code **)(*(longlong *)pIVar6 + 0x58))();
    if (iVar3 < 1) {
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           FStack_30.ReferenceController;
      __return_storage_ptr__->Object = pIVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((pIVar6 == (IAccessibleWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    ppIVar5 = (IAccessibleWidget **)
              (**(code **)(*(longlong *)pIVar6 + 0x50))(pIVar6,local_18,iVar3 + -1);
    if (&local_38 != ppIVar5) {
      local_38 = *ppIVar5;
      *ppIVar5 = (IAccessibleWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_30,(FSharedReferencer<1> *)(ppIVar5 + 1));
      pIVar6 = local_38;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (pIVar6 == (IAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar1)();
  return pTVar4;
}

// GetSlateWindow @ 1425e3140

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
FSlateAccessibleWidget::GetSlateWindow
          (FSlateAccessibleWidget *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  SWindow *pSVar4;
  char cVar5;
  atomic<int> aVar6;
  TSharedPtr<SWindow,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SWindow *pSVar12;
  bool bVar13;
  
  if ((((this->Widget).Object != (SWidget *)0x0) &&
      (pTVar10 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar10 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar10->SharedReferenceCount)) {
    pTVar10 = (this->Widget).WeakReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar10->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1425e31a0;
        }
        LOCK();
        aVar6 = pTVar10->SharedReferenceCount;
        bVar13 = aVar2 == aVar6;
        if (bVar13) {
          pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar13);
      pSVar4 = (SWindow *)(this->Widget).Object;
      while (pSVar4 != (SWindow *)0x0) {
        cVar5 = (**(code **)(pSVar4->_padding_ + 0x208))(pSVar4);
        if (cVar5 != '\0') {
          __return_storage_ptr__->Object = pSVar4;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
          return __return_storage_ptr__;
        }
        if ((pSVar4 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<SWindow,1> *)(*pcVar3)();
          return pTVar7;
        }
        pSVar12 = (SWindow *)0x0;
        pTVar8 = ((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = pTVar8->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              pTVar8 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1425e3250;
            }
            LOCK();
            aVar6 = pTVar8->SharedReferenceCount;
            bVar13 = aVar2 == aVar6;
            if (bVar13) {
              pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar6 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar6;
          } while (!bVar13);
          pSVar12 = (SWindow *)((TWeakPtr<SWidget,1> *)&pSVar4->_padding_)->Object;
        }
LAB_1425e3250:
        pTVar9 = pTVar8;
        pTVar11 = pTVar10;
        if (pTVar8 != pTVar10) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          pTVar11 = pTVar8;
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar10->SharedReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)pTVar10->_padding_)(pTVar10);
              LOCK();
              paVar1 = &pTVar10->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
                pTVar9 = (TReferenceControllerBase<1> *)0x0;
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        pTVar10 = pTVar11;
        pSVar4 = pSVar12;
      }
    }
LAB_1425e31a0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  __return_storage_ptr__->Object = (SWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetWidgetName @ 1425e4950

FString * __thiscall
FSlateAccessibleWidget::GetWidgetName(FSlateAccessibleWidget *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  FText local_28;
  TSharedPtr<FTagMetaData,1> local_18;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pSVar6 = (SWidget *)0x0;
  pSVar9 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar6;
  pSVar7 = pSVar9;
  if (pSVar9 == (SWidget *)0x0) {
LAB_1425e49c6:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar9 = pSVar7;
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = (SWidget *)0x0;
      pSVar7 = pSVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425e49c6;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pSVar8 = (this->Widget).Object;
    pSVar7 = pSVar9;
    if (pSVar8 == (SWidget *)0x0) goto LAB_1425e49c6;
  }
  SWidget::GetAccessibleText(pSVar8,&local_28,Main);
  bVar10 = FText::IsEmpty(&local_28);
  if (!bVar10) {
    pFVar5 = FText::ToString(&local_28);
    ::FString::FString(__return_storage_ptr__,pFVar5);
    goto LAB_1425e4b6d;
  }
  if ((pSVar8 == (SWidget *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  SWidget::GetMetaData<FTagMetaData>(pSVar8,&local_18);
  if (local_18.Object != (FTagMetaData *)0x0) {
    if ((local_18.Object == (FTagMetaData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    ::FName::ToString(&(local_18.Object)->Tag,__return_storage_ptr__);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    goto LAB_1425e4b6d;
  }
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    goto LAB_1425e4b6d;
  }
  pSVar8 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  if (pSVar8 == (SWidget *)0x0) {
LAB_1425e4af1:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = pSVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425e4af1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar8->_padding_;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pSVar6 = (this->Widget).Object;
    pSVar7 = pSVar8;
    if (pSVar6 == (SWidget *)0x0) goto LAB_1425e4af1;
  }
  ::FName::ToString(&pSVar6->TypeOfWidget,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_1425e4b6d:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return __return_storage_ptr__;
}

// GetWidgetType @ 1425e5040

EAccessibleWidgetType __thiscall FSlateAccessibleWidget::GetWidgetType(FSlateAccessibleWidget *this)

{
  return this->WidgetType;
}

// GetWindow @ 1425e5050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWidget::GetWindow
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SWindow,1> *pTVar3;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar4;
  TSharedPtr<SWidget,1> local_38;
  TSharedPtr<FSlateAccessibleWidget,1> local_28;
  TSharedPtr<SWindow,1> local_18;
  
  pTVar3 = GetSlateWindow(this,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  local_38.Object = (SWidget *)pTVar3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar4 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(&local_28,&local_38);
  __return_storage_ptr__->Object = (IAccessibleWidget *)pTVar4->Object;
  pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HasUserFocus @ 1425e6460

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateAccessibleWidget::HasUserFocus(FSlateAccessibleWidget *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *pFVar2;
  FGenericAccessibleUserRegistry *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FSlateApplicationBase *pFVar7;
  IAccessibleWidget *pIVar8;
  IAccessibleWidget *pIVar9;
  IAccessibleWidget *pIVar10;
  IAccessibleWidget *pIVar11;
  IAccessibleWidget *pIVar12;
  IAccessibleWidget *pIVar13;
  bool bVar14;
  TSharedPtr<FGenericAccessibleUser,1> local_28;
  
  pIVar10 = (IAccessibleWidget *)0x0;
  pFVar7 = FSlateApplicationBase::Get();
  pTVar1 = (pFVar7->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar7->AccessibleMessageHandler).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (FGenericAccessibleUserRegistry *)pFVar2->_padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FGenericAccessibleUserRegistry::GetUser(this_00,&local_28,param_1);
  if (local_28.Object == (FGenericAccessibleUser *)0x0) {
    bVar14 = false;
    goto LAB_1425e6632;
  }
  pIVar8 = (IAccessibleWidget *)this->_padding_;
  pIVar11 = pIVar10;
  pIVar12 = pIVar8;
  if (pIVar8 != (IAccessibleWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pIVar8->field_0x8;
    do {
      pIVar12 = pIVar10;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1425e64e6;
      LOCK();
      aVar6 = *(atomic<int> *)&pIVar8->field_0x8;
      bVar14 = aVar4 == aVar6;
      if (bVar14) {
        *(atomic<int> *)&pIVar8->field_0x8 = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar14);
    pIVar11 = (IAccessibleWidget *)this->_padding_;
    pIVar12 = pIVar8;
  }
LAB_1425e64e6:
  pIVar8 = (IAccessibleWidget *)&pIVar11->field_0x8;
  if (pIVar11 == (IAccessibleWidget *)0x0) {
    pIVar8 = pIVar10;
  }
  if ((pIVar8 != (IAccessibleWidget *)&this->_padding_) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x69a,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (pIVar11 == (IAccessibleWidget *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((local_28.Object == (FGenericAccessibleUser *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (((((local_28.Object)->FocusedAccessibleWidget).Object == (IAccessibleWidget *)0x0) ||
      (pTVar1 = ((local_28.Object)->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_1425e6615:
    bVar14 = false;
  }
  else {
    pIVar8 = (IAccessibleWidget *)
             ((local_28.Object)->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
    pIVar9 = pIVar8;
    pIVar13 = pIVar10;
    if (pIVar8 != (IAccessibleWidget *)0x0) {
      aVar4 = *(atomic<int> *)&pIVar8->field_0x8;
      do {
        pIVar9 = pIVar10;
        if (aVar4 == (atomic<int>)0x0) goto LAB_1425e65e5;
        LOCK();
        aVar6 = *(atomic<int> *)&pIVar8->field_0x8;
        bVar14 = aVar4 == aVar6;
        if (bVar14) {
          *(atomic<int> *)&pIVar8->field_0x8 = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar14);
      pIVar9 = pIVar8;
      pIVar13 = ((local_28.Object)->FocusedAccessibleWidget).Object;
    }
LAB_1425e65e5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pIVar10 = pIVar9;
    if ((pIVar13 == (IAccessibleWidget *)0x0) || (pIVar13 != pIVar11)) goto LAB_1425e6615;
    bVar14 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar12);
LAB_1425e6632:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar14;
}

// IsEnabled @ 1425e9540

bool __thiscall FSlateAccessibleWidget::IsEnabled(FSlateAccessibleWidget *this)

{
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar2 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    return false;
  }
  pSVar7 = (SWidget *)0x0;
  pSVar9 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar9;
  if (pSVar9 != (SWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = pSVar7;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1425e9597;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar4 == aVar6;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar10);
    pSVar7 = (this->Widget).Object;
    pSVar8 = pSVar9;
    if (pSVar7 != (SWidget *)0x0) goto LAB_1425e95bd;
  }
LAB_1425e9597:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_1425e95bd:
  TVar1 = *(TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
           (&pSVar7->field_0x30 + 10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return (bool)TVar1;
}

// IsHidden @ 1425e9630

bool __thiscall FSlateAccessibleWidget::IsHidden(FSlateAccessibleWidget *this)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  bool bVar10;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar2 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1)) {
    return true;
  }
  pSVar7 = (SWidget *)0x0;
  pSVar9 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar9;
  if (pSVar9 != (SWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = pSVar7;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1425e9687;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar4 == aVar6;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar10);
    pSVar7 = (this->Widget).Object;
    pSVar8 = pSVar9;
    if (pSVar7 != (SWidget *)0x0) goto LAB_1425e96ad;
  }
LAB_1425e9687:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_1425e96ad:
  TVar1 = *(TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
           (&pSVar7->field_0x30 + 9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return ((byte)TVar1 & 0x19) == 0;
}

// IsValid @ 1425e9bc0

bool __thiscall FSlateAccessibleWidget::IsValid(FSlateAccessibleWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->Widget).Object != (SWidget *)0x0) &&
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// SetUserFocus @ 1425fdfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateAccessibleWidget::SetUserFocus(FSlateAccessibleWidget *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  EVisibility EVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  atomic<int> aVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FSlateApplicationBase *pFVar11;
  FVariant *pFVar12;
  FVariant *pFVar13;
  FSlateWidgetAccessibleEventArgs *pFVar14;
  longlong lVar15;
  ForElementType<FArrangedWidget> FVar16;
  SWidget *pSVar17;
  SWidget *pSVar18;
  SWidget *pSVar19;
  undefined1 auStackY_3b8 [32];
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_368;
  int local_358;
  TSharedRef<SWindow,1> local_348;
  TSharedPtr<SWidget,1> local_338;
  TSharedPtr<SWidget,1> local_328;
  TSharedPtr<SWindow,1> local_318;
  TSharedPtr<SWidget,1> local_308;
  TSharedRef<SWidget_const_,1> local_2f8;
  void *local_2e8 [2];
  TSharedRef<SWidget,1> local_2d8;
  TSharedRef<SWidget,1> local_2c8;
  TSharedRef<SWidget,1> local_2b8;
  FSlateWidgetAccessibleEventArgs local_2a8;
  FSlateWidgetAccessibleEventArgs local_258;
  FVariant local_208;
  FVariant local_1f0;
  FVariant local_1d8;
  FVariant local_1c0;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_358 = param_1;
  bVar6 = CanCurrentlyAcceptAccessibleFocus(this);
  if (!bVar6) {
    if ((byte)LogAccessibility._0_1_ < 3) {
      return false;
    }
    (**(code **)(this->_padding_ + 0x80))(this,local_2e8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAccessibility);
    if (local_2e8[0] == (void *)0x0) {
      return false;
    }
    FMemory::Free(local_2e8[0]);
    return false;
  }
  if ((((this->Widget).Object != (SWidget *)0x0) &&
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    pSVar19 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
    pSVar17 = (SWidget *)0x0;
    pSVar18 = pSVar19;
    if (pSVar19 == (SWidget *)0x0) {
LAB_1425fe0d5:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pSVar19 = pSVar18;
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    else {
      aVar4 = *(atomic<int> *)&pSVar19->_padding_;
      do {
        pSVar17 = (SWidget *)0x0;
        pSVar18 = (SWidget *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_1425fe0d5;
        LOCK();
        aVar9 = *(atomic<int> *)&pSVar19->_padding_;
        bVar6 = aVar4 == aVar9;
        if (bVar6) {
          *(atomic<int> *)&pSVar19->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar9 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar9;
      } while (!bVar6);
      pSVar17 = (this->Widget).Object;
      pSVar18 = pSVar19;
      if (pSVar17 == (SWidget *)0x0) goto LAB_1425fe0d5;
    }
    cVar8 = (**(code **)(pSVar17->_padding_ + 0x198))(pSVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
    if (cVar8 != '\0') {
      GetSlateWindow(this,&local_318);
      if (local_318.Object == (SWindow *)0x0) {
LAB_1425fe542:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_318.SharedReferenceCount.ReferenceController);
        return false;
      }
      local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0;
      if ((local_318.Object == (SWindow *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      local_348.Object = local_318.Object;
      local_348.SharedReferenceCount.ReferenceController =
           local_318.SharedReferenceCount.ReferenceController;
      if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_318.Object == (SWindow *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (((local_368.AllocatorInstance.Data <= &local_348) &&
          (&local_348 <
           (TSharedRef<SWindow,1> *)
           (local_368.AllocatorInstance.Data + (longlong)local_368.ArrayMax * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (local_368.ArrayNum == local_368.ArrayMax) {
        local_368.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_368.AllocatorInstance,&local_368.ArrayMax);
      }
      lVar15 = (longlong)local_368.ArrayNum;
      local_368.ArrayNum = local_368.ArrayNum + 1;
      *(SWindow **)&local_368.AllocatorInstance.Data[lVar15 * 0x10].field_0x0 = local_348.Object;
      *(TReferenceControllerBase<1> **)(local_368.AllocatorInstance.Data + lVar15 * 0x10 + 8) =
           local_348.SharedReferenceCount.ReferenceController;
      if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_348.SharedReferenceCount.ReferenceController);
      FWidgetPath::FWidgetPath(&local_1a8);
      EVar5 = EVisibility::Visible;
      local_338.SharedReferenceCount.ReferenceController =
           (this->Widget).WeakReferenceCount.ReferenceController;
      local_338.Object = (SWidget *)0x0;
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        aVar4 = (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425fe2c6;
          }
          LOCK();
          aVar9 = (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          bVar6 = aVar4 == aVar9;
          if (bVar6) {
            (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)aVar4 + 1);
            aVar9 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar9;
        } while (!bVar6);
        local_338.Object = (this->Widget).Object;
      }
LAB_1425fe2c6:
      pTVar10 = TSharedPtr<SWidget,1>::ToSharedRef(&local_338,&local_2d8);
      local_2f8.Object = pTVar10->Object;
      local_2f8.SharedReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = FSlateWindowHelper::FindPathToWidget(&local_368,&local_2f8,&local_1a8,EVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
      if (!bVar6) {
        if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar16 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
        if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar16 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar16,local_1a8.Widgets.Array.ArrayNum);
        if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        DestructItems<TSharedRef<SWindow,1>,int>
                  ((TSharedRef<SWindow,1> *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
        if ((TSharedRef<SWindow,1> *)local_368.AllocatorInstance.Data !=
            (TSharedRef<SWindow,1> *)0x0) {
          FMemory::Free(local_368.AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_318.SharedReferenceCount.ReferenceController);
          return false;
        }
        goto LAB_1425fe542;
      }
      pFVar11 = FSlateApplicationBase::Get();
      cVar8 = (**(code **)(*(longlong *)pFVar11 + 0x150))(pFVar11,param_1,&local_1a8,2);
      if (cVar8 == '\0') {
        pFVar2 = (pFVar11->AccessibleMessageHandler).Object;
        pTVar1 = (pFVar11->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12 = FVariant::FVariant<bool>(&local_208,true);
        pFVar13 = FVariant::FVariant<bool>(&local_1f0,false);
        local_328.SharedReferenceCount.ReferenceController =
             (this->Widget).WeakReferenceCount.ReferenceController;
        local_328.Object = (SWidget *)0x0;
        if (local_328.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          aVar4 = (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              local_328.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              goto LAB_1425fe3b8;
            }
            LOCK();
            aVar9 = (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            bVar6 = aVar4 == aVar9;
            if (bVar6) {
              (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)aVar4 + 1);
              aVar9 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar9;
          } while (!bVar6);
          local_328.Object = (this->Widget).Object;
        }
LAB_1425fe3b8:
        pTVar10 = TSharedPtr<SWidget,1>::ToSharedRef(&local_328,&local_2c8);
        pFVar14 = FSlateAccessibleMessageHandler::FSlateWidgetAccessibleEventArgs::
                  FSlateWidgetAccessibleEventArgs
                            (&local_2a8,pTVar10,FocusChange,pFVar13,pFVar12,local_358);
        FSlateAccessibleMessageHandler::OnWidgetEventRaised(pFVar2,pFVar14);
        if (local_2a8.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.NewValue.Value.AllocatorInstance.Data);
        }
        if (local_2a8.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.OldValue.Value.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_328.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar16 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar16 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar16,local_1a8.Widgets.Array.ArrayNum)
      ;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      DestructItems<TSharedRef<SWindow,1>,int>
                ((TSharedRef<SWindow,1> *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
      if ((TSharedRef<SWindow,1> *)local_368.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0)
      {
        FMemory::Free(local_368.AllocatorInstance.Data);
      }
      goto LAB_1425fe631;
    }
  }
  pFVar11 = FSlateApplicationBase::Get();
  pTVar1 = (pFVar11->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar11->AccessibleMessageHandler).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = FVariant::FVariant<bool>(&local_1d8,true);
  pFVar13 = FVariant::FVariant<bool>(&local_1c0,false);
  local_308.SharedReferenceCount.ReferenceController =
       (this->Widget).WeakReferenceCount.ReferenceController;
  local_308.Object = (SWidget *)0x0;
  if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        local_308.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425fe5c6;
      }
      LOCK();
      aVar9 = (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar4 == aVar9;
      if (bVar6) {
        (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar4 + 1);
        aVar9 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar9;
    } while (!bVar6);
    local_308.Object = (this->Widget).Object;
  }
LAB_1425fe5c6:
  pTVar10 = TSharedPtr<SWidget,1>::ToSharedRef(&local_308,&local_2b8);
  pFVar14 = FSlateAccessibleMessageHandler::FSlateWidgetAccessibleEventArgs::
            FSlateWidgetAccessibleEventArgs(&local_258,pTVar10,FocusChange,pFVar13,pFVar12,param_1);
  FSlateAccessibleMessageHandler::OnWidgetEventRaised(pFVar2,pFVar14);
  if (local_258.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.NewValue.Value.AllocatorInstance.Data);
  }
  if (local_258.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.OldValue.Value.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  local_318.SharedReferenceCount.ReferenceController = pTVar1;
LAB_1425fe631:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.SharedReferenceCount.ReferenceController);
  return true;
}

// SupportsAccessibleFocus @ 142600a70

bool __thiscall FSlateAccessibleWidget::SupportsAccessibleFocus(FSlateAccessibleWidget *this)

{
  return true;
}

// SupportsFocus @ 142600be0

bool __thiscall FSlateAccessibleWidget::SupportsFocus(FSlateAccessibleWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  
  if ((((this->Widget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    return false;
  }
  pSVar6 = (SWidget *)0x0;
  pSVar8 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  if (pSVar8 != (SWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = pSVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142600c37;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar3 == aVar5;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar9);
    pSVar6 = (this->Widget).Object;
    pSVar7 = pSVar8;
    if (pSVar6 != (SWidget *)0x0) goto LAB_142600c5d;
  }
LAB_142600c37:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_142600c5d:
  uVar4 = (**(code **)(pSVar6->_padding_ + 0x198))(pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return (bool)uVar4;
}

// UpdateParent @ 1426052d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateAccessibleWidget::UpdateParent
          (FSlateAccessibleWidget *this,TSharedPtr<IAccessibleWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSlateAccessibleWidget *pFVar3;
  FSlateAccessibleMessageHandler *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  atomic<int> aVar9;
  int iVar10;
  FSlateApplicationBase *pFVar11;
  FVariant *pFVar12;
  FVariant *pFVar13;
  TSharedRef<IAccessibleWidget,1> *pTVar14;
  FVariant *pFVar15;
  int iVar16;
  FSlateAccessibleWidget *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  bool bVar20;
  IAccessibleWidget *local_e8;
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d8;
  FVariant local_d0;
  FVariant local_b8;
  undefined4 local_a0;
  FReadAccessScope local_98;
  TSharedRef<IAccessibleWidget,1> local_80;
  FVariant local_70;
  FVariant local_58;
  
  pTVar18 = (this->Parent).WeakReferenceCount.ReferenceController;
  bVar20 = false;
  pFVar17 = (FSlateAccessibleWidget *)0x0;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar18->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142605315;
      }
      LOCK();
      aVar9 = pTVar18->SharedReferenceCount;
      bVar19 = aVar2 == aVar9;
      if (bVar19) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar19);
    pFVar17 = (this->Parent).Object;
  }
LAB_142605315:
  pFVar3 = (FSlateAccessibleWidget *)param_1->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  if (pFVar3 == pFVar17) goto LAB_14260558c;
  pFVar11 = FSlateApplicationBase::Get();
  pTVar18 = (pFVar11->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  pFVar4 = (pFVar11->AccessibleMessageHandler).Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar16 = -1;
  if (param_1->Object == (IAccessibleWidget *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = (**(code **)(*(longlong *)param_1->Object + 8))();
  }
  pFVar12 = FVariant::FVariant<int>(&local_70,iVar10);
  pFVar15 = pFVar12;
  if ((((this->Parent).Object != (FSlateAccessibleWidget *)0x0) &&
      (pTVar5 = (this->Parent).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
    pFVar15 = (FVariant *)(this->Parent).WeakReferenceCount.ReferenceController;
    pFVar17 = (FSlateAccessibleWidget *)0x0;
    if (pFVar15 == (FVariant *)0x0) {
LAB_1426053d3:
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar20) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      iVar16 = *(int *)&(pFVar15->Value).AllocatorInstance.Data;
      do {
        if (iVar16 == 0) {
          pFVar15 = (FVariant *)0x0;
          goto LAB_1426053d3;
        }
        LOCK();
        iVar10 = *(int *)&(pFVar15->Value).AllocatorInstance.Data;
        bVar20 = iVar16 == iVar10;
        if (bVar20) {
          *(int *)&(pFVar15->Value).AllocatorInstance.Data = iVar16 + 1;
          iVar10 = iVar16;
        }
        UNLOCK();
        iVar16 = iVar10;
      } while (!bVar20);
      pFVar17 = (this->Parent).Object;
      if (pFVar17 == (FSlateAccessibleWidget *)0x0) goto LAB_1426053d3;
    }
    iVar16 = pFVar17->Id;
    bVar20 = true;
  }
  pFVar13 = FVariant::FVariant<int>(&local_58,iVar16);
  pTVar14 = TSharedFromThis<IAccessibleWidget,1>::AsShared
                      ((TSharedFromThis<IAccessibleWidget,1> *)&this->_padding_,&local_80);
  local_e8 = pTVar14->Object;
  local_e0 = (pTVar14->SharedReferenceCount).ReferenceController;
  if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = 3;
  FVariant::FVariant(&local_d0,pFVar13);
  FVariant::FVariant(&local_b8,pFVar12);
  local_a0 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar14->SharedReferenceCount).ReferenceController);
  pFVar6 = (pFVar13->Value).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (pFVar12->Value).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,&local_98)
  ;
  if (((int)pFVar4->_padding_ != 0) &&
     (plVar7 = (longlong *)pFVar4->_padding_, plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x68))(plVar7,&local_e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (local_b8.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Value.AllocatorInstance.Data);
  }
  if (local_d0.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Value.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar15);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  pTVar18 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar17 = (FSlateAccessibleWidget *)param_1->Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Parent).Object = pFVar17;
  if (pTVar18 != (this->Parent).WeakReferenceCount.ReferenceController) {
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->Parent).WeakReferenceCount.ReferenceController;
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
    (this->Parent).WeakReferenceCount.ReferenceController = pTVar18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
LAB_14260558c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

