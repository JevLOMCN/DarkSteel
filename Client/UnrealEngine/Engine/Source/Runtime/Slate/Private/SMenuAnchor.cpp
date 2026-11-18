// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 27

// SMenuAnchor @ 1428ba190

/* WARNING: Enum "Type": Some values do not have unique names */

SMenuAnchor * __thiscall SMenuAnchor::SMenuAnchor(SMenuAnchor *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  SPanel::SPanel((SPanel *)this);
  *(undefined1 *)&this->_padding_ = 1;
  (this->PopupWindowPtr).Object = (SWindow *)0x0;
  this->_padding_ = (longlong)&_vftable__for__SPanel__;
  this->_padding_ = (longlong)&_vftable__for__IMenuHost__;
  (this->PopupWindowPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->PopupMenuPtr).Object = (IMenu *)0x0;
  (this->PopupMenuPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OwnedMenuPtr).Object = (IMenu *)0x0;
  (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->MenuContent).Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->MenuContent).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->WrappedContent).Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->WrappedContent).SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->OnMenuOpenChanged = 0;
  *(undefined8 *)&(this->OnMenuOpenChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnMenuOpenChanged).field_0x10 = 0;
  (this->Placement).Value = MenuPlacement_BelowAnchor;
  (this->Placement).bIsSet = false;
  *(undefined8 *)&(this->Placement).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Placement).Getter = 0;
  *(undefined8 *)&(this->Placement).Getter.field_0x8 = 0;
  (this->Method).bIsSet = false;
  *(undefined1 *)&(this->MethodInUse)._padding_ = 0;
  (this->MethodInUse)._padding_ = 0;
  (this->MethodInUse)._padding_ = 0;
  (this->MethodInUse).PopupMethod = CreateNewWindow;
  (this->MethodInUse).ShouldThrottle = Yes;
  this->bDismissedThisTick = false;
  (this->LocalPopupPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_VFBasicLayoutWidgetSlot____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  return this;
}

// ~SMenuAnchor @ 1428c1320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::~SMenuAnchor(SMenuAnchor *this)

{
  atomic<int> *paVar1;
  TWeakPtr<IMenu,1> *pTVar2;
  longlong *plVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  longlong local_68 [2];
  undefined8 local_58 [2];
  FReadAccessScope local_48;
  undefined1 local_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined2 local_18;
  
  this->_padding_ = (longlong)&_vftable__for__SPanel__;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = &this->PopupMenuPtr;
  this->_padding_ = (longlong)&_vftable__for__IMenuHost__;
  if (((pTVar2->Object == (IMenu *)0x0) ||
      (pTVar11 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar11 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar11->SharedReferenceCount < 1))
  goto LAB_1428c1458;
  pTVar11 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
  pTVar10 = pTVar11;
  pTVar12 = pTVar9;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_1428c13b5:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar11 = pTVar10;
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1428c13b5;
      LOCK();
      aVar8 = pTVar11->SharedReferenceCount;
      bVar13 = aVar4 == aVar8;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar13);
    pTVar12 = (TReferenceControllerBase<1> *)pTVar2->Object;
    pTVar10 = pTVar11;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) goto LAB_1428c13b5;
  }
  (**(code **)(pTVar12->_padding_ + 0x38))(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (this->bDismissedThisTick == false) {
    this->bDismissedThisTick = true;
    bVar13 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged);
    if (bVar13) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged,
                 &local_48);
      if (*(int *)&(this->OnMenuOpenChanged).field_0x10 != 0) {
        pTVar9 = *(TReferenceControllerBase<1> **)&(this->OnMenuOpenChanged).field_0x8;
      }
      (**(code **)(pTVar9->_padding_ + 0x60))(pTVar9,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
    }
  }
LAB_1428c1458:
  if (pTVar2 != (TWeakPtr<IMenu,1> *)local_68) {
    pTVar9 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (IMenu *)0x0;
    (this->PopupMenuPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
  }
  local_78 = 0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OwnedMenuPtr != (TSharedPtr<IMenu,1> *)&local_78) {
    (this->OwnedMenuPtr).Object = (IMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnedMenuPtr).SharedReferenceCount,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  if (&this->PopupWindowPtr != (TWeakPtr<SWindow,1> *)local_58) {
    pTVar9 = (this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
    (this->PopupWindowPtr).Object = (SWindow *)0x0;
    (this->PopupWindowPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
  }
  local_18._0_1_ = CreateNewWindow;
  local_30 = 0;
  plVar3 = &(this->MethodInUse)._padding_;
  local_18 = 0x100;
  *(undefined1 *)&(this->MethodInUse)._padding_ = 0;
  local_18._1_1_ = Yes;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (plVar3 != &local_28) {
    *plVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MethodInUse)._padding_,&FStack_20);
  }
  (this->MethodInUse).PopupMethod = (EPopupMethod)local_18;
  (this->MethodInUse).ShouldThrottle = local_18._1_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int>
            ((TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar5 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->MethodInUse)._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Placement).Getter);
  pvVar6 = *(void **)&(this->Placement).Getter.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Placement).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged);
  pvVar6 = *(void **)&(this->OnMenuOpenChanged).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMenuOpenChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar6 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WrappedContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MenuContent).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnedMenuPtr).SharedReferenceCount.ReferenceController);
  pTVar9 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  pTVar9 = (this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  SPanel::~SPanel((SPanel *)this);
  return;
}

// ComputeDesiredSize @ 1428e1050

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SMenuAnchor::ComputeDesiredSize
          (SMenuAnchor *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  FDeprecateSlateVector2D FVar4;
  double dVar5;
  
  if ((this->Children).Children.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FVar4 = SWidget::GetDesiredSize
                    (*(SWidget **)
                      (*(longlong *)(this->Children).Children.AllocatorInstance.Data + 0x10));
  dVar5 = (double)*(float *)FVar4;
  if ((double)*(float *)FVar4 <= __real_3ff0000000000000) {
    dVar5 = __real_3ff0000000000000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5;
  dVar5 = (double)*(float *)((longlong)FVar4 + 4);
  if ((double)*(float *)((longlong)FVar4 + 4) <= __real_3ff0000000000000) {
    dVar5 = __real_3ff0000000000000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  return __return_storage_ptr__;
}

// ComputeNewWindowMenuPlacement @ 1428e2250

/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall
SMenuAnchor::ComputeNewWindowMenuPlacement
          (SMenuAnchor *this,FGeometry *__return_storage_ptr__,FGeometry *param_1,
          TVector2<double> *param_2,EMenuPlacement param_3)

{
  FSlateApplication *pFVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_res10;
  float fStackX_14;
  float local_res18;
  float local_res1c;
  ulonglong in_stack_ffffffffffffff48;
  FSlateLayoutTransform local_98;
  FSlateLayoutTransform local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  TVector2<double>_u_0 local_68;
  double local_58;
  double local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  
  FPopupPlacement::FPopupPlacement((FPopupPlacement *)&local_68._s_0,param_1,param_2,param_3);
  pFVar1 = FSlateApplication::Get();
  fVar4 = param_1->Scale;
  local_98.Translation.field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_1->AbsolutePosition).field0_0x0._s_0;
  local_res18 = (float)local_58 * fVar4 + local_98.Translation.field0_0x0._s_0.X;
  local_res1c = (float)local_50 * fVar4 + local_98.Translation.field0_0x0._s_0.Y;
  local_70 = fVar4 * local_48 + local_98.Translation.field0_0x0._s_0.X;
  local_6c = fVar4 * local_44 + local_98.Translation.field0_0x0._s_0.Y;
  fVar3 = fVar4 * local_40 + local_98.Translation.field0_0x0._s_0.X;
  local_80 = (float)local_68._s_0.X * fVar4;
  local_7c = (float)local_68._s_0.Y * fVar4;
  fStackX_14 = local_7c;
  local_res10 = local_80;
  fVar4 = fVar4 * local_3c + local_98.Translation.field0_0x0._s_0.Y;
  local_78 = local_70;
  if (fVar3 <= local_70) {
    local_78 = fVar3;
  }
  local_74 = local_6c;
  if (fVar4 <= local_6c) {
    local_74 = fVar4;
  }
  if (local_70 <= fVar3) {
    local_70 = fVar3;
  }
  if (local_6c <= fVar4) {
    local_6c = fVar4;
  }
  pfVar2 = (float *)(**(code **)(*(longlong *)pFVar1 + 0x1d8))
                              (pFVar1,&local_8c,&local_78,&local_80,
                               in_stack_ffffffffffffff48 & 0xffffffffffffff00,&local_res18,local_38,
                               0);
  local_98.Scale = param_1->Scale;
  local_98.Translation.field0_0x0 =
       (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&(param_1->AbsolutePosition).field0_0x0._s_0;
  fVar4 = __real_3f800000 / local_98.Scale;
  local_8c.Translation.field0_0x0._s_0.X =
       fVar4 * *pfVar2 +
       (float)((uint)(local_98.Translation.field0_0x0._s_0.X * fVar4) ^
              __xmm_80000000800000008000000080000000);
  local_8c.Translation.field0_0x0._s_0.Y =
       fVar4 * pfVar2[1] +
       (float)((uint)(local_98.Translation.field0_0x0._s_0.Y * fVar4) ^
              __xmm_80000000800000008000000080000000);
  local_8c.Scale = 1.0;
  fStackX_14 = (float)local_68._s_0.Y;
  local_res10 = (float)local_68._s_0.X;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_res10,&local_8c,&local_98,
             &param_1->AccumulatedRenderTransform,param_1->bHasRenderTransform);
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1428e29a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::ComputeVolatility(SMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((char)(this->MethodInUse)._padding_ != '\0') &&
       ((this->PopupMenuPtr).Object != (IMenu *)0x0)) &&
      (pTVar1 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// Construct @ 1428fdb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::Construct(SMenuAnchor *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  FBasicLayoutWidgetSlot *pFVar5;
  undefined1 local_150 [8];
  ForAnyElementType FStack_148;
  ulonglong local_140;
  FBasicLayoutWidgetSlot *local_138;
  SWidget *pSStack_130;
  FSharedReferencer<1> aFStack_128 [3];
  undefined1 local_110;
  undefined1 local_108 [8];
  ForAnyElementType FStack_100;
  ulonglong local_f8;
  undefined1 local_ec;
  undefined1 local_e4;
  FBasicLayoutWidgetSlot *local_e0;
  undefined8 uStack_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  undefined1 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  SWidget *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  SWidget *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  pFVar5 = ::operator_new(0x40);
  if (pFVar5 == (FBasicLayoutWidgetSlot *)0x0) {
    local_138 = (FBasicLayoutWidgetSlot *)0x0;
LAB_1428fdb83:
    aFStack_128[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pSStack_130 = (SWidget *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    local_138 = FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(pFVar5);
    pSStack_130 = (SWidget *)0x0;
    aFStack_128[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_138 == (FBasicLayoutWidgetSlot *)0x0) goto LAB_1428fdb83;
  }
  aFStack_128[1].ReferenceController._0_4_ = (param_1->_Padding).Left;
  aFStack_128[1].ReferenceController._4_4_ = (param_1->_Padding).Top;
  aFStack_128[2].ReferenceController._0_4_ = (param_1->_Padding).Right;
  aFStack_128[2].ReferenceController._4_4_ = (param_1->_Padding).Bottom;
  local_f8 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_108 = (undefined1  [8])0x0;
  FStack_100.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_150 = (undefined1  [8])0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_110 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_108,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
             (FWriteAccessScope *)&local_78);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_150);
  local_80.ReferenceController = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController
  ;
  pSStack_130 = (param_1->_Content).Widget.Object;
  if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_128,&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  TPanelChildren<FBasicLayoutWidgetSlot>::AddSlot(&this->Children,(FSlotArguments *)&local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_60);
  if (((int)local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
    local_f8 = local_f8 & 0xffffffff00000000;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (FStack_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_128[0].ReferenceController);
  if (local_138 != (FBasicLayoutWidgetSlot *)0x0) {
    (*(code *)**(undefined8 **)local_138)(local_138,1);
  }
  pFVar5 = ::operator_new(0x40);
  if (pFVar5 == (FBasicLayoutWidgetSlot *)0x0) {
    local_e0 = (FBasicLayoutWidgetSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    local_e0 = FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(pFVar5);
    uStack_d8 = 0;
    pTStack_d0 = (TReferenceControllerBase<1> *)0x0;
    if (local_e0 != (FBasicLayoutWidgetSlot *)0x0) goto LAB_1428fdda9;
  }
  pTStack_d0 = (TReferenceControllerBase<1> *)0x0;
  uStack_d8 = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1428fdda9:
  local_b8 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_8c = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  TPanelChildren<FBasicLayoutWidgetSlot>::AddSlot(&this->Children,(FSlotArguments *)&local_e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_48);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  if (local_e0 != (FBasicLayoutWidgetSlot *)0x0) {
    (*(code *)**(undefined8 **)local_e0)(local_e0,1);
  }
  pTVar1 = (param_1->_MenuContent).SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_MenuContent).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = (this->MenuContent).Object;
  pTStack_28 = (this->MenuContent).SharedReferenceCount.ReferenceController;
  (this->MenuContent).Object = pSVar2;
  (this->MenuContent).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  pTVar1 = (param_1->_MenuContent).SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_MenuContent).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (this->WrappedContent).Object;
  pTStack_18 = (this->WrappedContent).SharedReferenceCount.ReferenceController;
  (this->WrappedContent).Object = pSVar2;
  (this->WrappedContent).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMenuOpenChanged,&param_1->_OnMenuOpenChanged);
  (this->Placement).Value = (param_1->_Placement).Value;
  (this->Placement).bIsSet = (param_1->_Placement).bIsSet;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Placement).Getter,&(param_1->_Placement).Getter);
  this->bFitInWindow = param_1->_FitInWindow;
  if (&param_1->_Method != &this->Method) {
    if ((param_1->_Method).bIsSet == false) {
      if ((this->Method).bIsSet != false) {
        (this->Method).bIsSet = false;
      }
    }
    else {
      (this->Method).TypedValue = (param_1->_Method).TypedValue;
      (this->Method).bIsSet = true;
    }
  }
  this->bShouldDeferPaintingAfterWindowContent = param_1->_ShouldDeferPaintingAfterWindowContent;
  this->bUseApplicationMenuStack = param_1->_UseApplicationMenuStack;
  *(bool *)&this->_padding_ = param_1->_ShowMenuBackground;
  this->bIsCollapsedByParent = param_1->_IsCollapsedByParent;
  this->bApplyWidgetStyleToMenu = param_1->_ApplyWidgetStyleToMenu;
  return;
}

// DismissAllApplicationMenus @ 142925c10

void __cdecl SMenuAnchor::DismissAllApplicationMenus(void)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  uint uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  
  bVar7 = false;
  bVar3 = false;
  uVar14 = 0;
  if (0 < OpenApplicationMenus.ArrayNum) {
    lVar16 = 0;
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar14 < OpenApplicationMenus.ArrayNum) {
        uVar13 = uVar15;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(longlong *)(OpenApplicationMenus.AllocatorInstance.Data + lVar16) == 0) ||
          (*(longlong *)(OpenApplicationMenus.AllocatorInstance.Data + lVar16 + 8) == 0)) ||
         (*(int *)(*(longlong *)(OpenApplicationMenus.AllocatorInstance.Data + lVar16 + 8) + 8) < 1)
         ) {
        bVar3 = true;
        local_30 = (TReferenceControllerBase<1> *)0x0;
        plVar12 = (longlong *)0x0;
        pplVar11 = &local_38;
      }
      else {
        uVar13 = 0;
        if ((int)uVar14 < OpenApplicationMenus.ArrayNum) {
          uVar13 = uVar15;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar5.Data = OpenApplicationMenus.AllocatorInstance.Data;
        plVar12 = (longlong *)0x0;
        bVar7 = true;
        local_48 = (longlong *)0x0;
        local_40 = *(TReferenceControllerBase<1> **)
                    (OpenApplicationMenus.AllocatorInstance.Data + lVar16 + 8);
        if (local_40 == (TReferenceControllerBase<1> *)0x0) {
LAB_142925d47:
          pplVar11 = &local_48;
        }
        else {
          aVar4 = local_40->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              local_40 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_142925d47;
            }
            LOCK();
            aVar9 = local_40->SharedReferenceCount;
            bVar6 = aVar4 == aVar9;
            if (bVar6) {
              local_40->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar9 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar9;
          } while (!bVar6);
          plVar12 = *(longlong **)(FVar5.Data + lVar16);
          pplVar11 = &local_48;
          local_48 = plVar12;
        }
      }
      pTVar1 = (TReferenceControllerBase<1> *)pplVar11[1];
      pplVar11[1] = (longlong *)0x0;
      *pplVar11 = (longlong *)0x0;
      if (bVar3) {
        bVar3 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30);
      }
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      uVar13 = uVar14;
      if ((plVar12 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*plVar12 + 0x30))(plVar12), cVar8 != '\0')) {
        (**(code **)(*plVar12 + 0x38))(plVar12);
        lVar16 = lVar16 + -0x10;
        uVar13 = uVar14 - 1;
        uVar10 = 0;
        if ((int)uVar14 < OpenApplicationMenus.ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TWeakPtr<IMenu,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&OpenApplicationMenus,uVar14);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&OpenApplicationMenus.AllocatorInstance,OpenApplicationMenus.ArrayNum,
                   &OpenApplicationMenus.ArrayMax);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      uVar14 = uVar13 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar14 < OpenApplicationMenus.ArrayNum);
  }
  return;
}

// GetChildren @ 14293e510

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SMenuAnchor::GetChildren(SMenuAnchor *this)

{
  return (FChildren *)&this->Children;
}

// GetMenuPosition @ 142942740

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SMenuAnchor::GetMenuPosition(SMenuAnchor *this,TVector2<double> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  char cVar9;
  SWindow *this_00;
  SWindow *pSVar10;
  SWindow *pSVar11;
  bool bVar12;
  
  this_00 = (SWindow *)0x0;
  cVar9 = (char)(this->MethodInUse)._padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  if (cVar9 == '\0') {
    return __return_storage_ptr__;
  }
  if (((this->MethodInUse).PopupMethod != CreateNewWindow) ||
     ((this->PopupWindowPtr).Object == (SWindow *)0x0)) {
LAB_142942841:
    if ((((cVar9 != '\0') && ((this->MethodInUse).PopupMethod == UseCurrentWindow)) &&
        ((this->PopupMenuPtr).Object != (IMenu *)0x0)) &&
       ((pTVar1 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)))) {
      dVar4 = (this->ScreenPopupPosition).field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ScreenPopupPosition).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
      return __return_storage_ptr__;
    }
    return __return_storage_ptr__;
  }
  pTVar1 = (this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
  if ((pTVar1 == (TReferenceControllerBase<1> *)0x0) || ((int)pTVar1->SharedReferenceCount < 1)) {
    cVar9 = (char)(this->MethodInUse)._padding_;
    goto LAB_142942841;
  }
  pSVar11 = (SWindow *)(this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar11;
  if (pSVar11 != (SWindow *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar11->_padding_;
    do {
      pSVar10 = this_00;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1429427d1;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar11->_padding_;
      bVar12 = aVar5 == aVar6;
      if (bVar12) {
        *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar12);
    this_00 = (this->PopupWindowPtr).Object;
    pSVar10 = pSVar11;
    if (this_00 != (SWindow *)0x0) goto LAB_1429427f7;
  }
LAB_1429427d1:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar11 = pSVar10;
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector2<double> *)(*pcVar2)();
    return pTVar7;
  }
LAB_1429427f7:
  FVar8 = SWindow::GetPositionInScreen(this_00);
  dVar4 = (double)(float)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
  TVar3._8_4_ = SUB84(dVar4,0);
  TVar3._s_0.X = (double)(float)*(undefined8 *)FVar8;
  TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  return __return_storage_ptr__;
}

// GetMenuWindow @ 142942890

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
SMenuAnchor::GetMenuWindow(SMenuAnchor *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  SWindow *pSVar1;
  int iVar2;
  int iVar3;
  SWindow *pSVar4;
  SWindow *pSVar5;
  bool bVar6;
  
  if (((((char)this->_padding_ == '\0') || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
     (*(int *)(this->_padding_ + 8) < 1)) {
    __return_storage_ptr__->Object = (SWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar1 = (SWindow *)this->_padding_;
  pSVar4 = pSVar1;
  pSVar5 = (SWindow *)0x0;
  if (pSVar1 != (SWindow *)0x0) {
    iVar2 = (int)pSVar1->_padding_;
    do {
      pSVar4 = (SWindow *)0x0;
      pSVar5 = (SWindow *)0x0;
      if (iVar2 == 0) goto LAB_1429428e2;
      LOCK();
      iVar3 = (int)pSVar1->_padding_;
      bVar6 = iVar2 == iVar3;
      if (bVar6) {
        *(int *)&pSVar1->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar6);
    pSVar4 = pSVar1;
    pSVar5 = (SWindow *)this->_padding_;
  }
LAB_1429428e2:
  __return_storage_ptr__->Object = pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// HasOpenSubMenus @ 14294ede0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::HasOpenSubMenus(SMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateApplication *this_00;
  bool bVar4;
  TSharedPtr<IMenu,1> local_18;
  
  if ((((this->PopupMenuPtr).Object == (IMenu *)0x0) ||
      (pTVar1 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    return false;
  }
  this_00 = FSlateApplication::Get();
  local_18.SharedReferenceCount.ReferenceController =
       (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
  local_18.Object = (IMenu *)0x0;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14294ee45;
      }
      LOCK();
      aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_18.Object = (this->PopupMenuPtr).Object;
      bVar4 = FSlateApplication::HasOpenSubMenus(this_00,&local_18);
      return bVar4;
    }
  }
LAB_14294ee45:
  bVar4 = FSlateApplication::HasOpenSubMenus(this_00,&local_18);
  return bVar4;
}

// IsOpen @ 142955410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::IsOpen(SMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((((char)(this->MethodInUse)._padding_ != '\0') &&
       ((this->PopupMenuPtr).Object != (IMenu *)0x0)) &&
      (pTVar1 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsOpenAndReusingWindow @ 142955450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::IsOpenAndReusingWindow(SMenuAnchor *this)

{
  if (((char)(this->MethodInUse)._padding_ != '\0') &&
     ((this->MethodInUse).PopupMethod == UseCurrentWindow)) {
    return true;
  }
  return false;
}

// IsOpenViaCreatedWindow @ 142955470

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::IsOpenViaCreatedWindow(SMenuAnchor *this)

{
  if (((char)(this->MethodInUse)._padding_ != '\0') &&
     ((this->MethodInUse).PopupMethod == CreateNewWindow)) {
    return true;
  }
  return false;
}

// OnArrangeChildren @ 14295eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMenuAnchor::OnArrangeChildren(SMenuAnchor *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  EMenuPlacement EVar1;
  SWindow *pSVar2;
  code *pcVar3;
  double dVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  EMenuPlacement *pEVar8;
  FBasicLayoutWidgetSlot *pFVar9;
  FDeprecateSlateVector2D FVar10;
  FArrangedWidget *pFVar11;
  SWindow *pSVar12;
  SWindow *pSVar13;
  undefined1 auStackY_128 [32];
  float local_f8;
  float local_f4;
  FSlateLayoutTransform local_f0 [2];
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8 [4];
  FArrangedWidget local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pSVar12 = (SWindow *)0x0;
  if (((this->Children).Children.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ArrangeSingleChild<FBasicLayoutWidgetSlot>
            (GSlateFlowDirection,param_1,param_2,
             *(FBasicLayoutWidgetSlot **)(this->Children).Children.AllocatorInstance.Data,
             &UE::Math::TVector2<double>::UnitVector);
  pSVar2 = (SWindow *)(this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar13 = pSVar2;
  if (pSVar2 != (SWindow *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar13 = pSVar12;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14295ebe5;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar2->_padding_;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pSVar12 = (this->PopupWindowPtr).Object;
    pSVar13 = pSVar2;
  }
LAB_14295ebe5:
  if ((((char)(this->MethodInUse)._padding_ != '\0') &&
      ((this->MethodInUse).PopupMethod == UseCurrentWindow)) && (pSVar12 != (SWindow *)0x0)) {
    pEVar8 = TAttribute<enum_EMenuPlacement>::Get(&this->Placement);
    EVar1 = *pEVar8;
    pFVar9 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,1);
    FVar10 = SWidget::GetDesiredSize(*(SWidget **)&pFVar9->field_0x10);
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
    local_d8._8_4_ = SUB84(dVar4,0);
    local_d8._s_0.X = (double)(float)*(undefined8 *)FVar10;
    local_d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    FPopupPlacement::FPopupPlacement
              ((FPopupPlacement *)&local_c8[0]._s_0,param_1,(TVector2<double> *)&local_d8._s_0,EVar1
              );
    local_f0[0].Translation.field0_0x0._0_4_ =
         (undefined4)(this->LocalPopupPosition).field0_0x0._s_0.X;
    local_f0[0].Scale = 1.0;
    local_f0[0].Translation.field0_0x0._4_4_ =
         (undefined4)(this->LocalPopupPosition).field0_0x0._s_0.Y;
    local_f8 = (float)(double)local_c8[0]._0_8_;
    local_f4 = (float)(double)local_c8[0]._8_8_;
    pFVar9 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,1);
    pFVar11 = FGeometry::MakeChild
                        (param_1,&local_88,(TSharedRef<SWidget,1> *)&pFVar9->field_0x10,
                         (FDeprecateVector2DParameter *)&local_f8,local_f0);
    FArrangedChildren::AddWidget(param_2,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Widget.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar13);
  return;
}

// OnMenuClosed @ 142969e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::OnMenuClosed(SMenuAnchor *this,TSharedRef<IMenu,1> *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this->bDismissedThisTick = true;
  ResetPopupMenuContent(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged,
             &local_28);
  if ((*(int *)&(this->OnMenuOpenChanged).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnMenuOpenChanged).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged,
                 &local_28);
      if (*(int *)&(this->OnMenuOpenChanged).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnMenuOpenChanged).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent,
             &local_28);
  if ((*(int *)&(this->OnGetMenuContent).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnGetMenuContent).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pcVar1 = *(code **)(this->_padding_ + 0x248);
      local_28.DestructionSentinel._0_8_ = SNullWidget::NullWidget.Object;
      local_28.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar1)(this,&local_28);
      goto LAB_142969f21;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_142969f21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnMenuDismissed @ 142969f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::OnMenuDismissed(SMenuAnchor *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<IMenu,1> local_18;
  
  if (this->_padding_ == 0) {
    return;
  }
  if (this->_padding_ == 0) {
    return;
  }
  if (*(int *)(this->_padding_ + 8) < 1) {
    return;
  }
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      pTVar4 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142969fa7;
      LOCK();
      aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar4 = local_18.SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_142969fcd;
  }
LAB_142969fa7:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142969fcd:
  local_18.Object = (IMenu *)pTVar5;
  if ((pTVar5 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  OnMenuClosed((SMenuAnchor *)&this[-1]._padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnPaint @ 14297eed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SMenuAnchor::OnPaint
          (SMenuAnchor *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *this_00;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWindow *pSVar5;
  atomic<int> aVar6;
  FBasicLayoutWidgetSlot *pFVar7;
  FDeferredPaint *pFVar8;
  FSlateRect *pFVar9;
  FLinearColor_u_0 *pFVar10;
  ForElementType<FArrangedWidget> FVar11;
  SWindow *pSVar12;
  SWindow *this_01;
  bool bVar13;
  undefined1 auStackY_358 [32];
  FLinearColor_u_0 local_318;
  TVector2<float>_u_0 local_308;
  SMenuAnchor *pSStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  FPaintArgs *local_2e8;
  FSlateWindowElementList *local_2e0;
  TSharedRef<SWidget_const_,1> local_2d8;
  FLinearColor_u_0 local_2c8;
  TVector2<float>_u_0 local_2b8;
  SMenuAnchor *pSStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  FLinearColor_u_0 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  FSlateRect local_258;
  FArrangedChildren local_248;
  FDeferredPaint local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_358;
  this_01 = (SWindow *)0x0;
  local_2e0 = param_4;
  local_248.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_248.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_248.Array.ArrayNum = 0;
  local_248.bAllow3DWidgets = false;
  local_248.Array.ArrayMax = 4;
  local_2e8 = param_1;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_248,false);
  if (0 < local_248.Array.ArrayNum) {
    FVar11 = (ForElementType<FArrangedWidget>)&local_248.Array;
    if (local_248.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = local_248.Array.AllocatorInstance.SecondaryData;
    }
    pFVar7 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,0);
    this_00 = ((TSharedRef<SWidget,1> *)((longlong)FVar11 + 0x38))->Object;
    pSVar3 = *(SWidget **)&pFVar7->field_0x10;
    if (this_00 == pSVar3) {
      if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      local_318._0_8_ = local_2e8->RootGrid;
      local_318._8_8_ = local_2e8->CurrentGrid;
      local_308 = (local_2e8->WindowOffset).field0_0x0;
      local_2f8 = local_2e8->CurrentTime;
      uStack_2f0 = *(undefined8 *)&local_2e8->DeltaTime;
      pSStack_300 = this;
      param_5 = SWidget::Paint(this_00,(FPaintArgs *)&local_318._s_0,(FGeometry *)FVar11,param_3,
                               local_2e0,param_5 + 1,param_6,bVar13);
    }
    if (((((char)(this->MethodInUse)._padding_ != '\0') &&
         ((this->PopupMenuPtr).Object != (IMenu *)0x0)) &&
        (pTVar4 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
      if (this_00 == pSVar3) {
        if (local_248.Array.ArrayNum < 2) goto LAB_14297f388;
        FVar11 = (ForElementType<FArrangedWidget>)&local_248.Array;
        if (local_248.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar11 = local_248.Array.AllocatorInstance.SecondaryData;
        }
        FVar11 = (ForElementType<FArrangedWidget>)((longlong)FVar11 + 0x48);
      }
      else {
        if (local_248.Array.ArrayNum != 1) goto LAB_14297f388;
        FVar11 = (ForElementType<FArrangedWidget>)&local_248.Array;
        if (local_248.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar11 = local_248.Array.AllocatorInstance.SecondaryData;
        }
      }
      if (FVar11 != (ForElementType<FArrangedWidget>)0x0) {
        if (this->bShouldDeferPaintingAfterWindowContent == false) {
          pSVar5 = (SWindow *)(this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
          pSVar12 = pSVar5;
          if (pSVar5 != (SWindow *)0x0) {
            aVar2 = *(atomic<int> *)&pSVar5->_padding_;
            do {
              pSVar12 = this_01;
              if (aVar2 == (atomic<int>)0x0) goto LAB_14297f231;
              LOCK();
              aVar6 = *(atomic<int> *)&pSVar5->_padding_;
              bVar13 = aVar2 == aVar6;
              if (bVar13) {
                *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
                aVar6 = aVar2;
              }
              UNLOCK();
              aVar2 = aVar6;
            } while (!bVar13);
            this_01 = (this->PopupWindowPtr).Object;
            pSVar12 = pSVar5;
          }
LAB_14297f231:
          if (this_01 != (SWindow *)0x0) {
            local_2d8.Object = ((TSharedRef<SWidget,1> *)((longlong)FVar11 + 0x38))->Object;
            if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
              bVar13 = true;
            }
            else {
              bVar13 = false;
            }
            if (this->bApplyWidgetStyleToMenu == false) {
              pFVar10 = &local_318;
              local_318._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
              local_318._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
              local_318._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
              local_318._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
              local_308._s_0.Y = FLinearColor::White.field0_0x0._s_0.G;
              local_308._s_0.X = FLinearColor::White.field0_0x0._s_0.R;
              pSStack_300 = (SMenuAnchor *)
                            CONCAT44(FLinearColor::White.field0_0x0._s_0.A,
                                     FLinearColor::White.field0_0x0._s_0.B);
              local_2f8 = (double)CONCAT44(FWidgetStyle::SubdueAmount *
                                           FLinearColor::White.field0_0x0._s_0.G,
                                           FWidgetStyle::SubdueAmount *
                                           FLinearColor::White.field0_0x0._s_0.R);
              uStack_2f0 = CONCAT44(FWidgetStyle::SubdueAmount *
                                    FLinearColor::White.field0_0x0._s_0.A,
                                    FWidgetStyle::SubdueAmount *
                                    FLinearColor::White.field0_0x0._s_0.B);
            }
            else {
              local_298._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
              local_298._8_8_ =
                   *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
              local_288 = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
              uStack_280 = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
              local_278 = *(undefined8 *)&(param_6->SubduedForeground).field0_0x0;
              uStack_270 = *(undefined8 *)((longlong)&(param_6->SubduedForeground).field0_0x0 + 8);
              pFVar10 = &local_298;
            }
            pFVar9 = SWindow::GetClippingRectangleInWindow(this_01,&local_258);
            local_2c8._0_8_ = local_2e8->RootGrid;
            local_2c8._8_8_ = local_2e8->CurrentGrid;
            local_2b8 = (local_2e8->WindowOffset).field0_0x0;
            local_2a8 = local_2e8->CurrentTime;
            uStack_2a0 = *(undefined8 *)&local_2e8->DeltaTime;
            pSStack_2b0 = this;
            SWidget::Paint(local_2d8.Object,(FPaintArgs *)&local_2c8._s_0,(FGeometry *)FVar11,pFVar9
                           ,local_2e0,param_5 + 1,(FWidgetStyle *)&pFVar10->_s_0,bVar13);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar12);
        }
        else {
          if (this->bApplyWidgetStyleToMenu == false) {
            pFVar10 = &local_318;
            local_318._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
            local_318._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
            local_318._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
            local_318._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
            local_308._s_0.Y = FLinearColor::White.field0_0x0._s_0.G;
            local_308._s_0.X = FLinearColor::White.field0_0x0._s_0.R;
            pSStack_300 = (SMenuAnchor *)
                          CONCAT44(FLinearColor::White.field0_0x0._s_0.A,
                                   FLinearColor::White.field0_0x0._s_0.B);
            local_2f8 = (double)CONCAT44(FWidgetStyle::SubdueAmount *
                                         FLinearColor::White.field0_0x0._s_0.G,
                                         FWidgetStyle::SubdueAmount *
                                         FLinearColor::White.field0_0x0._s_0.R);
            uStack_2f0 = CONCAT44(FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A
                                  ,FWidgetStyle::SubdueAmount *
                                   FLinearColor::White.field0_0x0._s_0.B);
          }
          else {
            local_2c8._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
            local_2c8._8_8_ =
                 *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
            pFVar10 = &local_2c8;
            local_2b8 = *(TVector2<float>_u_0 *)&(param_6->ForegroundColor).field0_0x0;
            pSStack_2b0 = *(SMenuAnchor **)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
            local_2a8 = *(double *)&(param_6->SubduedForeground).field0_0x0;
            uStack_2a0 = *(undefined8 *)((longlong)&(param_6->SubduedForeground).field0_0x0 + 8);
          }
          local_2d8.Object = ((TSharedRef<SWidget,1> *)((longlong)FVar11 + 0x38))->Object;
          local_298._0_8_ = *(undefined8 *)FVar11;
          local_298._8_8_ = *(undefined8 *)((longlong)FVar11 + 8);
          local_2d8.SharedReferenceCount.ReferenceController =
               ((FSharedReferencer<1> *)((longlong)FVar11 + 0x40))->ReferenceController;
          local_268 = *(undefined8 *)((longlong)FVar11 + 0x30);
          local_288 = *(undefined8 *)((longlong)FVar11 + 0x10);
          uStack_280 = *(undefined8 *)((longlong)FVar11 + 0x18);
          local_278 = *(undefined8 *)((longlong)FVar11 + 0x20);
          uStack_270 = *(undefined8 *)((longlong)FVar11 + 0x28);
          if (local_2d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar8 = FSlateWindowElementList::FDeferredPaint::FDeferredPaint
                             (&local_108,&local_2d8,local_2e8,(FGeometry *)&local_298._s_0,
                              (FWidgetStyle *)&pFVar10->_s_0,param_7);
          FSlateWindowElementList::QueueDeferredPainting(local_2e0,pFVar8);
          if (local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_108.WidgetToPaintPtr.WeakReferenceCount.ReferenceController,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2d8.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
LAB_14297f388:
  FVar11 = (ForElementType<FArrangedWidget>)&local_248.Array;
  if (local_248.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar11 = local_248.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar11,local_248.Array.ArrayNum);
  if (local_248.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_248.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// ResetPopupMenuContent @ 14298aa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::ResetPopupMenuContent(SMenuAnchor *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlotBase *this_00;
  code *pcVar4;
  SWidget *pSVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  longlong *plVar8;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  SWidget *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined1 local_28;
  undefined8 local_20;
  FSharedReferencer<1> FStack_18;
  undefined2 local_10;
  
  local_10._0_1_ = CreateNewWindow;
  local_28 = 0;
  *(undefined1 *)&(this->MethodInUse)._padding_ = 0;
  plVar8 = &(this->MethodInUse)._padding_;
  local_10._1_1_ = Yes;
  local_20 = 0;
  FStack_18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_10 = 0x100;
  if (plVar8 != &local_20) {
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->MethodInUse)._padding_,&FStack_18);
  }
  (this->MethodInUse).PopupMethod = (EPopupMethod)local_10;
  (this->MethodInUse).ShouldThrottle = local_10._1_1_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_18.ReferenceController);
  if (&this->PopupMenuPtr != (TWeakPtr<IMenu,1> *)local_48) {
    pTVar3 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
    (this->PopupMenuPtr).Object = (IMenu *)0x0;
    (this->PopupMenuPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
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
  }
  local_68 = 0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->OwnedMenuPtr != (TSharedPtr<IMenu,1> *)&local_68) {
    (this->OwnedMenuPtr).Object = (IMenu *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnedMenuPtr).SharedReferenceCount,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  if (&this->PopupWindowPtr != (TWeakPtr<SWindow,1> *)local_38) {
    pTVar3 = (this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
    (this->PopupWindowPtr).Object = (SWindow *)0x0;
    (this->PopupWindowPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  if ((this->Children).Children.ArrayNum < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = *(FSlotBase **)((this->Children).Children.AllocatorInstance.Data + 8);
  FSlotBase::DetatchParentFromContent(this_00);
  FVar6 = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar5 = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this_00->Widget).Object;
  pTStack_50 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar5;
  (this_00->Widget).SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SWidget::Invalidate((SWidget *)this,ChildOrder|Volatility);
  return;
}

// SetContent @ 14298f070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::SetContent(SMenuAnchor *this,TSharedRef<SWidget,1> *param_1)

{
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  *this_00;
  FSlotBase *this_01;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  longlong lVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->Children).Children.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = *(longlong *)(this->Children).Children.AllocatorInstance.Data;
  local_40._0_4_ = 0.0;
  local_40._4_4_ = 0.0;
  local_40._8_4_ = 0.0;
  local_40._12_4_ = 0.0;
  local_40[0x10] = true;
  this_00 = (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
             *)(lVar6 + 0x28);
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  if (this_00 ==
      (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
       *)0x0) {
    lVar6 = 0;
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  ::Assign(this_00,(ISlateAttributeContainer *)(lVar6 + 0x20),(TAttribute<FMargin> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  if ((this->Children).Children.ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_01 = *(FSlotBase **)(this->Children).Children.AllocatorInstance.Data;
  FSlotBase::DetatchParentFromContent(this_01);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this_01->Widget).SharedReferenceCount.ReferenceController;
  (this_01->Widget).Object = pSVar2;
  (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned(this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFitInWindow @ 142990a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::SetFitInWindow(SMenuAnchor *this,bool param_1)

{
  if (this->bFitInWindow != param_1) {
    this->bFitInWindow = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetIsOpen @ 142991540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::SetIsOpen(SMenuAnchor *this,bool param_1,bool param_2,int param_3)

{
  byte *pbVar1;
  TSharedPtr<SWidget,1> *pTVar2;
  float fVar3;
  float fVar4;
  atomic<int> aVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  EPopupMethod EVar10;
  EShouldThrottle EVar11;
  EMenuPlacement EVar12;
  code *pcVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FDeprecateVector2DParameter FVar16;
  FDeprecateVector2DParameter FVar17;
  int iVar18;
  EVisibility EVar19;
  ForAnyElementType FVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  bool bVar23;
  char cVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  FSlateApplication *pFVar28;
  TSharedRef<SWidget,1> *pTVar29;
  longlong lVar30;
  FDeprecateSlateVector2D FVar31;
  EMenuPlacement *pEVar32;
  EPopupMethod *pEVar33;
  IMenu *pIVar34;
  longlong *plVar35;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
  *pTVar36;
  undefined8 *puVar37;
  TSharedRef<SWindow,1> *pTVar38;
  FBasicLayoutWidgetSlot *pFVar39;
  FDeprecateVector2DParameter *pFVar40;
  FArguments *pFVar41;
  SWindow *pSVar42;
  SWindow *pSVar43;
  FMenuInWindow *this_00;
  TRawPtrProxy<FMenuInWindow> TVar44;
  FMenuInHostWidget *this_01;
  SWidget *pSVar45;
  SWidget *pSVar46;
  ForElementType<FArrangedWidget> FVar47;
  TReferenceControllerBase<1> *pTVar48;
  ForElementType<FArrangedWidget> FVar49;
  uint uVar50;
  SWidget *pSVar51;
  atomic<int> *paVar52;
  longlong lVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStackY_8d8 [32];
  FPopupTransitionEffect local_878;
  uint local_874;
  EPopupMethod local_870 [8];
  TSharedRef<SWidget,1> local_868;
  float local_858;
  float fStack_854;
  T0RequiredArgs local_850 [4];
  FLLMScope local_84c;
  TSharedPtr<IMenu,1> local_848;
  TSharedPtr<IMenu,1> local_838;
  TSharedRef<SWindow,1> local_828;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_818;
  float local_800;
  float local_7fc;
  float local_7f8;
  float local_7f4;
  undefined8 local_7f0;
  float local_7e8;
  float local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  TSharedRef<SWidget_const_,1> local_7c8;
  TSharedPtr<SWidget,1> local_7b8;
  TSharedRef<SWidget,1> local_7a8;
  TSharedPtr<IMenu,1> local_798;
  IMenu *local_788;
  TReferenceControllerBase<1> *pTStack_780;
  FPopupMethodReply local_778;
  float local_758;
  float local_754;
  float local_750;
  float local_74c;
  TSharedRef<IMenuHost,1> local_748;
  TSharedPtr<IMenu,1> local_738;
  char local_728 [8];
  longlong local_720;
  TReferenceControllerBase<1> *local_718;
  EPopupMethod local_710;
  EShouldThrottle local_70f;
  FName local_708;
  FMemScope local_700;
  TRawPtrProxy<FMenuInHostWidget> local_6f8 [2];
  TSharedPtr<SWidget,1> local_6e8;
  FPopupMethodReply local_6d8;
  TSharedPtr<SWidget,1> local_6b8;
  TSharedRef<IMenuHost,1> local_6a8;
  undefined1 local_690 [32];
  TReferenceControllerBase<1> *local_670;
  TSharedRef<SWidget,1> local_668;
  undefined1 local_658 [8];
  TReferenceControllerBase<1> *local_650;
  code *local_648;
  TReferenceControllerBase<1> *pTStack_640;
  undefined1 local_638 [8];
  TReferenceControllerBase<1> *local_630;
  void *local_628 [2];
  void *local_618 [2];
  TSharedRef<SWindow,1> local_608;
  TSharedRef<SWidget,1> local_5f8;
  SWidget *local_5e8;
  TReferenceControllerBase<1> *pTStack_5e0;
  TSharedRef<SWidget,1> local_5d8;
  TSharedRef<SWindow,1> local_5c8;
  TSharedRef<SWindow,1> local_5b8;
  TSharedRef<SWindow,1> local_5a8;
  IMenu *local_598;
  TReferenceControllerBase<1> *pTStack_590;
  code *local_588;
  TReferenceControllerBase<1> *pTStack_580;
  TSharedRef<SWindow,1> local_578;
  TSharedRef<SWidget,1> local_568;
  IMenu *local_558;
  TReferenceControllerBase<1> *pTStack_550;
  longlong local_548;
  TReferenceControllerBase<1> *pTStack_540;
  undefined1 local_538 [32];
  undefined1 local_518 [16];
  undefined1 local_508 [32];
  TSharedRef<SWindow,1> local_4e8;
  FArguments local_4d8;
  FWidgetPath local_1e0;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  pSVar45 = (SWidget *)0x0;
  if (((((char)(this->MethodInUse)._padding_ == '\0') ||
       ((this->PopupMenuPtr).Object == (IMenu *)0x0)) ||
      (pTVar48 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar48 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar48->SharedReferenceCount < 1)) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  if (bVar23 == param_1) {
    return;
  }
  local_874 = param_3;
  if (param_1) {
    bVar23 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
    if (bVar23) {
      pcVar13 = *(code **)(this->_padding_ + 0x248);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent,
                 (FReadAccessScope *)(local_508 + 8));
      pSVar46 = pSVar45;
      if (*(int *)&(this->OnGetMenuContent).field_0x10 != 0) {
        pSVar46 = *(SWidget **)&(this->OnGetMenuContent).field_0x8;
      }
      (**(code **)(pSVar46->_padding_ + 0x60))(pSVar46,local_690 + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_508 + 8));
      (*pcVar13)(this,local_690 + 8);
    }
    if ((this->MenuContent).Object == (SWidget *)0x0) goto LAB_142992a27;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged,
               (FReadAccessScope *)(local_538 + 8));
    if (((*(int *)&(this->OnMenuOpenChanged).field_0x10 == 0) ||
        (plVar35 = *(longlong **)&(this->OnMenuOpenChanged).field_0x8, plVar35 == (longlong *)0x0))
       || (cVar24 = (**(code **)(*plVar35 + 0x38))(), cVar24 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_538 + 8));
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_538 + 8));
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Execute
                (&this->OnMenuOpenChanged,true);
    }
    FWidgetPath::FWidgetPath(&local_1e0);
    pFVar28 = FSlateApplication::Get();
    EVar19 = EVisibility::Visible;
    pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)(local_690 + 0x18));
    local_7c8.Object = pTVar29->Object;
    local_7c8.SharedReferenceCount.ReferenceController =
         (pTVar29->SharedReferenceCount).ReferenceController;
    if (local_7c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::GeneratePathToWidgetUnchecked(pFVar28,&local_7c8,&local_1e0,EVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_670);
    bVar23 = FWidgetPath::IsValid(&local_1e0);
    if (bVar23) {
      uVar50 = 0;
      if ((int)(local_1e0.Widgets.Array.ArrayNum - 1U) < local_1e0.Widgets.Array.ArrayNum) {
        uVar50 = ~(local_1e0.Widgets.Array.ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar49 = (ForElementType<FArrangedWidget>)&local_1e0.Widgets.Array;
      if (local_1e0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar49 = local_1e0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      lVar30 = (longlong)local_1e0.Widgets.Array.ArrayNum;
      fVar54 = ((float *)((longlong)FVar49 + -0x40))[lVar30 * 0x12];
      SWidget::SlatePrepass((SWidget *)this,fVar54);
      TSharedPtr<SWidget,1>::ToSharedRef(&this->MenuContent,&local_868);
      SWidget::SlatePrepass(local_868.Object,fVar54);
      FVar31 = SWidget::GetDesiredSize(local_868.Object);
      fVar54 = *(float *)FVar31;
      fVar56 = *(float *)((longlong)FVar31 + 4);
      pEVar32 = TAttribute<enum_EMenuPlacement>::Get(&this->Placement);
      EVar12 = *pEVar32;
      fVar3 = ((TVector2<float> *)((longlong)FVar49 + -0x3c))[lVar30 * 9].field0_0x0._s_0.X;
      fVar4 = *(float *)((undefined1 *)((longlong)FVar49 + -0x38) + lVar30 * 0x48);
      local_878.SlideDirection = None;
      fVar55 = fVar54;
      if ((EVar12 == MenuPlacement_ComboBox) || (EVar12 == MenuPlacement_ComboBoxRight)) {
        local_878.SlideDirection = ComboButton;
        fVar55 = *(float *)&((FArrangedWidget *)((longlong)FVar49 + -0x48))[lVar30].Geometry.Size;
        if (fVar55 <= fVar54) {
          fVar55 = fVar54;
        }
      }
      else if (EVar12 == MenuPlacement_BelowAnchor) {
        local_878.SlideDirection = TopMenu;
      }
      else if (EVar12 == MenuPlacement_MenuRight) {
        local_878.SlideDirection = SubMenu;
        FVar31 = ((FArrangedWidget *)((longlong)FVar49 + -0x48))[lVar30].Geometry.Size;
        fStack_854 = FVar31._4_4_;
        local_858 = FVar31._0_4_;
        fVar55 = fStack_854 * ((float (*) [2])((longlong)FVar49 + -0x24))[lVar30 * 9][0] +
                 local_858 *
                 ((TTransform2<float> *)((longlong)FVar49 + -0x2c))[lVar30 * 3].M.M[0][0];
        fVar56 = local_858 * ((float *)((longlong)FVar49 + -0x28))[lVar30 * 0x12] +
                 fStack_854 * ((float *)((longlong)FVar49 + -0x20))[lVar30 * 0x12];
        _local_858 = CONCAT44(fVar56,fVar55);
      }
      if ((this->Method).bIsSet == false) {
        uVar50 = local_1e0.Widgets.Array.ArrayNum - 1;
        if (-1 < (int)uVar50) {
          lVar53 = (longlong)(int)uVar50 * 0x48;
          do {
            uVar26 = 0;
            if ((int)uVar50 < local_1e0.Widgets.Array.ArrayNum) {
              uVar26 = ~uVar50 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            FVar47 = (ForElementType<FArrangedWidget>)&local_1e0.Widgets.Array;
            if (local_1e0.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar47 = local_1e0.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            plVar35 = *(longlong **)
                       ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar47 + 0x38))->Object +
                       lVar53);
            (**(code **)(*plVar35 + 0x120))(plVar35,local_728);
            if (local_728[0] != '\0') {
              local_778._padding_._0_1_ = local_728[0];
              local_778._padding_ = local_720;
              local_778._padding_ = (longlong)local_718;
              local_778.ShouldThrottle = local_70f;
              local_778.PopupMethod = local_710;
              local_718 = (TReferenceControllerBase<1> *)0x0;
              local_720 = 0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_142991a44;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_718);
            lVar53 = lVar53 + -0x48;
            uVar50 = uVar50 - 1;
          } while (-1 < (int)uVar50);
        }
        local_778._padding_._0_1_ = '\x01';
        local_778._padding_ = 0;
        local_778._padding_ = 0;
        local_778.PopupMethod = CreateNewWindow;
        local_778.ShouldThrottle = Yes;
LAB_142991a44:
        FPopupMethodReply::operator=(&this->MethodInUse,&local_778);
        pTVar48 = (TReferenceControllerBase<1> *)local_778._padding_;
      }
      else {
        local_6d8._padding_._0_1_ = 1;
        local_6d8._padding_ = 0;
        local_6d8._padding_ = 0;
        pEVar33 = TOptional<enum_EPopupMethod>::GetValue(&this->Method);
        local_6d8.ShouldThrottle = Yes;
        local_6d8.PopupMethod = *pEVar33;
        FPopupMethodReply::operator=(&this->MethodInUse,&local_6d8);
        pTVar48 = (TReferenceControllerBase<1> *)local_6d8._padding_;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
      pSVar46 = local_868.Object;
      EVar10 = (this->MethodInUse).PopupMethod;
      if (this->bUseApplicationMenuStack == false) {
        if (EVar10 != CreateNewWindow) {
          if ((EVar10 != UseCurrentWindow) &&
             (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_8126881042398182900>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                                  ,0x20c,
                                  "MethodInUse.GetPopupMethod() == EPopupMethod::UseCurrentWindow"),
             bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar38 = FWidgetPath::GetWindow(&local_1e0,&local_578);
          TWeakPtr<SWindow,1>::operator=<SWindow>(&this->PopupWindowPtr,pTVar38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_578.SharedReferenceCount.ReferenceController);
          uVar50 = local_874;
          if (param_2) {
            pFVar28 = FSlateApplication::Get();
            uVar50 = local_874;
            FSlateApplication::ReleaseAllPointerCapture(pFVar28,local_874);
          }
          pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_568);
          pTVar48 = (pTVar29->SharedReferenceCount).ReferenceController;
          pSVar46 = pTVar29->Object;
          if (pTVar48 == (TReferenceControllerBase<1> *)0x0) {
            paVar52 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar52 = &pTVar48->SharedReferenceCount;
            LOCK();
            *paVar52 = (atomic<int>)((int)*paVar52 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_568.SharedReferenceCount.ReferenceController);
          this_01 = ::operator_new(0x60);
          if (this_01 != (FMenuInHostWidget *)0x0) {
            bVar23 = this->bIsCollapsedByParent;
            if (pSVar46 != (SWidget *)0x0) {
              pSVar45 = pSVar46 + 1;
            }
            if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar52 = (atomic<int>)((int)*paVar52 + 1);
              UNLOCK();
            }
            local_6a8.Object = (IMenuHost *)pSVar45;
            local_6a8.SharedReferenceCount.ReferenceController = pTVar48;
            pSVar45 = (SWidget *)
                      FMenuInHostWidget::FMenuInHostWidget(this_01,&local_6a8,&local_868,bVar23);
            if ((((pSVar45 != (SWidget *)0x0) && (pSVar45->_padding_ != 0)) &&
                (pSVar45->_padding_ != 0)) &&
               ((0 < *(int *)(pSVar45->_padding_ + 8) &&
                (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!InObject || !InObject->DoesSharedInstanceExist()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x7a5,L"Trying to share an already-shared object"), bVar23))))
            {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          local_6f8[0].Object = (FMenuInHostWidget *)pSVar45;
          TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><FMenuInHostWidget>(&local_798,local_6f8);
          if (local_798.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_558 = (this->OwnedMenuPtr).Object;
          pTStack_550 = (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController;
          (this->OwnedMenuPtr).Object = local_798.Object;
          (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController =
               local_798.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_550);
          (this->PopupMenuPtr).Object = (this->OwnedMenuPtr).Object;
          pTVar14 = (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController;
          if (pTVar14 != (this->PopupMenuPtr).WeakReferenceCount.ReferenceController) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar15 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar52 = &pTVar15->WeakReferenceCount;
              aVar5 = *paVar52;
              *paVar52 = (atomic<int>)((int)*paVar52 + -1);
              UNLOCK();
              if (aVar5 == (atomic<int>)0x1) {
                (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
              }
            }
            (this->PopupMenuPtr).WeakReferenceCount.ReferenceController = pTVar14;
          }
          if ((local_798.Object == (IMenu *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NewMenu.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                                  ,0x218,L""), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar39 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,1);
          FSlotBase::DetatchParentFromContent((FSlotBase *)pFVar39);
          if (local_868.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_548 = *(longlong *)&pFVar39->field_0x10;
          pTStack_540 = *(TReferenceControllerBase<1> **)&pFVar39->field_0x18;
          *(SWidget **)&pFVar39->field_0x10 = local_868.Object;
          *(TReferenceControllerBase<1> **)&pFVar39->field_0x18 =
               local_868.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_540);
          FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)pFVar39);
          if (param_2) {
            pFVar28 = FSlateApplication::Get();
            local_6e8.Object = local_868.Object;
            local_6e8.SharedReferenceCount.ReferenceController =
                 local_868.SharedReferenceCount.ReferenceController;
            if (local_868.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            FSlateApplication::SetUserFocus(pFVar28,uVar50,&local_6e8,SetDirectly);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_6e8.SharedReferenceCount.ReferenceController);
          }
          local_788 = local_798.Object;
          pTStack_780 = local_798.SharedReferenceCount.ReferenceController;
          if (local_798.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_798.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_798.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1)
            ;
            UNLOCK();
          }
          if (((OpenApplicationMenus.AllocatorInstance.Data <= (FScriptContainerElement *)&local_788
               ) && ((FScriptContainerElement *)&local_788 <
                     OpenApplicationMenus.AllocatorInstance.Data +
                     (longlong)OpenApplicationMenus.ArrayMax * 0x10)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (OpenApplicationMenus.ArrayNum == OpenApplicationMenus.ArrayMax) {
            OpenApplicationMenus.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&OpenApplicationMenus.AllocatorInstance,
                            &OpenApplicationMenus.ArrayMax);
          }
          FVar20.Data = OpenApplicationMenus.AllocatorInstance.Data;
          lVar30 = (longlong)OpenApplicationMenus.ArrayNum;
          OpenApplicationMenus.ArrayNum = OpenApplicationMenus.ArrayNum + 1;
          *(IMenu **)(OpenApplicationMenus.AllocatorInstance.Data + lVar30 * 0x10) = local_788;
          *(TReferenceControllerBase<1> **)(FVar20.Data + lVar30 * 0x10 + 8) = pTStack_780;
          goto LAB_142992990;
        }
        local_7f0 = ((FArrangedWidget *)((longlong)FVar49 + -0x48))[lVar30].Geometry.Size;
        local_750 = (float)local_7f0 + fVar3;
        local_74c = local_7f0._4_4_ + fVar4;
        local_758 = fVar3;
        local_754 = fVar4;
        pFVar28 = FSlateApplication::Get();
        fVar54 = (float)(**(code **)(*(longlong *)pFVar28 + 0x58))(pFVar28);
        SWidget::SlatePrepass(pSVar46,fVar54);
        FVar31 = SWidget::GetDesiredSize(local_868.Object);
        uVar6 = *(undefined4 *)FVar31;
        uVar7 = *(undefined4 *)((longlong)FVar31 + 4);
        FVar17 = *(FDeprecateVector2DParameter *)FVar31;
        pFVar28 = FSlateApplication::Get();
        local_7e8 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
        local_7e4 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
        local_7e0 = uVar6;
        local_7dc = uVar7;
        pFVar40 = (FDeprecateVector2DParameter *)
                  (**(code **)(*(longlong *)pFVar28 + 0x1d8))(pFVar28,local_518);
        uVar8 = *(undefined4 *)pFVar40;
        uVar9 = *(undefined4 *)&pFVar40->field_0x4;
        FVar16 = *pFVar40;
        if (param_2) {
          pFVar28 = FSlateApplication::Get();
          FSlateApplication::ReleaseAllPointerCapture(pFVar28,local_874);
        }
        pFVar41 = SWindow::FArguments::FArguments(&local_4d8);
        pFVar41->_Type = Menu;
        pFVar41->_SizingRule = Autosized;
        pFVar41->_IsPopupWindow = true;
        pFVar41->_ScreenPosition = FVar16;
        pFVar41->_AutoCenter = None;
        pFVar41->_ClientSize = FVar17;
        pFVar41->_InitialOpacity = 1.0;
        (pFVar41->_SupportsTransparency).Value = PerWindow;
        pFVar41->_FocusWhenFirstShown = param_2;
        pFVar41->_ActivationPolicy = (uint)param_2;
        if (local_868.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_5e8 = (pFVar41->_Content).Widget.Object;
        pTStack_5e0 = (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar41->_Content).Widget.Object = local_868.Object;
        (pFVar41->_Content).Widget.SharedReferenceCount.ReferenceController =
             local_868.SharedReferenceCount.ReferenceController;
        local_7d8 = uVar8;
        uStack_7d4 = uVar9;
        local_7d0 = uVar6;
        uStack_7cc = uVar7;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_5e0);
        FLLMScope::FLLMScope
                  (&local_84c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_708 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_700,&local_708,true);
        TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
                  (&local_818,"SWindow",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                   ,0x1eb,local_850);
        FMemScope::~FMemScope(&local_700);
        FLLMScope::~FLLMScope(&local_84c);
        pSVar42 = TSharedPtr<SWindow,1>::operator->(&local_818._Widget);
        SWidget::SWidgetConstruct((SWidget *)pSVar42,(FSlateBaseNamedArgs *)pFVar41);
        pSVar42 = local_818._Widget.Object;
        SWindow::Construct(local_818._Widget.Object,pFVar41);
        pSVar43 = TSharedPtr<SWindow,1>::operator->(&local_818._Widget);
        if ((pSVar43->_padding_ & 0x10) == 0) {
          cVar24 = (**(code **)(pSVar43->_padding_ + 0x228))(pSVar43);
          bVar25 = 0;
          if (cVar24 != '\0') goto LAB_142992302;
        }
        else {
LAB_142992302:
          bVar25 = 0x20;
        }
        *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ & 0xdf;
        *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ | bVar25;
        pSVar43 = TSharedPtr<SWindow,1>::operator->(&local_818._Widget);
        pbVar1 = (byte *)((longlong)&pSVar43->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((local_818._Widget.Object == (SWindow *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar22.ReferenceController = local_818._Widget.SharedReferenceCount.ReferenceController;
        local_828.SharedReferenceCount.ReferenceController =
             local_818._Widget.SharedReferenceCount.ReferenceController;
        local_828.Object = local_818._Widget.Object;
        local_818._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_818._Widget.Object = (SWindow *)0x0;
        if ((pSVar42 == (SWindow *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        TAttribute<FText>::~TAttribute<FText>(&local_4d8._CloseButtonToolTipText);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d8._Content.Widget.SharedReferenceCount.ReferenceController);
        TAttribute<FText>::~TAttribute<FText>(&local_4d8._Title);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4d8);
        FVar21.ReferenceController = local_868.SharedReferenceCount.ReferenceController;
        if (param_2) {
          local_7b8.Object = local_868.Object;
          local_7b8.SharedReferenceCount.ReferenceController =
               local_868.SharedReferenceCount.ReferenceController;
          if (local_868.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          TWeakPtr<SWidget,1>::operator=<SWidget>(&pSVar42->WidgetToFocusOnActivate,&local_7b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar21.ReferenceController);
        }
        this_00 = ::operator_new(0x60);
        FVar21.ReferenceController = local_828.SharedReferenceCount.ReferenceController;
        pSVar42 = local_828.Object;
        if (this_00 != (FMenuInWindow *)0x0) {
          bVar23 = this->bIsCollapsedByParent;
          local_5d8.Object = local_868.Object;
          local_5d8.SharedReferenceCount.ReferenceController =
               local_868.SharedReferenceCount.ReferenceController;
          if (local_868.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_5c8.Object = local_828.Object;
          local_5c8.SharedReferenceCount.ReferenceController =
               local_828.SharedReferenceCount.ReferenceController;
          if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar22.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          FMenuInWindow::FMenuInWindow(this_00,&local_5c8,&local_5d8,bVar23);
        }
        TVar44 = MakeShareable<FMenuInWindow>((FMenuInWindow *)local_538);
        TSharedPtr<IMenu,1>::TSharedPtr<IMenu,1><FMenuInWindow>
                  (&local_838,(TRawPtrProxy<FMenuInWindow> *)TVar44.Object);
        pFVar28 = FSlateApplication::Get();
        pTVar38 = FWidgetPath::GetWindow(&local_1e0,&local_4e8);
        local_5b8.Object = pSVar42;
        local_5b8.SharedReferenceCount.ReferenceController = FVar21.ReferenceController;
        if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar22.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::AddWindowAsNativeChild(pFVar28,&local_5a8,&local_5b8,pTVar38,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5a8.SharedReferenceCount.ReferenceController);
        if (local_838.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_598 = (this->OwnedMenuPtr).Object;
        pTStack_590 = (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController;
        (this->OwnedMenuPtr).Object = local_838.Object;
        (this->OwnedMenuPtr).SharedReferenceCount.ReferenceController =
             local_838.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_590);
        TWeakPtr<IMenu,1>::operator=<IMenu>(&this->PopupMenuPtr,&this->OwnedMenuPtr);
        if (local_838.Object == (IMenu *)0x0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewMenu.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                              ,0x204,L"");
          if (bVar23) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar23) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        pTVar36 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
                   *)(**(code **)((longlong)*local_838.Object + 0x28))(local_838.Object);
        local_7b8.SharedReferenceCount.ReferenceController =
             local_7b8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
        local_7b8.Object = (SWidget *)OnMenuClosed;
        local_588 = OnMenuClosed;
        pTStack_580 = local_7b8.SharedReferenceCount.ReferenceController;
        TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
        ::AddSP<SMenuAnchor>(pTVar36,(SMenuAnchor *)local_508,(pmf_6bd5d917 *)this);
        TWeakPtr<SWindow,1>::operator=<SWindow>(&this->PopupWindowPtr,&local_828);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_838.SharedReferenceCount.ReferenceController);
        local_848.SharedReferenceCount.ReferenceController =
             local_828.SharedReferenceCount.ReferenceController;
      }
      else if (EVar10 == CreateNewWindow) {
        pFVar28 = FSlateApplication::Get();
        local_870[0] = (this->MethodInUse).PopupMethod;
        bVar23 = this->bIsCollapsedByParent;
        local_870[1] = 1;
        local_800 = fVar55;
        local_7fc = fVar56;
        local_7f8 = fVar3;
        local_7f4 = fVar4;
        pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_668);
        FSlateApplication::PushMenu
                  (pFVar28,&local_848,pTVar29,&local_1e0,&local_868,
                   (FDeprecateVector2DParameter *)&local_7f8,&local_878,param_2,
                   (FDeprecateVector2DParameter *)&local_800,SUB82(local_870,0),bVar23,local_874);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_668.SharedReferenceCount.ReferenceController);
        if (local_848.Object == (IMenu *)0x0) {
          bVar23 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8126881042398183047>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                              ,0x179,"NewMenu.IsValid()");
          if (bVar23) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        else {
          pIVar34 = TSharedPtr<IMenu,1>::operator->(&local_848);
          plVar35 = (longlong *)(**(code **)((longlong)*pIVar34 + 0x18))(pIVar34,local_658);
          lVar30 = *plVar35;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_650);
          if (lVar30 == 0) {
            if (1 < (byte)LogSlate._0_1_) {
              (**(code **)((local_868.Object)->_padding_ + 0x1e0))(local_868.Object,local_618);
              (**(code **)(this->_padding_ + 0x1e0))(this,local_628);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
              if (local_628[0] != (void *)0x0) {
                FMemory::Free(local_628[0]);
              }
              if (local_618[0] != (void *)0x0) {
                FMemory::Free(local_618[0]);
              }
            }
            pSVar46 = (SWidget *)(this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
            pSVar51 = pSVar46;
            if (pSVar46 != (SWidget *)0x0) {
              iVar18 = (int)pSVar46->_padding_;
              do {
                pSVar51 = pSVar45;
                if (iVar18 == 0) goto LAB_142991d11;
                LOCK();
                iVar27 = (int)pSVar46->_padding_;
                bVar23 = iVar18 == iVar27;
                if (bVar23) {
                  *(int *)&pSVar46->_padding_ = iVar18 + 1;
                  iVar27 = iVar18;
                }
                UNLOCK();
                iVar18 = iVar27;
              } while (!bVar23);
              pIVar34 = (this->PopupMenuPtr).Object;
              pSVar51 = pSVar46;
              if (pIVar34 != (IMenu *)0x0) {
                (**(code **)((longlong)*pIVar34 + 0x38))();
              }
            }
LAB_142991d11:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pSVar51);
            ResetPopupMenuContent(this);
          }
          else {
            TWeakPtr<IMenu,1>::operator=<IMenu>(&this->PopupMenuPtr,&local_848);
            pIVar34 = TSharedPtr<IMenu,1>::operator->(&local_848);
            pTVar36 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
                       *)(**(code **)((longlong)*pIVar34 + 0x28))(pIVar34);
            local_7c8.SharedReferenceCount.ReferenceController =
                 local_7c8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
            local_7c8.Object = (SWidget *)OnMenuClosed;
            local_648 = OnMenuClosed;
            pTStack_640 = local_7c8.SharedReferenceCount.ReferenceController;
            TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
            ::AddSP<SMenuAnchor>(pTVar36,(SMenuAnchor *)local_690,(pmf_6bd5d917 *)this);
            pIVar34 = TSharedPtr<IMenu,1>::operator->(&local_848);
            puVar37 = (undefined8 *)(**(code **)((longlong)*pIVar34 + 0x18))(pIVar34,local_638);
            (this->PopupWindowPtr).Object = (SWindow *)*puVar37;
            SharedPointerInternals::FWeakReferencer<1>::operator=
                      (&(this->PopupWindowPtr).WeakReferenceCount,
                       (FSharedReferencer<1> *)(puVar37 + 1));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_630);
          }
        }
      }
      else {
        if ((EVar10 != UseCurrentWindow) &&
           (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8126881042398182994>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                                ,0x1ae,
                                "MethodInUse.GetPopupMethod() == EPopupMethod::UseCurrentWindow"),
           bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pTVar38 = FWidgetPath::GetDeepestWindow(&local_1e0,&local_608);
        TWeakPtr<SWindow,1>::operator=<SWindow>(&this->PopupWindowPtr,pTVar38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_608.SharedReferenceCount.ReferenceController);
        if (param_2) {
          pFVar28 = FSlateApplication::Get();
          FSlateApplication::ReleaseAllPointerCapture(pFVar28,local_874);
        }
        pTVar29 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5f8);
        pTVar48 = (pTVar29->SharedReferenceCount).ReferenceController;
        local_7a8.Object = pTVar29->Object;
        if (pTVar48 == (TReferenceControllerBase<1> *)0x0) {
          paVar52 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar52 = &pTVar48->SharedReferenceCount;
          LOCK();
          *paVar52 = (atomic<int>)((int)*paVar52 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5f8.SharedReferenceCount.ReferenceController);
        pFVar28 = FSlateApplication::Get();
        bVar23 = this->bIsCollapsedByParent;
        EVar11 = (this->MethodInUse).ShouldThrottle;
        if (local_7a8.Object == (SWidget *)0x0) {
          local_748.Object = (IMenuHost *)0x0;
        }
        else {
          local_748.Object = (IMenuHost *)(local_7a8.Object + 1);
        }
        if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar52 = (atomic<int>)((int)*paVar52 + 1);
          UNLOCK();
          LOCK();
          *paVar52 = (atomic<int>)((int)*paVar52 + 1);
          UNLOCK();
        }
        pTVar2 = &this->WrappedContent;
        local_7a8.SharedReferenceCount.ReferenceController = pTVar48;
        local_748.SharedReferenceCount.ReferenceController = pTVar48;
        FSlateApplication::PushHostedMenu
                  (pFVar28,&local_738,&local_7a8,&local_1e0,&local_748,&local_868,pTVar2,&local_878,
                   EVar11,bVar23);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_748.SharedReferenceCount.ReferenceController);
        FVar22.ReferenceController = local_738.SharedReferenceCount.ReferenceController;
        (this->PopupMenuPtr).Object = local_738.Object;
        if (local_738.SharedReferenceCount.ReferenceController !=
            (this->PopupMenuPtr).WeakReferenceCount.ReferenceController) {
          if (local_738.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_738.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_738.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1)
            ;
            UNLOCK();
          }
          pTVar14 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar52 = &pTVar14->WeakReferenceCount;
            aVar5 = *paVar52;
            *paVar52 = (atomic<int>)((int)*paVar52 + -1);
            UNLOCK();
            if (aVar5 == (atomic<int>)0x1) {
              (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
            }
          }
          (this->PopupMenuPtr).WeakReferenceCount.ReferenceController = FVar22.ReferenceController;
        }
        if ((local_738.Object == (IMenu *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewMenu.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                                ,0x1bf,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if ((pTVar2->Object == (SWidget *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("WrappedContent.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SMenuAnchor.cpp"
                                ,0x1c1,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar39 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,1);
        if ((pTVar2->Object == (SWidget *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pSVar45 = pTVar2->Object;
        pTVar14 = (this->WrappedContent).SharedReferenceCount.ReferenceController;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar45 == (SWidget *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar23)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FSlotBase::DetatchParentFromContent((FSlotBase *)pFVar39);
        pTVar15 = *(TReferenceControllerBase<1> **)&pFVar39->field_0x18;
        *(SWidget **)&pFVar39->field_0x10 = pSVar45;
        *(TReferenceControllerBase<1> **)&pFVar39->field_0x18 = pTVar14;
        FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)pFVar39);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        local_798.SharedReferenceCount.ReferenceController =
             local_738.SharedReferenceCount.ReferenceController;
        if (param_2) {
          pFVar28 = FSlateApplication::Get();
          local_6b8.Object = local_868.Object;
          local_6b8.SharedReferenceCount.ReferenceController =
               local_868.SharedReferenceCount.ReferenceController;
          if (local_868.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          FSlateApplication::SetUserFocus(pFVar28,local_874,&local_6b8,SetDirectly);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_6b8.SharedReferenceCount.ReferenceController);
          local_798.SharedReferenceCount.ReferenceController =
               local_738.SharedReferenceCount.ReferenceController;
        }
LAB_142992990:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_798.SharedReferenceCount.ReferenceController);
        local_848.SharedReferenceCount.ReferenceController = pTVar48;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_848.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_868.SharedReferenceCount.ReferenceController);
    }
    if (local_1e0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1e0.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar49 = (ForElementType<FArrangedWidget>)&local_1e0.Widgets.Array;
    if (local_1e0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar49 = local_1e0.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar49,local_1e0.Widgets.Array.ArrayNum);
    if (local_1e0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_1e0.Widgets.Array.AllocatorInstance.SecondaryData);
    }
LAB_142992a27:
    SWidget::Invalidate((SWidget *)this,ChildOrder|Volatility);
    return;
  }
  if ((((this->PopupMenuPtr).Object == (IMenu *)0x0) ||
      (pTVar48 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar48 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar48->SharedReferenceCount < 1))
  goto LAB_142992aaa;
  pSVar46 = (SWidget *)(this->PopupMenuPtr).WeakReferenceCount.ReferenceController;
  pSVar51 = pSVar46;
  if (pSVar46 == (SWidget *)0x0) {
LAB_142992a73:
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar46 = pSVar51;
    if (bVar23) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  else {
    iVar18 = (int)pSVar46->_padding_;
    do {
      pSVar51 = pSVar45;
      if (iVar18 == 0) goto LAB_142992a73;
      LOCK();
      iVar27 = (int)pSVar46->_padding_;
      bVar23 = iVar18 == iVar27;
      if (bVar23) {
        *(int *)&pSVar46->_padding_ = iVar18 + 1;
        iVar27 = iVar18;
      }
      UNLOCK();
      iVar18 = iVar27;
    } while (!bVar23);
    pSVar45 = (SWidget *)(this->PopupMenuPtr).Object;
    pSVar51 = pSVar46;
    if (pSVar45 == (SWidget *)0x0) goto LAB_142992a73;
  }
  (**(code **)(pSVar45->_padding_ + 0x38))(pSVar45);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar46);
LAB_142992aaa:
  ResetPopupMenuContent(this);
  return;
}

// SetMenuContent @ 142995650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::SetMenuContent(SMenuAnchor *this,TSharedRef<SWidget,1> *param_1)

{
  SWidget *local_28;
  FSharedReferencer<1> local_20;
  SWidget *local_18;
  FSharedReferencer<1> local_10;
  
  local_28 = param_1->Object;
  local_20.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MenuContent != (TSharedPtr<SWidget,1> *)&local_28) {
    (this->MenuContent).Object = local_28;
    local_28 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MenuContent).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->WrappedContent != (TSharedPtr<SWidget,1> *)&local_18) {
    (this->WrappedContent).Object = local_18;
    local_18 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WrappedContent).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMenuPlacement @ 142995720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::SetMenuPlacement(SMenuAnchor *this,TAttribute<EMenuPlacement> *param_1)

{
  TDelegate<EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  if ((this->Placement).bIsSet != false) {
    this_00 = &(this->Placement).Getter;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if (((*(int *)&(this->Placement).Getter.field_0x10 == 0) ||
        (plVar4 = *(longlong **)&(this->Placement).Getter.field_0x8, plVar4 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38)
    ;
    if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
        (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (cVar2 == cVar3) {
      if (cVar2 == '\0') {
        if ((this->Placement).bIsSet != param_1->bIsSet) goto LAB_142995869;
        bVar7 = (this->Placement).Value == param_1->Value;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
        lVar6 = 0;
        lVar5 = lVar6;
        if ((*(int *)&(this->Placement).Getter.field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(this->Placement).Getter.field_0x8, plVar4 != (longlong *)0x0))
        {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
          lVar5 = *plVar4;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                   &local_38);
        if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8);
          lVar6 = *plVar4;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        bVar7 = lVar5 == lVar6;
      }
      if (bVar7) goto LAB_142995895;
    }
  }
LAB_142995869:
  (this->Placement).Value = param_1->Value;
  (this->Placement).bIsSet = param_1->bIsSet;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Placement).Getter,&param_1->Getter);
  SWidget::Invalidate((SWidget *)this,Layout);
LAB_142995895:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// ShouldOpenDueToClick @ 1429a0a90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::ShouldOpenDueToClick(SMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((((char)(this->MethodInUse)._padding_ == '\0') ||
        ((this->PopupMenuPtr).Object == (IMenu *)0x0)) ||
       (pTVar1 = (this->PopupMenuPtr).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (this->bDismissedThisTick == false)) {
    return true;
  }
  return false;
}

// Tick @ 1429a9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMenuAnchor::Tick(SMenuAnchor *this,FGeometry *param_1,double param_2,float param_3)

{
  EMenuPlacement EVar1;
  SWindow *this_00;
  double dVar2;
  TVector2<double>_u_0 TVar3;
  FDeprecateVector2DParameter FVar4;
  FDeprecateVector2DParameter FVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FDeprecateSlateVector2D FVar9;
  EMenuPlacement *pEVar10;
  FSlateLayoutTransform *pFVar11;
  FBasicLayoutWidgetSlot *pFVar12;
  FSlateRect *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_218 [32];
  float local_1e0;
  float fStack_1dc;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  TVector2<float>_u_0_s_0 local_18c;
  undefined8 local_180;
  TVector2<float>_u_0_s_0 local_174;
  TVector2<double>_u_0 local_168;
  double local_158;
  double dStack_150;
  FSlateRect local_148;
  FSlateRect local_138;
  undefined1 local_120 [16];
  TReferenceControllerBase<1> *local_110;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  FWindowSizeLimits local_e8;
  FSlateLayoutTransform local_c8;
  FSlateRect local_bc;
  FGeometry local_a8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar14 = (this->PopupWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar14->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429a9a60;
      }
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar15 = aVar6 == aVar7;
      if (bVar15) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar15);
    this_00 = (this->PopupWindowPtr).Object;
    if ((this_00 != (SWindow *)0x0) && ((char)(this->MethodInUse)._padding_ != '\0')) {
      if ((this->MethodInUse).PopupMethod == CreateNewWindow) {
        pTVar8 = SWindow::GetContent(this_00,(TSharedRef<SWidget,1> *)(local_120 + 8));
        FVar9 = SWidget::GetDesiredSize(pTVar8->Object);
        dVar2 = (double)(float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
        local_108._8_4_ = SUB84(dVar2,0);
        local_108._s_0.X = (double)(float)*(undefined8 *)FVar9;
        local_108._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
        pEVar10 = TAttribute<enum_EMenuPlacement>::Get(&this->Placement);
        ComputeNewWindowMenuPlacement
                  (this,&local_a8,param_1,(TVector2<double> *)&local_108._s_0,*pEVar10);
        fVar18 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
        fVar16 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
        pFVar11 = SWindow::GetLocalToWindowTransform(this_00,&local_c8);
        local_1e0 = local_a8.Size._0_4_;
        fStack_1dc = local_a8.Size._4_4_;
        fVar19 = __real_3f800000 / (param_1->Scale / pFVar11->Scale);
        fVar17 = fVar19 * local_1e0 * local_a8.Scale;
        pEVar10 = TAttribute<enum_EMenuPlacement>::Get(&this->Placement);
        if (*pEVar10 == MenuPlacement_ComboBox) {
          SWindow::GetSizeLimits(this_00,&local_e8);
          local_e8.MinWidth.bIsSet = true;
          local_e8.MinWidth.TypedValue = fVar17;
          SWindow::SetSizeLimits(this_00,&local_e8);
        }
        FVar5._4_4_ = fVar19 * fStack_1dc * local_a8.Scale;
        FVar5._0_4_ = fVar17;
        FVar4._4_4_ = local_a8.AccumulatedRenderTransform.M.M[0][1] * fVar16 +
                      local_a8.AccumulatedRenderTransform.M.M[1][1] * fVar18 +
                      local_a8.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
        FVar4._0_4_ = local_a8.AccumulatedRenderTransform.M.M[0][0] * fVar16 +
                      local_a8.AccumulatedRenderTransform.M.M[1][0] * fVar18 +
                      local_a8.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
        SWindow::ReshapeWindow(this_00,FVar4,FVar5);
      }
      else if ((this->MethodInUse).PopupMethod == UseCurrentWindow) {
        pEVar10 = TAttribute<enum_EMenuPlacement>::Get(&this->Placement);
        EVar1 = *pEVar10;
        pFVar12 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->Children,1);
        FVar9 = SWidget::GetDesiredSize(*(SWidget **)&pFVar12->field_0x10);
        dVar2 = (double)(float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
        local_f8._8_4_ = SUB84(dVar2,0);
        local_f8._s_0.X = (double)(float)*(undefined8 *)FVar9;
        local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        FPopupPlacement::FPopupPlacement
                  ((FPopupPlacement *)&local_168._s_0,param_1,(TVector2<double> *)&local_f8._s_0,
                   EVar1);
        if (this->bFitInWindow != false) {
          pFVar13 = SWindow::GetClientRectInScreen(this_00,&local_bc);
          fVar17 = __real_3f800000 / param_1->Scale;
          local_18c = (param_1->AbsolutePosition).field0_0x0._s_0;
          local_1a8 = (float)((uint)(fVar17 * local_18c.X) ^ __xmm_80000000800000008000000080000000)
          ;
          fVar16 = (float)((uint)(fVar17 * local_18c.Y) ^ __xmm_80000000800000008000000080000000);
          local_180 = CONCAT44(fVar16,local_1a8);
          fVar18 = fVar17 * pFVar13->Left + local_1a8;
          local_1a8 = fVar17 * pFVar13->Right + local_1a8;
          local_1ac = fVar17 * pFVar13->Top + fVar16;
          fVar16 = fVar17 * pFVar13->Bottom + fVar16;
          local_1b0 = fVar18;
          if (local_1a8 < fVar18) {
            local_1b0 = local_1a8;
            local_1a8 = fVar18;
          }
          local_1a4 = fVar16;
          if (fVar16 < local_1ac) {
            local_1a4 = local_1ac;
            local_1ac = fVar16;
          }
          local_1a0 = (float)local_158;
          local_19c = (float)dStack_150;
          local_198 = (float)(local_158 + local_168._s_0.X);
          local_194 = (float)(dStack_150 + local_168._s_0.Y);
          FVar9 = ComputePopupFitInRect
                            ((FSlateRect *)local_120,&local_148,(EOrientation *)&local_1a0,
                             &local_138,SUB81(&local_1b0,0));
          local_158 = (double)(float)*(undefined8 *)FVar9;
          dStack_150 = (double)(float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
        }
        TVar3._8_4_ = SUB84(dStack_150,0);
        TVar3._s_0.X = local_158;
        TVar3._12_4_ = (int)((ulonglong)dStack_150 >> 0x20);
        (this->LocalPopupPosition).field0_0x0 = TVar3;
        local_174 = (param_1->AbsolutePosition).field0_0x0._s_0;
        dVar2 = (this->LocalPopupPosition).field0_0x0._s_0.Y;
        fVar16 = param_1->Scale;
        (this->ScreenPopupPosition).field0_0x0._s_0.X =
             (double)((float)(this->LocalPopupPosition).field0_0x0._s_0.X * param_1->Scale +
                     local_174.X);
        (this->ScreenPopupPosition).field0_0x0._s_0.Y =
             (double)((float)dVar2 * fVar16 + local_174.Y);
      }
    }
  }
LAB_1429a9a60:
  this->bDismissedThisTick = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// UsingApplicationMenuStack @ 1429afac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SMenuAnchor::UsingApplicationMenuStack(SMenuAnchor *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 1);
}

