// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 81

// SScrollBox @ 1428ba900

SScrollBox * __thiscall SScrollBox::SScrollBox(SScrollBox *this)

{
  double dVar1;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  dVar1 = __real_3fb99999a0000000;
  *(undefined ***)this = &___7SScrollBox__6B_;
  (this->ScrollBarSlotPadding).Left = 0.0;
  (this->ScrollBarSlotPadding).Top = 0.0;
  (this->ScrollBarSlotPadding).Right = 0.0;
  (this->ScrollBarSlotPadding).Bottom = 0.0;
  (this->ScrollPanel).Object = (SScrollPanel *)0x0;
  (this->ScrollPanel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ScrollBar).Object = (SScrollBar *)0x0;
  (this->ScrollBar).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->bFingerOwningTouchInteraction).bIsSet = false;
  FInertialScrollManager::FInertialScrollManager(&this->InertialScrollManager,dVar1);
  FOverscroll::FOverscroll(&this->Overscroll);
  *(undefined8 *)&this->OnUserScrolled = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->OnUserScrolled).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBarVisibilityChanged = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnScrollBarVisibilityChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBoxFocusReceived = 0;
  *(undefined8 *)&(this->OnScrollBoxFocusReceived).field_0x8 = 0;
  *(undefined4 *)&(this->OnScrollBoxFocusReceived).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBoxFocusLost = 0;
  *(undefined8 *)&(this->OnScrollBoxFocusLost).field_0x8 = 0;
  *(undefined4 *)&(this->OnScrollBoxFocusLost).field_0x10 = 0;
  (this->AnalogMouseWheelKey).KeyName.ComparisonIndex = 0;
  (this->AnalogMouseWheelKey).KeyName.Number = 0;
  (this->AnalogMouseWheelKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometry::FGeometry(&this->CachedGeometry);
  this->field_0x30 = this->field_0x30 | 4;
  *(undefined8 *)&this->ScrollIntoViewRequest = 0;
  *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x28 = 0;
  (this->UpdateInertialScrollHandle).Object = (FActiveTimerHandle *)0x0;
  (this->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->WheelScrollMultiplier = 1.0;
  this->bEnableTouchScrolling = true;
  this->bConsumePointerInput = true;
  this->ScrollingAnimationInterpolationSpeed = 15.0;
  this->bAllowContentToShrink = false;
  (this->field686_0x2c0).VerticalScrollBarSlot = (FSlot *)0x0;
  return this;
}

// ~SScrollBox @ 1428c1970

void __thiscall SScrollBox::~SScrollBox(SScrollBox *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7SScrollBox__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->ScrollIntoViewRequest != 0) {
    plVar1 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
    plVar4 = (longlong *)&(this->ScrollIntoViewRequest).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBoxFocusLost);
  pvVar2 = *(void **)&(this->OnScrollBoxFocusLost).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBoxFocusLost);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBoxFocusReceived);
  pvVar2 = *(void **)&(this->OnScrollBoxFocusReceived).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBoxFocusReceived);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBarVisibilityChanged);
  pvVar2 = *(void **)&(this->OnScrollBarVisibilityChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBarVisibilityChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled);
  pvVar2 = *(void **)&(this->OnUserScrolled).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrolled);
  pFVar3 = (this->InertialScrollManager).ScrollSamples.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollPanel).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AddSlot @ 1428d16c0

FScopedWidgetSlotArguments * __thiscall
SScrollBox::AddSlot(SScrollBox *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  SScrollPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  FScopedWidgetSlotArguments *pFVar4;
  FSlot *this_00;
  FSlot *local_res8;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->ScrollPanel).Object;
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &pSVar1->Children;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// BeginInertialScrolling @ 1428d9970

void __thiscall SScrollBox::BeginInertialScrolling(SScrollBox *this)

{
  TSharedPtr<FActiveTimerHandle,1> *pTVar1;
  undefined1 *puVar2;
  SWidget *pSVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TSharedRef<FActiveTimerHandle,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  FActiveTimerHandle *local_a8;
  FSharedReferencer<1> local_a0;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TSharedRef<SWidget,1> local_88;
  TSharedRef<FActiveTimerHandle,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  pTVar1 = &this->UpdateInertialScrollHandle;
  if (pTVar1->Object == (FActiveTimerHandle *)0x0) {
    this->bIsScrolling = true;
    this->bIsScrollingActiveTimerRegistered = true;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_60);
    if (puVar7 == (undefined8 *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      uStack_8c = local_78.SharedReferenceCount.ReferenceController._4_4_;
      local_98 = UpdateInertialScroll;
      uStack_90 = 0;
      pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_88);
      pTVar11 = (pTVar8->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar8->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar9;
      *puVar7 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSScrollBox___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = pSVar3;
      puVar7[4] = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      puVar7[5] = local_98;
      puVar7[6] = CONCAT44(uStack_8c,uStack_90);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar10 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_78,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_68);
    local_a0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar10->Object;
    if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FActiveTimerHandle,1> *)&local_a8) {
      pTVar1->Object = local_a8;
      local_a8 = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UpdateInertialScrollHandle).SharedReferenceCount,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                        local_78.SharedReferenceCount.ReferenceController._0_4_));
    SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  }
  return;
}

// CanUseInertialScroll @ 1428da970

bool __thiscall SScrollBox::CanUseInertialScroll(SScrollBox *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = FOverscroll::GetOverscroll(&this->Overscroll,&this->CachedGeometry);
  if (fVar1 != 0.0) {
    fVar2 = __real_3f800000;
    if ((fVar1 <= 0.0) && (fVar2 = __real_bf800000, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = __real_3f800000;
    if ((param_1 <= 0.0) && (fVar1 = __real_bf800000, 0.0 <= param_1)) {
      fVar1 = 0.0;
    }
    if (fVar2 == fVar1) {
      return false;
    }
  }
  return true;
}

// ClearChildren @ 1428db2e0

void __thiscall SScrollBox::ClearChildren(SScrollBox *this)

{
  int *piVar1;
  SScrollPanel *pSVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  TArray<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar2 = (this->ScrollPanel).Object;
  pTVar8 = &(pSVar2->Children).Children;
  piVar1 = &(pSVar2->Children).Children.ArrayMax;
  local_18.Data = (pTVar8->AllocatorInstance).Data;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (pSVar2->Children).Children.ArrayNum;
  local_10._4_4_ = (pSVar2->Children).Children.ArrayMax;
  *piVar1 = 0;
  (pSVar2->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)
             (pTVar8->AllocatorInstance).Data,0);
  (pSVar2->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar8->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar5 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar7 = 0;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar7 = (int)local_10;
  }
  if (pTVar8 != (TArray<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
              ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)
               (pTVar8->AllocatorInstance).Data,(pSVar2->Children).Children.ArrayNum);
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar8->AllocatorInstance).Data = local_18.Data;
    (pSVar2->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  DestructItems<TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_>,int>
            ((TUniquePtr<SScrollBox::FSlot,TDefaultDelete<SScrollBox::FSlot>_> *)local_18.Data,iVar7
            );
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeVolatility @ 1428e29e0

bool __thiscall SScrollBox::ComputeVolatility(SScrollBox *this)

{
  bool bVar1;
  
  if (!this->bIsScrolling) {
    bVar1 = IsRightClickScrolling(this);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// Construct @ 142903380

void __thiscall SScrollBox::Construct(SScrollBox *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TSharedPtr<SScrollBar,1> *pTVar2;
  float fVar3;
  EOrientation EVar4;
  FScrollBarStyle *pFVar5;
  SWidget *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *pTVar18;
  TSharedPtr<SScrollBar,1> *pTVar19;
  FArguments *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  SScrollBar *pSVar22;
  undefined4 local_res8;
  undefined4 uStackX_c;
  SScrollBar *local_res10;
  FName local_res18;
  T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>
  local_res20;
  undefined1 local_3f8 [8];
  FDelegateAllocation local_3f0;
  code *local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  undefined1 local_3c8 [8];
  ForAnyElementType local_3c0;
  int local_3b8;
  undefined1 local_3b0 [8];
  ForAnyElementType local_3a8;
  int local_3a0;
  uchar local_398;
  undefined1 local_397;
  undefined1 local_390 [8];
  void *pvStack_388;
  undefined8 local_380;
  FMemScope local_378;
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
  local_370;
  TSharedRef<SScrollPanel,1> local_358;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  TVector2<double>_u_0 local_300;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  FDestructionSentinel local_2d0;
  FDelegateAllocation *local_2b8;
  SScrollBar *local_2b0;
  TReferenceControllerBase<1> *pTStack_2a8;
  TSharedRef<SWidget,1> local_2a0;
  code *local_288;
  longlong lStack_280;
  TSharedPtr<SScrollBar,1> local_278;
  code *local_268;
  longlong lStack_260;
  SScrollPanel *local_258;
  TReferenceControllerBase<1> *pTStack_250;
  FArguments local_248;
  
  bVar9 = false;
  bVar8 = false;
  bVar14 = false;
  local_res8 = 0;
  if (param_1->_Style == (FScrollBoxStyle *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InArgs._Style",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
                        ,0x62,L"");
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this->Style = param_1->_Style;
  pFVar5 = param_1->_ScrollBarStyle;
  this->bIsScrolling = false;
  this->bAnimateScroll = false;
  this->ScrollBarStyle = pFVar5;
  this->DesiredScrollOffset = 0.0;
  fVar3 = param_1->_ScrollAnimationInterpSpeed;
  this->bShowSoftwareCursor = false;
  this->ScrollingAnimationInterpolationSpeed = fVar3;
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->PendingScrollTriggerAmount = 0.0;
  (this->SoftwareCursorPosition).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUserScrolled,&param_1->_OnUserScrolled);
  TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::operator=
            (&this->OnScrollBarVisibilityChanged,&param_1->_OnScrollBarVisibilityChanged);
  EVar4 = param_1->_Orientation;
  this->bScrollToEnd = false;
  this->bAllowsRightClickDragScrolling = false;
  this->bIsScrollingActiveTimerRegistered = false;
  this->Orientation = EVar4;
  this->ConsumeMouseWheel = param_1->_ConsumeMouseWheel;
  this->TickScrollDelta = 0.0;
  this->AllowOverscroll = param_1->_AllowOverscroll;
  this->BackPadScrolling = param_1->_BackPadScrolling;
  this->FrontPadScrolling = param_1->_FrontPadScrolling;
  this->field_0x464 =
       (this->bAnimateWheelScrolling ^ param_1->_AnimateWheelScrolling) & 1U ^ this->field_0x464;
  this->WheelScrollMultiplier = param_1->_WheelScrollMultiplier;
  this->bEnableTouchScrolling = param_1->_EnableTouchScrolling;
  this->bConsumePointerInput = param_1->_ConsumePointerInput;
  this->NavigationScrollPadding = param_1->_NavigationScrollPadding;
  this->NavigationDestination = param_1->_NavigationDestination;
  this->ScrollWhenFocusChanges = param_1->_ScrollWhenFocusChanges;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnScrollBoxFocusReceived,&param_1->_OnFocusReceived);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnScrollBoxFocusLost,&param_1->_OnFocusLost);
  this->bTouchPanningCapture = false;
  this->bIsFocusable = false;
  pTVar2 = &this->ScrollBar;
  this->field_0x32 = this->field_0x32 | 2;
  this->bAllowContentToShrink = param_1->_AllowContentToShrink;
  pSVar22 = (param_1->_ExternalScrollbar).Object;
  if (pSVar22 == (SScrollBar *)0x0) {
    pTVar19 = ConstructScrollBar(this,&local_278);
    if (pTVar2 != pTVar19) {
      pTVar2->Object = pTVar19->Object;
      pTVar19->Object = (SScrollBar *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ScrollBar).SharedReferenceCount,&pTVar19->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar2->Object->DragFocusCause = param_1->_ScrollBarDragFocusCause;
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_300._s_0.Y = (double)*(float *)&(param_1->_ScrollBarThickness).field_0x4;
    local_2f0 = 1;
    local_2d8 = 0;
    local_300._s_0.X = (double)*(float *)&param_1->_ScrollBarThickness;
    local_2e8 = 0;
    uStack_2e0 = 0;
    SScrollBar::SetThickness
              (pTVar2->Object,(TAttribute<UE::Math::TVector2<double>_> *)&local_300._s_0);
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_398 = (param_1->_ScrollBarVisibility).Value.Value;
    pSVar22 = pTVar2->Object;
    local_397 = 1;
    local_390 = (undefined1  [8])0x0;
    pvStack_388 = (void *)0x0;
    local_380 = 0;
    (pSVar22->UserVisibility).Value.Value.Value = local_398;
    (pSVar22->UserVisibility).bIsSet = true;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pSVar22->UserVisibility).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_390);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
    if (pvStack_388 != (void *)0x0) {
      FMemory::Free(pvStack_388);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_390);
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    SScrollBar::SetScrollBarAlwaysVisible(pTVar2->Object,param_1->_ScrollBarAlwaysVisible);
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar22 = pTVar2->Object;
    local_3d8 = ScrollBar_OnScrollBarVisibilityChanged;
    uStack_3d0 = 0;
    lStack_260 = (ulonglong)uStack_3cc << 0x20;
    local_268 = ScrollBar_OnScrollBarVisibilityChanged;
    pTVar18 = TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::CreateSP<SScrollBox>
                        ((TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *)
                         local_3b0,this,(pmf_3c398c20 *)&local_268);
    TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::operator=
              (&pSVar22->OnScrollBarVisibilityChanged,pTVar18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b0,
               (FWriteAccessScope *)&local_318);
    if ((local_3a0 != 0) && (local_3a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3a8,0,0,0x10);
      local_3a0 = 0;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (local_3a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b0);
    fVar3 = (param_1->_ScrollBarPadding).Left;
    fVar10 = (param_1->_ScrollBarPadding).Top;
    fVar11 = (param_1->_ScrollBarPadding).Right;
    fVar12 = (param_1->_ScrollBarPadding).Bottom;
    this->bScrollBarIsExternal = false;
    (this->ScrollBarSlotPadding).Left = fVar3;
    (this->ScrollBarSlotPadding).Top = fVar10;
    (this->ScrollBarSlotPadding).Right = fVar11;
    (this->ScrollBarSlotPadding).Bottom = fVar12;
  }
  else {
    pTVar21 = (param_1->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2b0 = pTVar2->Object;
    pTStack_2a8 = (this->ScrollBar).SharedReferenceCount.ReferenceController;
    pTVar2->Object = pSVar22;
    (this->ScrollBar).SharedReferenceCount.ReferenceController = pTVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a8)
    ;
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar22 = pTVar2->Object;
    local_3f8 = (undefined1  [8])0x0;
    local_3f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3f0.DelegateSize = 0;
    local_res10 = pSVar22;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f8,
               (FWriteAccessScope *)&local_2d0);
    local_2b8 = &local_3f0;
    puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_3f0);
    if (puVar15 == (undefined8 *)0x0) {
      pTVar21 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      uStack_3cc = local_358.SharedReferenceCount.ReferenceController._4_4_;
      local_3d8 = ScrollBar_OnUserScrolled;
      uStack_3d0 = 0;
      pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_2a0);
      pTVar21 = (pTVar16->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar16->Object;
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar15 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar17;
      *puVar15 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSScrollBox___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar15[3] = pSVar6;
      puVar15[4] = pTVar21;
      if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar21->WeakReferenceCount = (atomic<int>)((int)pTVar21->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = true;
      bVar8 = true;
      bVar14 = true;
      puVar15[5] = local_3d8;
      puVar15[6] = CONCAT44(uStack_3cc,uStack_3d0);
      pSVar22 = local_res10;
    }
    if (bVar14) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a0.SharedReferenceCount.ReferenceController);
    }
    if (local_2d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
    }
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&pSVar22->OnUserScrolled,
               (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)local_3f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f8,
               (FWriteAccessScope *)&local_348);
    if ((local_3f0.DelegateSize != 0) &&
       (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_3f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_3f0,0,0,0x10);
      local_3f0.DelegateSize = 0;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    if (local_3f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_3f0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3f8);
    if (pTVar2->Object == (SScrollBar *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar22 = pTVar2->Object;
    local_3d8 = ScrollBar_OnScrollBarVisibilityChanged;
    uStack_3d0 = 0;
    lStack_280 = (ulonglong)uStack_3cc << 0x20;
    local_288 = ScrollBar_OnScrollBarVisibilityChanged;
    pTVar18 = TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::CreateSP<SScrollBox>
                        ((TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *)
                         local_3c8,this,(pmf_3c398c20 *)&local_288);
    TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::operator=
              (&pSVar22->OnScrollBarVisibilityChanged,pTVar18);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c8,
               (FWriteAccessScope *)&local_330);
    if ((local_3b8 != 0) && (local_3c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c0,0,0,0x10);
      local_3b8 = 0;
    }
    if (local_330.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
    }
    if (local_3c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3c8);
    this->bScrollBarIsExternal = true;
  }
  pFVar20 = SScrollPanel::FArguments::FArguments(&local_248);
  *(undefined1 *)((longlong)&pFVar20->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pFVar20->_Orientation = this->Orientation;
  pFVar20->_BackPadScrolling = this->BackPadScrolling;
  pFVar20->_FrontPadScrolling = this->FrontPadScrolling;
  local_res20.Arg0 = &param_1->_Slots;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_378,&local_res18,true);
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
  ::
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
            (&local_370,"SScrollPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x9d,&local_res20);
  FMemScope::~FMemScope(&local_378);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  if (local_370._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_370._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_258 = (this->ScrollPanel).Object;
  pTStack_250 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  (this->ScrollPanel).Object = local_370._Widget.Object;
  (this->ScrollPanel).SharedReferenceCount.ReferenceController =
       local_370._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_250);
  TSlateDecl<SScrollPanel,RequiredArgs::T1RequiredArgs<TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>_&&>_>
  ::operator<<=(&local_370,&local_358,pFVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_358.SharedReferenceCount.ReferenceController._4_4_,
                      local_358.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  if (this->Orientation == Orient_Vertical) {
    ConstructVerticalLayout(this);
  }
  else {
    ConstructHorizontalLayout(this);
  }
  if (pTVar2->Object == (SScrollBar *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142903cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar2->Object->_padding_ + 0x250))(pTVar2->Object,0,__real_3f800000,0);
  return;
}

// ConstructHorizontalLayout @ 14290e350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SScrollBox::ConstructHorizontalLayout(SScrollBox *this)

{
  longlong *plVar1;
  undefined1 *this_00;
  FScrollBoxStyle *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SScrollPanel *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  code *pcVar9;
  SVerticalBox *this_01;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FSlot *this_02;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  FSlotArguments *pFVar18;
  TSharedRef<SOverlay,1> *pTVar19;
  FArguments *pFVar20;
  TSharedRef<SVerticalBox,1> *pTVar21;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar22;
  SScrollBox_u_704 *pSVar23;
  SScrollBox_u_704 *pSVar24;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1018;
  FLLMScope local_1014;
  FLLMScope local_1010;
  FLLMScope local_100c;
  SVerticalBox *local_1008;
  uchar local_1000;
  undefined1 local_fff;
  undefined1 local_ff8 [8];
  ForAnyElementType FStack_ff0;
  ulonglong local_fe8;
  uchar local_fe0;
  undefined1 local_fdf;
  undefined1 local_fd8 [8];
  ForAnyElementType FStack_fd0;
  ulonglong local_fc8;
  SVerticalBox *local_fb8;
  undefined4 uStack_fb0;
  uint uStack_fac;
  SScrollPanel *local_fa8;
  FSharedReferencer<1> local_fa0;
  SImage *local_f98;
  FSharedReferencer<1> local_f90;
  SImage *local_f88;
  FSharedReferencer<1> local_f80;
  SOverlay *local_f78;
  FSharedReferencer<1> local_f70;
  SScrollBox_u_704 local_f68;
  FSharedReferencer<1> local_f60;
  FSlateBrush *local_f58;
  undefined1 local_f50;
  undefined1 local_f48 [8];
  ForAnyElementType FStack_f40;
  ulonglong local_f38;
  FSlateBrush *local_f30;
  undefined1 local_f28;
  undefined1 local_f20 [8];
  ForAnyElementType FStack_f18;
  ulonglong local_f10;
  undefined8 local_f08;
  TReferenceControllerBase<1> *pTStack_f00;
  longlong local_ef8;
  longlong lStack_ef0;
  undefined1 local_ee8;
  undefined1 local_ee0 [8];
  ForAnyElementType FStack_ed8;
  ulonglong local_ed0;
  FMemScope local_ec8;
  TReferenceControllerBase<1> *local_ec0;
  undefined4 local_eb8 [2];
  undefined4 local_eb0 [2];
  undefined4 local_ea8 [2];
  undefined4 local_ea0 [2];
  FSlotArguments *local_e98;
  FName local_e90;
  FMemScope local_e88;
  FName local_e80;
  FMemScope local_e78;
  FName local_e70;
  FMemScope local_e68;
  FName local_e60;
  longlong local_e58;
  longlong lStack_e50;
  undefined1 local_e48;
  undefined1 local_e40 [8];
  void *pvStack_e38;
  undefined8 local_e30;
  TAttribute<float> local_e28;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_e08;
  FDestructionSentinel local_df0;
  FDestructionSentinel local_dd8;
  FDestructionSentinel local_dc0;
  FDestructionSentinel local_da8;
  FDestructionSentinel local_d90;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_d78;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_d60;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_d48;
  code *local_d28;
  longlong lStack_d20;
  code *local_d18;
  longlong lStack_d10;
  TSharedRef<SImage,1> local_d08;
  TSharedRef<SImage,1> local_cf8;
  TSharedRef<SOverlay,1> local_ce8;
  TSharedRef<SScrollBar,1> local_cd8;
  TSharedRef<SVerticalBox,1> local_cc8;
  undefined1 local_cb8 [56];
  void *local_c80;
  undefined1 local_c58 [56];
  void *local_c20;
  undefined1 local_bf8 [56];
  void *local_bc0;
  undefined8 *local_b98 [2];
  TReferenceControllerBase<1> *local_b88;
  undefined1 local_b68 [40];
  FSlotArgumentsMixin local_b40;
  FArguments local_ab0;
  FArguments local_8a8;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_6a0;
  FArguments local_5a0;
  FArguments local_2f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14290e36f;
  local_1008 = (SVerticalBox *)SVerticalBox::FArguments::FArguments(&local_8a8);
  this_02 = ::operator_new(0x58);
  pFVar18 = (FSlotArguments *)0x0;
  local_e98 = pFVar18;
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_e98 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_02);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_b98,(FSlot *)&local_e98);
  local_e28.Value = 1.0;
  local_e28.Getter._16_8_ = 0;
  local_e28.bIsSet = true;
  local_e28.Getter._0_8_ = 0;
  local_e28.Getter._8_8_ = 0;
  pFVar12 = SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_b98,&local_e28);
  pFVar13 = SOverlay::FArguments::FArguments(&local_ab0);
  pFVar14 = SOverlay::Slot((FSlotArguments *)local_bf8,0);
  pFVar2 = this->Style;
  local_ef8._0_4_ = (pFVar2->HorizontalScrolledContentPadding).Left;
  local_ef8._4_4_ = (pFVar2->HorizontalScrolledContentPadding).Top;
  lStack_ef0._0_4_ = (pFVar2->HorizontalScrolledContentPadding).Right;
  lStack_ef0._4_4_ = (pFVar2->HorizontalScrolledContentPadding).Bottom;
  local_ee8 = 1;
  local_ed0 = 0;
  local_ee0 = (undefined1  [8])0x0;
  FStack_ed8.Data = (FScriptContainerElement *)0x0;
  pFVar14->_padding_ = local_ef8;
  pFVar14->_padding_ = lStack_ef0;
  *(undefined1 *)&pFVar14->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee0);
  pFVar15 = pFVar18;
  if (&pFVar14->_padding_ != (longlong *)0x0) {
    pFVar15 = pFVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ee0,
             (FWriteAccessScope *)&local_dd8);
  if (((int)local_ed0 != 0) && (FStack_ed8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ed8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ed8,0,0,0x10);
    local_ed0 = local_ed0 & 0xffffffff00000000;
  }
  if (local_dd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dd8.Accessor,&local_dd8);
  }
  if (FStack_ed8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ed8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ee0);
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar3 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->ScrollPanel).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SScrollPanel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_fa8 = pSVar4;
  local_fa0.ReferenceController = pTVar3;
  if ((SScrollPanel **)&pFVar15->_padding_ != &local_fa8) {
    pFVar15->_padding_ = (longlong)pSVar4;
    local_fa8 = (SScrollPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->_padding_,&local_fa0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0.ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar15);
  pFVar15 = SOverlay::Slot((FSlotArguments *)local_c58,0);
  plVar1 = &pFVar15->_padding_;
  if ((longlong *)local_eb8 != plVar1) {
    *(undefined4 *)plVar1 = 1;
    *(undefined1 *)((longlong)&pFVar15->_padding_ + 4) = 1;
  }
  pFVar14 = pFVar18;
  if (plVar1 != (longlong *)0x0) {
    pFVar14 = pFVar15;
  }
  if ((longlong *)local_eb0 != &pFVar14->_padding_) {
    *(undefined4 *)&pFVar14->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar14->_padding_ + 4) = 1;
  }
  if (pFVar14 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar14;
  }
  pFVar16 = SImage::FArguments::FArguments(&local_2f8);
  local_fe0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_fdf = 1;
  local_fc8 = 0;
  local_fd8 = (undefined1  [8])0x0;
  FStack_fd0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar16->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fd8,
             (FWriteAccessScope *)&local_dc0);
  if (((int)local_fc8 != 0) && (FStack_fd0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_fd0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fd0,0,0,0x10);
    local_fc8 = local_fc8 & 0xffffffff00000000;
  }
  if (local_dc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dc0.Accessor,&local_dc0);
  }
  if (FStack_fd0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_fd0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fd8);
  uStack_fb0 = 0;
  local_fb8 = (SVerticalBox *)GetStartShadowOpacity;
  lStack_d10 = (ulonglong)uStack_fac << 0x20;
  local_d18 = GetStartShadowOpacity;
  pFVar16 = SImage::FArguments::ColorAndOpacity<SScrollBox>(pFVar16,this,(pmf_0e62799f *)&local_d18)
  ;
  local_f50 = 1;
  local_f58 = &this->Style->LeftShadowBrush;
  local_f38 = 0;
  local_f48 = (undefined1  [8])0x0;
  FStack_f40.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Image).Value = local_f58;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f48,
             (FWriteAccessScope *)&local_df0);
  if (((int)local_f38 != 0) && (FStack_f40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f40,0,0,0x10);
    local_f38 = local_f38 & 0xffffffff00000000;
  }
  if (local_df0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_df0.Accessor,&local_df0);
  }
  if (FStack_f40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f48);
  FLLMScope::FLLMScope(&local_1018,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e88,&local_e90,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_d48,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x10d,local_res8);
  FMemScope::~FMemScope(&local_e88);
  FLLMScope::~FLLMScope(&local_1018);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d48,&local_cf8,pFVar16);
  local_f98 = pTVar17->Object;
  local_f90.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_f90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_f90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ec0 = local_f90.ReferenceController;
  if ((SImage **)&pFVar18->_padding_ != &local_f98) {
    pFVar18->_padding_ = (longlong)local_f98;
    local_f98 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_f90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f90.ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar18);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_cb8,0);
  plVar1 = &pFVar18->_padding_;
  if ((longlong *)local_ea8 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar15 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar15 = pFVar18;
  }
  if ((longlong *)local_ea0 != &pFVar15->_padding_) {
    *(undefined4 *)&pFVar15->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar15->_padding_ + 4) = 1;
  }
  pFVar18 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar15;
  }
  pFVar16 = SImage::FArguments::FArguments(&local_5a0);
  local_1000 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_fff = 1;
  local_fe8 = 0;
  local_ff8 = (undefined1  [8])0x0;
  FStack_ff0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar16->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ff8,
             (FWriteAccessScope *)&local_da8);
  if (((int)local_fe8 != 0) && (FStack_ff0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ff0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ff0,0,0,0x10);
    local_fe8 = local_fe8 & 0xffffffff00000000;
  }
  if (local_da8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_da8.Accessor,&local_da8);
  }
  if (FStack_ff0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ff0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ff8);
  uStack_fb0 = 0;
  local_fb8 = (SVerticalBox *)GetEndShadowOpacity;
  lStack_d20 = (ulonglong)uStack_fac << 0x20;
  local_d28 = GetEndShadowOpacity;
  pFVar16 = SImage::FArguments::ColorAndOpacity<SScrollBox>(pFVar16,this,(pmf_0e62799f *)&local_d28)
  ;
  local_f28 = 1;
  local_f30 = &this->Style->RightShadowBrush;
  local_f10 = 0;
  local_f20 = (undefined1  [8])0x0;
  FStack_f18.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Image).Value = local_f30;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f20,
             (FWriteAccessScope *)&local_d90);
  if (((int)local_f10 != 0) && (FStack_f18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f18,0,0,0x10);
    local_f10 = local_f10 & 0xffffffff00000000;
  }
  if (local_d90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d90.Accessor,&local_d90);
  }
  if (FStack_f18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f20);
  FLLMScope::FLLMScope(&local_1014,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e78,&local_e80,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_d60,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0x118,local_res10);
  FMemScope::~FMemScope(&local_e78);
  FLLMScope::~FLLMScope(&local_1014);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d60,&local_d08,pFVar16);
  pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_f88 = pTVar17->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f80.ReferenceController = pTVar5;
  if ((SImage **)&pFVar18->_padding_ != &local_f88) {
    pFVar18->_padding_ = (longlong)local_f88;
    local_f88 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_f80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f80.ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar18);
  FLLMScope::FLLMScope(&local_1010,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e68,&local_e70,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_d78,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xff,local_res18);
  FMemScope::~FMemScope(&local_e68);
  FLLMScope::~FLLMScope(&local_1010);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d78,&local_ce8,pFVar13);
  pTVar6 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_f78 = pTVar19->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f70.ReferenceController = pTVar6;
  if ((SOverlay **)&pFVar12->field_0x8 != &local_f78) {
    *(SOverlay **)&pFVar12->field_0x8 = local_f78;
    local_f78 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_f70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f70.ReferenceController);
  pFVar20 = SVerticalBox::FArguments::operator+((FArguments *)local_1008,pFVar12);
  FLLMScope::FLLMScope(&local_100c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ec8,&local_e60,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_e08,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xfa,local_res20);
  FMemScope::~FMemScope(&local_ec8);
  FLLMScope::~FLLMScope(&local_100c);
  FVar10.ReferenceController = local_e08._Widget.SharedReferenceCount.ReferenceController;
  if (local_e08._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fb8 = local_e08._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar21 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e08,&local_cc8,pFVar20);
  this_00 = &this->field_0x238;
  local_1008 = pTVar21->Object;
  pTVar7 = (pTVar21->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f08 = *(undefined8 *)&this->field_0x248;
  pTStack_f00 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SVerticalBox **)&this->field_0x248 = local_1008;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f00);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d60._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_5a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_cb8 + 0x30));
  if (local_c80 != (void *)0x0) {
    FMemory::Free(local_c80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_cb8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_cb8._16_8_);
  if ((undefined8 *)local_cb8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_cb8._0_8_)(local_cb8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ec0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d48._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_c58 + 0x30));
  if (local_c20 != (void *)0x0) {
    FMemory::Free(local_c20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_c58 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_c58._16_8_);
  if ((undefined8 *)local_c58._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_c58._0_8_)(local_c58._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_bf8 + 0x30));
  if (local_bc0 != (void *)0x0) {
    FMemory::Free(local_bc0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_bf8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_bf8._16_8_);
  if ((undefined8 *)local_bf8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_bf8._0_8_)(local_bf8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_ab0._Slots.AllocatorInstance.Data,local_ab0._Slots.ArrayNum);
  if ((FSlotArguments *)local_ab0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_ab0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ab0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b68);
  if ((void *)local_b68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b88);
  if (local_b98[0] != (undefined8 *)0x0) {
    (**(code **)*local_b98[0])(local_b98[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_8a8._Slots.AllocatorInstance.Data,local_8a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_8a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8a8);
  this_01 = local_fb8;
  (this->field686_0x2c0).VerticalScrollBarSlot = (FSlot *)0x0;
  if (!this->bScrollBarIsExternal) {
    if ((local_fb8 == (SVerticalBox *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar22 = SVerticalBox::AddSlot(this_01,&local_6a0);
    local_e58._0_4_ = (this->ScrollBarSlotPadding).Left;
    local_e58._4_4_ = (this->ScrollBarSlotPadding).Top;
    lStack_e50._0_4_ = (this->ScrollBarSlotPadding).Right;
    lStack_e50._4_4_ = (this->ScrollBarSlotPadding).Bottom;
    local_e48 = 1;
    local_e30 = 0;
    local_e40 = (undefined1  [8])0x0;
    pvStack_e38 = (void *)0x0;
    pFVar22->_padding_ = local_e58;
    pFVar22->_padding_ = lStack_e50;
    *(undefined1 *)&pFVar22->_padding_ = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e40);
    pFVar12 = (FSlotArguments *)&pFVar22->_padding_;
    if (&pFVar22->_padding_ == (longlong *)0x0) {
      pFVar12 = (FSlotArguments *)0x0;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e40);
    if (pvStack_e38 != (void *)0x0) {
      FMemory::Free(pvStack_e38);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e40);
    pSVar23 = (SScrollBox_u_704 *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar12);
    this->field686_0x2c0 = *pSVar23;
    pSVar24 = (SScrollBox_u_704 *)TSharedPtr<SScrollBar,1>::ToSharedRef(&this->ScrollBar,&local_cd8)
    ;
    FVar8.ReferenceController = (TReferenceControllerBase<1> *)pSVar24[1].VerticalScrollBarSlot;
    local_f68 = *pSVar24;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f60.ReferenceController = FVar8.ReferenceController;
    if (pSVar23 + 1 != &local_f68) {
      pSVar23[1] = local_f68;
      local_f68.VerticalScrollBarSlot = (FSlot *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pSVar23 + 2),&local_f60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cd8.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_6a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return;
}

// ConstructScrollBar @ 14290fbf0

TSharedPtr<SScrollBar,1> * __thiscall
SScrollBox::ConstructScrollBar(SScrollBox *this,TSharedPtr<SScrollBar,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SScrollBar,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FDestructionSentinel local_368;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_340;
  undefined1 local_338 [8];
  ForAnyElementType FStack_330;
  ulonglong local_328;
  code *local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  TSharedRef<SScrollBar,1> local_310;
  FDestructionSentinel local_300;
  undefined1 *local_2e8;
  FArguments local_2e0;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res8 = 0;
  pFVar5 = SScrollBar::FArguments::FArguments(&local_2e0);
  pFVar5->_Style = this->ScrollBarStyle;
  pFVar5->_Orientation = this->Orientation;
  local_340 = 1;
  local_328 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_338 = (undefined1  [8])0x0;
  FStack_330.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_Padding).Value.Left = 0.0;
  (pFVar5->_Padding).Value.Top = 0.0;
  (pFVar5->_Padding).Value.Right = 0.0;
  (pFVar5->_Padding).Value.Bottom = 0.0;
  (pFVar5->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
             (FWriteAccessScope *)&local_368);
  if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10);
    local_328 = local_328 & 0xffffffff00000000;
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  if (FStack_330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnUserScrolled,
             (FWriteAccessScope *)&local_300);
  local_2e8 = &(pFVar5->_OnUserScrolled).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2e8);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_314 = local_310.SharedReferenceCount.ReferenceController._4_4_;
    local_320 = ScrollBar_OnUserScrolled;
    uStack_318 = 0;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget,1> *)&local_368);
    pTVar10 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar7->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSScrollBox___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = pSVar1;
    puVar6[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar6[5] = local_320;
    puVar6[6] = CONCAT44(uStack_314,uStack_318);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_368.Accessor);
  }
  if (local_300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *)&local_368,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xb6,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar9 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *)&local_368,&local_310,
                      pFVar5);
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar10 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_310.SharedReferenceCount.ReferenceController._4_4_,
                      local_310.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_368.Accessor);
  SScrollBar::FArguments::~FArguments(&local_2e0);
  return __return_storage_ptr__;
}

// ConstructVerticalLayout @ 14290fee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SScrollBox::ConstructVerticalLayout(SScrollBox *this)

{
  longlong *plVar1;
  undefined1 *this_00;
  FScrollBoxStyle *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SScrollPanel *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedReferencer<1> FVar8;
  code *pcVar9;
  SHorizontalBox *this_01;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FSlot *this_02;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  FSlotArguments *pFVar18;
  TSharedRef<SOverlay,1> *pTVar19;
  FArguments *pFVar20;
  TSharedRef<SHorizontalBox,1> *pTVar21;
  SScrollBox_u_704 *pSVar22;
  SScrollBox_u_704 *pSVar23;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1018;
  FLLMScope local_1014;
  FLLMScope local_1010;
  FLLMScope local_100c;
  SHorizontalBox *local_1008;
  uchar local_1000;
  undefined1 local_fff;
  undefined1 local_ff8 [8];
  ForAnyElementType FStack_ff0;
  ulonglong local_fe8;
  uchar local_fe0;
  undefined1 local_fdf;
  undefined1 local_fd8 [8];
  ForAnyElementType FStack_fd0;
  ulonglong local_fc8;
  SScrollBox_u_704 local_fc0;
  FSharedReferencer<1> local_fb8;
  SOverlay *local_fb0;
  FSharedReferencer<1> local_fa8;
  SImage *local_fa0;
  FSharedReferencer<1> local_f98;
  SImage *local_f90;
  FSharedReferencer<1> local_f88;
  SScrollPanel *local_f80;
  FSharedReferencer<1> local_f78 [2];
  SHorizontalBox *local_f68;
  undefined4 uStack_f60;
  uint uStack_f5c;
  FSlateBrush *local_f58;
  undefined1 local_f50;
  undefined1 local_f48 [8];
  ForAnyElementType FStack_f40;
  ulonglong local_f38;
  FSlateBrush *local_f30;
  undefined1 local_f28;
  undefined1 local_f20 [8];
  ForAnyElementType FStack_f18;
  ulonglong local_f10;
  undefined8 local_f08;
  TReferenceControllerBase<1> *pTStack_f00;
  longlong local_ef8;
  longlong lStack_ef0;
  undefined1 local_ee8;
  undefined1 local_ee0 [8];
  ForAnyElementType FStack_ed8;
  ulonglong local_ed0;
  FMemScope local_ec8;
  TReferenceControllerBase<1> *local_ec0;
  FMemScope local_eb8;
  FName local_eb0;
  FMemScope local_ea8;
  FName local_ea0;
  FMemScope local_e98;
  FName local_e90;
  FSlotArguments *local_e88;
  undefined4 local_e80 [2];
  undefined4 local_e78 [2];
  undefined4 local_e70 [2];
  undefined4 local_e68 [2];
  FName local_e60;
  TAttribute<float> local_e58;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_e38;
  FDestructionSentinel local_e20;
  FDestructionSentinel local_e08;
  FDestructionSentinel local_df0;
  FDestructionSentinel local_dd8;
  FDestructionSentinel local_dc0;
  TAttribute<FMargin> local_da8;
  TSharedRef<SHorizontalBox,1> local_d78;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_d68;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_d50;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_d38;
  code *local_d18;
  longlong lStack_d10;
  code *local_d08;
  longlong lStack_d00;
  TSharedRef<SImage,1> local_cf8;
  TSharedRef<SImage,1> local_ce8;
  TSharedRef<SOverlay,1> local_cd8;
  TSharedRef<SScrollBar,1> local_cc8;
  undefined1 local_cb8 [56];
  void *local_c80;
  undefined1 local_c58 [56];
  void *local_c20;
  undefined1 local_bf8 [56];
  void *local_bc0;
  undefined8 *local_b98 [2];
  TReferenceControllerBase<1> *local_b88;
  undefined1 local_b68 [40];
  FSlotArgumentsMixin local_b40;
  undefined1 local_ab0 [256];
  FArguments local_9b0;
  FArguments local_7a8;
  FArguments local_5a0;
  FArguments local_2f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14290feff;
  local_1008 = (SHorizontalBox *)SHorizontalBox::FArguments::FArguments(&local_7a8);
  this_02 = ::operator_new(0x58);
  pFVar18 = (FSlotArguments *)0x0;
  local_e88 = pFVar18;
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_e88 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(this_02);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_b98,(FSlot *)&local_e88);
  local_e58.Value = 1.0;
  local_e58.Getter._16_8_ = 0;
  local_e58.bIsSet = true;
  local_e58.Getter._0_8_ = 0;
  local_e58.Getter._8_8_ = 0;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_b98,&local_e58)
  ;
  pFVar13 = SOverlay::FArguments::FArguments(&local_9b0);
  pFVar14 = SOverlay::Slot((FSlotArguments *)local_bf8,0);
  pFVar2 = this->Style;
  local_ef8._0_4_ = (pFVar2->VerticalScrolledContentPadding).Left;
  local_ef8._4_4_ = (pFVar2->VerticalScrolledContentPadding).Top;
  lStack_ef0._0_4_ = (pFVar2->VerticalScrolledContentPadding).Right;
  lStack_ef0._4_4_ = (pFVar2->VerticalScrolledContentPadding).Bottom;
  local_ee8 = 1;
  local_ed0 = 0;
  local_ee0 = (undefined1  [8])0x0;
  FStack_ed8.Data = (FScriptContainerElement *)0x0;
  pFVar14->_padding_ = local_ef8;
  pFVar14->_padding_ = lStack_ef0;
  *(undefined1 *)&pFVar14->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee0);
  pFVar15 = pFVar18;
  if (&pFVar14->_padding_ != (longlong *)0x0) {
    pFVar15 = pFVar14;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ee0,
             (FWriteAccessScope *)&local_df0);
  if (((int)local_ed0 != 0) && (FStack_ed8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ed8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ed8,0,0,0x10);
    local_ed0 = local_ed0 & 0xffffffff00000000;
  }
  if (local_df0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_df0.Accessor,&local_df0);
  }
  if (FStack_ed8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ed8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ee0);
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar3 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->ScrollPanel).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SScrollPanel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f80 = pSVar4;
  local_f78[0].ReferenceController = pTVar3;
  if ((SScrollPanel **)&pFVar15->_padding_ != &local_f80) {
    pFVar15->_padding_ = (longlong)pSVar4;
    local_f80 = (SScrollPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->_padding_,local_f78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f78[0].ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar15);
  pFVar15 = SOverlay::Slot((FSlotArguments *)local_c58,0);
  plVar1 = &pFVar15->_padding_;
  if ((longlong *)local_e68 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar15->_padding_ + 4) = 1;
  }
  pFVar14 = pFVar18;
  if (plVar1 != (longlong *)0x0) {
    pFVar14 = pFVar15;
  }
  if ((longlong *)local_e70 != &pFVar14->_padding_) {
    *(undefined4 *)&pFVar14->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar14->_padding_ + 4) = 1;
  }
  if (pFVar14 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar14;
  }
  pFVar16 = SImage::FArguments::FArguments(&local_2f8);
  local_1000 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_fff = 1;
  local_fe8 = 0;
  local_ff8 = (undefined1  [8])0x0;
  FStack_ff0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar16->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ff8,
             (FWriteAccessScope *)&local_dd8);
  if (((int)local_fe8 != 0) && (FStack_ff0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ff0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ff0,0,0,0x10);
    local_fe8 = local_fe8 & 0xffffffff00000000;
  }
  if (local_dd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dd8.Accessor,&local_dd8);
  }
  if (FStack_ff0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ff0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ff8);
  uStack_f60 = 0;
  local_f68 = (SHorizontalBox *)GetStartShadowOpacity;
  lStack_d00 = (ulonglong)uStack_f5c << 0x20;
  local_d08 = GetStartShadowOpacity;
  pFVar16 = SImage::FArguments::ColorAndOpacity<SScrollBox>(pFVar16,this,(pmf_0e62799f *)&local_d08)
  ;
  local_f28 = 1;
  local_f30 = &this->Style->TopShadowBrush;
  local_f10 = 0;
  local_f20 = (undefined1  [8])0x0;
  FStack_f18.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Image).Value = local_f30;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f20,
             (FWriteAccessScope *)&local_e08);
  if (((int)local_f10 != 0) && (FStack_f18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f18,0,0,0x10);
    local_f10 = local_f10 & 0xffffffff00000000;
  }
  if (local_e08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e08.Accessor,&local_e08);
  }
  if (FStack_f18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f20);
  FLLMScope::FLLMScope(&local_1018,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e98,&local_e90,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_d38,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xd5,local_res8);
  FMemScope::~FMemScope(&local_e98);
  FLLMScope::~FLLMScope(&local_1018);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d38,&local_ce8,pFVar16);
  local_f90 = pTVar17->Object;
  local_f88.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_f88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f88.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f88.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_f88.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f88.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ec0 = local_f88.ReferenceController;
  if ((SImage **)&pFVar18->_padding_ != &local_f90) {
    pFVar18->_padding_ = (longlong)local_f90;
    local_f90 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_f88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f88.ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar18);
  pFVar18 = SOverlay::Slot((FSlotArguments *)local_cb8,0);
  plVar1 = &pFVar18->_padding_;
  if ((longlong *)local_e78 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 4) = 1;
  }
  pFVar15 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar15 = pFVar18;
  }
  if ((longlong *)local_e80 != &pFVar15->_padding_) {
    *(undefined4 *)&pFVar15->_padding_ = 3;
    *(undefined1 *)((longlong)&pFVar15->_padding_ + 4) = 1;
  }
  pFVar18 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar15;
  }
  pFVar16 = SImage::FArguments::FArguments(&local_5a0);
  local_fe0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_fdf = 1;
  local_fc8 = 0;
  local_fd8 = (undefined1  [8])0x0;
  FStack_fd0.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar16->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fd8,
             (FWriteAccessScope *)&local_dc0);
  if (((int)local_fc8 != 0) && (FStack_fd0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_fd0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fd0,0,0,0x10);
    local_fc8 = local_fc8 & 0xffffffff00000000;
  }
  if (local_dc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dc0.Accessor,&local_dc0);
  }
  if (FStack_fd0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_fd0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fd8);
  uStack_f60 = 0;
  local_f68 = (SHorizontalBox *)GetEndShadowOpacity;
  lStack_d10 = (ulonglong)uStack_f5c << 0x20;
  local_d18 = GetEndShadowOpacity;
  pFVar16 = SImage::FArguments::ColorAndOpacity<SScrollBox>(pFVar16,this,(pmf_0e62799f *)&local_d18)
  ;
  local_f50 = 1;
  local_f58 = &this->Style->BottomShadowBrush;
  local_f38 = 0;
  local_f48 = (undefined1  [8])0x0;
  FStack_f40.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_Image).Value = local_f58;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f48,
             (FWriteAccessScope *)&local_e20);
  if (((int)local_f38 != 0) && (FStack_f40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f40,0,0,0x10);
    local_f38 = local_f38 & 0xffffffff00000000;
  }
  if (local_e20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e20.Accessor,&local_e20);
  }
  if (FStack_f40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f48);
  FLLMScope::FLLMScope(&local_1014,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ea0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ea8,&local_ea0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_d50,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xe0,local_res10);
  FMemScope::~FMemScope(&local_ea8);
  FLLMScope::~FLLMScope(&local_1014);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d50,&local_cf8,pFVar16);
  pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_fa0 = pTVar17->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f98.ReferenceController = pTVar5;
  if ((SImage **)&pFVar18->_padding_ != &local_fa0) {
    pFVar18->_padding_ = (longlong)local_fa0;
    local_fa0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->_padding_,&local_f98);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f98.ReferenceController);
  pFVar13 = SOverlay::FArguments::operator+(pFVar13,pFVar18);
  FLLMScope::FLLMScope(&local_1010,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_eb0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_eb8,&local_eb0,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_d68,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,199,local_res18);
  FMemScope::~FMemScope(&local_eb8);
  FLLMScope::~FLLMScope(&local_1010);
  pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d68,&local_cd8,pFVar13);
  pTVar6 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_fb0 = pTVar19->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_fa8.ReferenceController = pTVar6;
  if ((SOverlay **)&pFVar12->field_0x8 != &local_fb0) {
    *(SOverlay **)&pFVar12->field_0x8 = local_fb0;
    local_fb0 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_fa8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa8.ReferenceController);
  pFVar20 = SHorizontalBox::FArguments::operator+((FArguments *)local_1008,pFVar12);
  FLLMScope::FLLMScope(&local_100c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ec8,&local_e60,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_e38,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
             ,0xc2,local_res20);
  FMemScope::~FMemScope(&local_ec8);
  FLLMScope::~FLLMScope(&local_100c);
  FVar10.ReferenceController = local_e38._Widget.SharedReferenceCount.ReferenceController;
  if (local_e38._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_f68 = local_e38._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e38,&local_d78,pFVar20);
  this_00 = &this->field_0x238;
  local_1008 = pTVar21->Object;
  pTVar7 = (pTVar21->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f08 = *(undefined8 *)&this->field_0x248;
  pTStack_f00 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SHorizontalBox **)&this->field_0x248 = local_1008;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f00);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e38._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d68._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d50._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_5a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_cb8 + 0x30));
  if (local_c80 != (void *)0x0) {
    FMemory::Free(local_c80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_cb8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_cb8._16_8_);
  if ((undefined8 *)local_cb8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_cb8._0_8_)(local_cb8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ec0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d38._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_c58 + 0x30));
  if (local_c20 != (void *)0x0) {
    FMemory::Free(local_c20);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_c58 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_c58._16_8_);
  if ((undefined8 *)local_c58._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_c58._0_8_)(local_c58._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_bf8 + 0x30));
  if (local_bc0 != (void *)0x0) {
    FMemory::Free(local_bc0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_bf8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_bf8._16_8_);
  if ((undefined8 *)local_bf8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_bf8._0_8_)(local_bf8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_9b0._Slots.AllocatorInstance.Data,local_9b0._Slots.ArrayNum);
  if ((FSlotArguments *)local_9b0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9b0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9b0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b68);
  if ((void *)local_b68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b88);
  if (local_b98[0] != (undefined8 *)0x0) {
    (**(code **)*local_b98[0])(local_b98[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_7a8._Slots.AllocatorInstance.Data,local_7a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_7a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_7a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7a8);
  this_01 = local_f68;
  (this->field686_0x2c0).VerticalScrollBarSlot = (FSlot *)0x0;
  if (!this->bScrollBarIsExternal) {
    if ((local_f68 == (SHorizontalBox *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SHorizontalBox::InsertSlot
              (this_01,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_ab0,-1);
    local_da8.Value.Left = (this->ScrollBarSlotPadding).Left;
    local_da8.Value.Top = (this->ScrollBarSlotPadding).Top;
    local_da8.Value.Right = (this->ScrollBarSlotPadding).Right;
    local_da8.Value.Bottom = (this->ScrollBarSlotPadding).Bottom;
    local_da8.bIsSet = true;
    local_da8.Getter._16_8_ = 0;
    local_da8.Getter._0_8_ = 0;
    local_da8.Getter._8_8_ = 0;
    pFVar12 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)(local_ab0 + 0x20),&local_da8);
    pSVar22 = (SScrollBox_u_704 *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar12);
    this->field686_0x2c0 = *pSVar22;
    pSVar23 = (SScrollBox_u_704 *)TSharedPtr<SScrollBar,1>::ToSharedRef(&this->ScrollBar,&local_cc8)
    ;
    FVar8.ReferenceController = (TReferenceControllerBase<1> *)pSVar23[1].VerticalScrollBarSlot;
    local_fc0 = *pSVar23;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_fb8.ReferenceController = FVar8.ReferenceController;
    if (pSVar22 + 1 != &local_fc0) {
      pSVar22[1] = local_fc0;
      local_fc0.VerticalScrollBarSlot = (FSlot *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pSVar22 + 2),&local_fb8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_fb8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cc8.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return;
}

// EndInertialScrolling @ 142926aa0

void __thiscall SScrollBox::EndInertialScrolling(SScrollBox *this)

{
  undefined1 *puVar1;
  TSharedPtr<FActiveTimerHandle,1> *pTVar2;
  FActiveTimerHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<FActiveTimerHandle,1> local_28;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bIsScrolling = false;
  this->bIsScrollingActiveTimerRegistered = false;
  SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  pTVar2 = &this->UpdateInertialScrollHandle;
  pFVar3 = pTVar2->Object;
  if (pFVar3 != (FActiveTimerHandle *)0x0) {
    local_28.SharedReferenceCount.ReferenceController =
         (this->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pFVar3;
    if (pFVar3 == (FActiveTimerHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SWidget::UnRegisterActiveTimer((SWidget *)this,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FActiveTimerHandle,1> *)&local_18) {
      pTVar2->Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UpdateInertialScrollHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->DesiredScrollOffset = ((this->ScrollPanel).Object)->PhysicalOffset;
  return;
}

// GetAllowOverscroll @ 14293bb90

EAllowOverscroll __thiscall SScrollBox::GetAllowOverscroll(SScrollBox *this)

{
  return this->AllowOverscroll;
}

// GetEndShadowOpacity @ 142940af0

FSlateColor * __thiscall
SScrollBox::GetEndShadowOpacity(SScrollBox *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  FSlateColor *pFVar4;
  float fVar5;
  float local_res8;
  float fStackX_c;
  
  FVar3 = GetScrollPanelContentSize(this);
  if (this->Orientation == Orient_Vertical) {
    fStackX_c = (float)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
  }
  else {
    local_res8 = (float)*(undefined8 *)FVar3;
    fStackX_c = local_res8;
  }
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  fVar5 = SScrollBar::DistanceFromBottom((this->ScrollBar).Object);
  fVar5 = fVar5 * fStackX_c * __real_3d000000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar5;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetKeyboardFocusableWidget @ 142941910

TSharedPtr<SWidget,1> * __thiscall
SScrollBox::GetKeyboardFocusableWidget
          (SScrollBox *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  TSharedPtr<SWidget,1> *pTVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  int iVar11;
  TSharedPtr<SWidget,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  EVar3.Value.Value = EVisibility::Visible.Value.Value;
  if ((param_1->Object == (SWidget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
    return pTVar7;
  }
  iVar11 = 0;
  if (((byte)param_1->Object->VisibilityAttribute & (byte)EVar3.Value.Value) != 0) {
    if ((param_1->Object == (SWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar7;
    }
    cVar5 = (**(code **)(param_1->Object->_padding_ + 0x198))();
    if (cVar5 != '\0') {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = param_1->Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      param_1->Object = (SWidget *)0x0;
      goto LAB_142941b0f;
    }
    if ((param_1->Object == (SWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
      return pTVar7;
    }
    plVar8 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x180))();
    iVar6 = (**(code **)*plVar8)(plVar8);
    if (0 < iVar6) {
      do {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,local_38,iVar11);
        pTVar10 = (TReferenceControllerBase<1> *)puVar9[1];
        pSVar1 = (SWidget *)*puVar9;
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
        }
        else {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pSVar1;
        local_48.SharedReferenceCount.ReferenceController = pTVar10;
        GetKeyboardFocusableWidget(this,&local_58,&local_48);
        EVar3 = EVisibility::Visible;
        if (local_58.Object != (SWidget *)0x0) {
          if ((local_58.Object == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TSharedPtr<SWidget,1> *)(*pcVar2)();
            return pTVar7;
          }
          if (((byte)(local_58.Object)->VisibilityAttribute & (byte)EVar3.Value.Value) != 0) {
            __return_storage_ptr__->Object = local_58.Object;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 local_58.SharedReferenceCount.ReferenceController;
            local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_58.Object = (SWidget *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar10);
            goto LAB_142941b0b;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        iVar11 = iVar11 + 1;
        iVar6 = (**(code **)*plVar8)(plVar8);
      } while (iVar11 < iVar6);
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142941b0b:
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
LAB_142941b0f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetOrientation @ 1429464c0

EOrientation __thiscall SScrollBox::GetOrientation(SScrollBox *this)

{
  return this->Orientation;
}

// GetOverscrollOffset @ 1429464e0

float __thiscall SScrollBox::GetOverscrollOffset(SScrollBox *this)

{
  FDeprecateSlateVector2D FVar1;
  code *pcVar2;
  bool bVar3;
  FDeprecateSlateVector2D FVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float fStackX_c;
  
  if (this->AllowOverscroll != Yes) {
    return 0.0;
  }
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  fVar5 = ((this->ScrollPanel).Object)->PhysicalOffset;
  if (0.0 <= fVar5) {
    FVar4 = GetScrollPanelContentSize(this);
    FVar1 = (this->CachedGeometry).Size;
    if (this->Orientation == Orient_Vertical) {
      fStackX_c = (float)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
      fVar6 = fStackX_c;
      fStackX_c = FVar1._4_4_;
    }
    else {
      local_res8 = (float)*(undefined8 *)FVar4;
      fVar6 = local_res8;
      local_res8 = FVar1._0_4_;
      fStackX_c = local_res8;
    }
    if (fVar5 <= fVar6 - fStackX_c) {
      return 0.0;
    }
    fVar5 = fVar5 - (fVar6 - fStackX_c);
  }
  return fVar5;
}

// GetOverscrollPercentage @ 1429465d0

float __thiscall SScrollBox::GetOverscrollPercentage(SScrollBox *this)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float fStackX_c;
  
  if (this->AllowOverscroll == Yes) {
    FVar3 = (this->CachedGeometry).Size;
    if (this->Orientation == Orient_Vertical) {
      fStackX_c = FVar3._4_4_;
      fVar4 = fStackX_c;
    }
    else {
      local_res8 = FVar3._0_4_;
      fVar4 = local_res8;
    }
    if (0.0 < fVar4) {
      if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
      fVar5 = ((this->ScrollPanel).Object)->PhysicalOffset;
      if (0.0 <= fVar5) {
        FVar3 = GetScrollPanelContentSize(this);
        if (this->Orientation == Orient_Vertical) {
          fStackX_c = (float)((ulonglong)*(undefined8 *)FVar3 >> 0x20);
        }
        else {
          local_res8 = (float)*(undefined8 *)FVar3;
          fStackX_c = local_res8;
        }
        if (fVar5 <= fStackX_c - fVar4) {
          return 0.0;
        }
        fVar5 = fVar5 - (fStackX_c - fVar4);
      }
      return (fVar5 / fVar4) * __real_42c80000;
    }
  }
  return 0.0;
}

// GetScrollOffset @ 1429477f0

float __thiscall SScrollBox::GetScrollOffset(SScrollBox *this)

{
  return this->DesiredScrollOffset;
}

// GetScrollOffsetOfEnd @ 142947800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall SScrollBox::GetScrollOffsetOfEnd(SScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  code *pcVar3;
  bool bVar4;
  FDeprecateSlateVector2D FVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  TSharedRef<SWidget,1> local_60;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  pTVar1 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SScrollPanel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60.Object = (SWidget *)pSVar2;
  local_60.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this,&local_50,&this->CachedGeometry,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar5 = GetScrollPanelContentSize(this);
  if (this->Orientation == Orient_Vertical) {
    fStack_64 = (float)((ulonglong)*(undefined8 *)FVar5 >> 0x20);
    fVar6 = fStack_64;
    fStack_64 = local_50.Size._4_4_;
  }
  else {
    local_68 = (float)*(undefined8 *)FVar5;
    fVar6 = local_68;
    local_68 = local_50.Size._0_4_;
    fStack_64 = local_68;
  }
  fVar6 = fVar6 - fStack_64;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}

// GetScrollPanelContentSize @ 142947950

FDeprecateSlateVector2D __thiscall SScrollBox::GetScrollPanelContentSize(SScrollBox *this)

{
  SScrollPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDeprecateSlateVector2D FVar4;
  FDeprecateSlateVector2D in_RDX;
  float fVar5;
  float fVar6;
  
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FDeprecateSlateVector2D)(*pcVar2)();
    return FVar4;
  }
  bVar3 = this->bAllowContentToShrink;
  pSVar1 = (this->ScrollPanel).Object;
  fVar6 = (float)(pSVar1->ArrangedSize).field0_0x0._s_0.X;
  fVar5 = (float)(pSVar1->ArrangedSize).field0_0x0._s_0.Y;
  *(float *)in_RDX = fVar6;
  *(float *)((longlong)in_RDX + 4) = fVar5;
  if (bVar3 != false) {
    if (__real_38d1b717 < (float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return in_RDX;
    }
    if (__real_38d1b717 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      return in_RDX;
    }
  }
  if ((pSVar1 == (SScrollPanel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FDeprecateSlateVector2D)(*pcVar2)();
    return FVar4;
  }
  FVar4 = SWidget::GetDesiredSize((SWidget *)(this->ScrollPanel).Object);
  *(undefined8 *)in_RDX = *(undefined8 *)FVar4;
  return in_RDX;
}

// GetSlot @ 142948e20

FSlot * __thiscall SScrollBox::GetSlot(SScrollBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_1 < 0) || ((((this->ScrollPanel).Object)->Children).Children.ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScrollPanel->Children.IsValidIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TPanelChildren<SScrollBox::FSlot>::operator[]
                     (&((this->ScrollPanel).Object)->Children,param_1);
  return pFVar3;
}

// GetSlot @ 142948ef0

FSlot * __thiscall SScrollBox::GetSlot(SScrollBox *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_1 < 0) || ((((this->ScrollPanel).Object)->Children).Children.ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScrollPanel->Children.IsValidIndex(SlotIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
                       ,0x13a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlot *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TPanelChildren<SScrollBox::FSlot>::operator[]
                     (&((this->ScrollPanel).Object)->Children,param_1);
  return pFVar3;
}

// GetStartShadowOpacity @ 142949970

FSlateColor * __thiscall
SScrollBox::GetStartShadowOpacity(SScrollBox *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateColor *pFVar3;
  float fVar4;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  fVar4 = ((this->ScrollPanel).Object)->PhysicalOffset * __real_3d000000;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar4;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetViewFraction @ 14294c1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall SScrollBox::GetViewFraction(SScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  FDeprecateSlateVector2D FVar3;
  code *pcVar4;
  bool bVar5;
  FDeprecateSlateVector2D FVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  TSharedRef<SWidget,1> local_60;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  pTVar1 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SScrollPanel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar7 = (float)(*pcVar4)();
    return fVar7;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60.Object = (SWidget *)pSVar2;
  local_60.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this,&local_50,&this->CachedGeometry,&local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar6 = GetScrollPanelContentSize(this);
  FVar3 = (this->CachedGeometry).Size;
  if (this->Orientation == Orient_Vertical) {
    fStack_64 = (float)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
    fVar7 = fStack_64;
    fStack_64 = FVar3._4_4_;
  }
  else {
    local_68 = (float)*(undefined8 *)FVar6;
    fVar7 = local_68;
    local_68 = FVar3._0_4_;
    fStack_64 = local_68;
  }
  fVar8 = __real_3f800000;
  if (0.0 < fStack_64) {
    if (this->Orientation == Orient_Vertical) {
      fStack_64 = local_50.Size._4_4_;
      fVar8 = fStack_64 / fVar7;
    }
    else {
      local_68 = local_50.Size._0_4_;
      fVar8 = local_68 / fVar7;
    }
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  return fVar8;
}

// GetViewOffsetFraction @ 14294c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall SScrollBox::GetViewOffsetFraction(SScrollBox *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollPanel *pSVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FDeprecateSlateVector2D FVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  TSharedRef<SWidget,1> local_70;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  pTVar1 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->ScrollPanel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SScrollPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.Object = (SWidget *)pSVar2;
  local_70.SharedReferenceCount.ReferenceController = pTVar1;
  SWidget::FindChildGeometry((SWidget *)this,&local_60,&this->CachedGeometry,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FVar6 = GetScrollPanelContentSize(this);
  uVar3 = *(undefined8 *)FVar6;
  if (this->Orientation == Orient_Vertical) {
    local_78._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    fVar7 = local_78._4_4_;
  }
  else {
    local_78._0_4_ = (float)uVar3;
    fVar7 = (float)local_78;
  }
  local_78 = uVar3;
  fVar8 = GetViewFraction(this);
  fVar7 = this->DesiredScrollOffset / fVar7;
  if (__real_3f800000 - fVar8 <= fVar7) {
    fVar7 = __real_3f800000 - fVar8;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  return fVar7;
}

// InsertSlot @ 142952190

FScopedWidgetSlotArguments * __thiscall
SScrollBox::InsertSlot
          (SScrollBox *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  SScrollPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  FScopedWidgetSlotArguments *pFVar4;
  FSlot *this_00;
  FSlot *local_res8;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar2)();
      return pFVar4;
    }
  }
  pSVar1 = (this->ScrollPanel).Object;
  this_00 = ::operator_new(0x58);
  local_res8 = (FSlot *)0x0;
  if (this_00 != (FSlot *)0x0) {
    local_res8 = FSlot::FSlot(this_00);
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Children = &pSVar1->Children;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// InternalScrollDescendantIntoView @ 142952360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014295241c) */
/* WARNING: Removing unreachable block (ram,0x000142952433) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SScrollBox::InternalScrollDescendantIntoView
          (SScrollBox *this,FGeometry *param_1,TSharedPtr<SWidget,1> *param_2,bool param_3,
          EDescendantScrollDestination param_4,float param_5)

{
  uint *puVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  FDeprecateSlateVector2D FVar6;
  undefined1 auVar7 [8];
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FArrangedWidget *pFVar14;
  TTransform2<float> *pTVar15;
  SScrollPanel *pSVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStackY_1a8 [32];
  undefined8 local_178;
  undefined8 local_16c;
  undefined8 local_160;
  undefined1 local_158 [8];
  TVector2<float>_u_0 TStack_150;
  uint local_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  float local_110;
  uint local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  TTransform2<float> local_e8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pSVar2 = param_2->Object;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0.0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if (pSVar2 != (SWidget *)0x0) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)local_138,(int *)(local_138 + 8),
                       (int *)(local_138 + 0xc));
    iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),1);
    FVar24 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_118;
    }
    uVar17 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar17;
    puVar1 = (uint *)((longlong)FVar24 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar10 & 0x1f) - (char)uVar17 & 0x1f));
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,(FSparseArrayAllocationInfo *)&local_160,iVar9);
    auVar7 = local_158;
    if (local_158 != (undefined1  [8])0x0) {
      *(longlong *)local_158 = (longlong)pSVar2;
      *(TReferenceControllerBase<1> **)((longlong)local_158 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined4 *)&((TReferenceControllerBase<1> *)((longlong)local_158 + 0x10))->_padding_ =
           0xffffffff;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)local_158 + 8);
    uVar22 = *(longlong *)local_158;
    local_16c._0_4_ = (float)(undefined4)local_160;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar17 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    bVar8 = TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
                        *)local_138,uVar17,(TSparseSetElement<TSharedRef<SWidget,1>_> *)auVar7,
                       (int *)&local_16c,(bool *)0x0);
    if (!bVar8) {
      uVar22 = 1;
      uVar19 = local_138._8_4_ - local_104;
      if (3 < uVar19) {
        uVar22 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar22 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
      }
      uVar21 = (uint)uVar22;
      if (((int)uVar19 < 1) || ((int)uVar21 <= (int)local_f0)) {
        uVar17 = local_f0 - 1 & uVar17;
        *(uint *)((longlong)&((TReferenceControllerBase<1> *)((longlong)auVar7 + 0x10))->_padding_ +
                 4) = uVar17;
        FVar18.Data = (FScriptContainerElement *)local_100;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar18.Data = local_f8.Data;
        }
        uVar22 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)&((TReferenceControllerBase<1> *)((longlong)auVar7 + 0x10))->_padding_ =
             *(undefined4 *)((longlong)FVar18.Data + uVar22 * 4);
        *(float *)((longlong)FVar18.Data + uVar22 * 4) = (float)local_16c;
      }
      else {
        local_f0 = uVar21;
        if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
        }
        if (uVar21 != 0) {
          uVar17 = uVar21;
          if (uVar21 < 2) {
            if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0)
            {
              uVar17 = 0;
              goto LAB_1429525c1;
            }
          }
          else {
LAB_1429525c1:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_f8,0,uVar17,4);
          }
          if (0 < (int)uVar21) {
            uVar25 = 0;
            do {
              FVar18.Data = (FScriptContainerElement *)local_100;
              if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar18.Data = local_f8.Data;
              }
              uVar11 = uVar25 & (longlong)(int)uVar21 - 1U;
              uVar25 = uVar25 + 1;
              *(undefined4 *)((longlong)FVar18.Data + uVar11 * 4) = 0xffffffff;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        if (local_f0 != 0) {
          TStack_150 = (TVector2<float>_u_0)((longlong)local_138 + 0x10);
          local_e8.M.M[0][1] = 1.4013e-45;
          local_e8.M.M[0][0] = 0.0;
          local_e8.M.M[1] = (float  [2])TStack_150;
          local_e8.Trans.field0_0x0._s_0.X = -NAN;
          local_e8.Trans.field0_0x0._s_0.Y = 0.0;
          iStack_d0 = 0;
          if (local_110 != 0.0) {
            FVar24 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
            if (local_118 != (ForElementType<unsigned_int>)0x0) {
              FVar24 = local_118;
            }
            uVar17 = *(uint *)FVar24;
            iStack_d0 = 0;
            local_e8.M.M[0][0] = 0.0;
            while (uVar17 == 0) {
              iStack_d0 = iStack_d0 + 0x20;
              lVar20 = (longlong)(int)local_e8.M.M[0][0];
              local_e8.M.M[0][0] = (float)((int)local_e8.M.M[0][0] + 1);
              if ((int)((int)local_110 + -1 + ((int)local_110 + -1 >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_e8.M.M[0][0]) goto LAB_1429526b9;
              uVar17 = ((uint *)((longlong)FVar24 + 4))[lVar20];
              local_e8.Trans.field0_0x0._s_0.X = -NAN;
            }
            local_e8.M.M[0][1] = (float)(-uVar17 & uVar17);
            uVar22 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_e8.Trans.field0_0x0._s_0.Y = (float)(iStack_d0 + -1 + (int)lVar20);
            if ((int)local_110 < (int)local_e8.Trans.field0_0x0._s_0.Y) {
LAB_1429526b9:
              local_e8.Trans.field0_0x0._s_0.Y = local_110;
            }
          }
          local_e8.Trans.field0_0x0._s_0.X = -NAN;
          local_160 = (TVector2<float>_u_0)local_138;
          local_158 = (undefined1  [8])CONCAT44(local_e8.M.M[0][1],local_e8.M.M[0][0]);
          fStack_144 = local_e8.Trans.field0_0x0._s_0.Y;
          local_148 = 0xffffffff;
          uStack_140._4_4_ = uStack_cc;
          uStack_140._0_4_ = iStack_d0;
          uVar23 = local_e8.Trans.field0_0x0._s_0.Y;
          if ((int)local_e8.Trans.field0_0x0._s_0.Y < (int)local_110) {
            do {
              lVar20 = *(longlong *)local_160;
              lVar12 = (longlong)(int)uVar23;
              pTVar4 = *(TReferenceControllerBase<1> **)(lVar20 + 8 + lVar12 * 0x18);
              uVar22 = *(ulonglong *)(lVar20 + lVar12 * 0x18);
              if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar17 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
              uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              uVar17 = (uVar17 >> 0x10 ^ uVar17) & local_f0 - 1;
              *(uint *)(lVar20 + 0x14 + lVar12 * 0x18) = uVar17;
              FVar18.Data = (FScriptContainerElement *)local_100;
              if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar18.Data = local_f8.Data;
              }
              uVar22 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar17;
              *(undefined4 *)(lVar20 + 0x10 + lVar12 * 0x18) =
                   *(undefined4 *)((longlong)FVar18.Data + uVar22 * 4);
              *(undefined4 *)((longlong)FVar18.Data + uVar22 * 4) = uVar23;
              local_148 = local_148 & ~local_158._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_158);
              uVar23 = fStack_144;
            } while ((int)fStack_144 < (int)*(atomic<int> *)((longlong)TStack_150 + 0x18));
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  SWidget::FindChildGeometries
            ((SWidget *)this,param_1,
             (TSet<TSharedRef<SWidget,1>,DefaultKeyFuncs<TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
              *)local_138,
             (TMap<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
              *)local_c8);
  if (param_2->Object != (SWidget *)0x0) {
    pTVar13 = TSharedPtr<SWidget,1>::ToSharedRef(param_2,(TSharedRef<SWidget,1> *)&local_e8);
    local_160 = (TVector2<float>_u_0_s_0)pTVar13->Object;
    local_158 = (undefined1  [8])(pTVar13->SharedReferenceCount).ReferenceController;
    if (local_158 != (undefined1  [8])0x0) {
      LOCK();
      *(atomic<int> *)&((TSparseSetElement<TSharedRef<SWidget,1>_> *)local_158)->field_0x8 =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((TSparseSetElement<TSharedRef<SWidget,1>_> *)local_158)->field_0x8 + 1);
      UNLOCK();
    }
    pFVar14 = TMapBase<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
              ::Find((TMapBase<TSharedRef<SWidget,1>,FArrangedWidget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SWidget,1>,FArrangedWidget,0>_>
                      *)local_c8,(TSharedRef<SWidget_const_,1> *)&local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8.M.M[1]);
    fVar31 = __real_3f000000;
    if (pFVar14 != (FArrangedWidget *)0x0) {
      local_178._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      fVar28 = (float)local_178;
      local_178._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      fVar29 = local_178._4_4_;
      if (param_4 == TopOrLeft) {
        fVar28 = (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][0] +
                 local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][0] +
                 (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
        fVar29 = local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][1] +
                 (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][1] +
                 (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
        pTVar15 = Inverse<TTransform2<float>_>(&local_e8,&param_1->AccumulatedRenderTransform);
        fVar31 = fVar29 * (pTVar15->M).M[1][1] + fVar28 * (pTVar15->M).M[0][1] +
                 (pTVar15->Trans).field0_0x0._s_0.Y;
        if (this->Orientation != Orient_Vertical) {
          fVar31 = fVar29 * (pTVar15->M).M[1][0] + fVar28 * (pTVar15->M).M[0][0] +
                   (pTVar15->Trans).field0_0x0._s_0.X;
        }
LAB_142952e17:
        fVar31 = fVar31 - param_5;
LAB_142952e1c:
        if (fVar31 != 0.0) {
          pSVar16 = TSharedPtr<SScrollPanel,1>::operator->(&this->ScrollPanel);
          this->DesiredScrollOffset = pSVar16->PhysicalOffset;
          ScrollBy(this,param_1,fVar31,No,param_3);
        }
      }
      else {
        if (param_4 == BottomOrRight) {
          local_160 = *(TVector2<float>_u_0_s_0 *)&param_1->Size;
          FVar5 = (pFVar14->Geometry).Size;
          local_178._4_4_ = FVar5._4_4_;
          local_178._0_4_ = FVar5._0_4_;
          fVar27 = local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][0] +
                   (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][0];
          local_178._4_4_ =
               local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][1] +
               (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][1];
          local_178._0_4_ = fVar27;
          local_16c = local_178;
          fVar27 = fVar29 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][0] +
                   fVar28 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][0] +
                   (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X + fVar27;
          local_178._4_4_ =
               fVar29 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][1] +
               fVar28 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][1] +
               (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y +
               local_178._4_4_;
          pTVar15 = Inverse<TTransform2<float>_>(&local_e8,&param_1->AccumulatedRenderTransform);
          fVar31 = (local_178._4_4_ * (pTVar15->M).M[1][1] + fVar27 * (pTVar15->M).M[0][1] +
                   (pTVar15->Trans).field0_0x0._s_0.Y) - (float)local_160._4_4_;
          if (this->Orientation != Orient_Vertical) {
            fVar31 = (local_178._4_4_ * (pTVar15->M).M[1][0] + fVar27 * (pTVar15->M).M[0][0] +
                     (pTVar15->Trans).field0_0x0._s_0.X) - (float)(undefined4)local_160;
          }
          goto LAB_142952e17;
        }
        if (param_4 == Center) {
          FVar5 = (pFVar14->Geometry).Size;
          local_160._0_4_ = FVar5._0_4_;
          fVar28 = (float)(undefined4)local_160 * __real_3f000000;
          local_160._4_4_ = FVar5._4_4_;
          fVar29 = (float)local_160._4_4_ * __real_3f000000;
          local_160 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          fVar27 = local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][0] +
                   (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][0] +
                   (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
          fVar30 = (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][1] +
                   local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][1] +
                   (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
          pTVar15 = Inverse<TTransform2<float>_>(&local_e8,&param_1->AccumulatedRenderTransform);
          local_160._0_4_ =
               fVar30 * (pTVar15->M).M[1][0] + fVar27 * (pTVar15->M).M[0][0] +
               (pTVar15->Trans).field0_0x0._s_0.X;
          local_160._4_4_ =
               fVar30 * (pTVar15->M).M[1][1] + fVar27 * (pTVar15->M).M[0][1] +
               (pTVar15->Trans).field0_0x0._s_0.Y;
          local_16c = param_1->Size;
          if (this->Orientation == Orient_Vertical) {
            fVar31 = (fVar29 + (float)local_160._4_4_) - local_16c._4_4_ * fVar31;
          }
          else {
            fVar31 = (fVar28 + (float)(undefined4)local_160) - (float)local_16c * fVar31;
          }
          goto LAB_142952e1c;
        }
        local_160 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        fVar28 = local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][0] +
                 (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][0] +
                 (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
        fVar29 = (float)local_178 * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[0][1] +
                 local_178._4_4_ * (pFVar14->Geometry).AccumulatedRenderTransform.M.M[1][1] +
                 (pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
        pTVar15 = Inverse<TTransform2<float>_>
                            ((TTransform2<float> *)&local_160,&param_1->AccumulatedRenderTransform);
        fVar31 = fVar29 * (pTVar15->M).M[1][0] + fVar28 * (pTVar15->M).M[0][0] +
                 (pTVar15->Trans).field0_0x0._s_0.X;
        fVar28 = fVar29 * (pTVar15->M).M[1][1] + fVar28 * (pTVar15->M).M[0][1] +
                 (pTVar15->Trans).field0_0x0._s_0.Y;
        FVar5 = (pFVar14->Geometry).Size;
        FVar6 = param_1->Size;
        if (this->Orientation == Orient_Vertical) {
          local_16c._4_4_ = FVar6._4_4_;
          local_178._4_4_ = FVar5._4_4_;
          local_178._4_4_ = fVar28 + local_178._4_4_;
          fVar31 = fVar28;
        }
        else {
          local_16c._0_4_ = FVar6._0_4_;
          local_178._0_4_ = FVar5._0_4_;
          local_178._4_4_ = fVar31 + (float)local_178;
          local_16c._4_4_ = (float)local_16c;
        }
        fVar28 = local_16c._4_4_ - param_5;
        local_16c = FVar6;
        if (fVar31 < param_5) goto LAB_142952e17;
        if (fVar28 < local_178._4_4_) {
          fVar31 = local_178._4_4_ - (fVar28 - param_5);
          goto LAB_142952e17;
        }
      }
      bVar8 = true;
      goto LAB_14295289d;
    }
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
  }
  bVar8 = false;
LAB_14295289d:
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedRef<SWidget,1>,FArrangedWidget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  bVar26 = local_c8._12_4_ != 0;
  local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  if (bVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  local_f0 = 0;
  if ((ForElementType<FSetElementId>)local_f8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<TSharedRef<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedRef<SWidget,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_138,0,local_138._8_4_);
  bVar26 = local_138._12_4_ != 0;
  local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
  if (bVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
  }
  local_104 = 0;
  local_110 = 0.0;
  local_108 = -1;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
  }
  if (local_118 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_118);
  }
  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_138._0_8_);
  }
  return bVar8;
}

// InvalidateScrollBarStyle @ 142952e90

void __thiscall SScrollBox::InvalidateScrollBarStyle(SScrollBox *this)

{
  SScrollBar *this_00;
  
  this_00 = (this->ScrollBar).Object;
  if (this_00 != (SScrollBar *)0x0) {
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// InvalidateStyle @ 142952f70

void __thiscall SScrollBox::InvalidateStyle(SScrollBox *this)

{
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// IsRightClickScrolling @ 142955490

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SScrollBox::IsRightClickScrolling(SScrollBox *this)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FSlateApplication *this_00;
  float fVar5;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    fVar1 = this->AmountScrolledWhileRightMouseDown;
    this_00 = FSlateApplication::Get();
    fVar5 = FSlateApplication::GetDragTriggerDistance(this_00);
    if (fVar5 <= fVar1) {
      if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
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
      bVar3 = SScrollBar::IsNeeded((this->ScrollBar).Object);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// NumSlots @ 14295d880

int __thiscall SScrollBox::NumSlots(SScrollBox *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->ScrollPanel).Object != (SScrollPanel *)0x0) {
    return (((this->ScrollPanel).Object)->Children).Children.ArrayNum;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (((this->ScrollPanel).Object)->Children).Children.ArrayNum;
}

// OnAnalogValueChanged @ 14295d900

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnAnalogValueChanged
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FAnalogInputEvent *param_2)

{
  float fVar1;
  float fVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  FReply *pFVar9;
  longlong lVar10;
  longlong lVar11;
  FReply local_1a8;
  FReply local_f0;
  
  if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar5)();
    return pFVar9;
  }
  bVar8 = SScrollBar::IsNeeded((this->ScrollBar).Object);
  if (bVar8) {
    if (this->ConsumeMouseWheel != Never) {
LAB_14295d97d:
      FVar3 = (FName)param_2->_padding_;
      pTVar4 = (TReferenceControllerBase<1> *)param_2->_padding_;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      fVar1 = param_2->AnalogValue;
      if ((FVar3 != (this->AnalogMouseWheelKey).KeyName) ||
         ((fVar1 < __real_3e4ccccd && (__real_be4ccccd < fVar1)))) {
        FReply::FReply(__return_storage_ptr__,false);
      }
      else {
        FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
        pTVar6 = GlobalScrollAmount.Ref;
        bVar8 = IsInParallelGameThread();
        lVar11 = 4;
        if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
          lVar10 = 0;
        }
        else {
          lVar10 = 4;
        }
        pTVar7 = GlobalGamepadScrollMultiplier.Ref;
        fVar2 = *(float *)((longlong)pTVar6->ShadowedValue + lVar10);
        bVar8 = IsInParallelGameThread();
        if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
          lVar11 = 0;
        }
        bVar8 = ScrollBy(this,param_1,
                         (float)((uint)(fVar2 * *(float *)((longlong)pTVar7->ShadowedValue + lVar11)
                                        * this->WheelScrollMultiplier * fVar1) ^
                                __xmm_80000000800000008000000080000000),No,
                         this->bAnimateWheelScrolling);
        if ((bVar8) && (!this->bIsScrollingActiveTimerRegistered)) {
          FGeometry::operator=(&this->CachedGeometry,param_1);
          BeginInertialScrolling(this);
        }
        pFVar9 = &local_1a8;
        if (bVar8) {
          pFVar9 = &local_f0;
        }
        FReply::FReply(pFVar9,bVar8);
        FReply::FReply(__return_storage_ptr__,pFVar9);
        if ((!bVar8 + 1U & 2) != 0) {
          FReply::~FReply(&local_1a8);
        }
        if (bVar8) {
          FReply::~FReply(&local_f0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return __return_storage_ptr__;
    }
  }
  else if (this->ConsumeMouseWheel == Always) goto LAB_14295d97d;
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnClippingChanged @ 142961a20

void __thiscall SScrollBox::OnClippingChanged(SScrollBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SWidget::SetClipping((SWidget *)(this->ScrollPanel).Object,this->field_0x35);
  return;
}

// OnCursorQuery @ 1429628e0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SScrollBox::OnCursorQuery
          (SScrollBox *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = IsRightClickScrolling(this);
  if (bVar1) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = None;
    return __return_storage_ptr__;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnFocusChanging @ 142964860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SScrollBox::OnFocusChanging
          (SScrollBox *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3)

{
  float fVar1;
  EScrollWhenFocusChanges EVar2;
  EDescendantScrollDestination EVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  FArrangedWidget *pFVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  atomic<int> *paVar19;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (((this->ScrollWhenFocusChanges != NoScroll) &&
      (bVar15 = FWidgetPath::IsValid(param_2), bVar15)) &&
     (bVar15 = FWidgetPath::ContainsWidget(param_2,(SWidget *)this), bVar15)) {
    EVar2 = this->ScrollWhenFocusChanges;
    EVar3 = this->NavigationDestination;
    fVar1 = this->NavigationScrollPadding;
    bVar15 = FWidgetPath::IsValid(param_2);
    if ((!bVar15) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                            ,0xac,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar16 = FArrangedChildren::operator[]
                        (&param_2->Widgets,(param_2->Widgets).Array.ArrayNum + -1);
    pTVar4 = (pFVar16->Widget).SharedReferenceCount.ReferenceController;
    pSVar5 = (pFVar16->Widget).Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar19 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar19 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
    }
    local_78 = (code *)0x0;
    puVar17 = FMemory::Malloc(0x28,8);
    puVar17[2] = pSVar5;
    *puVar17 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::`2'::<lambda_1>,0,1>::
                _vftable_;
    puVar17[1] = this;
    puVar17[3] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar19 = (atomic<int>)((int)*paVar19 + 1);
      UNLOCK();
    }
    *(float *)((longlong)puVar17 + 0x24) = fVar1;
    *(bool *)(puVar17 + 4) = EVar2 == AnimatedScroll;
    *(EDescendantScrollDestination *)((longlong)puVar17 + 0x21) = EVar3;
    lVar13 = *(longlong *)&this->ScrollIntoViewRequest;
    uVar14 = *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x8;
    uVar7 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x10;
    uVar8 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x14;
    uVar9 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x18;
    uVar10 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x1c;
    uVar11 = *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x20;
    plVar12 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
    if (puVar17 + 1 != (undefined8 *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,void,FGeometry>
                 ::Call;
    }
    *(code **)&this->ScrollIntoViewRequest = local_78;
    *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x8 = uStack_70;
    uStack_50._0_4_ = SUB84(puVar17,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)puVar17 >> 0x20);
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x10 = local_68;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x14 = uStack_64;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x18 = uStack_60;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x1c = uStack_5c;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x28 = (undefined4)uStack_50;
    *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x2c = uStack_50._4_4_;
    local_68 = uVar7;
    uStack_64 = uVar8;
    uStack_60 = uVar9;
    uStack_5c = uVar10;
    local_58 = uVar11;
    uStack_50 = plVar12;
    local_78 = (code *)lVar13;
    uStack_70 = uVar14;
    if (lVar13 != 0) {
      plVar18 = (longlong *)&local_68;
      if (plVar12 != (longlong *)0x0) {
        plVar18 = plVar12;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    BeginInertialScrolling(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// OnFocusLost @ 142964ac0

void __thiscall SScrollBox::OnFocusLost(SScrollBox *this,FFocusEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBoxFocusLost,
             &local_28);
  if ((*(int *)&(this->OnScrollBoxFocusLost).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnScrollBoxFocusLost).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnFocusReceived @ 1429659b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnFocusReceived
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnScrollBoxFocusReceived,&local_28);
  if ((*(int *)&(this->OnScrollBoxFocusReceived).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnScrollBoxFocusReceived).field_0x8, plVar1 != (longlong *)0x0)
     ) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnScrollBoxFocusReceived,&local_28);
      if ((*(int *)&(this->OnScrollBoxFocusReceived).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->OnScrollBoxFocusReceived).field_0x8,
         plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      bVar3 = true;
      goto LAB_142965a30;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = false;
LAB_142965a30:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296cba0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnMouseButtonDown
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  undefined1 *puVar1;
  TSharedPtr<FActiveTimerHandle,1> *pTVar2;
  FActiveTimerHandle *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FReply *pFVar8;
  TSharedRef<FActiveTimerHandle,1> local_318;
  longlong local_308;
  FSharedReferencer<1> FStack_300;
  FReply local_2f8;
  FReply local_240;
  FReply local_188;
  FReply local_d0;
  
  if ((this->bFingerOwningTouchInteraction).bIsSet == false) {
    this->bIsScrolling = false;
    this->bIsScrollingActiveTimerRegistered = false;
    SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
    pTVar2 = &this->UpdateInertialScrollHandle;
    pFVar3 = pTVar2->Object;
    if (pFVar3 != (FActiveTimerHandle *)0x0) {
      local_318.SharedReferenceCount.ReferenceController =
           (this->UpdateInertialScrollHandle).SharedReferenceCount.ReferenceController;
      if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_318.Object = pFVar3;
      if ((pFVar3 == (FActiveTimerHandle *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar6)();
        return pFVar8;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_318);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.SharedReferenceCount.ReferenceController);
      local_308 = 0;
      FStack_300.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<FActiveTimerHandle,1> *)&local_308) {
        pTVar2->Object = (FActiveTimerHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->UpdateInertialScrollHandle).SharedReferenceCount,&FStack_300);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_300.ReferenceController);
    }
    FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
    if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar6)();
      return pFVar8;
    }
    this->DesiredScrollOffset = ((this->ScrollPanel).Object)->PhysicalOffset;
  }
  if (param_2->bIsTouchEvent == false) {
    pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar5 = (param_2->EffectingButton).KeyName;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (FVar5 == EKeys::RightMouseButton.KeyName) {
      if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar6)();
        return pFVar8;
      }
      bVar7 = SScrollBar::IsNeeded((this->ScrollBar).Object);
      if ((bVar7) && (this->bAllowsRightClickDragScrolling)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        this->AmountScrolledWhileRightMouseDown = 0.0;
        SWidget::Invalidate((SWidget *)this,Layout);
        if (this->bConsumePointerInput != false) {
          FReply::FReply(&local_240,true);
          FReply::FReply(__return_storage_ptr__,&local_240);
          FReply::~FReply(&local_240);
          return __return_storage_ptr__;
        }
        pFVar8 = SWidget::OnMouseButtonDown((SWidget *)this,&local_d0,param_1,param_2);
        FReply::FReply(__return_storage_ptr__,pFVar8);
        FReply::~FReply(&local_d0);
        return __return_storage_ptr__;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FReply::FReply(__return_storage_ptr__,false);
  }
  else if (this->bConsumePointerInput == false) {
    pFVar8 = SWidget::OnMouseButtonDown((SWidget *)this,&local_188,param_1,param_2);
    FReply::FReply(__return_storage_ptr__,pFVar8);
    FReply::~FReply(&local_188);
  }
  else {
    FReply::FReply(&local_2f8,true);
    FReply::FReply(__return_storage_ptr__,&local_2f8);
    FReply::~FReply(&local_2f8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296f540

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnMouseButtonUp
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  FReply *pFVar9;
  float fVar10;
  float fVar11;
  float local_res20;
  float fStackX_24;
  TIntPoint<int>_u_0 local_2a8;
  float local_2a0;
  float fStack_29c;
  TVector2<float>_u_0 local_298;
  TVector2<float>_u_0 TStack_290;
  undefined1 local_288 [8];
  float fStack_280;
  float local_27c;
  ulonglong local_278;
  undefined8 local_270 [2];
  FReply local_260;
  FReply local_1a8;
  FReply local_e8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar3 == EKeys::RightMouseButton.KeyName) && (this->bAllowsRightClickDragScrolling)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar8) {
    if (!this->bIsScrollingActiveTimerRegistered) {
      bVar8 = IsRightClickScrolling(this);
      if (bVar8) {
        FGeometry::operator=(&this->CachedGeometry,param_1);
        BeginInertialScrolling(this);
      }
    }
    this->AmountScrolledWhileRightMouseDown = 0.0;
    SWidget::Invalidate((SWidget *)this,Layout);
    if (this->bConsumePointerInput == false) {
      pFVar9 = SWidget::OnMouseButtonUp((SWidget *)this,&local_e8,param_1,param_2);
      if (&pFVar9->MouseCaptor != (TWeakPtr<SWidget,1> *)local_270) {
        pTVar4 = (pFVar9->MouseCaptor).WeakReferenceCount.ReferenceController;
        (pFVar9->MouseCaptor).Object = (SWidget *)0x0;
        (pFVar9->MouseCaptor).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
      pFVar9->bReleaseMouseCapture = 1;
      pFVar9->bUseHighPrecisionMouse = 0;
      FReply::FReply(&local_1a8,pFVar9);
      pFVar9 = &local_e8;
    }
    else {
      FReply::FReply(&local_260,true);
      FVar7.ReferenceController = local_260.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_260.MouseCaptor.Object = (SWidget *)0x0;
      local_260.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
        }
      }
      local_260.bUseHighPrecisionMouse = 0;
      local_260.bReleaseMouseCapture = 1;
      FReply::FReply(&local_1a8,&local_260);
      pFVar9 = &local_260;
    }
    FReply::~FReply(pFVar9);
    this->bShowSoftwareCursor = false;
    bVar8 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar8) {
      fVar10 = param_1->Scale;
      FVar5 = param_1->Size;
      fStackX_24 = FVar5._4_4_;
      local_res20 = FVar5._0_4_;
      unique0x00023d00 = (param_1->AbsolutePosition).field0_0x0._s_0;
      local_2a8 = (TIntPoint<int>_u_0)((ulonglong)(uint)fStackX_24 << 0x20);
      local_278 = (ulonglong)FVar5 & 0xffffffff;
      fStack_29c = fVar10 * 0.0 + fStack_280;
      local_2a0 = fVar10 * 0.0 + (float)local_288._4_4_;
      local_298._s_0.X = local_res20 * fVar10;
      local_298._s_0.Y = fVar10 * 0.0;
      TStack_290._s_0.X = fVar10 * 0.0;
      TStack_290._s_0.Y = fStackX_24 * fVar10;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_2a0,(FSlateRect *)local_288);
      TVar6 = (this->SoftwareCursorPosition).field0_0x0._s_0;
      fStackX_24 = TVar6.Y;
      local_res20 = TVar6.X;
      fVar10 = fStackX_24 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
               local_res20 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      fVar11 = local_res20 * (param_1->AccumulatedRenderTransform).M.M[0][1] +
               fStackX_24 * (param_1->AccumulatedRenderTransform).M.M[1][1] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      if (fStack_280 <= fVar10) {
        fVar10 = fStack_280;
      }
      if (local_27c <= fVar11) {
        fVar11 = local_27c;
      }
      if (fVar10 <= (float)local_288._0_4_) {
        fVar10 = (float)local_288._0_4_;
      }
      if (fVar11 <= (float)local_288._4_4_) {
        fVar11 = (float)local_288._4_4_;
      }
      local_2a8._s_0.Y = (int)ROUND(fVar11 + fVar11 + __real_3f000000) >> 1;
      local_2a8._s_0.X = (int)ROUND(fVar10 + fVar10 + __real_3f000000) >> 1;
      FReply::SetMousePos(&local_1a8,(TIntPoint<int> *)&local_2a8._s_0);
    }
    FReply::FReply(__return_storage_ptr__,&local_1a8);
    FReply::~FReply(&local_1a8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 14296fc90

void __thiscall SScrollBox::OnMouseCaptureLost(SScrollBox *this,FCaptureLostEvent *param_1)

{
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->PendingScrollTriggerAmount = 0.0;
  if ((this->bFingerOwningTouchInteraction).bIsSet != false) {
    (this->bFingerOwningTouchInteraction).bIsSet = false;
  }
  this->bTouchPanningCapture = false;
  return;
}

// OnMouseEnter @ 14296fd70

void __thiscall SScrollBox::OnMouseEnter(SScrollBox *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_48;
  TVector2<float>_u_0 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  FSlateRotatedRect local_28;
  
  if (((this->bEnableTouchScrolling != false) && (param_2->bIsTouchEvent != false)) &&
     ((this->bFingerOwningTouchInteraction).bIsSet == false)) {
    local_res8 = SUB84(param_1->Size,0);
    uStackX_c = SUB84(param_1->Size,4);
    local_3c = local_res8;
    local_30 = uStackX_c;
    local_44 = (TVector2<float>_u_0)0x0;
    local_38 = 0;
    TransformRect<TTransform2<float>_>
              (&local_28,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_44._s_0);
    bVar1 = FSlateRotatedRect::IsUnderLocation
                      (&local_28,*(FDeprecateVector2DParameter *)&param_2->LastScreenSpacePosition);
    if (bVar1) {
      if ((TOptional<int> *)&local_48 != &this->bFingerOwningTouchInteraction) {
        (this->bFingerOwningTouchInteraction).TypedValue = param_2->PointerIndex;
        (this->bFingerOwningTouchInteraction).bIsSet = true;
      }
    }
  }
  return;
}

// OnMouseLeave @ 142970110

void __thiscall SScrollBox::OnMouseLeave(SScrollBox *this,FPointerEvent *param_1)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar1) {
    if (this->AmountScrolledWhileRightMouseDown != 0.0) {
      this->AmountScrolledWhileRightMouseDown = 0.0;
      SWidget::Invalidate((SWidget *)this,Layout);
    }
    if ((param_1->bIsTouchEvent != false) && ((this->bFingerOwningTouchInteraction).bIsSet != false)
       ) {
      (this->bFingerOwningTouchInteraction).bIsSet = false;
    }
  }
  return;
}

// OnMouseMove @ 1429754a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnMouseMove
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  FSlateApplication *pFVar7;
  SScrollBar *pSVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FReply *pFVar10;
  FReply *pFVar11;
  TTransform2<float> *pTVar12;
  FKey *__return_storage_ptr___00;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_2f8 [32];
  undefined8 local_2c8;
  FReply local_2b8;
  FReply local_1f8;
  FReply local_140;
  FKey local_88;
  ulonglong local_70;
  
  pFVar11 = &local_1f8;
  local_70 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  local_2c8 = (LARGE_INTEGER)*(LARGE_INTEGER *)&param_2->CursorDelta;
  if (this->Orientation == Orient_Vertical) {
    uVar15 = local_2c8._4_4_;
  }
  else {
    uVar15 = (undefined4)local_2c8;
  }
  fVar17 = (float)uVar15 / param_1->Scale;
  if (param_2->bIsTouchEvent == false) {
    local_88.KeyName = EKeys::RightMouseButton.KeyName;
    local_88.KeyDetails.Object = EKeys::RightMouseButton.KeyDetails.Object;
    local_88.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = FPointerEvent::IsMouseButtonDown(param_2,&local_88);
    if ((bVar5) && (this->bAllowsRightClickDragScrolling)) {
      this->AmountScrolledWhileRightMouseDown =
           (float)(uVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff) +
           this->AmountScrolledWhileRightMouseDown;
      bVar5 = IsRightClickScrolling(this);
      if (bVar5) {
        QueryPerformanceCounter((LARGE_INTEGER *)&local_2c8);
        FInertialScrollManager::AddScrollSample
                  (&this->InertialScrollManager,
                   (float)(uVar15 ^ __xmm_80000000800000008000000080000000),
                   (double)local_2c8 * FGenericPlatformTime::SecondsPerCycle +
                   __real_4170000000000000);
        bVar5 = ScrollBy(this,param_1,(float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000)
                         ,this->AllowOverscroll,false);
        if (this->bConsumePointerInput == false) {
          pFVar11 = SWidget::OnMouseMove((SWidget *)this,&local_140,param_1,param_2);
          FReply::FReply(&local_2b8,pFVar11);
          pFVar11 = &local_140;
        }
        else {
          FReply::FReply(pFVar11,true);
          FReply::FReply(&local_2b8,pFVar11);
        }
        FReply::~FReply(pFVar11);
        bVar6 = SWidget::HasMouseCapture((SWidget *)this);
        if (!bVar6) {
          pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                             ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                              (TSharedRef<SWidget,1> *)&local_88);
          pFVar11 = FReply::CaptureMouse(&local_2b8,pTVar9);
          pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                             ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                              (TSharedRef<SWidget,1> *)&local_2c8);
          FReply::UseHighPrecisionMouseMovement(pFVar11,pTVar9);
          pTVar12 = Inverse<TTransform2<float>_>
                              ((TTransform2<float> *)&local_88,&param_1->AccumulatedRenderTransform)
          ;
          local_2c8._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
          local_2c8._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
          fVar13 = (float)local_2c8._4_4_ * (pTVar12->M).M[1][0];
          fVar16 = (pTVar12->M).M[1][1];
          fVar1 = (pTVar12->M).M[0][0];
          fVar2 = (pTVar12->M).M[0][1];
          fVar3 = (pTVar12->Trans).field0_0x0._s_0.X;
          fVar4 = (pTVar12->Trans).field0_0x0._s_0.Y;
          this->bShowSoftwareCursor = true;
          local_2c8._4_4_ =
               (float)local_2c8._4_4_ * fVar16 + (float)(undefined4)local_2c8 * fVar2 + fVar4;
          local_2c8._0_4_ = fVar13 + (float)(undefined4)local_2c8 * fVar1 + fVar3;
          (this->SoftwareCursorPosition).field0_0x0 = (TVector2<float>_u_0)local_2c8;
        }
        if (bVar5) {
          local_2c8 = (LARGE_INTEGER)
                      *(LARGE_INTEGER *)&(this->SoftwareCursorPosition).field0_0x0._s_0;
          if (this->Orientation == Orient_Vertical) {
            (this->SoftwareCursorPosition).field0_0x0._s_0.Y = fVar17 + (float)local_2c8._4_4_;
          }
          else {
            (this->SoftwareCursorPosition).field0_0x0._s_0.X = fVar17 + (float)(undefined4)local_2c8
            ;
          }
        }
        goto LAB_142975722;
      }
    }
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    FReply::FReply(&local_2b8,false);
    if ((this->bFingerOwningTouchInteraction).bIsSet != false) {
      if (this->bTouchPanningCapture) {
        local_2c8._4_1_ = 1;
        local_2c8._0_4_ = param_2->PointerIndex;
        bVar5 = SWidget::HasMouseCaptureByUser
                          ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                           (TOptional<int>)&local_2c8);
        if (bVar5) {
          pFVar7 = FSlateApplication::Get();
          dVar14 = (double)(**(code **)(*(longlong *)pFVar7 + 0x60))(pFVar7);
          this->LastScrollTime = dVar14;
          pFVar7 = FSlateApplication::Get();
          dVar14 = (double)(**(code **)(*(longlong *)pFVar7 + 0x60))(pFVar7);
          FInertialScrollManager::AddScrollSample
                    (&this->InertialScrollManager,
                     (float)(uVar15 ^ __xmm_80000000800000008000000080000000),dVar14);
          ScrollBy(this,param_1,(float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000),Yes,
                   false);
LAB_1429756cd:
          if (this->bConsumePointerInput == false) {
            pFVar11 = SWidget::OnMouseMove((SWidget *)this,&local_140,param_1,param_2);
            FReply::operator=(&local_2b8,pFVar11);
            pFVar11 = &local_140;
          }
          else {
            FReply::FReply(pFVar11,true);
            FReply::operator=(&local_2b8,pFVar11);
          }
LAB_14297571d:
          FReply::~FReply(pFVar11);
        }
      }
      else if ((param_2->bIsTouchEvent != false) &&
              (bVar5 = SWidget::HasMouseCapture((SWidget *)this), !bVar5)) {
        fVar16 = (float)uVar15 + this->PendingScrollTriggerAmount;
        this->PendingScrollTriggerAmount = fVar16;
        fVar16 = (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        pFVar7 = FSlateApplication::Get();
        fVar17 = FSlateApplication::GetDragTriggerDistance(pFVar7);
        if (fVar16 <= fVar17) goto LAB_1429756cd;
        this->bTouchPanningCapture = true;
        pSVar8 = TSharedPtr<SScrollBar,1>::operator->(&this->ScrollBar);
        (**(code **)(pSVar8->_padding_ + 600))(pSVar8);
        bVar5 = this->bConsumePointerInput == false;
        if (bVar5) {
          pFVar10 = SWidget::OnMouseMove((SWidget *)this,&local_140,param_1,param_2);
          __return_storage_ptr___00 = &local_88;
        }
        else {
          FReply::FReply(pFVar11,true);
          __return_storage_ptr___00 = (FKey *)&local_2c8;
          pFVar10 = pFVar11;
        }
        pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                            (TSharedRef<SWidget,1> *)__return_storage_ptr___00);
        pFVar10 = FReply::CaptureMouse(pFVar10,pTVar9);
        FReply::operator=(&local_2b8,pFVar10);
        if (!bVar5) goto LAB_14297571d;
        FReply::~FReply(&local_140);
      }
    }
LAB_142975722:
    FReply::FReply(__return_storage_ptr__,&local_2b8);
    FReply::~FReply(&local_2b8);
  }
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142977fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnMouseWheel
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  float fVar1;
  undefined1 uVar2;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  FReply *pFVar6;
  longlong lVar7;
  FReply local_198;
  FReply local_e0;
  
  lVar7 = 0;
  if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar3)();
    return pFVar6;
  }
  bVar5 = SScrollBar::IsNeeded((this->ScrollBar).Object);
  if (bVar5) {
    if (this->ConsumeMouseWheel != Never) {
LAB_14297806b:
      FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
      pTVar4 = GlobalScrollAmount.Ref;
      fVar1 = *(float *)&(param_2->WheelOrGestureDelta).field_0x4;
      bVar5 = IsInParallelGameThread();
      if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
        lVar7 = 4;
      }
      bVar5 = ScrollBy(this,param_1,
                       (float)((uint)(fVar1 * *(float *)((longlong)pTVar4->ShadowedValue + lVar7) *
                                     this->WheelScrollMultiplier) ^
                              __xmm_80000000800000008000000080000000),No,
                       this->bAnimateWheelScrolling);
      if ((bVar5) && (!this->bIsScrollingActiveTimerRegistered)) {
        FGeometry::operator=(&this->CachedGeometry,param_1);
        BeginInertialScrolling(this);
      }
      pFVar6 = &local_198;
      if (bVar5) {
        pFVar6 = &local_e0;
      }
      FReply::FReply(pFVar6,bVar5);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      if ((!bVar5 + 1U & 2) != 0) {
        FReply::~FReply(&local_198);
      }
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      FReply::~FReply(&local_e0);
      return __return_storage_ptr__;
    }
  }
  else if (this->ConsumeMouseWheel == Always) goto LAB_14297806b;
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnNavigation @ 1429785a0

FNavigationReply * __thiscall
SScrollBox::OnNavigation
          (SScrollBox *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  SScrollPanel *pSVar1;
  longlong lVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TOptional<EFocusCause> TVar6;
  uint uVar7;
  FNavigationReply *pFVar8;
  undefined6 extraout_var;
  FSlot *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 local_res8 [8];
  longlong local_a0;
  FSharedReferencer<1> aFStack_98 [2];
  TSharedPtr<SWidget,1> local_88;
  TSharedPtr<SWidget,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<SWidget,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  
  iVar13 = -1;
  local_a0 = 0;
  aFStack_98[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FNavigationReply *)(*pcVar3)();
    return pFVar8;
  }
  pSVar1 = (this->ScrollPanel).Object;
  uVar10 = 0;
  uVar7 = 0xffffffff;
  if (0 < (pSVar1->Children).Children.ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (pSVar1->Children).Children.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNavigationReply *)(*pcVar3)();
        return pFVar8;
      }
      TVar6 = SWidget::HasUserFocus
                        (*(SWidget **)
                          (*(longlong *)
                            ((pSVar1->Children).Children.AllocatorInstance.Data + lVar12) + 0x10),
                         (int)local_res8);
      if (*(char *)(CONCAT62(extraout_var,TVar6) + 1) != '\0') {
LAB_142978718:
        pFVar9 = TPanelChildren<SScrollBox::FSlot>::operator[](&pSVar1->Children,uVar10);
        local_60.ReferenceController = (TReferenceControllerBase<1> *)pFVar9->_padding_;
        local_a0 = pFVar9->_padding_;
        if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_60.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_98,&local_60);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.ReferenceController);
        uVar7 = uVar10;
        goto LAB_14297875c;
      }
      uVar7 = 0;
      if ((int)uVar10 < (pSVar1->Children).Children.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNavigationReply *)(*pcVar3)();
        return pFVar8;
      }
      bVar5 = SWidget::HasUserFocusedDescendants
                        (*(SWidget **)
                          (*(longlong *)
                            ((pSVar1->Children).Children.AllocatorInstance.Data + lVar12) + 0x10),
                         *(int *)((longlong)&param_2->_padding_ + 4));
      if (bVar5) goto LAB_142978718;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < (pSVar1->Children).Children.ArrayNum);
    uVar7 = 0xffffffff;
  }
LAB_14297875c:
  if (local_a0 != 0) {
    uVar10 = (uint)param_2->NavigationType;
    if (this->Orientation == Orient_Vertical) {
      uVar10 = param_2->NavigationType - 2;
    }
    if (uVar10 != 0) {
      if (uVar10 != 1) goto LAB_1429788f2;
      iVar13 = 1;
    }
    iVar11 = iVar13 + uVar7;
    local_88.Object = (SWidget *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (-1 < iVar11) {
      lVar12 = (longlong)iVar11 * 8;
      do {
        if ((pSVar1->Children).Children.ArrayNum <= iVar11) break;
        if ((iVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FNavigationReply *)(*pcVar3)();
          return pFVar8;
        }
        lVar2 = *(longlong *)((pSVar1->Children).Children.AllocatorInstance.Data + lVar12);
        local_58.Object = *(SWidget **)(lVar2 + 0x10);
        local_58.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        GetKeyboardFocusableWidget(this,&local_78,&local_58);
        FVar4.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        if (local_78.Object != (SWidget *)0x0) {
          if (local_78.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_88.Object = local_78.Object;
          local_88.SharedReferenceCount.ReferenceController =
               local_78.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar4.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          break;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        lVar12 = lVar12 + (longlong)iVar13 * 8;
        iVar11 = iVar11 + iVar13;
      } while (-1 < iVar11);
      if (local_88.Object != (SWidget *)0x0) {
        InternalScrollDescendantIntoView
                  (this,param_1,&local_88,false,this->NavigationDestination,
                   this->NavigationScrollPadding);
        FVar4.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        local_48.Object = local_88.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_88.SharedReferenceCount.ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FNavigationReply::Explicit(__return_storage_ptr__,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar4.ReferenceController);
        goto LAB_142978904;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
LAB_1429788f2:
  SWidget::OnNavigation((SWidget *)this,__return_storage_ptr__,param_1,param_2);
LAB_142978904:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_98[0].ReferenceController);
  return __return_storage_ptr__;
}

// OnPaint @ 14297fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SScrollBox::OnPaint(SScrollBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                   FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  code *pcVar3;
  TVector2<float>_u_0_s_0 TVar4;
  undefined8 uVar5;
  int iVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FSlateBrush *pFVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_118 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  TTransform2<float> local_c8;
  FName local_b0;
  TTransform2<float> local_a8;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar6 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  if (this->bShowSoftwareCursor) {
    pIVar7 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
    pFVar8 = ::FName::FName(&local_b0,L"SoftwareCursor_Grab");
    pFVar9 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
    fVar1 = param_2->Scale;
    fVar11 = (__real_3f800000 / fVar1) * *(float *)&(pFVar9->ImageSize).field_0x4;
    fVar10 = (__real_3f800000 / fVar1) * *(float *)&pFVar9->ImageSize;
    TVar4 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_c8.M.M[0][1] = TVar4.X;
    local_c8.M.M[1][0] = TVar4.Y;
    local_d8 = (TVector2<float>_u_0)CONCAT44(fVar11,fVar10);
    uVar5 = local_d8;
    local_d0._0_4_ = (this->SoftwareCursorPosition).field0_0x0._s_0.X - fVar10 * __real_3f000000;
    local_d0._4_4_ = (this->SoftwareCursorPosition).field0_0x0._s_0.Y - fVar11 * __real_3f000000;
    local_c8.Trans.field0_0x0 = local_d0;
    local_d8._0_4_ = fVar1 * (float)(undefined4)local_d0 + local_c8.M.M[0][1];
    local_d8._4_4_ = fVar1 * (float)local_d0._4_4_ + local_c8.M.M[1][0];
    local_c8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_c8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_c8.M.M[1][0] = (float)_UNK_15076b188;
    local_c8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_a8,&local_c8,&param_2->AccumulatedRenderTransform);
    local_90 = local_d8;
    local_5c = param_2->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_7c = uVar5;
    local_74[0] = local_a8.M.M[0][0];
    local_74[1] = local_a8.M.M[0][1];
    afStack_6c[0] = local_a8.M.M[1][0];
    afStack_6c[1] = local_a8.M.M[1][1];
    local_64 = local_a8.Trans.field0_0x0;
    local_88 = fVar1;
    FSlateDrawElement::MakeBox
              (param_4,iVar6 + 1,(FPaintGeometry *)&local_90._s_0,pFVar9,None,&FLinearColor::White);
    iVar6 = iVar6 + 1;
  }
  return iVar6;
}

// OnPreviewMouseButtonDown @ 142982650

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnPreviewMouseButtonDown
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  undefined4 local_18 [4];
  
  if (((this->bEnableTouchScrolling != false) && (param_2->bIsTouchEvent != false)) &&
     ((this->bFingerOwningTouchInteraction).bIsSet == false)) {
    FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
    this->AmountScrolledWhileRightMouseDown = 0.0;
    this->PendingScrollTriggerAmount = 0.0;
    if ((TOptional<int> *)local_18 != &this->bFingerOwningTouchInteraction) {
      (this->bFingerOwningTouchInteraction).TypedValue = param_2->PointerIndex;
      (this->bFingerOwningTouchInteraction).bIsSet = true;
    }
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 142982c00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBox::OnTouchEnded
          (SScrollBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  FReply *pFVar7;
  uint local_res8;
  undefined1 local_resc;
  undefined8 local_198 [2];
  FReply local_188;
  FReply local_d0;
  
  FGeometry::operator=(&this->CachedGeometry,param_1);
  local_res8 = param_2->PointerIndex;
  local_resc = 1;
  bVar6 = SWidget::HasMouseCaptureByUser
                    ((SWidget *)this,*(int *)((longlong)&param_2->_padding_ + 4),
                     (TOptional<int>)&local_res8);
  if (bVar6) {
    if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FReply *)(*pcVar4)();
        return pFVar7;
      }
    }
    (**(code **)(((this->ScrollBar).Object)->_padding_ + 0x260))();
    SWidget::Invalidate((SWidget *)this,Layout);
    BeginInertialScrolling(this);
    if (this->bConsumePointerInput == false) {
      pFVar7 = SWidget::OnTouchEnded((SWidget *)this,&local_d0,param_1,param_2);
      if (&pFVar7->MouseCaptor != (TWeakPtr<SWidget,1> *)local_198) {
        pTVar3 = (pFVar7->MouseCaptor).WeakReferenceCount.ReferenceController;
        (pFVar7->MouseCaptor).Object = (SWidget *)0x0;
        (pFVar7->MouseCaptor).WeakReferenceCount.ReferenceController =
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
      pFVar7->bReleaseMouseCapture = 1;
      pFVar7->bUseHighPrecisionMouse = 0;
      FReply::FReply(__return_storage_ptr__,pFVar7);
      FReply::~FReply(&local_d0);
    }
    else {
      FReply::FReply(&local_188,true);
      FVar5.ReferenceController = local_188.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_188.MouseCaptor.Object = (SWidget *)0x0;
      local_188.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_188.bUseHighPrecisionMouse = 0;
      local_188.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_188);
      FReply::~FReply(&local_188);
    }
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// RemoveSlot @ 142989d20

void __thiscall SScrollBox::RemoveSlot(SScrollBox *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TPanelChildren<SScrollBox::FSlot>::Remove(&((this->ScrollPanel).Object)->Children,param_1);
  return;
}

// ScrollBar_OnScrollBarVisibilityChanged @ 14298ba50

void __thiscall
SScrollBox::ScrollBar_OnScrollBarVisibilityChanged(SScrollBox *this,EVisibility param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnScrollBarVisibilityChanged,&local_28);
  if ((*(int *)&(this->OnScrollBarVisibilityChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnScrollBarVisibilityChanged).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1.Value.Value);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ScrollBar_OnUserScrolled @ 14298bab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SScrollBox::ScrollBar_OnUserScrolled(SScrollBox *this,float param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SScrollPanel *pSVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [8];
  bool bVar7;
  FDeprecateSlateVector2D FVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FSharedReferencer<1> local_a0;
  FReadAccessScope local_90;
  FGeometry local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this->bAnimateScroll = false;
  FVar8 = GetScrollPanelContentSize(this);
  pSVar1 = *(SWidget **)FVar8;
  if (this->Orientation == Orient_Vertical) {
    local_a8._4_4_ = (undefined4)((ulonglong)pSVar1 >> 0x20);
    fVar10 = (float)local_a8._4_4_;
  }
  else {
    local_a8._0_4_ = SUB84(pSVar1,0);
    fVar10 = (float)local_a8._0_4_;
  }
  local_a8 = (undefined1  [8])pSVar1;
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->ScrollPanel).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SScrollPanel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = (undefined1  [8])pSVar3;
  local_a0.ReferenceController = pTVar2;
  SWidget::FindChildGeometry
            ((SWidget *)this,&local_78,&this->CachedGeometry,(TSharedRef<SWidget,1> *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_a8 = (undefined1  [8])local_78.Size;
  auVar6 = local_a8;
  if (this->Orientation == Orient_Vertical) {
    local_a8._4_4_ = local_78.Size._4_4_;
  }
  else {
    local_a8._0_4_ = local_78.Size._0_4_;
    local_a8._4_4_ = local_a8._0_4_;
  }
  fVar9 = fVar10 - (float)local_a8._4_4_;
  if (fVar10 * param_1 <= fVar10 - (float)local_a8._4_4_) {
    fVar9 = fVar10 * param_1;
  }
  this->DesiredScrollOffset = fVar9;
  local_a8 = auVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled,
             &local_90);
  if ((*(int *)&(this->OnUserScrolled).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnUserScrolled).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,fVar9);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// ScrollBy @ 14298c380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
SScrollBox::ScrollBy
          (SScrollBox *this,FGeometry *param_1,float param_2,EAllowOverscroll param_3,bool param_4)

{
  float fVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [8];
  bool bVar7;
  undefined1 uVar8;
  FDeprecateSlateVector2D FVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  FSharedReferencer<1> local_d0;
  FReadAccessScope local_c0;
  FGeometry local_a8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_f8;
  SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  this->bAnimateScroll = false;
  this->field_0x464 = this->field_0x464 | param_4 << 4;
  FVar9 = GetScrollPanelContentSize(this);
  pSVar2 = *(SWidget **)FVar9;
  if (this->Orientation == Orient_Vertical) {
    local_d8._4_4_ = (undefined4)((ulonglong)pSVar2 >> 0x20);
    fVar11 = (float)local_d8._4_4_;
  }
  else {
    local_d8._0_4_ = SUB84(pSVar2,0);
    fVar11 = (float)local_d8._0_4_;
  }
  local_d8 = (undefined1  [8])pSVar2;
  if (((this->ScrollPanel).Object == (SScrollPanel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar3 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  FVar9 = (FDeprecateSlateVector2D)(this->ScrollPanel).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar9 == (FDeprecateSlateVector2D)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8 = (undefined1  [8])FVar9;
  local_d0.ReferenceController = pTVar3;
  SWidget::FindChildGeometry((SWidget *)this,&local_a8,param_1,(TSharedRef<SWidget,1> *)local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  fVar1 = this->DesiredScrollOffset;
  if (param_2 != 0.0) {
    local_d8 = (undefined1  [8])local_a8.Size;
    auVar6 = local_d8;
    if (this->Orientation == Orient_Vertical) {
      local_d8._4_4_ = local_a8.Size._4_4_;
    }
    else {
      local_d8._0_4_ = local_a8.Size._0_4_;
      local_d8._4_4_ = local_d8._0_4_;
    }
    fVar11 = fVar11 - (float)local_d8._4_4_;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    local_d8 = auVar6;
    if (((this->AllowOverscroll == Yes) && (param_3 == Yes)) &&
       (bVar7 = FOverscroll::ShouldApplyOverscroll
                          (&this->Overscroll,fVar1 == 0.0,fVar1 == fVar11,param_2), bVar7)) {
      FOverscroll::ScrollBy(&this->Overscroll,param_1,param_2);
    }
    else {
      fVar10 = param_2 + this->DesiredScrollOffset;
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      this->DesiredScrollOffset = fVar10;
    }
  }
  fVar11 = this->DesiredScrollOffset;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled,
             &local_c0);
  if ((*(int *)&(this->OnUserScrolled).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnUserScrolled).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,fVar11);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_c0);
  if ((this->ConsumeMouseWheel == Always) || (fVar1 != this->DesiredScrollOffset)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// ScrollDescendantIntoView @ 14298c620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScrollBox::ScrollDescendantIntoView
          (SScrollBox *this,TSharedPtr<SWidget,1> *param_1,bool param_2,
          EDescendantScrollDestination param_3,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  atomic<int> *paVar13;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar13 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar13 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  local_58 = (code *)0x0;
  puVar11 = FMemory::Malloc(0x28,8);
  puVar11[2] = pSVar2;
  *puVar11 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SScrollBox::ScrollDescendantIntoView'::`2'::<lambda_1>,0,1>::
              _vftable_;
  puVar11[1] = this;
  puVar11[3] = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  *(bool *)(puVar11 + 4) = param_2;
  *(EDescendantScrollDestination *)((longlong)puVar11 + 0x21) = param_3;
  *(float *)((longlong)puVar11 + 0x24) = param_4;
  lVar9 = *(longlong *)&this->ScrollIntoViewRequest;
  uVar10 = *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x8;
  uVar3 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x10;
  uVar4 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x14;
  uVar5 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x18;
  uVar6 = *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x1c;
  uVar7 = *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x20;
  plVar8 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
  if (puVar11 + 1 != (undefined8 *)0x0) {
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,void,FGeometry>
               ::Call;
  }
  *(code **)&this->ScrollIntoViewRequest = local_58;
  *(undefined8 *)&(this->ScrollIntoViewRequest).field_0x8 = uStack_50;
  uStack_30._0_4_ = SUB84(puVar11,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x10 = local_48;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x14 = uStack_44;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x18 = uStack_40;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->ScrollIntoViewRequest).field_0x2c = uStack_30._4_4_;
  local_48 = uVar3;
  uStack_44 = uVar4;
  uStack_40 = uVar5;
  uStack_3c = uVar6;
  local_38 = uVar7;
  uStack_30 = plVar8;
  local_58 = (code *)lVar9;
  uStack_50 = uVar10;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_48;
    if (plVar8 != (longlong *)0x0) {
      plVar12 = plVar8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  BeginInertialScrolling(this);
  return;
}

// ScrollToEnd @ 14298d040

void __thiscall SScrollBox::ScrollToEnd(SScrollBox *this)

{
  this->bScrollToEnd = true;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// ScrollToStart @ 14298d060

void __thiscall SScrollBox::ScrollToStart(SScrollBox *this)

{
  this->bScrollToEnd = false;
  this->DesiredScrollOffset = 0.0;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetAllowOverscroll @ 14298e000

void __thiscall SScrollBox::SetAllowOverscroll(SScrollBox *this,EAllowOverscroll param_1)

{
  this->AllowOverscroll = param_1;
  if (param_1 == No) {
    FOverscroll::ResetOverscroll(&this->Overscroll);
    return;
  }
  return;
}

// SetAnalogMouseWheelKey @ 14298e2a0

void __thiscall SScrollBox::SetAnalogMouseWheelKey(SScrollBox *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar5 = FKey::IsValid(param_1);
  if (bVar5) {
    bVar5 = FKey::IsAnalog(param_1);
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1418343293724394074>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBox.cpp"
                         ,0x25a,"!InAnalogKey.IsValid() || InAnalogKey.IsAnalog()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  (this->AnalogMouseWheelKey).KeyName = param_1->KeyName;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->AnalogMouseWheelKey).KeyDetails.Object = pFVar2;
  (this->AnalogMouseWheelKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SetAnimateWheelScrolling @ 14298e350

void __thiscall SScrollBox::SetAnimateWheelScrolling(SScrollBox *this,bool param_1)

{
  this->bAnimateWheelScrolling = false;
  this->field_0x464 = this->field_0x464 | param_1;
  return;
}

// SetConsumeMouseWheel @ 14298edd0

void __thiscall SScrollBox::SetConsumeMouseWheel(SScrollBox *this,EConsumeMouseWheel param_1)

{
  this->ConsumeMouseWheel = param_1;
  return;
}

// SetIsFocusable @ 142991520

void __thiscall SScrollBox::SetIsFocusable(SScrollBox *this,bool param_1)

{
  this->bIsFocusable = false;
  this->field_0x465 = this->field_0x465 | param_1 * '\x02';
  return;
}

// SetIsTouchScrollingEnabled @ 142992c80

void __thiscall SScrollBox::SetIsTouchScrollingEnabled(SScrollBox *this,bool param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = (this->bFingerOwningTouchInteraction).bIsSet;
  this->bEnableTouchScrolling = param_1;
  if (bVar1 != false) {
    `SScrollBox::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(local_res10);
    return;
  }
  return;
}

// SetNavigationDestination @ 1429980d0

void __thiscall
SScrollBox::SetNavigationDestination(SScrollBox *this,EDescendantScrollDestination param_1)

{
  this->NavigationDestination = param_1;
  return;
}

// SetOrientation @ 142998360

void __thiscall SScrollBox::SetOrientation(SScrollBox *this,EOrientation param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SScrollBar,1> *pTVar3;
  TSharedPtr<SScrollBar,1> local_18;
  
  if (this->Orientation == param_1) {
    return;
  }
  this->Orientation = param_1;
  if (!this->bScrollBarIsExternal) {
    pTVar3 = ConstructScrollBar(this,&local_18);
    if (&this->ScrollBar != pTVar3) {
      (this->ScrollBar).Object = pTVar3->Object;
      pTVar3->Object = (SScrollBar *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ScrollBar).SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ((this->ScrollPanel).Object)->Orientation = this->Orientation;
  if (this->Orientation == Orient_Vertical) {
    ConstructVerticalLayout(this);
    return;
  }
  ConstructHorizontalLayout(this);
  return;
}

// SetScrollBarAlwaysVisible @ 142998d90

void __thiscall SScrollBox::SetScrollBarAlwaysVisible(SScrollBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SScrollBar::SetScrollBarAlwaysVisible((this->ScrollBar).Object,param_1);
  return;
}

// SetScrollBarPadding @ 142998df0

void __thiscall SScrollBox::SetScrollBarPadding(SScrollBox *this,FMargin *param_1)

{
  EOrientation EVar1;
  FSlot *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FSlot *pFVar6;
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  EVar1 = this->Orientation;
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  pFVar2 = (this->field686_0x2c0).VerticalScrollBarSlot;
  (this->ScrollBarSlotPadding).Left = param_1->Left;
  (this->ScrollBarSlotPadding).Top = fVar3;
  (this->ScrollBarSlotPadding).Right = fVar4;
  (this->ScrollBarSlotPadding).Bottom = fVar5;
  if (EVar1 == Orient_Vertical) {
    if (pFVar2 == (FSlot *)0x0) {
      return;
    }
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    pFVar6 = (FSlot *)0x0;
    if (&pFVar2->field_0x28 != (undefined1 *)0x0) {
      pFVar6 = pFVar2;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar2->field_0x28,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
  else {
    if (pFVar2 == (FSlot *)0x0) {
      return;
    }
    local_40._0_4_ = param_1->Left;
    local_40._4_4_ = param_1->Top;
    local_40._8_4_ = param_1->Right;
    local_40._12_4_ = param_1->Bottom;
    local_40[0x10] = true;
    local_18 = 0;
    pFVar6 = (FSlot *)0x0;
    if (&pFVar2->field_0x28 != (undefined1 *)0x0) {
      pFVar6 = pFVar2;
    }
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&pFVar2->field_0x28,(ISlateAttributeContainer *)&pFVar6->field_0x20,
             (TAttribute<FMargin> *)local_40,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
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
  return;
}

// SetScrollBarRightClickDragAllowed @ 142998f30

void __thiscall SScrollBox::SetScrollBarRightClickDragAllowed(SScrollBox *this,bool param_1)

{
  this->bAllowsRightClickDragScrolling = false;
  this->field_0x464 = this->field_0x464 | param_1 << 7;
  return;
}

// SetScrollBarStyle @ 142998f50

void __thiscall SScrollBox::SetScrollBarStyle(SScrollBox *this,FScrollBarStyle *param_1)

{
  EOrientation EVar1;
  SScrollBar *this_00;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FArguments FStack_2a8;
  
  if (((param_1 != this->ScrollBarStyle) &&
      (this->ScrollBarStyle = param_1, !this->bScrollBarIsExternal)) &&
     (this_00 = (this->ScrollBar).Object, this_00 != (SScrollBar *)0x0)) {
    if (param_1 == (FScrollBarStyle *)0x0) {
      SScrollBar::FArguments::FArguments(&FStack_2a8);
      SScrollBar::FArguments::~FArguments(&FStack_2a8);
      param_1 = FStack_2a8._Style;
      if (FStack_2a8._Style == (FScrollBarStyle *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Style",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
                           ,0x16f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    EVar1 = this_00->Orientation;
    this_00->NormalThumbImage = &param_1->NormalThumbImage;
    this_00->HoveredThumbImage = &param_1->HoveredThumbImage;
    this_00->DraggedThumbImage = &param_1->DraggedThumbImage;
    lVar4 = 0xc0;
    if (EVar1 != Orient_Vertical) {
      lVar4 = 0x10;
    }
    this_00->BackgroundBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
    lVar4 = 0x170;
    if (EVar1 != Orient_Vertical) {
      lVar4 = 0x220;
    }
    this_00->TopBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
    lVar4 = 0x2d0;
    if (EVar1 != Orient_Vertical) {
      lVar4 = 0x380;
    }
    this_00->BottomBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetScrollBarThickness @ 142998f80

void __thiscall
SScrollBox::SetScrollBarThickness(SScrollBox *this,FDeprecateVector2DParameter param_1)

{
  code *pcVar1;
  bool bVar2;
  float local_res10;
  float fStackX_14;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fStackX_14 = param_1._4_4_;
  local_res10 = param_1._0_4_;
  local_38._s_0.Y = (double)fStackX_14;
  local_28 = 1;
  local_10 = 0;
  local_38._s_0.X = (double)local_res10;
  local_20 = 0;
  uStack_18 = 0;
  SScrollBar::SetThickness
            ((this->ScrollBar).Object,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  return;
}

// SetScrollBarTrackAlwaysVisible @ 142999030

void __thiscall SScrollBox::SetScrollBarTrackAlwaysVisible(SScrollBox *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ScrollBar).Object != (SScrollBar *)0x0) {
    ((this->ScrollBar).Object)->bAlwaysShowScrollbarTrack = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ((this->ScrollBar).Object)->bAlwaysShowScrollbarTrack = param_1;
  return;
}

// SetScrollBarVisibility @ 1429990b0

void __thiscall SScrollBox::SetScrollBarVisibility(SScrollBox *this,EVisibility param_1)

{
  SScrollBar *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  TEnumAsByte<EVisibility::Private> local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ScrollBar).Object;
  local_2f = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  (pSVar1->UserVisibility).Value.Value.Value = (uchar)param_1.Value.Value;
  (pSVar1->UserVisibility).bIsSet = true;
  local_30 = param_1.Value.Value;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pSVar1->UserVisibility).Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// SetScrollOffset @ 1429991d0

void __thiscall SScrollBox::SetScrollOffset(SScrollBox *this,float param_1)

{
  this->bScrollToEnd = false;
  this->DesiredScrollOffset = param_1;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetScrollWhenFocusChanges @ 1429991f0

void __thiscall
SScrollBox::SetScrollWhenFocusChanges(SScrollBox *this,EScrollWhenFocusChanges param_1)

{
  this->ScrollWhenFocusChanges = param_1;
  return;
}

// SetScrollingAnimationInterpolationSpeed @ 142999210

void __thiscall SScrollBox::SetScrollingAnimationInterpolationSpeed(SScrollBox *this,float param_1)

{
  this->ScrollingAnimationInterpolationSpeed = param_1;
  return;
}

// SetStyle @ 14299a640

void __thiscall SScrollBox::SetStyle(SScrollBox *this,FScrollBoxStyle *param_1)

{
  if (this->Style != param_1) {
    this->Style = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetWheelScrollMultiplier @ 14299f7f0

void __thiscall SScrollBox::SetWheelScrollMultiplier(SScrollBox *this,float param_1)

{
  this->WheelScrollMultiplier = param_1;
  return;
}

// Slot @ 1429a1a20

FSlotArguments * __cdecl SScrollBox::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0x58);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 1429a6240

bool __thiscall SScrollBox::SupportsKeyboardFocus(SScrollBox *this)

{
  return this->bIsFocusable;
}

// Tick @ 1429aa360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBox::Tick(SScrollBox *this,FGeometry *param_1,double param_2,float param_3)

{
  float fVar1;
  undefined1 uVar2;
  code *pcVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  SScrollPanel *pSVar6;
  SScrollBar *pSVar7;
  double dVar8;
  bool bVar9;
  FSlateApplication *pFVar10;
  undefined8 uVar11;
  FDeprecateSlateVector2D FVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  TSharedRef<SWidget,1> local_180;
  TSharedRef<SWidget,1> local_170 [2];
  FDeprecateSlateVector2D local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  FGeometry local_108;
  FGeometry local_d0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (this->bAllowContentToShrink == false) {
    FGeometry::operator=(&this->CachedGeometry,param_1);
  }
  if (this->bTouchPanningCapture) {
    pFVar10 = FSlateApplication::Get();
    dVar8 = (double)(**(code **)(*(longlong *)pFVar10 + 0x60))(pFVar10);
    if (__real_3fb999999999999a < dVar8 - this->LastScrollTime) {
      FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
    }
  }
  if (*(void **)&this->ScrollIntoViewRequest != (void *)0x0) {
    local_148 = (this->CachedGeometry).Size;
    uStack_140 = *(undefined8 *)&(this->CachedGeometry).Scale;
    local_138 = *(undefined8 *)((longlong)&(this->CachedGeometry).AbsolutePosition.field0_0x0 + 4);
    uStack_130 = *(undefined8 *)((longlong)&(this->CachedGeometry).Position.field0_0x0 + 4);
    local_128 = *(undefined8 *)((this->CachedGeometry).AccumulatedRenderTransform.M.M[0] + 1);
    uStack_120 = *(undefined8 *)((this->CachedGeometry).AccumulatedRenderTransform.M.M[1] + 1);
    local_118 = *(undefined8 *)
                 ((longlong)&(this->CachedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
    ;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ScrollIntoViewRequest);
    pcVar3 = *(code **)&this->ScrollIntoViewRequest;
    plVar15 = (longlong *)&(this->ScrollIntoViewRequest).field_0x10;
    plVar4 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
    plVar14 = plVar15;
    if (plVar4 != (longlong *)0x0) {
      plVar14 = plVar4;
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    (*pcVar3)(uVar11,&local_148);
    if (*(longlong *)&this->ScrollIntoViewRequest != 0) {
      plVar4 = *(longlong **)&(this->ScrollIntoViewRequest).field_0x28;
      if (plVar4 != (longlong *)0x0) {
        plVar15 = plVar4;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
      *(undefined8 *)&this->ScrollIntoViewRequest = 0;
    }
  }
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->ScrollPanel).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180.Object = (SWidget *)pSVar6;
  local_180.SharedReferenceCount.ReferenceController = pTVar5;
  SWidget::FindChildGeometry((SWidget *)this,&local_108,&this->CachedGeometry,&local_180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_188 = GetScrollPanelContentSize(this);
  local_188 = *(FDeprecateSlateVector2D *)local_188;
  if (this->Orientation == Orient_Vertical) {
    fVar16 = local_188._4_4_;
  }
  else {
    fVar16 = (float)local_188;
  }
  if (this->bScrollToEnd) {
    local_188 = local_108.Size;
    FVar12 = local_188;
    if (this->Orientation == Orient_Vertical) {
      local_188._4_4_ = local_108.Size._4_4_;
    }
    else {
      local_188._0_4_ = local_108.Size._0_4_;
      local_188._4_4_ = (float)local_188;
    }
    fVar16 = fVar16 - local_188._4_4_;
    this->field_0x464 = this->field_0x464 & 0xdf;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    this->DesiredScrollOffset = fVar16;
    local_188 = FVar12;
  }
  fVar16 = GetViewFraction(this);
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = (this->ScrollPanel).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->ScrollPanel).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_170[0].Object = (SWidget *)pSVar6;
  local_170[0].SharedReferenceCount.ReferenceController = pTVar5;
  SWidget::FindChildGeometry((SWidget *)this,&local_d0,&this->CachedGeometry,local_170);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar12 = GetScrollPanelContentSize(this);
  uVar11 = *(undefined8 *)FVar12;
  if (this->Orientation == Orient_Vertical) {
    local_188._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    fVar19 = local_188._4_4_;
  }
  else {
    local_188._0_4_ = (float)uVar11;
    fVar19 = (float)local_188;
  }
  local_188 = (FDeprecateSlateVector2D)uVar11;
  fVar17 = GetViewFraction(this);
  fVar20 = __real_3f800000;
  fVar19 = this->DesiredScrollOffset / fVar19;
  if (__real_3f800000 - fVar17 <= fVar19) {
    fVar19 = __real_3f800000 - fVar17;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  if (this->bAnimateScroll) {
    fVar17 = this->ScrollingAnimationInterpolationSpeed;
    if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar7 = (this->ScrollBar).Object;
    if ((pSVar7->Track).Object == (SScrollBarTrack *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (0.0 < fVar17) {
      fVar1 = ((pSVar7->Track).Object)->OffsetFraction;
      fVar18 = fVar19 - fVar1;
      if (__real_322bcc77 <= fVar18 * fVar18) {
        fVar17 = param_3 * fVar17;
        if (fVar20 <= fVar17) {
          fVar17 = fVar20;
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        fVar19 = fVar17 * fVar18 + fVar1;
      }
    }
  }
  FVar12 = GetScrollPanelContentSize(this);
  fVar20 = *(float *)((longlong)FVar12 + 4);
  if (this->Orientation != Orient_Vertical) {
    fVar20 = *(float *)FVar12;
  }
  fVar20 = fVar19 * fVar20;
  if (this->AllowOverscroll == Yes) {
    fVar17 = FOverscroll::GetOverscroll(&this->Overscroll,&this->CachedGeometry);
    fVar20 = fVar17 + fVar20;
  }
  if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar6 = (this->ScrollPanel).Object;
  bVar13 = 8;
  if ((float)((uint)(fVar20 - pSVar6->PhysicalOffset) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_3a83126f) {
    bVar13 = 0;
  }
  this->field_0x464 = bVar13 | this->field_0x464 & 0xf7;
  if (pSVar6 == (SScrollPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->ScrollPanel).Object)->PhysicalOffset = fVar20;
  if ((this->bIsScrolling) && (!this->bIsScrolling)) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar7 = (this->ScrollBar).Object;
  (**(code **)(pSVar7->_padding_ + 0x250))(pSVar7,fVar19,fVar16,0);
  if ((this->ScrollBar).Object == (SScrollBar *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar9 = SScrollBar::IsNeeded((this->ScrollBar).Object);
  if (!bVar9) {
    if ((this->ScrollPanel).Object == (SScrollPanel *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ((this->ScrollPanel).Object)->PhysicalOffset = 0.0;
  }
  if (this->bAllowContentToShrink != false) {
    FGeometry::operator=(&this->CachedGeometry,param_1);
  }
  return;
}

// UpdateInertialScroll @ 1429aeb50

EActiveTimerReturnType __thiscall
SScrollBox::UpdateInertialScroll(SScrollBox *this,double param_1,float param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  FSharedReferencer<1> aFStack_40 [7];
  
  bVar2 = this->bIsScrolling;
  if (bVar2 != 0) {
    FInertialScrollManager::UpdateScrollVelocity(&this->InertialScrollManager,param_2);
    fVar5 = (this->InertialScrollManager).ScrollVelocity / (this->CachedGeometry).Scale;
    if (fVar5 != 0.0) {
      fVar3 = FOverscroll::GetOverscroll(&this->Overscroll,&this->CachedGeometry);
      if (fVar3 != 0.0) {
        fVar4 = __real_3f800000;
        if ((fVar3 <= 0.0) && (fVar4 = __real_bf800000, 0.0 <= fVar3)) {
          fVar4 = 0.0;
        }
        fVar3 = __real_3f800000;
        if ((fVar5 <= 0.0) && (fVar3 = __real_bf800000, 0.0 <= fVar5)) {
          fVar3 = 0.0;
        }
        if (fVar4 == fVar3) {
          FInertialScrollManager::ClearScrollVelocity(&this->InertialScrollManager,false);
          goto LAB_1429aec4c;
        }
      }
      bVar2 = 1;
      ScrollBy(this,&this->CachedGeometry,fVar5 * param_2,this->AllowOverscroll,false);
    }
  }
LAB_1429aec4c:
  if (this->AllowOverscroll == Yes) {
    fVar5 = FOverscroll::GetOverscroll(&this->Overscroll,&this->CachedGeometry);
    if (fVar5 != 0.0) {
      bVar2 = 1;
    }
    FOverscroll::UpdateOverscroll(&this->Overscroll,param_2);
  }
  this->TickScrollDelta = 0.0;
  if (bVar2 == 0) {
    this->bIsScrolling = false;
    this->bIsScrollingActiveTimerRegistered = false;
    SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
    local_48 = 0;
    aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->UpdateInertialScrollHandle != (TSharedPtr<FActiveTimerHandle,1> *)&local_48) {
      (this->UpdateInertialScrollHandle).Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UpdateInertialScrollHandle).SharedReferenceCount,aFStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_40[0].ReferenceController);
  }
  return bVar2 != 0;
}

// operator() @ 150494900

bool __thiscall `SScrollBox::SetIsTouchScrollingEnabled'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1418343293724394827>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1418343293724394827>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

