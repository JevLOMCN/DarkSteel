// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ~SErrorText @ 1428c11a0

void __thiscall SErrorText::~SErrorText(SErrorText *this)

{
  void *pvVar1;
  
  FCurveSequence::~FCurveSequence(&this->ExpandAnimation);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextBlock).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CustomVisibility).Getter);
  pvVar1 = *(void **)&(this->CustomVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CustomVisibility).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Font).Getter);
  pvVar1 = *(void **)&(this->Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AsWidget @ 1429c8710

TSharedRef<SWidget,1> * __thiscall
SErrorText::AsWidget(SErrorText *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pSVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Construct @ 1429d10f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SErrorText::Construct(SErrorText *this,FArguments *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  FCurveSequence *pFVar12;
  TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  *this_00;
  TAttribute<EVisibility> *pTVar13;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  FArguments *pFVar15;
  ISlateStyle *pIVar16;
  FName *pFVar17;
  undefined8 *puVar18;
  TSharedRef<SWidget_const_,1> *pTVar19;
  ulong64 uVar20;
  FArguments *pFVar21;
  TSharedRef<STextBlock,1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FDestructionSentinel local_b58;
  STextBlock *local_b38;
  undefined8 uStack_b30;
  undefined1 local_b28 [12];
  uint uStack_b1c;
  int local_b18;
  bool local_b10;
  bool local_b0f;
  undefined1 local_b08 [8];
  ForAnyElementType FStack_b00;
  int local_af8;
  FSlateBrush *local_af0;
  undefined1 local_ae8;
  undefined1 local_ae0 [8];
  ForAnyElementType FStack_ad8;
  ulonglong local_ad0;
  undefined1 local_ac8 [8];
  undefined1 local_ac0 [16];
  undefined1 *local_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined4 local_a98;
  bool local_a94;
  undefined1 local_a90 [8];
  ForAnyElementType FStack_a88;
  int local_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  uint local_a68;
  undefined1 local_a64;
  undefined1 local_a60 [8];
  ForAnyElementType FStack_a58;
  ulonglong local_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined1 local_a38;
  undefined1 local_a30 [8];
  ForAnyElementType FStack_a28;
  ulonglong local_a20;
  undefined1 local_a18 [104];
  undefined1 local_9b0 [8];
  ForAnyElementType FStack_9a8;
  int local_9a0;
  FName local_998;
  FName local_990;
  FArguments local_988;
  FArguments local_5a8;
  
  local_res8 = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  pFVar12 = FCurveSequence::FCurveSequence((FCurveSequence *)local_a18,0.0,__real_3e19999a,Linear);
  FCurveSequence::operator=(&this->ExpandAnimation,pFVar12);
  FCurveSequence::~FCurveSequence((FCurveSequence *)local_a18);
  this_00 = (TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
             *)SWidget::GetVisibilityAttribute
                         ((SWidget *)this,
                          (TSlateAttributeRef<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                           *)local_b28);
  pTVar13 = SlateAttributePrivate::
            TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
            ::ToAttribute(this_00,(TAttribute<EVisibility> *)local_ac8);
  (this->CustomVisibility).Value.Value.Value = (pTVar13->Value).Value.Value;
  (this->CustomVisibility).bIsSet = pTVar13->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CustomVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar13->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ac0);
  if ((void *)CONCAT71(local_ac0._9_7_,local_ac0[8]) != (void *)0x0) {
    FMemory::Free((void *)CONCAT71(local_ac0._9_7_,local_ac0[8]));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ac0);
  plVar6 = (longlong *)CONCAT44(uStack_b1c,local_b28._8_4_);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  uStack_b30 = (TReferenceControllerBase<1> *)((ulonglong)uStack_b30._4_4_ << 0x20);
  local_b38 = (STextBlock *)MyVisibility;
  pTVar14 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SErrorText>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_b28,
                       this,(pmf_8ca24a5d *)&local_b38);
  local_ac8._0_2_ = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ac0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar14);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b28,
             (FWriteAccessScope *)&local_b58);
  puVar18 = (undefined8 *)CONCAT44(uStack_b1c,local_b28._8_4_);
  if ((local_b18 != 0) && (puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_b28 + 8),0,0,0x10);
    puVar18 = (undefined8 *)CONCAT44(uStack_b1c,local_b28._8_4_);
    local_b18 = 0;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
    puVar18 = (undefined8 *)CONCAT44(uStack_b1c,local_b28._8_4_);
  }
  if (puVar18 != (undefined8 *)0x0) {
    FMemory::Free(puVar18);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b28);
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,(TAttribute<EVisibility> *)local_ac8);
  pFVar15 = SBorder::FArguments::FArguments(&local_988);
  local_a98._0_1_ = (param_1->_BackgroundColor).Value.ColorUseRule;
  local_a98._1_1_ = (param_1->_BackgroundColor).Value.ColorTableId;
  local_a98._2_2_ = *(undefined2 *)&(param_1->_BackgroundColor).Value.field_0x12;
  local_aa8 = *(undefined8 *)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0;
  uStack_aa0 = *(undefined8 *)
                ((longlong)&(param_1->_BackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_a94 = (param_1->_BackgroundColor).bIsSet;
  local_a80 = 0;
  local_a90 = (undefined1  [8])0x0;
  FStack_a88.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_a90,
             &(param_1->_BackgroundColor).Getter);
  *(undefined8 *)&(pFVar15->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_aa8;
  *(undefined8 *)((longlong)&(pFVar15->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8)
       = uStack_aa0;
  (pFVar15->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_a98;
  (pFVar15->_BorderBackgroundColor).Value.ColorTableId = local_a98._1_1_;
  *(undefined2 *)&(pFVar15->_BorderBackgroundColor).Value.field_0x12 = local_a98._2_2_;
  (pFVar15->_BorderBackgroundColor).bIsSet = local_a94;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a90,
             (FWriteAccessScope *)&local_b58);
  if ((local_a80 != 0) && (FStack_a88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a88,0,0,0x10);
    local_a80 = 0;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_a88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a90);
  pIVar16 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName(&local_998,"ErrorReporting.Box");
  local_af0 = (FSlateBrush *)(*pcVar3)(pIVar16,*pFVar17,0,0);
  local_ae8 = 1;
  local_ad0 = 0;
  local_ae0 = (undefined1  [8])0x0;
  FStack_ad8.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_BorderImage).Value = local_af0;
  (pFVar15->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ae0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ae0,
             (FWriteAccessScope *)&local_b58);
  if (((int)local_ad0 != 0) && (FStack_ad8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ad8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ad8,0,0,0x10);
    local_ad0 = local_ad0 & 0xffffffff00000000;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_ad8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ad8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ae0);
  (pFVar15->_ContentScale).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar15->_ContentScale).Getter,(FWriteAccessScope *)local_ac8);
  local_ab0 = &(pFVar15->_ContentScale).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_ab0);
  if (puVar18 == (undefined8 *)0x0) {
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_b38 = (STextBlock *)GetDesiredSizeScale;
    uStack_b30 = (TReferenceControllerBase<1> *)((ulonglong)uStack_b1c << 0x20);
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_b58);
    pTVar23 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar19->Object;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar20;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSErrorText___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar23;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar18[5] = local_b38;
    puVar18[6] = uStack_b30;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b58.Accessor);
  }
  if (local_ac0[8] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_ac0._0_8_,(FDestructionSentinel *)local_ac8);
  }
  uStack_a40 = _UNK_150978bd8;
  local_a48 = ___xmm_00000000404000000000000040400000;
  pFVar15->_HAlign = HAlign_Center;
  pFVar15->_VAlign = VAlign_Center;
  uVar11 = ___xmm_00000000404000000000000040400000;
  local_a38 = 1;
  local_a20 = 0;
  local_a30 = (undefined1  [8])0x0;
  FStack_a28.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000404000000000000040400000 = (undefined4)local_a48;
  _UNK_150978bd4 = SUB84(local_a48,4);
  uVar10 = _UNK_150978bd4;
  (pFVar15->_Padding).Value.Left = (float)___xmm_00000000404000000000000040400000;
  ___xmm_00000000404000000000000040400000 = uVar11;
  uVar11 = _UNK_150978bd8;
  (pFVar15->_Padding).Value.Top = (float)uVar10;
  _UNK_150978bd8 = (undefined4)uStack_a40;
  _UNK_150978bdc = SUB84(uStack_a40,4);
  uVar10 = _UNK_150978bdc;
  (pFVar15->_Padding).Value.Right = (float)_UNK_150978bd8;
  _UNK_150978bd8 = uVar11;
  (pFVar15->_Padding).Value.Bottom = (float)uVar10;
  (pFVar15->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a30,
             (FWriteAccessScope *)&local_b58);
  if (((int)local_a20 != 0) && (FStack_a28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a28,0,0,0x10);
    local_a20 = local_a20 & 0xffffffff00000000;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_a28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a30);
  pFVar21 = STextBlock::FArguments::FArguments(&local_5a8);
  pIVar16 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar16 + 0x38);
  pFVar17 = ::FName::FName(&local_990,"ErrorReporting.ForegroundColor");
  puVar18 = (undefined8 *)(*pcVar3)(pIVar16,*pFVar17,0,&FStyleDefaults::DefaultColor,0);
  local_a78 = *puVar18;
  uStack_a70 = puVar18[1];
  local_a68 = local_a68 & 0xffffff00;
  local_a64 = 1;
  local_a50 = 0;
  local_a60 = (undefined1  [8])0x0;
  FStack_a58.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar21->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_a78;
  *(undefined8 *)((longlong)&(pFVar21->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_a70;
  (pFVar21->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_a68;
  (pFVar21->_ColorAndOpacity).Value.ColorTableId = local_a68._1_1_;
  *(undefined2 *)&(pFVar21->_ColorAndOpacity).Value.field_0x12 = local_a68._2_2_;
  (pFVar21->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a60,
             (FWriteAccessScope *)&local_b58);
  if (((int)local_a50 != 0) && (FStack_a58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a58,0,0,0x10);
    local_a50 = local_a50 & 0xffffffff00000000;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_a58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a60);
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_a18,&(param_1->_Font).Value);
  local_a18[0x60] = (param_1->_Font).bIsSet;
  local_9a0 = 0;
  local_9b0 = (undefined1  [8])0x0;
  FStack_9a8.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_9b0,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar21->_Font).Value,(FSlateFontInfo *)local_a18);
  (pFVar21->_Font).bIsSet = (bool)local_a18[0x60];
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9b0,
             (FWriteAccessScope *)&local_b58);
  if ((local_9a0 != 0) && (FStack_9a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9a8,0,0,0x10);
    local_9a0 = 0;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a18._56_8_);
  local_b10 = (param_1->_AutoWrapText).Value;
  local_b0f = (param_1->_AutoWrapText).bIsSet;
  local_b08 = (undefined1  [8])0x0;
  FStack_b00.Data = (FScriptContainerElement *)0x0;
  local_af8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_b08,
             &(param_1->_AutoWrapText).Getter);
  (pFVar21->_AutoWrapText).Value = local_b10;
  (pFVar21->_AutoWrapText).bIsSet = local_b0f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b08,
             (FWriteAccessScope *)&local_b58);
  if ((local_af8 != 0) && (FStack_b00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b00,0,0,0x10);
    local_af8 = 0;
  }
  if (local_b58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
  }
  if (FStack_b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b08);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_b58,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Notifications\\SErrorText.cpp"
             ,0x15,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if ((TReferenceControllerBase<1> *)local_b58.Accessor != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_b58.Accessor + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_b58.Accessor + 8) + 1);
    UNLOCK();
  }
  pTVar23 = (this->TextBlock).SharedReferenceCount.ReferenceController;
  (this->TextBlock).Object = (STextBlock *)local_b58._0_8_;
  (this->TextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_b58.Accessor;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  pTVar22 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_b58,
                       (TSharedRef<STextBlock,1> *)local_b28,pFVar21);
  pTVar23 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_b38 = pTVar22->Object;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar15->_Content).Widget.Object = (SWidget *)local_b38;
  (pFVar15->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar23;
  uStack_b30 = pTVar23;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SBorder::Construct((SBorder *)this,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_b1c,local_b28._8_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b58.Accessor);
  STextBlock::FArguments::~FArguments(&local_5a8);
  SBorder::FArguments::~FArguments(&local_988);
                    /* WARNING: Could not recover jumptable at 0x0001429d1a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)(&this->_padding_,&param_1->_ErrorText);
  return;
}

// GetDesiredSizeScale @ 1429eb550

TVector2<double> * __thiscall
SErrorText::GetDesiredSizeScale(SErrorText *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = FCurveSequence::GetLerp(&this->ExpandAnimation);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// HasError @ 1429f31a0

bool __thiscall SErrorText::HasError(SErrorText *this)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  pSVar1 = (SWidget *)this->_padding_;
  if ((pSVar1[2].Tag.Number & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)(pSVar1 + 1),pSVar1,Member);
  }
  bVar3 = FText::IsEmpty((FText *)(pSVar1 + 1));
  return !bVar3;
}

// MyVisibility @ 1429f7cc0

EVisibility __thiscall SErrorText::MyVisibility(SErrorText *this)

{
  STextBlock *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility *pEVar5;
  uchar *in_RDX;
  
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  pSVar1 = (this->TextBlock).Object;
  if ((*(byte *)&pSVar1->field91_0x60c & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&pSVar1->BoundText,(SWidget *)pSVar1,Member);
  }
  bVar3 = FText::IsEmpty((FText *)&pSVar1->BoundText);
  if (bVar3) {
    pEVar5 = &EVisibility::Collapsed;
  }
  else {
    pEVar5 = TAttribute<EVisibility>::Get(&this->CustomVisibility);
  }
  *in_RDX = (pEVar5->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// SetError @ 142a094f0

void __thiscall SErrorText::SetError(SErrorText *this,FString *param_1)

{
  code *pcVar1;
  FText *pFVar2;
  FText local_18;
  
  pcVar1 = *(code **)this->_padding_;
  pFVar2 = FText::FromString(&local_18,param_1);
  (*pcVar1)(this,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetError @ 142a09540

void __thiscall SErrorText::SetError(SErrorText *this,FText *param_1)

{
  uint *puVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  TSharedRef<SWidget,1> *pTVar6;
  ushort uVar7;
  undefined1 local_res8 [8];
  TSharedRef<SWidget,1> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  undefined1 local_38 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar2 = (SWidget *)this->_padding_;
  if ((pSVar2[2].Tag.Number & 1) != 0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)(pSVar2 + 1),pSVar2,Member);
  }
  bVar4 = FText::IsEmpty((FText *)(pSVar2 + 1));
  if (bVar4) {
    bVar4 = FText::IsEmpty(param_1);
    if (!bVar4) {
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this[-1]._padding_,&local_78);
      FCurveSequence::Play((FCurveSequence *)&this->_padding_,pTVar6,false,0.0,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38._0_8_ = (param_1->TextData).Reference;
  pSVar2 = (SWidget *)this->_padding_;
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 8))(local_38._0_8_,local_res8);
  }
  local_38._8_4_ = param_1->Flags;
  local_38[0x10] = true;
  local_10 = 0;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_20,&local_50);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))();
    if (cVar5 != '\0') {
      uVar7 = 1;
      goto LAB_142a09698;
    }
  }
  uVar7 = 0;
LAB_142a09698:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  puVar1 = &pSVar2[2].Tag.Number;
  *(ushort *)puVar1 = (ushort)*puVar1 & 0xfffe;
  puVar1 = &pSVar2[2].Tag.Number;
  *(ushort *)puVar1 = (ushort)*puVar1 | uVar7;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
  ::Assign((TSlateAttributeBase<SWidget,FText,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeFTextComparePredicate,0>
            *)(pSVar2 + 1),pSVar2,(TAttribute<FText> *)local_38,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_68);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  return;
}

