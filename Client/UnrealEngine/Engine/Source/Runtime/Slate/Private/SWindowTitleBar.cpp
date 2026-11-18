// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// ~SWindowTitleBar @ 1426abbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindowTitleBar::~SWindowTitleBar(SWindowTitleBar *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  ITextData *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AppIconWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseButtonToolTipText).Getter);
  pvVar3 = *(void **)&(this->CloseButtonToolTipText).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseButtonToolTipText).Getter);
  pIVar4 = (this->CloseButtonToolTipText).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Title).Getter);
  pvVar3 = *(void **)&(this->Title).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Title).Getter);
  pIVar4 = (this->Title).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CloseButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MaximizeRestoreButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MinimizeButton).SharedReferenceCount.ReferenceController);
  FCurveSequence::~FCurveSequence(&this->TitleFlashSequence);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TitleArea).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// GetWindowZoneOverride @ 1426c0420

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SWindowTitleBar::GetWindowZoneOverride(SWindowTitleBar *this)

{
  return TitleBar;
}

// CloseButton_OnClicked @ 142713920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBar::CloseButton_OnClicked(SWindowTitleBar *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142713953;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->OwnerWindowPtr).Object;
    if (this_00 != (SWindow *)0x0) {
      SWindow::RequestDestroyWindow(this_00);
    }
  }
LAB_142713953:
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// Construct @ 142720cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBar::Construct
          (SWindowTitleBar *this,FArguments *param_1,TSharedRef<SWindow,1> *param_2,
          TSharedPtr<SWidget,1> *param_3,EHorizontalAlignment param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EWidgetUpdateFlags EVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  TSharedRef<SWidget_const_,1> *pTVar13;
  ulong64 uVar14;
  FArguments *this_00;
  FName FVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  FArguments *pFVar18;
  FSlotArguments *pFVar19;
  TSharedRef<SWidget,1> *pTVar20;
  TSharedRef<SOverlay,1> *pTVar21;
  TSharedRef<SBorder,1> *pTVar22;
  longlong *this_01;
  EWidgetUpdateFlags EVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  TReferenceControllerBase<1> *local_res20;
  TSharedRef<SWidget_const_,1> local_b18;
  undefined1 local_b08 [8];
  FDelegateAllocation local_b00;
  FName local_af0;
  TReferenceControllerBase<1> *pTStack_ae8;
  FMemScope local_ad8;
  undefined4 uStack_ad0;
  uint uStack_acc;
  FLLMScope local_ac8 [2];
  FName local_ac0;
  SImage *local_ab8;
  FSharedReferencer<1> local_ab0;
  undefined1 local_aa8 [16];
  void *pvStack_a98;
  FDelegateAllocation *local_a90;
  FText local_a88;
  undefined1 local_a78 [8];
  undefined1 auStack_a70 [8];
  undefined8 local_a68;
  SWidget *local_a58;
  FSharedReferencer<1> local_a50;
  uchar local_a48;
  undefined1 local_a47;
  undefined1 local_a40 [8];
  void *pvStack_a38;
  undefined8 local_a30;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_a28;
  FDestructionSentinel local_a08;
  FDestructionSentinel local_9f0;
  longlong *local_9d8;
  TSharedRef<SBorder,1> local_9d0;
  TSharedRef<SOverlay,1> local_9c0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_9b0;
  undefined1 local_998 [56];
  void *local_960;
  undefined1 local_938 [56];
  void *local_900;
  FArguments local_8d8;
  FArguments local_6d0;
  FArguments local_428;
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  local_res8[0] = 0;
  EVar3 = (EWidgetUpdateFlags)this->_padding_;
  EVar23 = EVar3 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar23;
  local_res20 = (TReferenceControllerBase<1> *)param_3;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar23);
  (this->OwnerWindowPtr).Object = param_2->Object;
  pTVar24 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar24 != (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
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
    (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController = pTVar24;
  }
  this->Style = param_1->_Style;
  this->ShowAppIcon = param_1->_ShowAppIcon;
  TAttribute<FText>::operator=(&this->Title,&param_1->_Title);
  TAttribute<FText>::operator=(&this->CloseButtonToolTipText,&param_1->_CloseButtonToolTipText);
  this->WindowMenuSlot = (FSlot *)0x0;
  if (((this->Title).bIsSet == false) &&
     (bVar11 = TAttribute<FText>::IsBound(&this->Title), !bVar11)) {
    local_b08 = (undefined1  [8])0x0;
    local_b00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b00.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b08,
               (FWriteAccessScope *)local_aa8);
    local_a90 = &local_b00;
    puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_b00);
    pTVar24 = local_res20;
    if (puVar12 != (undefined8 *)0x0) {
      local_af0 = (FName)HandleWindowTitleText;
      pTStack_ae8 = (TReferenceControllerBase<1> *)
                    ((ulonglong)local_b00.DelegateAllocator & 0xffffffff00000000);
      pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b18);
      pTVar24 = (pTVar13->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar13->Object;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar14;
      *puVar12 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSWindowTitleBar___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar12[3] = pSVar5;
      puVar12[4] = pTVar24;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      *(FName *)(puVar12 + 5) = local_af0;
      puVar12[6] = pTStack_ae8;
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b18.SharedReferenceCount.ReferenceController);
    }
    if (pvStack_a98._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_aa8._8_8_,(FDestructionSentinel *)local_aa8);
    }
    FText::FText(&local_a88);
    local_a78[0] = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_a70,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b08);
    FText::operator=(&(this->Title).Value,&local_a88);
    (this->Title).bIsSet = (bool)local_a78[0];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Title).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_a70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_a70);
    if (local_a68 != (void *)0x0) {
      FMemory::Free(local_a68);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_a70);
    if (local_a88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a88.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b08,
               (FWriteAccessScope *)&local_a08);
    if ((local_b00.DelegateSize != 0) &&
       (local_b00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)*(longlong *)local_b00.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b00,0,0,0x10);
      local_b00.DelegateSize = 0;
    }
    if (local_a08.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a08.Accessor,&local_a08);
    }
    if (local_b00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b00.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b08);
  }
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  this_00 = SBorder::FArguments::FArguments(&local_428);
  FVar15 = (FName)SBorder::FArguments::Padding(this_00,0.0);
  local_a48 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_a47 = 1;
  local_a30 = 0;
  local_a40 = (undefined1  [8])0x0;
  pvStack_a38 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)((longlong)FVar15 + 0x88) =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)FVar15 + 0x89) = 1;
  local_af0 = FVar15;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar15 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  if (pvStack_a38 != (void *)0x0) {
    FMemory::Free(pvStack_a38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  local_b18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_b18.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_b18.Object = (SWidget *)GetWindowTitlebackgroundImage;
  TAttribute<FSlateBrush_const_*>::Bind<SWindowTitleBar>
            ((TAttribute<FSlateBrush_const_*> *)((longlong)FVar15 + 0x2a0),this,
             (pmf_1ce041d1 *)&local_b18);
  FVar15 = (FName)SOverlay::FArguments::FArguments(&local_8d8);
  local_aa8[0] = EVisibility::SelfHitTestInvisible.Value.Value;
  local_aa8[1] = 1;
  local_a90 = (FDelegateAllocation *)0x0;
  local_aa8._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  pvStack_a98 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)((longlong)FVar15 + 0x88) =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)FVar15 + 0x89) = 1;
  local_ac0 = FVar15;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar15 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_aa8 + 8));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_aa8 + 8));
  if (pvStack_a98 != (void *)0x0) {
    FMemory::Free(pvStack_a98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_aa8 + 8));
  local_b18.Object = (SWidget *)SOverlay::Slot((FSlotArguments *)local_938,0);
  pFVar16 = SImage::FArguments::FArguments(&local_6d0);
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (FWriteAccessScope *)&local_9f0);
  local_9d8 = &pFVar16->_padding_;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_9d8);
  pTVar24 = local_res20;
  if (puVar12 != (undefined8 *)0x0) {
    uStack_acc = local_b00.DelegateAllocator._4_4_;
    local_ad8 = (FMemScope)GetWindowFlashVisibility;
    uStack_ad0 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_a28);
    pTVar24 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar13->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWindowTitleBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar5;
    puVar12[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar12 + 5) = local_ad8;
    puVar12[6] = CONCAT44(uStack_acc,uStack_ad0);
    FVar15 = local_ac0;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a28._Widget.SharedReferenceCount.ReferenceController);
  }
  if (local_9f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9f0.Accessor,&local_9f0);
  }
  local_a88.TextData.Reference = (ITextData *)&this->Style->FlashTitleBrush;
  local_a88.Flags._0_1_ = 1;
  local_a78 = (undefined1  [8])0x0;
  auStack_a70 = (undefined1  [8])0x0;
  local_a68 = (void *)0x0;
  (pFVar16->_Image).Value = (FSlateBrush *)local_a88.TextData.Reference;
  (pFVar16->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a78);
  if ((atomic<unsigned___int64>)auStack_a70 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_a70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a78);
  uStack_ad0 = 0;
  local_ad8 = (FMemScope)GetWindowTitleAreaColor;
  local_a28._Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)uStack_acc << 0x20);
  local_a28._Widget.Object = (SBorder *)GetWindowTitleAreaColor;
  TAttribute<FSlateColor>::Bind<SWindowTitleBar>
            (&pFVar16->_ColorAndOpacity,this,(pmf_425d87c6 *)&local_a28);
  FLLMScope::FLLMScope(local_ac8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ac0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ad8,&local_ac0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_9f0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x21,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_ad8);
  FLLMScope::~FLLMScope(local_ac8);
  pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_9f0,
                       (TSharedRef<SImage,1> *)local_b08,pFVar16);
  pSVar5 = local_b18.Object;
  pTVar24 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_ab8 = pTVar17->Object;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ab0.ReferenceController = pTVar24;
  if ((SImage **)&(local_b18.Object)->_padding_ != &local_ab8) {
    (local_b18.Object)->_padding_ = (longlong)local_ab8;
    local_ab8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(local_b18.Object)->_padding_,&local_ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab0.ReferenceController);
  pFVar18 = SOverlay::FArguments::operator+((FArguments *)FVar15,(FSlotArguments *)pSVar5);
  pFVar19 = SOverlay::Slot((FSlotArguments *)local_998,0);
  local_b18.Object = (SWidget *)local_res20->_padding_;
  local_b18.SharedReferenceCount.ReferenceController =
       ((FSharedReferencer<1> *)&local_res20->SharedReferenceCount)->ReferenceController;
  if (local_b18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar20 = MakeTitleBarContent(this,(TSharedRef<SWidget,1> *)&local_a08,
                                (TSharedPtr<SWidget,1> *)&local_b18,param_4);
  local_a50.ReferenceController = (pTVar20->SharedReferenceCount).ReferenceController;
  local_a58 = pTVar20->Object;
  if (local_a50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a50.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a50.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar19->_padding_ != &local_a58) {
    pFVar19->_padding_ = (longlong)local_a58;
    local_a58 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_a50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a50.ReferenceController);
  pFVar18 = SOverlay::FArguments::operator+(pFVar18,pFVar19);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_b18.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ad8,(FName *)&local_b18,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_9b0,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x1d,local_res10);
  FMemScope::~FMemScope(&local_ad8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pTVar21 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9b0,&local_9c0,pFVar18);
  FVar15 = local_af0;
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_b18.Object = (SWidget *)pTVar21->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = ((FSharedReferencer<1> *)((longlong)local_af0 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_af0 + 0x1f8))->Widget).Object = local_b18.Object;
  ((FSharedReferencer<1> *)((longlong)local_af0 + 0x200))->ReferenceController = pTVar4;
  local_b18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_af0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_b18,&local_af0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_a28,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x18,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_b18);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pTVar22 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_a28,&local_9d0,(FArguments *)FVar15);
  this_01 = &this->_padding_;
  pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
  FVar15 = (FName)pTVar22->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar15;
  this->_padding_ = (longlong)pTVar6;
  local_af0 = FVar15;
  pTStack_ae8 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a08.Accessor);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_998 + 0x30));
  if (local_960 != (void *)0x0) {
    FMemory::Free(local_960);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_998 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_998._16_8_);
  if ((undefined8 *)local_998._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_998._0_8_)(local_998._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b00.DelegateAllocator);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_9f0.Accessor);
  SImage::FArguments::~FArguments(&local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_938 + 0x30));
  if (local_900 != (void *)0x0) {
    FMemory::Free(local_900);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_938 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_938._16_8_);
  if ((undefined8 *)local_938._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_938._0_8_)(local_938._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_8d8._Slots.AllocatorInstance.Data,local_8d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_8d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8d8);
  SBorder::FArguments::~FArguments(&local_428);
  return;
}

// Flash @ 142737380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWindowTitleBar::Flash(SWindowTitleBar *this)

{
  FCurveSequence *pFVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  pFVar1 = FCurveSequence::FCurveSequence(&local_78,0.0,__real_3f800000,Linear);
  FCurveSequence::operator=((FCurveSequence *)&this->_padding_,pFVar1);
  FCurveSequence::~FCurveSequence(&local_78);
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_88);
  FCurveSequence::Play((FCurveSequence *)&this->_padding_,pTVar2,false,0.0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// GetCloseImage @ 14273bd40

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBar::GetCloseImage(SWindowTitleBar *this)

{
  SWindow *this_00;
  SButton *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  FSlateBrush *pFVar5;
  FSlateBrush *pFVar6;
  FSlateBrush *pFVar7;
  bool bVar8;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pFVar5 = (FSlateBrush *)(this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  pFVar6 = (FSlateBrush *)0x0;
  pFVar7 = pFVar5;
  if (pFVar5 != (FSlateBrush *)0x0) {
    fVar3 = (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    do {
      pFVar7 = pFVar6;
      if (fVar3 == 0.0) goto LAB_14273bd81;
      LOCK();
      fVar4 = (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R;
      bVar8 = fVar3 == fVar4;
      if (bVar8) {
        (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar3 + 1);
        fVar4 = fVar3;
      }
      UNLOCK();
      fVar3 = fVar4;
    } while (!bVar8);
    this_00 = (this->OwnerWindowPtr).Object;
    pFVar7 = pFVar5;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      if (((this->CloseButton).Object == (SButton *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSlateBrush *)(*pcVar2)();
        return pFVar5;
      }
      pSVar1 = (this->CloseButton).Object;
      if ((pSVar1->bIsPressed == '\0') &&
         (pSVar1->AppearPressedAttribute ==
          (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
        if ((pSVar1 == (SButton *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FSlateBrush *)(*pcVar2)();
          return pFVar5;
        }
        if (*(char *)((longlong)&((this->CloseButton).Object)->_padding_ + 3) == '\0') {
          pFVar6 = &(this->Style->CloseButtonStyle).Normal;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar6 = &(this->Style->CloseButtonStyle).Hovered;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        pFVar6 = &(this->Style->CloseButtonStyle).Pressed;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_14273bd81:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar6;
}

// GetFlashValue @ 14273e510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SWindowTitleBar::GetFlashValue(SWindowTitleBar *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = FCurveSequence::IsPlaying(&this->TitleFlashSequence);
  if (bVar1) {
    fVar2 = FCurveSequence::GetLerp(&this->TitleFlashSequence);
    fVar3 = sinf(fVar2 * ___real_420a3ae7);
    return (fVar3 + __real_3f800000) * __real_3f000000 * (__real_3f800000 - fVar2);
  }
  return 0.0;
}

// GetMaximizeButtonToolTip @ 14273fa90

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWindowTitleBar::GetMaximizeButtonToolTip(SWindowTitleBar *this,FText *__return_storage_ptr__)

{
  SWindow *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  int iVar5;
  FText *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pTVar7 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14273fac3;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    this_00 = (this->OwnerWindowPtr).Object;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      if (local_18.Object != (FGenericWindow *)0x0) {
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar1)();
          return pFVar6;
        }
        cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x70))();
        if (cVar3 != '\0') {
          FText::AsLocalizable_Advanced_LocText
                    (__return_storage_ptr__,L"WindowTitleBar",L"MaximizeRestoreDown",L"Restore Down"
                    );
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_14273fae0;
        }
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar1)();
          return pFVar6;
        }
        iVar5 = (**(code **)((local_18.Object)->_padding_ + 0x68))();
        if (iVar5 == 1) {
          FText::AsLocalizable_Advanced_LocText
                    (__return_storage_ptr__,L"WindowTitleBar",L"MaximizeExitWindowedFullscreen",
                     L"Exit Full Screen");
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_14273fae0;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14273fac3:
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"WindowTitleBar",L"Maximize",L"Maximize");
LAB_14273fae0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetMaximizeRestoreImage @ 14273fc10

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBar::GetMaximizeRestoreImage(SWindowTitleBar *this)

{
  SWindow *this_00;
  code *pcVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  FSlateBrush *pFVar6;
  SButton *pSVar7;
  FSlateBrush *pFVar8;
  FSlateBrush *pFVar9;
  bool bVar10;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pFVar6 = (FSlateBrush *)(this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateBrush *)0x0;
  pFVar9 = pFVar6;
  if (pFVar6 != (FSlateBrush *)0x0) {
    fVar2 = (pFVar6->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    do {
      pFVar9 = pFVar8;
      if (fVar2 == 0.0) goto LAB_14273fc51;
      LOCK();
      fVar4 = (pFVar6->TintColor).SpecifiedColor.field0_0x0._s_0.R;
      bVar10 = fVar2 == fVar4;
      if (bVar10) {
        (pFVar6->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
        fVar4 = fVar2;
      }
      UNLOCK();
      fVar2 = fVar4;
    } while (!bVar10);
    this_00 = (this->OwnerWindowPtr).Object;
    pFVar9 = pFVar6;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      bVar10 = SWindow::HasMaximizeBox(this_00);
      if (bVar10) {
        if (local_18.Object != (FGenericWindow *)0x0) {
          if ((local_18.Object == (FGenericWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FSlateBrush *)(*pcVar1)();
            return pFVar6;
          }
          iVar5 = (**(code **)((local_18.Object)->_padding_ + 0x68))();
          if (iVar5 == 1) {
            pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
            if ((pSVar7->bIsPressed == '\0') &&
               (pSVar7->AppearPressedAttribute ==
                (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
              pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
              if (*(char *)((longlong)&pSVar7->_padding_ + 3) == '\0') {
                pFVar8 = &(this->Style->ExitFullscreenButtonStyle).Normal;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_18.SharedReferenceCount.ReferenceController);
              }
              else {
                pFVar8 = &(this->Style->ExitFullscreenButtonStyle).Hovered;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_18.SharedReferenceCount.ReferenceController);
              }
            }
            else {
              pFVar8 = &(this->Style->ExitFullscreenButtonStyle).Pressed;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_18.SharedReferenceCount.ReferenceController);
            }
            goto LAB_14273fc51;
          }
          if ((local_18.Object == (FGenericWindow *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FSlateBrush *)(*pcVar1)();
            return pFVar6;
          }
          cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x70))();
          if (cVar3 != '\0') {
            pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
            if ((pSVar7->bIsPressed == '\0') &&
               (pSVar7->AppearPressedAttribute ==
                (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
              pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
              if (*(char *)((longlong)&pSVar7->_padding_ + 3) == '\0') {
                pFVar8 = &(this->Style->RestoreButtonStyle).Normal;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_18.SharedReferenceCount.ReferenceController);
              }
              else {
                pFVar8 = &(this->Style->RestoreButtonStyle).Hovered;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_18.SharedReferenceCount.ReferenceController);
              }
            }
            else {
              pFVar8 = &(this->Style->RestoreButtonStyle).Pressed;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_18.SharedReferenceCount.ReferenceController);
            }
            goto LAB_14273fc51;
          }
        }
        pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
        if ((pSVar7->bIsPressed == '\0') &&
           (pSVar7->AppearPressedAttribute ==
            (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
          pSVar7 = TSharedPtr<SButton,1>::operator->(&this->MaximizeRestoreButton);
          if (*(char *)((longlong)&pSVar7->_padding_ + 3) == '\0') {
            pFVar8 = &(this->Style->MaximizeButtonStyle).Normal;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_18.SharedReferenceCount.ReferenceController);
          }
          else {
            pFVar8 = &(this->Style->MaximizeButtonStyle).Hovered;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_18.SharedReferenceCount.ReferenceController);
          }
        }
        else {
          pFVar8 = &(this->Style->MaximizeButtonStyle).Pressed;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        pFVar8 = &(this->Style->MaximizeButtonStyle).Disabled;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_14273fc51:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  return pFVar8;
}

// GetMinimizeImage @ 14273fee0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBar::GetMinimizeImage(SWindowTitleBar *this)

{
  SWindow *this_00;
  code *pcVar1;
  float fVar2;
  float fVar3;
  FSlateBrush *pFVar4;
  SButton *pSVar5;
  FSlateBrush *pFVar6;
  FSlateBrush *pFVar7;
  bool bVar8;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pFVar4 = (FSlateBrush *)(this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  pFVar6 = (FSlateBrush *)0x0;
  pFVar7 = pFVar4;
  if (pFVar4 != (FSlateBrush *)0x0) {
    fVar2 = (pFVar4->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    do {
      pFVar7 = pFVar6;
      if (fVar2 == 0.0) goto LAB_14273ff21;
      LOCK();
      fVar3 = (pFVar4->TintColor).SpecifiedColor.field0_0x0._s_0.R;
      bVar8 = fVar2 == fVar3;
      if (bVar8) {
        (pFVar4->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
        fVar3 = fVar2;
      }
      UNLOCK();
      fVar2 = fVar3;
    } while (!bVar8);
    this_00 = (this->OwnerWindowPtr).Object;
    pFVar7 = pFVar4;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      bVar8 = SWindow::HasMinimizeBox(this_00);
      if (bVar8) {
        if (((this->MinimizeButton).Object == (SButton *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FSlateBrush *)(*pcVar1)();
          return pFVar4;
        }
        pSVar5 = (this->MinimizeButton).Object;
        if ((pSVar5->bIsPressed == '\0') &&
           (pSVar5->AppearPressedAttribute ==
            (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
          pSVar5 = TSharedPtr<SButton,1>::operator->(&this->MinimizeButton);
          if (*(char *)((longlong)&pSVar5->_padding_ + 3) == '\0') {
            pFVar6 = &(this->Style->MinimizeButtonStyle).Normal;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_18.SharedReferenceCount.ReferenceController);
          }
          else {
            pFVar6 = &(this->Style->MinimizeButtonStyle).Hovered;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_18.SharedReferenceCount.ReferenceController);
          }
        }
        else {
          pFVar6 = &(this->Style->MinimizeButtonStyle).Pressed;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        pFVar6 = &(this->Style->MinimizeButtonStyle).Disabled;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_14273ff21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar6;
}

// GetWindowFlashVisibility @ 142746290

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SWindowTitleBar::GetWindowFlashVisibility(SWindowTitleBar *this)

{
  bool bVar1;
  uchar *in_RDX;
  EVisibility EVar2;
  
  bVar1 = FCurveSequence::IsPlaying(&this->TitleFlashSequence);
  EVar2 = EVisibility::Hidden;
  if (bVar1) {
    EVar2 = EVisibility::SelfHitTestInvisible;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetWindowTitleAreaColor @ 1427462d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SWindowTitleBar::GetWindowTitleAreaColor(SWindowTitleBar *this,FSlateColor *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = GetFlashValue(this);
  uVar3 = FLinearColor::White.field0_0x0._s_0.B;
  uVar2 = FLinearColor::White.field0_0x0._s_0.G;
  uVar1 = FLinearColor::White.field0_0x0._s_0.R;
  fVar4 = fVar4 * __real_3ecccccd;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = (float)uVar1;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = (float)uVar2;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = (float)uVar3;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar4;
  return __return_storage_ptr__;
}

// GetWindowTitleContentColor @ 142746330

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
SWindowTitleBar::GetWindowTitleContentColor
          (SWindowTitleBar *this,FSlateColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = GetFlashValue(this);
  fVar4 = (FLinearColor::Black.field0_0x0._s_0.G - FLinearColor::White.field0_0x0._s_0.G) * fVar1 +
          FLinearColor::White.field0_0x0._s_0.G;
  fVar3 = (FLinearColor::Black.field0_0x0._s_0.B - FLinearColor::White.field0_0x0._s_0.B) * fVar1 +
          FLinearColor::White.field0_0x0._s_0.B;
  fVar2 = (FLinearColor::Black.field0_0x0._s_0.A - FLinearColor::White.field0_0x0._s_0.A) * fVar1 +
          FLinearColor::White.field0_0x0._s_0.A;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R =
       (FLinearColor::Black.field0_0x0._s_0.R - FLinearColor::White.field0_0x0._s_0.R) * fVar1 +
       FLinearColor::White.field0_0x0._s_0.R;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar4;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar3;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar2;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// GetWindowTitlebackgroundImage @ 1427463e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SWindowTitleBar::GetWindowTitlebackgroundImage(SWindowTitleBar *this)

{
  SWindow *this_00;
  code *pcVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  FSlateBrush *pFVar5;
  FSlateBrush *pFVar6;
  FSlateBrush *pFVar7;
  longlong lVar8;
  bool bVar9;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pFVar5 = (FSlateBrush *)(this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSlateBrush *)0x0;
  pFVar6 = pFVar5;
  if (pFVar5 == (FSlateBrush *)0x0) goto LAB_142746421;
  fVar2 = (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R;
  do {
    pFVar6 = pFVar7;
    if (fVar2 == 0.0) goto LAB_142746421;
    LOCK();
    fVar4 = (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R;
    bVar9 = fVar2 == fVar4;
    if (bVar9) {
      (pFVar5->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar2 + 1);
      fVar4 = fVar2;
    }
    UNLOCK();
    fVar2 = fVar4;
  } while (!bVar9);
  this_00 = (this->OwnerWindowPtr).Object;
  pFVar6 = pFVar5;
  if (this_00 == (SWindow *)0x0) goto LAB_142746421;
  SWindow::GetNativeWindow(this_00,&local_18);
  if (local_18.Object == (FGenericWindow *)0x0) {
LAB_1427464a2:
    bVar9 = false;
  }
  else {
    if ((local_18.Object == (FGenericWindow *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FSlateBrush *)(*pcVar1)();
      return pFVar5;
    }
    cVar3 = (**(code **)((local_18.Object)->_padding_ + 200))();
    if (cVar3 == '\0') goto LAB_1427464a2;
    bVar9 = true;
  }
  lVar8 = 0x1850;
  if (!bVar9) {
    lVar8 = 0x1900;
  }
  pFVar7 = (FSlateBrush *)(&this->Style->field_0x0 + lVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_142746421:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar7;
}

// HandleWindowTitleText @ 142746b90

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWindowTitleBar::HandleWindowTitleText(SWindowTitleBar *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  SWindow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FText *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  pTVar6 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142746bd0;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar2 = (this->OwnerWindowPtr).Object;
    if (pSVar2 != (SWindow *)0x0) {
      pFVar5 = TAttribute<FText>::Get(&pSVar2->Title);
      goto LAB_142746bd5;
    }
  }
LAB_142746bd0:
  pFVar5 = FText::GetEmpty();
LAB_142746bd5:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// MakeTitleBarContent @ 142756a50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWindowTitleBar::MakeTitleBarContent
          (SWindowTitleBar *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1,EHorizontalAlignment param_2)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  TReferenceControllerBase<1> *pTVar4;
  STextBlock *pSVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TReferenceControllerBase<1> *pTVar16;
  FArguments *pFVar17;
  bool bVar18;
  FArguments *pFVar19;
  FArguments *pFVar20;
  TAttribute<FText> *pTVar21;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar22;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBox,1> *pTVar23;
  TSharedRef<SWidget,1> *pTVar24;
  FDeprecateSlateVector2D FVar25;
  FArguments *pFVar26;
  FArguments *pFVar27;
  FSlot *pFVar28;
  FSizeParam *pFVar29;
  FArguments *pFVar30;
  TSharedRef<SSpacer,1> *pTVar31;
  FSlot *pFVar32;
  FSlotArguments *pFVar33;
  TSharedRef<SHorizontalBox,1> *pTVar34;
  FSlotArguments *pFVar35;
  FSlotArguments *pFVar36;
  TSharedRef<SOverlay,1> *pTVar37;
  FSlotArguments *pFVar38;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2258;
  T0RequiredArgs local_2257;
  T0RequiredArgs local_2256;
  T0RequiredArgs local_2255;
  T0RequiredArgs local_2254;
  T0RequiredArgs local_2253;
  T0RequiredArgs local_2252 [2];
  SWidget *local_2250;
  TReferenceControllerBase<1> *pTStack_2248;
  SWidget *local_2240;
  TReferenceControllerBase<1> *pTStack_2238;
  FLLMScope local_2230;
  FLLMScope local_222c;
  FLLMScope local_2228;
  FLLMScope local_2224;
  FLLMScope local_2220;
  FLLMScope local_221c;
  FArguments *local_2218;
  SHorizontalBox *local_2210;
  FSharedReferencer<1> local_2208;
  SHorizontalBox *local_2200;
  FSharedReferencer<1> local_21f8;
  SWidget *local_21f0;
  TReferenceControllerBase<1> *pTStack_21e8;
  TSharedPtr<SWidget,1> local_21e0;
  SWidget *local_21d0;
  FSharedReferencer<1> local_21c8;
  SBox *local_21c0;
  FSharedReferencer<1> local_21b8;
  uchar local_21b0;
  undefined1 local_21af;
  undefined1 local_21a8 [8];
  void *pvStack_21a0;
  undefined8 local_2198;
  uchar local_2190;
  undefined1 local_218f;
  undefined1 local_2188 [8];
  void *pvStack_2180;
  undefined8 local_2178;
  uchar local_2170;
  undefined1 local_216f;
  undefined1 local_2168 [8];
  void *pvStack_2160;
  undefined8 local_2158;
  uchar local_2150;
  undefined1 local_214f;
  undefined1 local_2148 [8];
  void *pvStack_2140;
  undefined8 local_2138;
  SOverlay *local_2130;
  TReferenceControllerBase<1> *pTStack_2128;
  undefined8 local_2120;
  FSharedReferencer<1> local_2118;
  undefined8 local_2110;
  FSharedReferencer<1> local_2108;
  undefined4 local_2100 [2];
  FSlot *local_20f8;
  FName local_20f0;
  FMemScope local_20e8;
  FSlot *local_20e0;
  FSlot *local_20d8;
  FName local_20d0;
  FMemScope local_20c8;
  FName local_20c0;
  FMemScope local_20b8;
  FSlotArguments *local_20b0;
  FSlotArguments *local_20a8;
  FSlotArguments *local_20a0;
  FName local_2098;
  FMemScope local_2090;
  FName local_2088;
  FMemScope local_2080;
  FArguments *local_2078;
  FName local_2070;
  FMemScope local_2068;
  TReferenceControllerBase<1> *local_2060;
  TSharedRef<SWidget,1> local_2058;
  TSharedRef<SWidget,1> local_2048;
  undefined4 local_2038 [2];
  undefined4 local_2030 [2];
  undefined4 local_2028 [2];
  double local_2020;
  double dStack_2018;
  undefined1 local_2010;
  undefined1 local_2008 [8];
  void *pvStack_2000;
  undefined8 local_1ff8;
  double local_1ff0;
  double dStack_1fe8;
  undefined1 local_1fe0;
  undefined1 local_1fd8 [8];
  void *pvStack_1fd0;
  undefined8 local_1fc8;
  TAttribute<EVisibility> local_1fc0;
  TAttribute<float> local_1fa0;
  TAttribute<EVisibility> local_1f80;
  TAttribute<float> local_1f60;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1f40;
  TAttribute<FMargin> local_1f28;
  TSharedRef<SBox,1> local_1ef8;
  TSharedRef<SOverlay,1> local_1ee8;
  TSharedRef<SHorizontalBox,1> local_1ed8;
  TSharedRef<SHorizontalBox,1> local_1ec8;
  TSharedRef<SSpacer,1> local_1eb8;
  TSharedRef<SSpacer,1> local_1ea8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1e98;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1e80;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1e68;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_1e50;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_1e38;
  TSharedRef<SBox,1> local_1e10;
  TSharedRef<STextBlock,1> local_1e00;
  undefined1 local_1df0 [16];
  undefined1 local_1de0 [32];
  undefined1 local_1dc0 [24];
  undefined1 local_1da8 [16];
  undefined1 local_1d98 [32];
  undefined1 local_1d78 [24];
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1d60;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1d48;
  undefined8 *local_1d30;
  SSpacer *local_1d28;
  FSharedReferencer<1> local_1d20 [4];
  undefined1 local_1d00 [24];
  undefined4 local_1ce8;
  undefined1 local_1ce4;
  undefined4 local_1ce0;
  undefined1 local_1cdc;
  FSlotArgumentsMixin local_1cd8;
  undefined8 *local_1c48;
  SSpacer *local_1c40;
  FSharedReferencer<1> local_1c38 [4];
  undefined1 local_1c18 [24];
  undefined4 local_1c00;
  undefined1 local_1bfc;
  undefined4 local_1bf8;
  undefined1 local_1bf4;
  FSlotArgumentsMixin local_1bf0;
  undefined1 local_1b60 [56];
  void *local_1b28;
  undefined1 local_1b00 [56];
  void *local_1ac8;
  undefined8 *local_1aa0 [2];
  TReferenceControllerBase<1> *local_1a90;
  undefined1 local_1a70 [24];
  EHorizontalAlignment local_1a58;
  undefined1 local_1a54;
  undefined4 local_1a50;
  undefined1 local_1a4c;
  FSlotArgumentsMixin local_1a48;
  undefined8 *local_19b8 [2];
  TReferenceControllerBase<1> *local_19a8;
  undefined1 local_1988 [40];
  FSlotArgumentsMixin local_1960;
  undefined8 *local_18d0 [2];
  TReferenceControllerBase<1> *local_18c0;
  undefined1 local_18a0 [40];
  FSlotArgumentsMixin local_1878;
  undefined8 *local_17e8 [2];
  TReferenceControllerBase<1> *local_17d8;
  undefined1 local_17b8 [40];
  FSlotArgumentsMixin local_1790;
  TAttribute<FText> local_1700;
  FArguments local_16d0;
  FArguments local_14c8;
  FArguments local_12c0;
  undefined1 local_10b8 [528];
  undefined1 local_ea8 [24];
  undefined1 local_e90 [528];
  undefined1 local_c80 [24];
  FArguments local_c68;
  FArguments local_928;
  FArguments local_5e8;
  undefined8 uStack_48;
  
  uStack_48 = 0x142756a7d;
  local_2240 = (SWidget *)0x0;
  pTStack_2238 = (TReferenceControllerBase<1> *)0x0;
  local_2250 = (SWidget *)0x0;
  pTStack_2248 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 0x248))(this,&local_2240);
  pFVar32 = (FSlot *)0x0;
  if (param_1->Object == (SWidget *)0x0) {
    pFVar19 = SBox::FArguments::FArguments(&local_c68);
    pFVar19->_HAlign = HAlign_Center;
    local_1f80.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_1f80.bIsSet = true;
    local_1f80.Getter._0_8_ = 0;
    local_1f80.Getter._8_8_ = 0;
    local_1f80.Getter._16_8_ = 0;
    pFVar19 = TSlateBaseNamedArgs<SBox>::Visibility
                        ((TSlateBaseNamedArgs<SBox> *)pFVar19,&local_1f80);
    local_1f28.bIsSet = true;
    local_1f28.Getter._16_8_ = 0;
    local_1f28.Value.Left = ___xmm_4000000040a000004000000040a00000;
    local_1f28.Value.Top = _UNK_15094b744;
    local_1f28.Value.Right = _UNK_15094b748;
    local_1f28.Value.Bottom = _UNK_15094b74c;
    local_1f28.Getter._0_8_ = 0;
    local_1f28.Getter._8_8_ = 0;
    pFVar19 = SBox::FArguments::Padding(pFVar19,&local_1f28);
    pFVar20 = STextBlock::FArguments::FArguments(&local_5e8);
    local_21b0 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
    local_21af = 1;
    local_2198 = 0;
    local_21a8 = (undefined1  [8])0x0;
    pvStack_21a0 = (void *)0x0;
    *(TEnumAsByte<EVisibility::Private> *)&pFVar20->_padding_ =
         EVisibility::SelfHitTestInvisible.Value.Value;
    *(undefined1 *)((longlong)&pFVar20->_padding_ + 1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar20->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_21a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21a8);
    if (pvStack_21a0 != (void *)0x0) {
      FMemory::Free(pvStack_21a0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_21a8);
    pFVar20->_TextStyle = &this->Style->TitleTextStyle;
    pTVar21 = TAttribute<FText>::TAttribute<FText>(&local_1700,&this->Title);
    pFVar20 = STextBlock::FArguments::Text(pFVar20,pTVar21);
    this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_1d60,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
                         ,0x127,local_res20);
    pTVar22 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,&local_1e00,pFVar20);
    pTVar4 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar22->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_21f0 = (pFVar19->_Content).Widget.Object;
    pTStack_21e8 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar19->_Content).Widget.Object = (SWidget *)pSVar5;
    (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_21e8);
    this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                        (&local_1d48,"SBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
                         ,0x120,&local_2258);
    pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_1e10,pFVar19);
    local_21e0.SharedReferenceCount.ReferenceController =
         (pTVar23->SharedReferenceCount).ReferenceController;
    local_21e0.Object = (SWidget *)pTVar23->Object;
    if (local_21e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_21e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_21e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1 != &local_21e0) {
      param_1->Object = local_21e0.Object;
      local_21e0.Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_21e0.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_21e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e10.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d48._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e00.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d60._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_5e8);
    SBox::FArguments::~FArguments(&local_c68);
  }
  if (local_2240 != (SWidget *)0x0) {
    if ((((local_2240 == SNullWidget::NullWidget.Object) && (local_2250 != (SWidget *)0x0)) &&
        (local_2250 == SNullWidget::NullWidget.Object)) && (param_2 == HAlign_Left)) {
      param_2 = HAlign_Center;
    }
    if (local_2240 != (SWidget *)0x0) goto LAB_142756dc1;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar18) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
LAB_142756dc1:
  SWidget::SlatePrepass(local_2240);
  if ((local_2250 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  SWidget::SlatePrepass(local_2250);
  if ((local_2240 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  FVar25 = SWidget::GetDesiredSize(local_2240);
  fVar2 = *(float *)((longlong)FVar25 + 4);
  dVar13 = (double)*(float *)FVar25;
  if ((local_2250 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  FVar25 = SWidget::GetDesiredSize(local_2250);
  fVar3 = *(float *)((longlong)FVar25 + 4);
  dVar14 = (double)*(float *)FVar25;
  dVar15 = dVar14;
  if (param_2 == HAlign_Center) {
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    dVar15 = dVar13;
    fVar3 = fVar2;
    if (dVar13 <= dVar14) {
      dVar13 = dVar14;
      dVar15 = dVar14;
    }
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  local_2078 = SBox::FArguments::FArguments(&local_928);
  local_2190 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_218f = 1;
  local_2178 = 0;
  local_2188 = (undefined1  [8])0x0;
  pvStack_2180 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&local_2078->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&local_2078->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2078->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2188);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2188);
  if (pvStack_2180 != (void *)0x0) {
    FMemory::Free(pvStack_2180);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2188);
  pFVar26 = SOverlay::FArguments::FArguments(&local_12c0);
  local_2170 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_216f = 1;
  local_2158 = 0;
  local_2168 = (undefined1  [8])0x0;
  pvStack_2160 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar26->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar26->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2168);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2168);
  if (pvStack_2160 != (void *)0x0) {
    FMemory::Free(pvStack_2160);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2168);
  local_2218 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_1b00,0);
  pFVar27 = SHorizontalBox::FArguments::FArguments(&local_14c8);
  local_2150 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_214f = 1;
  local_2138 = 0;
  local_2148 = (undefined1  [8])0x0;
  pvStack_2140 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar27->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar27->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar27->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2148);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2148);
  if (pvStack_2140 != (void *)0x0) {
    FMemory::Free(pvStack_2140);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2148);
  pFVar28 = ::operator_new(0x58);
  local_20f8 = pFVar32;
  if (pFVar28 != (FSlot *)0x0) {
    *(undefined8 *)pFVar28 = 0;
    *(undefined8 *)&pFVar28->field_0x8 = 0;
    *(undefined8 *)&pFVar28->field_0x10 = 0;
    *(undefined8 *)&pFVar28->field_0x18 = 0;
    *(undefined8 *)&pFVar28->field_0x20 = 0;
    *(undefined8 *)&pFVar28->field_0x28 = 0;
    *(undefined8 *)&pFVar28->field_0x30 = 0;
    *(undefined8 *)&pFVar28->field_0x38 = 0;
    *(undefined8 *)&pFVar28->field_0x40 = 0;
    *(undefined8 *)&pFVar28->field_0x48 = 0;
    *(undefined8 *)&pFVar28->field_0x50 = 0;
    local_20f8 = SHorizontalBox::FSlot::FSlot(pFVar28);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1c48,(FSlot *)&local_20f8);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1df0);
  TOptional<FSizeParam>::operator=(&local_1bf0._SizeParam,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dc0);
  if ((void *)local_1dc0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1dc0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dc0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1de0);
  if ((void *)local_1de0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1de0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1de0);
  local_1c00 = 1;
  local_1bfc = 1;
  local_1bf8 = 1;
  local_1bf4 = 1;
  pFVar30 = SSpacer::FArguments::FArguments((FArguments *)local_e90);
  local_2010 = 1;
  local_1ff8 = 0;
  dVar14 = (double)fVar3;
  local_2008 = (undefined1  [8])0x0;
  pvStack_2000 = (void *)0x0;
  (pFVar30->_Size).Value.field0_0x0._s_0.X = dVar13;
  (pFVar30->_Size).Value.field0_0x0._s_0.Y = dVar14;
  (pFVar30->_Size).bIsSet = true;
  local_2020 = dVar13;
  dStack_2018 = dVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2008);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2008);
  if (pvStack_2000 != (void *)0x0) {
    FMemory::Free(pvStack_2000);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2008);
  FLLMScope::FLLMScope(&local_2230,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_20f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_20e8,&local_20f0,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_1e38,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x154,&local_2257);
  FMemScope::~FMemScope(&local_20e8);
  FLLMScope::~FLLMScope(&local_2230);
  pTVar31 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1e38,&local_1ea8,pFVar30);
  local_1c40 = pTVar31->Object;
  local_2118.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_2118.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2118.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2118.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2118.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2118.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2120 = 0;
  local_2060 = local_2118.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1c38,&local_2118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2118.ReferenceController);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,(FSlotArguments *)&local_1c48);
  pFVar28 = ::operator_new(0x58);
  if (pFVar28 != (FSlot *)0x0) {
    *(undefined8 *)pFVar28 = 0;
    *(undefined8 *)&pFVar28->field_0x8 = 0;
    *(undefined8 *)&pFVar28->field_0x10 = 0;
    *(undefined8 *)&pFVar28->field_0x18 = 0;
    *(undefined8 *)&pFVar28->field_0x20 = 0;
    *(undefined8 *)&pFVar28->field_0x28 = 0;
    *(undefined8 *)&pFVar28->field_0x30 = 0;
    *(undefined8 *)&pFVar28->field_0x38 = 0;
    *(undefined8 *)&pFVar28->field_0x40 = 0;
    *(undefined8 *)&pFVar28->field_0x48 = 0;
    *(undefined8 *)&pFVar28->field_0x50 = 0;
    pFVar32 = SHorizontalBox::FSlot::FSlot(pFVar28);
  }
  local_20e0 = pFVar32;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1aa0,(FSlot *)&local_20e0);
  local_1f60.Getter._16_8_ = 0;
  local_1a54 = 1;
  local_1a50 = 2;
  local_1a4c = 1;
  local_1f60.Value = 1.0;
  local_1f60.bIsSet = true;
  local_1f60.Getter._0_8_ = 0;
  local_1f60.Getter._8_8_ = 0;
  local_1a58 = param_2;
  pFVar33 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1aa0,&local_1f60);
  if ((param_1->Object == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar6 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_21d0 = pSVar6;
  local_21c8.ReferenceController = pTVar4;
  if ((SWidget **)&pFVar33->field_0x8 != &local_21d0) {
    *(SWidget **)&pFVar33->field_0x8 = pSVar6;
    local_21d0 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar33->field_0x10,&local_21c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21c8.ReferenceController);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,pFVar33);
  pFVar32 = ::operator_new(0x58);
  if (pFVar32 == (FSlot *)0x0) {
    local_20d8 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_20d8 = SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  pFVar33 = (FSlotArguments *)0x0;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1d30,(FSlot *)&local_20d8);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1da8);
  TOptional<FSizeParam>::operator=(&local_1cd8._SizeParam,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d78);
  if ((void *)local_1d78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d98);
  if ((void *)local_1d98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d98);
  local_1ce8 = 3;
  local_1ce4 = 1;
  local_1ce0 = 1;
  local_1cdc = 1;
  pFVar30 = SSpacer::FArguments::FArguments((FArguments *)local_10b8);
  local_1fe0 = 1;
  local_1fc8 = 0;
  local_1fd8 = (undefined1  [8])0x0;
  pvStack_1fd0 = (void *)0x0;
  (pFVar30->_Size).Value.field0_0x0._s_0.X = dVar15;
  (pFVar30->_Size).Value.field0_0x0._s_0.Y = dVar14;
  (pFVar30->_Size).bIsSet = true;
  local_1ff0 = dVar15;
  dStack_1fe8 = dVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fd8);
  if (pvStack_1fd0 != (void *)0x0) {
    FMemory::Free(pvStack_1fd0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fd8);
  FLLMScope::FLLMScope(&local_222c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_20d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_20c8,&local_20d0,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_1e50,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x164,&local_2256);
  FMemScope::~FMemScope(&local_20c8);
  FLLMScope::~FLLMScope(&local_222c);
  pTVar31 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1e50,&local_1eb8,pFVar30);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1d28 = pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2110 = 0;
  local_2108.ReferenceController = pTVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1d20,&local_2108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2108.ReferenceController);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,(FSlotArguments *)&local_1d30);
  FLLMScope::FLLMScope(&local_2228,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_20c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_20b8,&local_20c0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1e68,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x14c,&local_2255);
  FMemScope::~FMemScope(&local_20b8);
  FLLMScope::~FLLMScope(&local_2228);
  pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1e68,&local_1ec8,pFVar27);
  pFVar17 = local_2218;
  pTVar8 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_2210 = pTVar34->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2208.ReferenceController = pTVar8;
  if ((SHorizontalBox **)&local_2218->_padding_ != &local_2210) {
    local_2218->_padding_ = (longlong)local_2210;
    local_2210 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2218->_padding_,&local_2208);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2208.ReferenceController);
  local_2218 = SOverlay::FArguments::operator+(pFVar26,(FSlotArguments *)pFVar17);
  pFVar35 = SOverlay::Slot((FSlotArguments *)local_1b60,0);
  pFVar27 = SHorizontalBox::FArguments::FArguments(&local_16d0);
  local_1fc0.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
  local_1fc0.bIsSet = true;
  local_1fc0.Getter._0_8_ = 0;
  local_1fc0.Getter._8_8_ = 0;
  local_1fc0.Getter._16_8_ = 0;
  pFVar27 = TSlateBaseNamedArgs<SHorizontalBox>::Visibility
                      ((TSlateBaseNamedArgs<SHorizontalBox> *)pFVar27,&local_1fc0);
  pFVar32 = ::operator_new(0x58);
  local_20b0 = pFVar33;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_20b0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_17e8,(FSlot *)&local_20b0);
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_17e8);
  puVar1 = &pFVar36->field_0x48;
  if (local_2038 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar36->field_0x4c = 1;
  }
  pFVar38 = pFVar33;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar38 = pFVar36;
  }
  if (local_2030 != (undefined4 *)&pFVar38->field_0x50) {
    *(undefined4 *)&pFVar38->field_0x50 = 1;
    pFVar38->field_0x54 = 1;
  }
  pFVar36 = pFVar33;
  if (pFVar38 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar36 = pFVar38;
  }
  if ((local_2240 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  local_2048.Object = local_2240;
  local_2048.SharedReferenceCount.ReferenceController = pTStack_2238;
  if (pTStack_2238 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2238->SharedReferenceCount = (atomic<int>)((int)pTStack_2238->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2240 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  pFVar36 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar36,&local_2048);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,pFVar36);
  pFVar32 = ::operator_new(0x58);
  local_20a8 = pFVar33;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_20a8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_18d0,(FSlot *)&local_20a8);
  local_1fa0.Value = 1.0;
  local_1fa0.Getter._16_8_ = 0;
  local_1fa0.bIsSet = true;
  local_1fa0.Getter._0_8_ = 0;
  local_1fa0.Getter._8_8_ = 0;
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_18d0,&local_1fa0);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,pFVar36);
  pFVar32 = ::operator_new(0x58);
  local_20a0 = pFVar33;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_20a0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_19b8,(FSlot *)&local_20a0);
  pFVar36 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_19b8);
  puVar1 = &pFVar36->field_0x48;
  if (local_2028 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar36->field_0x4c = 1;
  }
  pFVar38 = pFVar33;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar38 = pFVar36;
  }
  if (local_2100 != (undefined4 *)&pFVar38->field_0x50) {
    *(undefined4 *)&pFVar38->field_0x50 = 1;
    pFVar38->field_0x54 = 1;
  }
  if (pFVar38 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar33 = pFVar38;
  }
  if ((local_2250 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  pTVar16 = pTStack_2248;
  local_2058.Object = local_2250;
  local_2058.SharedReferenceCount.ReferenceController = pTStack_2248;
  if (pTStack_2248 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2248->SharedReferenceCount = (atomic<int>)((int)pTStack_2248->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_2250 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    pTVar24 = (TSharedRef<SWidget,1> *)(*pcVar12)();
    return pTVar24;
  }
  pFVar33 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar33,&local_2058);
  pFVar27 = SHorizontalBox::FArguments::operator+(pFVar27,pFVar33);
  FLLMScope::FLLMScope(&local_2224,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2098 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2090,&local_2098,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1e80,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x16a,&local_2254);
  FMemScope::~FMemScope(&local_2090);
  FLLMScope::~FLLMScope(&local_2224);
  pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1e80,&local_1ed8,pFVar27);
  pTVar9 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_2200 = pTVar34->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_21f8.ReferenceController = pTVar9;
  if ((SHorizontalBox **)&pFVar35->_padding_ != &local_2200) {
    pFVar35->_padding_ = (longlong)local_2200;
    local_2200 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar35->_padding_,&local_21f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21f8.ReferenceController);
  pFVar26 = SOverlay::FArguments::operator+(local_2218,pFVar35);
  FLLMScope::FLLMScope(&local_2220,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2088 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2080,&local_2088,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1e98,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x148,&local_2253);
  FMemScope::~FMemScope(&local_2080);
  FLLMScope::~FLLMScope(&local_2220);
  pTVar37 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1e98,&local_1ee8,pFVar26);
  pFVar19 = local_2078;
  pTVar10 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_2130 = pTVar37->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (local_2078->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2078->_Content).Widget.Object = (SWidget *)local_2130;
  (local_2078->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  pTStack_2128 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FLLMScope::FLLMScope(&local_221c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2070 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2068,&local_2070,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1f40,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
             ,0x145,local_2252);
  FMemScope::~FMemScope(&local_2068);
  FLLMScope::~FLLMScope(&local_221c);
  local_21c0 = local_1f40._Widget.Object;
  local_21b8.ReferenceController = local_1f40._Widget.SharedReferenceCount.ReferenceController;
  if (local_1f40._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f40._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f40._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&this->TitleArea != (TSharedPtr<SWidget,1> *)&local_21c0) {
    (this->TitleArea).Object = (SWidget *)local_1f40._Widget.Object;
    local_21c0 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TitleArea).SharedReferenceCount,&local_21b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21b8.ReferenceController);
  pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1f40,&local_1ef8,pFVar19);
  __return_storage_ptr__->Object = (SWidget *)pTVar23->Object;
  pTVar11 = (pTVar23->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ef8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f40._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ee8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e98._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ed8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1960);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1988);
  if ((void *)local_1988._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1988._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1988);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_19a8);
  if (local_19b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_19b8[0])(local_19b8[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1878);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_18a0);
  if ((void *)local_18a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_18a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_18a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18c0);
  if (local_18d0[0] != (undefined8 *)0x0) {
    (**(code **)*local_18d0[0])(local_18d0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2048.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1790);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_17b8);
  if ((void *)local_17b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_17b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_17b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_17d8);
  if (local_17e8[0] != (undefined8 *)0x0) {
    (**(code **)*local_17e8[0])(local_17e8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_16d0._Slots.AllocatorInstance.Data,local_16d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_16d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_16d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_16d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1b60 + 0x30));
  if (local_1b28 != (void *)0x0) {
    FMemory::Free(local_1b28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1b60 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b60._16_8_);
  if ((undefined8 *)local_1b60._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1b60._0_8_)(local_1b60._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ec8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e68._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1eb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e50._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ea8);
  if ((void *)local_ea8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ea8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ea8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_10b8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1cd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d00);
  if ((void *)local_1d00._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d00._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d20[0].ReferenceController);
  if (local_1d30 != (undefined8 *)0x0) {
    (**(code **)*local_1d30)(local_1d30,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1a48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a70);
  if ((void *)local_1a70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a90);
  if (local_1aa0[0] != (undefined8 *)0x0) {
    (**(code **)*local_1aa0[0])(local_1aa0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2060);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ea8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e38._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c80);
  if ((void *)local_c80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c80);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_e90);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1bf0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c18);
  if ((void *)local_1c18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c38[0].ReferenceController);
  if (local_1c48 != (undefined8 *)0x0) {
    (**(code **)*local_1c48)(local_1c48,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_14c8._Slots.AllocatorInstance.Data,local_14c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_14c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_14c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_14c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1b00 + 0x30));
  if (local_1ac8 != (void *)0x0) {
    FMemory::Free(local_1ac8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1b00 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b00._16_8_);
  if ((undefined8 *)local_1b00._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1b00._0_8_)(local_1b00._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_12c0._Slots.AllocatorInstance.Data,local_12c0._Slots.ArrayNum);
  if ((FSlotArguments *)local_12c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_12c0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_12c0);
  SBox::FArguments::~FArguments(&local_928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeTitleBarContentWidgets @ 1427582b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBar::MakeTitleBarContentWidgets
          (SWindowTitleBar *this,TSharedPtr<SWidget,1> *param_1,TSharedPtr<SWidget,1> *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  SWindow *this_00;
  SImage *pSVar3;
  void *pvVar4;
  ITextData *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SHorizontalBox *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  ulonglong uVar12;
  atomic<int> aVar13;
  FName FVar14;
  FSharedReferencer<1> FVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  atomic<int> aVar19;
  FArguments *pFVar20;
  ISlateStyle *pIVar21;
  FButtonStyle *pFVar22;
  FName *pFVar23;
  TSharedRef<ISlateMetaData,1> *pTVar24;
  FArguments *pFVar25;
  FText *pFVar26;
  TSharedRef<SImage,1> *pTVar27;
  TAttribute<FText> *pTVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  SAppIconWidget *pSVar31;
  SAppIconWidget *pSVar32;
  FArguments *pFVar33;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar34;
  FArguments *pFVar35;
  FSlot *pFVar36;
  FSlotArguments *pFVar37;
  TSharedRef<SButton,1> *pTVar38;
  TSharedRef<SBox,1> *pTVar39;
  FArguments *pFVar40;
  TSharedRef<SSpacer,1> *pTVar41;
  FSlotArguments *pFVar42;
  TReferenceControllerBase<1> *pTVar43;
  bool bVar44;
  T0RequiredArgs local_res20 [8];
  undefined1 uVar45;
  code *pcVar46;
  ulonglong uStack_3370;
  T0RequiredArgs local_3368;
  T0RequiredArgs local_3367;
  T0RequiredArgs local_3366;
  T0RequiredArgs local_3365;
  T0RequiredArgs local_3364;
  T0RequiredArgs local_3363;
  T0RequiredArgs local_3362;
  T0RequiredArgs local_3361;
  T0RequiredArgs local_3360;
  T0RequiredArgs local_335f;
  T0RequiredArgs local_335e [6];
  FName local_3358;
  FLLMScope local_3350;
  FLLMScope local_334c;
  FLLMScope local_3348;
  FLLMScope local_3344;
  FLLMScope local_3340;
  FLLMScope local_333c;
  FLLMScope local_3338;
  FLLMScope local_3334;
  FLLMScope local_3330;
  FLLMScope local_332c;
  FLLMScope local_3328 [2];
  FName local_3320;
  FName local_3318;
  TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs> local_3310;
  SWidget *local_32f8;
  TReferenceControllerBase<1> *pTStack_32f0;
  SButton *local_32e8;
  FSharedReferencer<1> local_32e0;
  SWidget *local_32d8;
  TReferenceControllerBase<1> *pTStack_32d0;
  SButton *local_32c8;
  FSharedReferencer<1> local_32c0;
  SWidget *local_32b8;
  TReferenceControllerBase<1> *pTStack_32b0;
  SButton *local_32a8;
  FSharedReferencer<1> local_32a0;
  TSharedPtr<SWidget,1> local_3298;
  TSharedPtr<SWidget,1> local_3288;
  TSharedPtr<SWidget,1> local_3278;
  TSharedPtr<SWidget,1> local_3268;
  FMemScope local_3258;
  FName local_3250;
  FMemScope local_3248;
  FMemScope local_3240;
  FMemScope local_3238;
  FName local_3230;
  FMemScope local_3228;
  FSlotArguments *local_3220;
  FArguments *local_3218;
  FName local_3210;
  FMemScope local_3208;
  FSlotArguments *local_3200;
  FSlotArguments *local_31f8;
  FName local_31f0;
  FMemScope local_31e8;
  FName local_31e0;
  FMemScope local_31d8;
  FName local_31d0;
  FMemScope local_31c8;
  undefined4 local_31c0 [2];
  undefined4 local_31b8 [2];
  undefined4 local_31b0 [2];
  undefined4 local_31a8 [2];
  undefined4 local_31a0 [2];
  FName local_3198;
  FName local_3190;
  FMemScope local_3188;
  FName local_3180;
  FMemScope local_3178;
  FName local_3170;
  FName local_3168;
  TAttribute<bool> local_3160;
  TAttribute<bool> local_3140;
  TAttribute<bool> local_3120;
  TAttribute<float> local_3100;
  TAttribute<EVisibility> local_30e0;
  TAttribute<TOptional<EMouseCursor::Type>_> local_30c0;
  TAttribute<TOptional<EMouseCursor::Type>_> local_3098;
  TAttribute<TOptional<EMouseCursor::Type>_> local_3070;
  TSharedRef<SWidget,1> local_3048;
  TSharedRef<SWidget,1> local_3038;
  TSharedRef<SWidget,1> local_3028;
  TSharedRef<SWidget,1> local_3018;
  TAttribute<FMargin> local_3008;
  TAttribute<FText> local_2fd8;
  TAttribute<FText> local_2fa8;
  TAttribute<FMargin> local_2f78;
  TAttribute<FMargin> local_2f48;
  TAttribute<FMargin> local_2f18;
  TAttribute<FMargin> local_2ee8;
  TSharedRef<SImage,1> local_2eb8;
  code *local_2ea8;
  longlong lStack_2ea0;
  code *local_2e98;
  longlong lStack_2e90;
  code *local_2e88;
  ulonglong uStack_2e80;
  TSharedRef<SButton,1> local_2e78;
  TSharedRef<SImage,1> local_2e68;
  code *local_2e58;
  ulonglong uStack_2e50;
  SAppIconWidget *local_2e48;
  TReferenceControllerBase<1> *pTStack_2e40;
  TSharedRef<SHorizontalBox,1> local_2e38;
  TSharedRef<SSpacer,1> local_2e28;
  TSharedRef<SBox,1> local_2e18;
  TSharedRef<SHorizontalBox,1> local_2e08;
  TSharedRef<SButton,1> local_2df8;
  TSharedRef<SButton,1> local_2de8;
  TSharedRef<SButton,1> local_2dd8;
  TSharedRef<SSpacer,1> local_2dc8;
  FName local_2db8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2db0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2d98;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2d80;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2d68;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2d50;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2d38;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_2d20;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2d08;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2cf0;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_2cd8;
  FName local_2cc0;
  FName local_2cb8 [2];
  code *local_2ca8;
  longlong lStack_2ca0;
  code *local_2c98;
  longlong lStack_2c90;
  code *local_2c88;
  longlong lStack_2c80;
  TSharedRef<SButton,1> local_2c78;
  TSharedRef<SImage,1> local_2c68;
  FText local_2c58;
  FText local_2c48;
  code *local_2c38;
  longlong lStack_2c30;
  code *local_2c28;
  longlong lStack_2c20;
  code *local_2c18;
  longlong lStack_2c10;
  code *local_2c08;
  longlong lStack_2c00;
  code *local_2bf8;
  longlong lStack_2bf0;
  TSharedRef<SButton,1> local_2be8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2bd8;
  TSharedRef<ISlateMetaData,1> local_2bc0;
  TSharedRef<ISlateMetaData,1> local_2bb0;
  TSharedRef<ISlateMetaData,1> local_2ba0;
  FSlotArguments local_2b90;
  TAttribute<FText> local_2aa8;
  TAttribute<FText> local_2a78;
  FSlot *local_2a48 [29];
  FArguments local_2960;
  FArguments local_2758;
  undefined1 local_2550 [528];
  undefined1 local_2340 [24];
  undefined1 local_2328 [528];
  undefined1 local_2118 [24];
  undefined1 local_2100 [528];
  undefined1 local_1ef0 [24];
  FSlotArguments local_1ed8;
  FSlotArguments local_1df0;
  FSlotArguments local_1d08;
  FSlotArguments local_1c20;
  FArguments local_1b38;
  FArguments local_1890;
  FArguments local_15e8;
  FArguments local_1340;
  FArguments local_1000;
  FArguments local_ac0;
  FArguments local_580;
  undefined8 uStack_40;
  
  uStack_40 = 0x1427582d2;
  pTVar43 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar43 == (TReferenceControllerBase<1> *)0x0) goto LAB_14275831c;
  aVar13 = pTVar43->SharedReferenceCount;
  do {
    if (aVar13 == (atomic<int>)0x0) {
      pTVar43 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14275831c;
    }
    LOCK();
    aVar19 = pTVar43->SharedReferenceCount;
    bVar44 = aVar13 == aVar19;
    if (bVar44) {
      pTVar43->SharedReferenceCount = (atomic<int>)((int)aVar13 + 1);
      aVar19 = aVar13;
    }
    UNLOCK();
    aVar13 = aVar19;
  } while (!bVar44);
  this_00 = (this->OwnerWindowPtr).Object;
  if (this_00 == (SWindow *)0x0) goto LAB_14275831c;
  bVar44 = SWindow::HasCloseBox(this_00);
  pFVar37 = (FSlotArguments *)0x0;
  if (((bVar44) || (bVar44 = SWindow::HasMinimizeBox(this_00), bVar44)) ||
     (bVar44 = SWindow::HasMaximizeBox(this_00), bVar44)) {
    bVar44 = true;
    pFVar20 = SButton::FArguments::FArguments(&local_1000);
    pFVar20->_IsFocusable = false;
    local_3160.Value = SWindow::HasMinimizeBox(this_00);
    local_3160.bIsSet = true;
    local_3160.Getter._16_8_ = 0;
    local_3160.Getter._0_8_ = 0;
    local_3160.Getter._8_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::IsEnabled
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_3160);
    local_3008.bIsSet = true;
    local_3008.Getter._16_8_ = 0;
    local_3008.Value.Left = 0.0;
    local_3008.Value.Top = 0.0;
    local_3008.Value.Right = 0.0;
    local_3008.Value.Bottom = 0.0;
    local_3008.Getter._0_8_ = 0;
    local_3008.Getter._8_8_ = 0;
    pFVar20 = SButton::FArguments::ContentPadding(pFVar20,&local_3008);
    uVar12 = uStack_3370 >> 0x20;
    uStack_3370 = uVar12 << 0x20;
    local_2ca8 = MinimizeButton_OnClicked;
    lStack_2ca0 = uStack_3370;
    pFVar20 = SButton::FArguments::OnClicked<SWindowTitleBar>
                        (pFVar20,this,(pmf_20148f62 *)&local_2ca8);
    local_30c0.Value.TypedValue = Default;
    local_30c0.Value.bIsSet = true;
    local_30c0.bIsSet = true;
    local_30c0.Getter._0_8_ = 0;
    local_30c0.Getter._8_8_ = 0;
    local_30c0.Getter._16_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::Cursor
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_30c0);
    ::FName::FName(&local_3198,"Window.MinMaxRestoreButtonHover");
    pIVar21 = FAppStyle::Get();
    pFVar22 = (FButtonStyle *)
              (**(code **)((longlong)*pIVar21 + 0xa0))
                        (pIVar21,FButtonStyle::TypeName,local_3198,0,1);
    if (pFVar22 == (FButtonStyle *)0x0) {
      pFVar22 = FButtonStyle::GetDefault();
    }
    pFVar20->_ButtonStyle = pFVar22;
    pFVar23 = ::FName::FName(&local_2db8,"launcher-minimizeWindowButton");
    pTVar24 = FDriverMetaData::Id(&local_2bb0,*pFVar23);
    local_3358 = (FName)TSlateBaseNamedArgs<SButton>::AddMetaData
                                  ((TSlateBaseNamedArgs<SButton> *)pFVar20,pTVar24);
    pFVar25 = SImage::FArguments::FArguments(&local_1b38);
    uStack_3370 = uVar12 << 0x20;
    local_2c98 = GetMinimizeImage;
    lStack_2c90 = uStack_3370;
    TAttribute<FSlateBrush_const_*>::Bind<SWindowTitleBar>
              (&pFVar25->_Image,this,(pmf_1ce041d1 *)&local_2c98);
    uStack_3370 = uVar12 << 0x20;
    local_2c88 = GetWindowTitleContentColor;
    lStack_2c80 = uStack_3370;
    TAttribute<FSlateColor>::Bind<SWindowTitleBar>
              (&pFVar25->_ColorAndOpacity,this,(pmf_425d87c6 *)&local_2c88);
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        (&local_2c48,L"WindowTitleBar",L"Minimize",L"Minimize");
    FText::FText(&local_2fd8.Value,pFVar26);
    local_2fd8.bIsSet = true;
    local_2fd8.Getter._16_8_ = 0;
    local_2fd8.Getter._0_8_ = 0;
    local_2fd8.Getter._8_8_ = 0;
    pFVar25 = TSlateBaseNamedArgs<SImage>::AccessibleText
                        ((TSlateBaseNamedArgs<SImage> *)pFVar25,&local_2fd8);
    pFVar26 = FText::AsLocalizable_Advanced_LocText
                        (&local_2c58,L"WindowTitleBar",L"Minimize",L"Minimize");
    FText::FText(&local_2fa8.Value,pFVar26);
    local_2fa8.bIsSet = true;
    local_2fa8.Getter._16_8_ = 0;
    local_2fa8.Getter._0_8_ = 0;
    local_2fa8.Getter._8_8_ = 0;
    pFVar25 = TSlateBaseNamedArgs<SImage>::ToolTipText
                        ((TSlateBaseNamedArgs<SImage> *)pFVar25,&local_2fa8);
    FLLMScope::FLLMScope(&local_332c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3190 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3188,&local_3190,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_2d98,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0x91,local_res20);
    FMemScope::~FMemScope(&local_3188);
    FLLMScope::~FLLMScope(&local_332c);
    pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d98,&local_2c68,pFVar25);
    pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar27->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_32f8 = (((TAlwaysValidWidget *)((longlong)local_3358 + 0x1f8))->Widget).Object;
    pTStack_32f0 = ((FSharedReferencer<1> *)((longlong)local_3358 + 0x200))->ReferenceController;
    (((TAlwaysValidWidget *)((longlong)local_3358 + 0x1f8))->Widget).Object = (SWidget *)pSVar3;
    ((FSharedReferencer<1> *)((longlong)local_3358 + 0x200))->ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_32f0);
    uVar45 = 1;
    FLLMScope::FLLMScope(local_3328,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3180 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3178,&local_3180,true);
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
              (&local_2db0,"SButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0x88,&local_3368);
    FMemScope::~FMemScope(&local_3178);
    FLLMScope::~FLLMScope(local_3328);
    pTVar38 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2db0,&local_2c78,(FArguments *)local_3358);
    local_32e0.ReferenceController = (pTVar38->SharedReferenceCount).ReferenceController;
    local_32e8 = pTVar38->Object;
    if (local_32e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_32e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_32e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->MinimizeButton != (TSharedPtr<SButton,1> *)&local_32e8) {
      (this->MinimizeButton).Object = local_32e8;
      local_32e8 = (SButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MinimizeButton).SharedReferenceCount,&local_32e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2db0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d98._Widget.SharedReferenceCount.ReferenceController);
    if (local_2c58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c58.TextData.Reference + 0x10))();
    }
    if (local_2c48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c48.TextData.Reference + 0x10))();
    }
    SImage::FArguments::~FArguments(&local_1b38);
    SButton::FArguments::~FArguments(&local_1000);
    pFVar20 = SButton::FArguments::FArguments(&local_ac0);
    pFVar20->_IsFocusable = false;
    local_3140.Value = SWindow::HasMaximizeBox(this_00);
    local_3140.bIsSet = true;
    local_3140.Getter._16_8_ = 0;
    local_3140.Getter._0_8_ = 0;
    local_3140.Getter._8_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::IsEnabled
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_3140);
    local_2f78.bIsSet = true;
    local_2f78.Getter._16_8_ = 0;
    local_2f78.Value.Left = 0.0;
    local_2f78.Value.Top = 0.0;
    local_2f78.Value.Right = 0.0;
    local_2f78.Value.Bottom = 0.0;
    local_2f78.Getter._0_8_ = 0;
    local_2f78.Getter._8_8_ = 0;
    pFVar20 = SButton::FArguments::ContentPadding(pFVar20,&local_2f78);
    uStack_3370 = uVar12 << 0x20;
    pcVar46 = MaximizeRestoreButton_OnClicked;
    local_2c38 = MaximizeRestoreButton_OnClicked;
    lStack_2c30 = uStack_3370;
    pFVar20 = SButton::FArguments::OnClicked<SWindowTitleBar>
                        (pFVar20,this,(pmf_20148f62 *)&local_2c38);
    local_3098.Value.TypedValue = Default;
    local_3098.Value.bIsSet = true;
    local_3098.bIsSet = true;
    local_3098.Getter._0_8_ = 0;
    local_3098.Getter._8_8_ = 0;
    local_3098.Getter._16_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::Cursor
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_3098);
    ::FName::FName(&local_3170,"Window.MinMaxRestoreButtonHover");
    pIVar21 = FAppStyle::Get();
    pFVar22 = (FButtonStyle *)
              (**(code **)((longlong)*pIVar21 + 0xa0))
                        (pIVar21,FButtonStyle::TypeName,local_3170,0,1,uVar45,pcVar46);
    if (pFVar22 == (FButtonStyle *)0x0) {
      pFVar22 = FButtonStyle::GetDefault();
    }
    pFVar20->_ButtonStyle = pFVar22;
    pFVar23 = ::FName::FName(&local_2cc0,"launcher-maximizeRestoreWindowButton");
    pTVar24 = FDriverMetaData::Id(&local_2ba0,*pFVar23);
    local_3358 = (FName)TSlateBaseNamedArgs<SButton>::AddMetaData
                                  ((TSlateBaseNamedArgs<SButton> *)pFVar20,pTVar24);
    pFVar25 = SImage::FArguments::FArguments(&local_1890);
    uStack_3370 = uVar12 << 0x20;
    local_2c28 = GetMaximizeRestoreImage;
    lStack_2c20 = uStack_3370;
    TAttribute<FSlateBrush_const_*>::Bind<SWindowTitleBar>
              (&pFVar25->_Image,this,(pmf_1ce041d1 *)&local_2c28);
    uStack_3370 = uVar12 << 0x20;
    local_2c18 = GetWindowTitleContentColor;
    lStack_2c10 = uStack_3370;
    TAttribute<FSlateColor>::Bind<SWindowTitleBar>
              (&pFVar25->_ColorAndOpacity,this,(pmf_425d87c6 *)&local_2c18);
    uStack_3370 = uVar12 << 0x20;
    local_2c08 = GetMaximizeButtonToolTip;
    lStack_2c00 = uStack_3370;
    TAttribute<FText>::Bind<SWindowTitleBar>
              ((TAttribute<FText> *)&pFVar25->_padding_,this,(pmf_6b2ac180 *)&local_2c08);
    uStack_3370 = uVar12 << 0x20;
    local_2bf8 = GetMaximizeButtonToolTip;
    lStack_2bf0 = uStack_3370;
    TAttribute<FText>::Bind<SWindowTitleBar>
              ((TAttribute<FText> *)pFVar25,this,(pmf_6b2ac180 *)&local_2bf8);
    FLLMScope::FLLMScope(&local_3350,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3168 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3258,&local_3168,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_2d68,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xa1,&local_3367);
    FMemScope::~FMemScope(&local_3258);
    FLLMScope::~FLLMScope(&local_3350);
    pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d68,&local_2eb8,pFVar25);
    pSVar3 = pTVar27->Object;
    pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_32d8 = (((TAlwaysValidWidget *)((longlong)local_3358 + 0x1f8))->Widget).Object;
    pTStack_32d0 = ((FSharedReferencer<1> *)((longlong)local_3358 + 0x200))->ReferenceController;
    (((TAlwaysValidWidget *)((longlong)local_3358 + 0x1f8))->Widget).Object = (SWidget *)pSVar3;
    ((FSharedReferencer<1> *)((longlong)local_3358 + 0x200))->ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_32d0);
    uVar45 = 1;
    FLLMScope::FLLMScope(&local_334c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3250 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3248,&local_3250,true);
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
              (&local_2d80,"SButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0x98,&local_3366);
    FMemScope::~FMemScope(&local_3248);
    FLLMScope::~FLLMScope(&local_334c);
    pTVar38 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d80,&local_2be8,(FArguments *)local_3358);
    local_32c0.ReferenceController = (pTVar38->SharedReferenceCount).ReferenceController;
    local_32c8 = pTVar38->Object;
    if (local_32c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_32c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_32c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->MaximizeRestoreButton != (TSharedPtr<SButton,1> *)&local_32c8) {
      (this->MaximizeRestoreButton).Object = local_32c8;
      local_32c8 = (SButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MaximizeRestoreButton).SharedReferenceCount,&local_32c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2be8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d80._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2eb8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d68._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1890);
    SButton::FArguments::~FArguments(&local_ac0);
    pFVar20 = SButton::FArguments::FArguments(&local_580);
    pFVar20->_IsFocusable = false;
    local_3120.Value = SWindow::HasCloseBox(this_00);
    local_3120.bIsSet = true;
    local_3120.Getter._16_8_ = 0;
    local_3120.Getter._0_8_ = 0;
    local_3120.Getter._8_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::IsEnabled
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_3120);
    local_2f48.bIsSet = true;
    local_2f48.Getter._16_8_ = 0;
    local_2f48.Value.Left = 0.0;
    local_2f48.Value.Top = 0.0;
    local_2f48.Value.Right = 0.0;
    local_2f48.Value.Bottom = 0.0;
    local_2f48.Getter._0_8_ = 0;
    local_2f48.Getter._8_8_ = 0;
    pFVar20 = SButton::FArguments::ContentPadding(pFVar20,&local_2f48);
    uStack_3370 = uVar12 << 0x20;
    pcVar46 = CloseButton_OnClicked;
    local_2ea8 = CloseButton_OnClicked;
    lStack_2ea0 = uStack_3370;
    pFVar20 = SButton::FArguments::OnClicked<SWindowTitleBar>
                        (pFVar20,this,(pmf_20148f62 *)&local_2ea8);
    local_3070.Value.TypedValue = Default;
    local_3070.Value.bIsSet = true;
    local_3070.bIsSet = true;
    local_3070.Getter._0_8_ = 0;
    local_3070.Getter._8_8_ = 0;
    local_3070.Getter._16_8_ = 0;
    pFVar20 = TSlateBaseNamedArgs<SButton>::Cursor
                        ((TSlateBaseNamedArgs<SButton> *)pFVar20,&local_3070);
    ::FName::FName(&local_3358,"Window.CloseButtonHover");
    pIVar21 = FAppStyle::Get();
    pFVar22 = (FButtonStyle *)
              (**(code **)((longlong)*pIVar21 + 0xa0))
                        (pIVar21,FButtonStyle::TypeName,local_3358,0,1,uVar45,pcVar46);
    if (pFVar22 == (FButtonStyle *)0x0) {
      pFVar22 = FButtonStyle::GetDefault();
    }
    pFVar20->_ButtonStyle = pFVar22;
    pFVar23 = ::FName::FName(local_2cb8,"launcher-closeWindowButton");
    pTVar24 = FDriverMetaData::Id(&local_2bc0,*pFVar23);
    local_3318 = (FName)TSlateBaseNamedArgs<SButton>::AddMetaData
                                  ((TSlateBaseNamedArgs<SButton> *)pFVar20,pTVar24);
    pFVar25 = SImage::FArguments::FArguments(&local_15e8);
    uStack_3370 = uVar12 << 0x20;
    local_2e98 = GetCloseImage;
    lStack_2e90 = uStack_3370;
    TAttribute<FSlateBrush_const_*>::Bind<SWindowTitleBar>
              (&pFVar25->_Image,this,(pmf_1ce041d1 *)&local_2e98);
    uStack_3370 = uVar12 << 0x20;
    local_2e88 = GetWindowTitleContentColor;
    uStack_2e80 = uStack_3370;
    TAttribute<FSlateColor>::Bind<SWindowTitleBar>
              (&pFVar25->_ColorAndOpacity,this,(pmf_425d87c6 *)&local_2e88);
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_2aa8,&this->CloseButtonToolTipText);
    FText::operator=((FText *)&pFVar25->_padding_,&pTVar28->Value);
    *(bool *)&pFVar25->_padding_ = pTVar28->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar25->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar28->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar28->Getter);
    pvVar4 = *(void **)&(pTVar28->Getter).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pTVar28->Getter);
    pIVar5 = (pTVar28->Value).TextData.Reference;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))();
    }
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_2a78,&this->CloseButtonToolTipText);
    pFVar25 = TSlateBaseNamedArgs<SImage>::ToolTipText
                        ((TSlateBaseNamedArgs<SImage> *)pFVar25,pTVar28);
    FLLMScope::FLLMScope(&local_3348,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3320 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3240,&local_3320,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_2d38,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xb1,&local_3365);
    FMemScope::~FMemScope(&local_3240);
    FLLMScope::~FLLMScope(&local_3348);
    pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d38,&local_2e68,pFVar25);
    FVar14 = local_3318;
    pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar27->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_32b8 = (((TAlwaysValidWidget *)((longlong)local_3318 + 0x1f8))->Widget).Object;
    pTStack_32b0 = ((FSharedReferencer<1> *)((longlong)local_3318 + 0x200))->ReferenceController;
    (((TAlwaysValidWidget *)((longlong)local_3318 + 0x1f8))->Widget).Object = (SWidget *)pSVar3;
    ((FSharedReferencer<1> *)((longlong)local_3318 + 0x200))->ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_32b0);
    FLLMScope::FLLMScope(&local_3344,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3318 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3238,&local_3318,true);
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
              (&local_2d50,"SButton",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xa8,&local_3364);
    FMemScope::~FMemScope(&local_3238);
    FLLMScope::~FLLMScope(&local_3344);
    pTVar38 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d50,&local_2e78,(FArguments *)FVar14);
    local_32a0.ReferenceController = (pTVar38->SharedReferenceCount).ReferenceController;
    local_32a8 = pTVar38->Object;
    if (local_32a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_32a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_32a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->CloseButton != (TSharedPtr<SButton,1> *)&local_32a8) {
      (this->CloseButton).Object = local_32a8;
      local_32a8 = (SButton *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CloseButton).SharedReferenceCount,&local_32a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d50._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d38._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_15e8);
    SButton::FArguments::~FArguments(&local_580);
    bVar18 = true;
  }
  else {
    bVar44 = false;
    bVar18 = false;
  }
  if ((this->ShowAppIcon == false) || (!bVar18)) {
    this->WindowMenuSlot = (FSlot *)0x0;
    pFVar40 = SSpacer::FArguments::FArguments((FArguments *)local_2328);
    FLLMScope::FLLMScope(&local_333c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3210 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3208,&local_3210,true);
    TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
              (&local_2d20,"SSpacer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xe4,&local_3361);
    FMemScope::~FMemScope(&local_3208);
    FLLMScope::~FLLMScope(&local_333c);
    pTVar41 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d20,&local_2e28,pFVar40);
    local_3288.SharedReferenceCount.ReferenceController =
         (pTVar41->SharedReferenceCount).ReferenceController;
    local_3288.Object = (SWidget *)pTVar41->Object;
    if (local_3288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1 != &local_3288) {
      param_1->Object = local_3288.Object;
      local_3288.Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_3288.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3288.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d20._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2118);
    if ((void *)local_2118._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2118._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2118);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2328);
  }
  else {
    local_3218 = SHorizontalBox::FArguments::FArguments(&local_2960);
    pFVar29 = SHorizontalBox::Slot(&local_1df0);
    pFVar29 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar29);
    puVar1 = &pFVar29->field_0x48;
    if (local_31c0 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 1;
      pFVar29->field_0x4c = 1;
    }
    pFVar42 = pFVar37;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar42 = pFVar29;
    }
    if (local_31b8 != (undefined4 *)&pFVar42->field_0x50) {
      *(undefined4 *)&pFVar42->field_0x50 = 1;
      pFVar42->field_0x54 = 1;
    }
    local_2f18.bIsSet = true;
    pFVar29 = pFVar37;
    if (pFVar42 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar29 = pFVar42;
    }
    local_2f18.Getter._16_8_ = 0;
    local_2f18.Value.Left = ___xmm_40800000000000000000000000000000;
    local_2f18.Value.Top = _UNK_15094b764;
    local_2f18.Value.Right = _UNK_15094b768;
    local_2f18.Value.Bottom = _UNK_15094b76c;
    local_2f18.Getter._0_8_ = 0;
    local_2f18.Getter._8_8_ = 0;
    local_3220 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar29->field_0x18,&local_2f18);
    pFVar30 = SAppIconWidget::FArguments::FArguments((FArguments *)local_2550);
    uStack_3370 = uStack_3370 & 0xffffffff00000000;
    local_2e58 = GetWindowTitleContentColor;
    uStack_2e50 = uStack_3370;
    TAttribute<FSlateColor>::Bind<SWindowTitleBar>
              (&pFVar30->_IconColorAndOpacity,this,(pmf_425d87c6 *)&local_2e58);
    FLLMScope::FLLMScope(&local_3340,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3230 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3228,&local_3230,true);
    TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SAppIconWidget,RequiredArgs::T0RequiredArgs>
              (&local_3310,"SAppIconWidget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xd0,&local_3363);
    FMemScope::~FMemScope(&local_3228);
    FLLMScope::~FLLMScope(&local_3340);
    if (local_3310._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3310._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3310._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_2e48 = (this->AppIconWidget).Object;
    pTStack_2e40 = (this->AppIconWidget).SharedReferenceCount.ReferenceController;
    (this->AppIconWidget).Object = local_3310._Widget.Object;
    (this->AppIconWidget).SharedReferenceCount.ReferenceController =
         local_3310._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_2e40);
    pSVar31 = TSharedPtr<SAppIconWidget,1>::operator->(&local_3310._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar31,(FSlateBaseNamedArgs *)pFVar30);
    pSVar31 = local_3310._Widget.Object;
    SAppIconWidget::Construct(local_3310._Widget.Object,pFVar30);
    pSVar32 = TSharedPtr<SAppIconWidget,1>::operator->(&local_3310._Widget);
    if ((pSVar32->_padding_ & 0x10) == 0) {
      cVar16 = (**(code **)(pSVar32->_padding_ + 0x228))(pSVar32);
      bVar17 = 0;
      if (cVar16 != '\0') goto LAB_14275934a;
    }
    else {
LAB_14275934a:
      bVar17 = 0x20;
    }
    *(byte *)&pSVar32->_padding_ = (byte)pSVar32->_padding_ & 0xdf;
    *(byte *)&pSVar32->_padding_ = (byte)pSVar32->_padding_ | bVar17;
    pSVar32 = TSharedPtr<SAppIconWidget,1>::operator->(&local_3310._Widget);
    pbVar2 = (byte *)((longlong)&pSVar32->_padding_ + 1);
    *pbVar2 = *pbVar2 | 4;
    if ((local_3310._Widget.Object == (SAppIconWidget *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar18)) {
      pcVar46 = (code *)swi(3);
      (*pcVar46)();
      return;
    }
    FVar15.ReferenceController = local_3310._Widget.SharedReferenceCount.ReferenceController;
    local_3310._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_3310._Widget.Object = (SAppIconWidget *)0x0;
    if ((pSVar31 == (SAppIconWidget *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar46 = (code *)swi(3);
      (*pcVar46)();
      return;
    }
    local_3028.Object = (SWidget *)pSVar31;
    local_3028.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
    if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar15.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar29 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_3220,&local_3028);
    pFVar33 = SHorizontalBox::FArguments::operator+(local_3218,pFVar29);
    pFVar29 = SHorizontalBox::Slot(&local_1ed8);
    if (local_31b0 != (undefined4 *)&pFVar29->field_0x50) {
      *(undefined4 *)&pFVar29->field_0x50 = 1;
      pFVar29->field_0x54 = 1;
    }
    if (pFVar29 == (FSlotArguments *)0xffffffffffffffb8) {
      pFVar29 = (FSlotArguments *)0x0;
    }
    local_3100.Value = 1.0;
    local_3100.Getter._16_8_ = 0;
    local_3100.bIsSet = true;
    local_3100.Getter._0_8_ = 0;
    local_3100.Getter._8_8_ = 0;
    pFVar29 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar29,&local_3100);
    this->WindowMenuSlot = *(FSlot **)pFVar29;
    pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar29);
    this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2bd8,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
                         ,0xbd,&local_3362);
    pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_2e38,pFVar33);
    local_3298.SharedReferenceCount.ReferenceController =
         (pTVar34->SharedReferenceCount).ReferenceController;
    local_3298.Object = (SWidget *)pTVar34->Object;
    if (local_3298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1 != &local_3298) {
      param_1->Object = local_3298.Object;
      local_3298.Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&local_3298.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3298.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2bd8._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ed8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar15.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3310._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2340);
    if ((void *)local_2340._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2340._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2340);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2550);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1df0);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2960._Slots.AllocatorInstance.Data,local_2960._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2960._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2960._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2960);
    (**(code **)(this->_padding_ + 0x18))(&this->_padding_,0);
  }
  if (bVar44) {
    pFVar35 = SBox::FArguments::FArguments(&local_1340);
    local_30e0.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_30e0.bIsSet = true;
    local_30e0.Getter._0_8_ = 0;
    local_30e0.Getter._8_8_ = 0;
    local_30e0.Getter._16_8_ = 0;
    pFVar35 = TSlateBaseNamedArgs<SBox>::Visibility
                        ((TSlateBaseNamedArgs<SBox> *)pFVar35,&local_30e0);
    local_2ee8.bIsSet = true;
    local_2ee8.Getter._16_8_ = 0;
    local_2ee8.Value.Left = ___xmm_00000000000000000000000040000000;
    local_2ee8.Value.Top = _UNK_15094b714;
    local_2ee8.Value.Right = _UNK_15094b718;
    local_2ee8.Value.Bottom = _UNK_15094b71c;
    local_2ee8.Getter._0_8_ = 0;
    local_2ee8.Getter._8_8_ = 0;
    pFVar35 = SBox::FArguments::Padding(pFVar35,&local_2ee8);
    pFVar33 = SHorizontalBox::FArguments::FArguments(&local_2758);
    pFVar36 = ::operator_new(0x58);
    local_3200 = pFVar37;
    if (pFVar36 != (FSlot *)0x0) {
      *(undefined8 *)pFVar36 = 0;
      *(undefined8 *)&pFVar36->field_0x8 = 0;
      *(undefined8 *)&pFVar36->field_0x10 = 0;
      *(undefined8 *)&pFVar36->field_0x18 = 0;
      *(undefined8 *)&pFVar36->field_0x20 = 0;
      *(undefined8 *)&pFVar36->field_0x28 = 0;
      *(undefined8 *)&pFVar36->field_0x30 = 0;
      *(undefined8 *)&pFVar36->field_0x38 = 0;
      *(undefined8 *)&pFVar36->field_0x40 = 0;
      *(undefined8 *)&pFVar36->field_0x48 = 0;
      *(undefined8 *)&pFVar36->field_0x50 = 0;
      local_3200 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar36);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_2a48,(FSlot *)&local_3200);
    this->RightSideContentSlot = local_2a48[0];
    pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,(FSlotArguments *)local_2a48);
    pFVar36 = ::operator_new(0x58);
    if (pFVar36 != (FSlot *)0x0) {
      *(undefined8 *)pFVar36 = 0;
      *(undefined8 *)&pFVar36->field_0x8 = 0;
      *(undefined8 *)&pFVar36->field_0x10 = 0;
      *(undefined8 *)&pFVar36->field_0x18 = 0;
      *(undefined8 *)&pFVar36->field_0x20 = 0;
      *(undefined8 *)&pFVar36->field_0x28 = 0;
      *(undefined8 *)&pFVar36->field_0x30 = 0;
      *(undefined8 *)&pFVar36->field_0x38 = 0;
      *(undefined8 *)&pFVar36->field_0x40 = 0;
      *(undefined8 *)&pFVar36->field_0x48 = 0;
      *(undefined8 *)&pFVar36->field_0x50 = 0;
      pFVar37 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar36);
    }
    local_31f8 = pFVar37;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2b90,(FSlot *)&local_31f8);
    local_2b90._80_4_ = 1;
    local_2b90._84_1_ = 1;
    pFVar37 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_2b90);
    pTVar38 = TSharedPtr<SButton,1>::ToSharedRef(&this->MinimizeButton,&local_2dd8);
    pTVar6 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_3048.Object = (SWidget *)pTVar38->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3048.SharedReferenceCount.ReferenceController = pTVar6;
    pFVar37 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar37,&local_3048);
    pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar37);
    pFVar37 = SHorizontalBox::Slot(&local_1c20);
    if (local_31a8 != (undefined4 *)&pFVar37->field_0x50) {
      *(undefined4 *)&pFVar37->field_0x50 = 1;
      pFVar37->field_0x54 = 1;
    }
    if (pFVar37 == (FSlotArguments *)0xffffffffffffffb8) {
      pFVar37 = (FSlotArguments *)0x0;
    }
    pFVar37 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar37);
    pTVar38 = TSharedPtr<SButton,1>::ToSharedRef(&this->MaximizeRestoreButton,&local_2de8);
    pTVar7 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_3038.Object = (SWidget *)pTVar38->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3038.SharedReferenceCount.ReferenceController = pTVar7;
    pFVar37 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar37,&local_3038);
    pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar37);
    pFVar37 = SHorizontalBox::Slot(&local_1d08);
    if (local_31a0 != (undefined4 *)&pFVar37->field_0x50) {
      *(undefined4 *)&pFVar37->field_0x50 = 1;
      pFVar37->field_0x54 = 1;
    }
    if (pFVar37 == (FSlotArguments *)0xffffffffffffffb8) {
      pFVar37 = (FSlotArguments *)0x0;
    }
    pFVar37 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar37);
    pTVar38 = TSharedPtr<SButton,1>::ToSharedRef(&this->CloseButton,&local_2df8);
    pTVar8 = (pTVar38->SharedReferenceCount).ReferenceController;
    local_3018.Object = (SWidget *)pTVar38->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3018.SharedReferenceCount.ReferenceController = pTVar8;
    pFVar37 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar37,&local_3018);
    pFVar33 = SHorizontalBox::FArguments::operator+(pFVar33,pFVar37);
    FLLMScope::FLLMScope(&local_3338,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_31f0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31e8,&local_31f0,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_2cf0,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xee,&local_3360);
    FMemScope::~FMemScope(&local_31e8);
    FLLMScope::~FLLMScope(&local_3338);
    pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2cf0,&local_2e08,pFVar33);
    pTVar9 = (pTVar34->SharedReferenceCount).ReferenceController;
    pSVar10 = pTVar34->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11 = (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar35->_Content).Widget.Object = (SWidget *)pSVar10;
    (pFVar35->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    FLLMScope::FLLMScope(&local_3334,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_31e0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31d8,&local_31e0,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_2d08,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0xe9,&local_335f);
    FMemScope::~FMemScope(&local_31d8);
    FLLMScope::~FLLMScope(&local_3334);
    pTVar39 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d08,&local_2e18,pFVar35);
    local_3278.SharedReferenceCount.ReferenceController =
         (pTVar39->SharedReferenceCount).ReferenceController;
    local_3278.Object = (SWidget *)pTVar39->Object;
    if (local_3278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_2 != &local_3278) {
      param_2->Object = local_3278.Object;
      local_3278.Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_3278.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3278.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d08._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e08.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cf0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2df8.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1d08);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2de8.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1c20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2dd8.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2b90);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_2a48);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2758._Slots.AllocatorInstance.Data,local_2758._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2758._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2758._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2758);
    SBox::FArguments::~FArguments(&local_1340);
  }
  else {
    this->RightSideContentSlot = (FSlot *)0x0;
    pFVar40 = SSpacer::FArguments::FArguments((FArguments *)local_2100);
    FLLMScope::FLLMScope(&local_3330,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_31d0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31c8,&local_31d0,true);
    TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
              (&local_2cd8,"SSpacer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SWindowTitleBar.cpp"
               ,0x112,local_335e);
    FMemScope::~FMemScope(&local_31c8);
    FLLMScope::~FLLMScope(&local_3330);
    pTVar41 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2cd8,&local_2dc8,pFVar40);
    local_3268.SharedReferenceCount.ReferenceController =
         (pTVar41->SharedReferenceCount).ReferenceController;
    local_3268.Object = (SWidget *)pTVar41->Object;
    if (local_3268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_2 != &local_3268) {
      param_2->Object = local_3268.Object;
      local_3268.Object = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_3268.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3268.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2dc8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cd8._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ef0);
    if ((void *)local_1ef0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1ef0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ef0);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2100);
  }
LAB_14275831c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar43);
  return;
}

// MaximizeRestoreButton_OnClicked @ 14275c000

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBar::MaximizeRestoreButton_OnClicked
          (SWindowTitleBar *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  int iVar5;
  FReply *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pTVar7 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14275c040;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    this_00 = (this->OwnerWindowPtr).Object;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      if (local_18.Object != (FGenericWindow *)0x0) {
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar1)();
          return pFVar6;
        }
        iVar5 = (**(code **)((local_18.Object)->_padding_ + 0x68))();
        if (iVar5 == 1) {
          SWindow::SetWindowMode(this_00,Windowed);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_14275c040;
        }
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar1)();
          return pFVar6;
        }
        cVar3 = (**(code **)((local_18.Object)->_padding_ + 0x70))();
        if (cVar3 != '\0') {
          if ((local_18.Object == (FGenericWindow *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FReply *)(*pcVar1)();
            return pFVar6;
          }
          (**(code **)((local_18.Object)->_padding_ + 0x48))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_14275c040;
        }
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar1)();
          return pFVar6;
        }
        (**(code **)((local_18.Object)->_padding_ + 0x40))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14275c040:
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// MinimizeButton_OnClicked @ 14275c630

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SWindowTitleBar::MinimizeButton_OnClicked(SWindowTitleBar *this,FReply *__return_storage_ptr__)

{
  SWindow *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<FGenericWindow,1> local_18;
  
  pTVar5 = (this->OwnerWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14275c663;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = (this->OwnerWindowPtr).Object;
    if (this_00 != (SWindow *)0x0) {
      SWindow::GetNativeWindow(this_00,&local_18);
      if (local_18.Object != (FGenericWindow *)0x0) {
        if ((local_18.Object == (FGenericWindow *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FReply *)(*pcVar1)();
          return pFVar4;
        }
        (**(code **)((local_18.Object)->_padding_ + 0x38))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_14275c663:
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// SetAllowMenuBar @ 142783f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SWindowTitleBar::SetAllowMenuBar(SWindowTitleBar *this,bool param_1)

{
  SAppIconWidget *this_00;
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FMargin *pFVar3;
  FSlateApplicationBase *pFVar4;
  FSlateBrush *pFVar5;
  longlong *this_01;
  code *pcVar6;
  FName local_res18 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) {
    *(bool *)((longlong)&this->_padding_ + 1) = param_1;
    this_01 = &this->_padding_;
    if (*this_01 != 0) {
      if (param_1) {
        this_00 = TSharedPtr<SAppIconWidget,1>::operator->((TSharedPtr<SAppIconWidget,1> *)this_01);
        pIVar1 = FAppStyle::Get();
        local_18 = 0;
        uStack_10 = 0;
        pcVar6 = *(code **)((longlong)*pIVar1 + 0x48);
        pFVar2 = ::FName::FName(local_res18,"AppIconPadding");
        pFVar3 = (FMargin *)(*pcVar6)(pIVar1,*pFVar2,0,&local_18,0);
        pFVar4 = FSlateApplicationBase::Get();
        pcVar6 = *(code **)(*(longlong *)pFVar4 + 0x48);
      }
      else {
        this_00 = TSharedPtr<SAppIconWidget,1>::operator->((TSharedPtr<SAppIconWidget,1> *)this_01);
        pIVar1 = FAppStyle::Get();
        local_18 = 0;
        uStack_10 = 0;
        pcVar6 = *(code **)((longlong)*pIVar1 + 0x48);
        pFVar2 = ::FName::FName(local_res18,"AppIconPadding.Small");
        pFVar3 = (FMargin *)(*pcVar6)(pIVar1,*pFVar2,0,&local_18,0);
        pFVar4 = FSlateApplicationBase::Get();
        pcVar6 = *(code **)(*(longlong *)pFVar4 + 0x50);
      }
      pFVar5 = (FSlateBrush *)(*pcVar6)(pFVar4);
      SAppIconWidget::SetIcon(this_00,pFVar5,pFVar3);
    }
  }
  return;
}

// UpdateBackgroundContent @ 1427911f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBar::UpdateBackgroundContent(SWindowTitleBar *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  
  pSVar1 = param_1->Object;
  this_00 = (FSlotBase *)this->_padding_;
  if (pSVar1 == (SWidget *)0x0) {
    if (this_00 != (FSlotBase *)0x0) {
      FSlotBase::DetatchParentFromContent(this_00);
      FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
      pSVar1 = SNullWidget::NullWidget.Object;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar2 = (this_00->Widget).SharedReferenceCount.ReferenceController;
      (this_00->Widget).Object = pSVar1;
      (this_00->Widget).SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FSlotBase::AfterContentOrOwnerAssigned(this_00);
    }
  }
  else if (this_00 != (FSlotBase *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent(this_00);
    pTVar3 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar1;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar2;
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateWindowMenu @ 1427941a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWindowTitleBar::UpdateWindowMenu(SWindowTitleBar *this,TSharedPtr<SWidget,1> *param_1)

{
  FSlotBase *this_00;
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> FVar4;
  
  this_00 = (FSlotBase *)this->_padding_;
  if (this_00 != (FSlotBase *)0x0) {
    pSVar1 = param_1->Object;
    if ((pSVar1 == (SWidget *)0x0) || (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
      FSlotBase::DetatchParentFromContent(this_00);
      FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
      pSVar1 = SNullWidget::NullWidget.Object;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar2 = (this_00->Widget).SharedReferenceCount.ReferenceController;
      (this_00->Widget).Object = pSVar1;
      (this_00->Widget).SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FSlotBase::AfterContentOrOwnerAssigned(this_00);
    }
    else {
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlotBase::DetatchParentFromContent(this_00);
      pTVar3 = (this_00->Widget).SharedReferenceCount.ReferenceController;
      (this_00->Widget).Object = pSVar1;
      (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar2;
      FSlotBase::AfterContentOrOwnerAssigned(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

