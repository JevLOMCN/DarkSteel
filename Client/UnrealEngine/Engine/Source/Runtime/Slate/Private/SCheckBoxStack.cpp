// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// BeginHoldPress @ 1427d42d0

void __thiscall SCheckBoxStack::BeginHoldPress(SCheckBoxStack *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  float fVar3;
  atomic<int> aVar4;
  int iVar5;
  SWidget *pSVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FTSTicker *this_00;
  undefined8 *puVar12;
  TSharedRef<SWidget,1> *pTVar13;
  ulong64 uVar14;
  TWeakPtr<FTSTicker::FElement,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uStackX_c;
  FDestructionSentinel local_98;
  TWeakPtr<FTSTicker::FElement,1> local_80;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  this_00 = FTSTicker::GetCoreTicker();
  fVar3 = this->HoldPressDuration;
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_68;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_68);
  uVar11 = local_80.WeakReferenceCount.ReferenceController._4_4_;
  if (puVar12 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_98);
    pTVar16 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar13->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCheckBoxStack___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar6;
    puVar12[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    puVar12[5] = OnHandleHoldPress;
    puVar12[6] = (ulonglong)uVar11 << 0x20;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_98.Accessor);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pTVar15 = FTSTicker::AddTicker
                      (this_00,&local_80,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_70,fVar3);
  if (&this->HoldPressHandle != pTVar15) {
    (this->HoldPressHandle).Object = pTVar15->Object;
    pTVar15->Object = (FElement *)0x0;
    pTVar16 = (this->HoldPressHandle).WeakReferenceCount.ReferenceController;
    (this->HoldPressHandle).WeakReferenceCount.ReferenceController =
         (pTVar15->WeakReferenceCount).ReferenceController;
    (pTVar15->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar16->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
      }
    }
  }
  plVar7 = (longlong *)
           CONCAT44(local_80.WeakReferenceCount.ReferenceController._4_4_,
                    local_80.WeakReferenceCount.ReferenceController._0_4_);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_98);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  return;
}

// EndHoldPress @ 142802140

void __thiscall SCheckBoxStack::EndHoldPress(SCheckBoxStack *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->HoldPressHandle;
  if (((pTVar2->Object != (FElement *)0x0) &&
      (pTVar4 = (this->HoldPressHandle).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    local_28.Object = pTVar2->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->HoldPressHandle).WeakReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_28);
    if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
      pTVar4 = (this->HoldPressHandle).WeakReferenceCount.ReferenceController;
      pTVar2->Object = (FElement *)0x0;
      (this->HoldPressHandle).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001428021bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          return;
        }
      }
    }
  }
  return;
}

// OnHandleHoldPress @ 1428276b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SCheckBoxStack::OnHandleHoldPress(SCheckBoxStack *this,float param_1)

{
  FSlateApplication *this_00;
  FGeometry *pFVar1;
  FSlateRotatedRect *this_01;
  FWidgetPath *pFVar2;
  TSharedRef<SWidget,1> *pTVar3;
  longlong *plVar4;
  ForElementType<FArrangedWidget> FVar5;
  undefined1 auStackY_268 [32];
  undefined1 local_208;
  undefined1 local_207;
  FDeprecateSlateVector2D local_204;
  FPopupTransitionEffect local_1fc;
  TVector2<float>_u_0 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  TVector2<float>_u_0 local_1e0;
  FDeprecateVector2DParameter local_1d8;
  FSlateRect local_1d0;
  TSharedRef<SWidget,1> local_1c0;
  TSharedPtr<IMenu,1> local_1b0;
  TSharedRef<SWidget,1> local_1a0;
  FSlateRotatedRect local_190;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_00 = FSlateApplication::Get();
  local_1e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_207 = 0;
  local_1fc.SlideDirection = ContextMenu;
  pFVar1 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  local_1f8 = (TVector2<float>_u_0)0x0;
  local_1ec = 0;
  local_204 = pFVar1->Size;
  local_1f0 = local_204._0_4_;
  local_1e4 = local_204._4_4_;
  this_01 = TransformRect<TTransform2<float>_>
                      (&local_190,&pFVar1->AccumulatedRenderTransform,
                       (FSlateRotatedRect *)&local_1f8._s_0);
  FSlateRotatedRect::ToBoundingRect(this_01,&local_1d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FReadAccessScope *)&local_1f8._s_0);
  if ((int)this->_padding_ == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_1c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_1f8._s_0);
  pFVar2 = FWidgetPath::FWidgetPath(&local_178);
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1a0);
  FSlateApplication::PushMenu
            (this_00,&local_1b0,pTVar3,pFVar2,&local_1c0,&local_1d8,&local_1fc,true,
             (FDeprecateVector2DParameter *)&local_1e0._s_0,SUB82(&local_208,0),true,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar5 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.SharedReferenceCount.ReferenceController);
  return false;
}

// OnMouseButtonDown @ 142829090

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBoxStack::OnMouseButtonDown
          (SCheckBoxStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  char cVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  TEnumAsByte<EButtonClickMethod::Type> TVar4;
  undefined7 extraout_var;
  ECheckBoxState *pEVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  bool bVar8;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FVar2 = (param_2->EffectingButton).KeyName;
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar2 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar8) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar2 == EKeys::RightMouseButton.KeyName) &&
       (bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_), bVar8)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      EndHoldPress(this);
      OnHandleHoldPress(this,0.0);
      bVar8 = true;
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      bVar8 = false;
    }
    FReply::FReply(__return_storage_ptr__,bVar8);
    return __return_storage_ptr__;
  }
  *(undefined1 *)&this->_padding_ = 1;
  TVar4 = SCheckBox::GetClickMethodFromInputType
                    ((SCheckBox *)this,(FPointerEvent *)&stack0x00000020);
  cVar1 = *(char *)CONCAT71(extraout_var,TVar4.Value);
  BeginHoldPress(this);
  if (cVar1 == '\x01') {
    SCheckBox::ToggleCheckedState((SCheckBox *)this);
    pEVar5 = TAttribute<enum_ECheckBoxState>::Get(&this->_padding_);
    if (*pEVar5 == Checked) {
      SCheckBox::PlayCheckedSound((SCheckBox *)this);
    }
    else if (*pEVar5 == Unchecked) {
      SCheckBox::PlayUncheckedSound((SCheckBox *)this);
    }
    *(undefined1 *)&this->_padding_ = 0;
    FReply::FReply(&local_c8,true);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
    pFVar7 = FReply::SetUserFocus(&local_c8,pTVar6,Mouse,false);
    FReply::FReply(__return_storage_ptr__,pFVar7);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(&local_c8,true);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pFVar7 = FReply::CaptureMouse(&local_c8,pTVar6);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
  pFVar7 = FReply::SetUserFocus(pFVar7,pTVar6,Mouse,false);
  FReply::FReply(__return_storage_ptr__,pFVar7);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142829d30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBoxStack::OnMouseButtonUp
          (SCheckBoxStack *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  EndHoldPress(this);
  SCheckBox::OnMouseButtonUp((SCheckBox *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 142829e00

void __thiscall SCheckBoxStack::OnMouseCaptureLost(SCheckBoxStack *this,FCaptureLostEvent *param_1)

{
  EndHoldPress(this);
  SWidget::OnMouseCaptureLost((SWidget *)this,param_1);
  return;
}

