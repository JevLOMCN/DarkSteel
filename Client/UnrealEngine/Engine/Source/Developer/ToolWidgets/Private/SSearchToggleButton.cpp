// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 5

// Construct @ 142d85820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SSearchToggleButton::Construct
          (SSearchToggleButton *this,FArguments *param_1,TSharedRef<SSearchBox,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SSearchBox *this_00;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SCheckBox *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar13;
  FArguments *this_01;
  undefined8 *puVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  ulong64 uVar16;
  TSharedRef<SWidget,1> *pTVar17;
  ISlateStyle *pIVar18;
  FCheckBoxStyle *pFVar19;
  FText *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SImage,1> *pTVar22;
  TSharedRef<SCheckBox,1> *pTVar23;
  longlong *this_02;
  TReferenceControllerBase<1> *pTVar24;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  TReferenceControllerBase<1> *local_res18;
  FName local_res20;
  FDestructionSentinel local_838;
  undefined1 local_818 [12];
  uint uStack_80c;
  int local_808;
  undefined1 local_800 [8];
  undefined1 local_7f8 [16];
  undefined1 *local_7e8;
  TSharedRef<SWidget_const_,1> local_7e0;
  FSlateBrush *local_7d0;
  undefined1 local_7c8;
  undefined1 local_7c0 [8];
  ForAnyElementType FStack_7b8;
  ulonglong local_7b0;
  FText local_7a8;
  undefined1 local_798;
  undefined1 local_790 [8];
  ForAnyElementType FStack_788;
  ulonglong local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  bool local_768;
  undefined3 uStack_767;
  undefined1 local_764;
  undefined1 local_760 [8];
  ForAnyElementType FStack_758;
  ulonglong local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined1 local_738;
  undefined1 local_730 [8];
  ForAnyElementType FStack_728;
  ulonglong local_720;
  FDestructionSentinel local_718;
  TSharedRef<SCheckBox,1> local_700;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_6f0;
  FArguments local_6d8;
  FArguments local_430;
  
  local_res8[0] = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  this->bIsExpanded = false;
  local_res18 = (TReferenceControllerBase<1> *)param_2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnSearchBoxShown,&param_1->_OnSearchBoxShown);
  this->SearchStyle = param_1->_Style;
  this_00 = param_2->Object;
  local_838.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_838.Accessor._4_4_ << 0x20)
  ;
  local_838._0_8_ = GetSearchBoxVisibility;
  pTVar13 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SSearchToggleButton>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_818,
                       this,(pmf_f7efdc5c *)&local_838);
  local_800._0_2_ = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_818,
             (FWriteAccessScope *)&local_718);
  puVar14 = (undefined8 *)CONCAT44(uStack_80c,local_818._8_4_);
  if ((local_808 != 0) && (puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_818 + 8),0,0,0x10);
    puVar14 = (undefined8 *)CONCAT44(uStack_80c,local_818._8_4_);
    local_808 = 0;
  }
  if (local_718.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
    puVar14 = (undefined8 *)CONCAT44(uStack_80c,local_818._8_4_);
  }
  if (puVar14 != (undefined8 *)0x0) {
    FMemory::Free(puVar14);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_818);
  SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,(TAttribute<EVisibility> *)local_800);
  (this->SearchBoxPtr).Object = param_2->Object;
  pTVar24 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar24 != (this->SearchBoxPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->SearchBoxPtr).WeakReferenceCount.ReferenceController;
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
    (this->SearchBoxPtr).WeakReferenceCount.ReferenceController = pTVar24;
  }
  this_01 = SCheckBox::FArguments::FArguments(&local_430);
  (this_01->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this_01->_IsChecked).Getter
             ,(FWriteAccessScope *)local_800);
  local_7e8 = &(this_01->_IsChecked).Getter.field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_7e8);
  pTVar24 = local_res18;
  if (puVar14 != (undefined8 *)0x0) {
    local_838._0_8_ = GetToggleButtonState;
    local_838.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_80c << 0x20);
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7e0);
    pTVar24 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar15->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSearchToggleButton___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = pSVar4;
    puVar14[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    puVar14[5] = local_838._0_8_;
    puVar14[6] = local_838.Accessor;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e0.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  if (local_7f8[8] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_7f8._0_8_,(FDestructionSentinel *)local_800);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_01->_OnCheckStateChanged,(FWriteAccessScope *)local_800);
  local_7e8 = &(this_01->_OnCheckStateChanged).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_7e8);
  pTVar24 = local_res18;
  if (puVar14 != (undefined8 *)0x0) {
    local_838._0_8_ = OnToggleButtonStateChanged;
    local_838.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_80c << 0x20);
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_7e0);
    pTVar24 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar17->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSearchToggleButton___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = pSVar4;
    puVar14[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar14[5] = local_838._0_8_;
    puVar14[6] = local_838.Accessor;
    param_2 = (TSharedRef<SSearchBox,1> *)local_res18;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7e0.SharedReferenceCount.ReferenceController);
  }
  if (local_7f8[8] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_7f8._0_8_,(FDestructionSentinel *)local_800);
  }
  ::FName::FName(&local_res20,"ToggleButtonCheckbox");
  pIVar18 = FAppStyle::Get();
  pFVar19 = (FCheckBoxStyle *)
            (**(code **)((longlong)*pIVar18 + 0xa0))
                      (pIVar18,FCheckBoxStyle::TypeName,local_res20,0,1);
  if (pFVar19 == (FCheckBoxStyle *)0x0) {
    pFVar19 = FCheckBoxStyle::GetDefault();
  }
  uStack_740 = _UNK_1509253f8;
  local_748 = ___xmm_40800000408000004080000040800000;
  this_01->_Style = pFVar19;
  uVar12 = ___xmm_40800000408000004080000040800000;
  local_738 = 1;
  local_720 = 0;
  local_730 = (undefined1  [8])0x0;
  FStack_728.Data = (FScriptContainerElement *)0x0;
  ___xmm_40800000408000004080000040800000 = (undefined4)local_748;
  _UNK_1509253f4 = SUB84(local_748,4);
  uVar10 = _UNK_1509253f4;
  (this_01->_Padding).Value.Left = (float)___xmm_40800000408000004080000040800000;
  ___xmm_40800000408000004080000040800000 = uVar12;
  uVar12 = _UNK_1509253f8;
  (this_01->_Padding).Value.Top = (float)uVar10;
  _UNK_1509253f8 = (undefined4)uStack_740;
  _UNK_1509253fc = SUB84(uStack_740,4);
  uVar10 = _UNK_1509253fc;
  (this_01->_Padding).Value.Right = (float)_UNK_1509253f8;
  _UNK_1509253f8 = uVar12;
  (this_01->_Padding).Value.Bottom = (float)uVar10;
  (this_01->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_730,
             (FWriteAccessScope *)&local_838);
  if (((int)local_720 != 0) && (FStack_728.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_728.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_728,0,0,0x10);
    local_720 = local_720 & 0xffffffff00000000;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  if (FStack_728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_728.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_730);
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)local_818,L"ExpandableSearchArea",L"ExpandCollapseSearchButton",
                       L"Expands or collapses the search text box");
  FText::FText(&local_7a8,pFVar20);
  local_798 = 1;
  local_780 = 0;
  local_790 = (undefined1  [8])0x0;
  FStack_788.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_01,&local_7a8);
  *(undefined1 *)&this_01->_padding_ = local_798;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_790);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_790,
             (FWriteAccessScope *)&local_838);
  if (((int)local_780 != 0) && (FStack_788.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_788.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_788,0,0,0x10);
    local_780 = local_780 & 0xffffffff00000000;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  if (FStack_788.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_788.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_790);
  if (local_7a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7a8.TextData.Reference + 0x10))();
  }
  pFVar21 = SImage::FArguments::FArguments(&local_6d8);
  local_7c8 = 1;
  local_7d0 = &this->SearchStyle->GlassImage;
  local_7b0 = 0;
  local_7c0 = (undefined1  [8])0x0;
  FStack_7b8.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_Image).Value = local_7d0;
  (pFVar21->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c0,
             (FWriteAccessScope *)&local_838);
  if (((int)local_7b0 != 0) && (FStack_7b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b8,0,0,0x10);
    local_7b0 = local_7b0 & 0xffffffff00000000;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  if (FStack_7b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7c0);
  uVar11 = local_838._18_2_;
  uVar12 = _UNK_15090c6d8;
  local_764 = 1;
  local_778 = ___xmm_3f8000003f800000000000003f800000;
  uStack_770 = _UNK_15090c6d8;
  local_838._16_2_ = 2;
  uVar10 = local_838._16_4_;
  local_838.bDestroyed = SUB21(2,0);
  local_838._17_3_ = SUB43(uVar10,1);
  local_768 = local_838.bDestroyed;
  uStack_767 = local_838._17_3_;
  local_750 = 0;
  local_760 = (undefined1  [8])0x0;
  FStack_758.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar21->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar21->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar12;
  local_838.bDestroyed = SUB21(2,0);
  local_838._17_1_ = SUB21(2 >> 8,0);
  (pFVar21->_ColorAndOpacity).Value.ColorUseRule = local_838.bDestroyed;
  (pFVar21->_ColorAndOpacity).Value.ColorTableId = local_838._17_1_;
  *(undefined2 *)&(pFVar21->_ColorAndOpacity).Value.field_0x12 = uVar11;
  (pFVar21->_ColorAndOpacity).bIsSet = true;
  local_838._16_4_ = uVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_760);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_760,
             (FWriteAccessScope *)&local_838);
  if (((int)local_750 != 0) && (FStack_758.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_758.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_758,0,0,0x10);
    local_750 = local_750 & 0xffffffff00000000;
  }
  if (local_838.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_838.Accessor,&local_838);
  }
  if (FStack_758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_758.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_760);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_7e0.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_838,(FName *)&local_7e0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)local_800,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchToggleButton.cpp"
             ,0x24,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_838);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar22 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)local_800,
                       (TSharedRef<SImage,1> *)&local_718,pFVar21);
  pTVar24 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_838._0_8_ = pTVar22->Object;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this_01->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_01->_Content).Widget.Object = (SWidget *)local_838._0_8_;
  (this_01->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar24;
  local_838.Accessor = (FMRSWRecursiveAccessDetector *)pTVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_838.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_838._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_7e0,(FName *)&local_838,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_6f0,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SSearchToggleButton.cpp"
             ,0x1d,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_7e0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar23 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6f0,&local_700,this_01);
  this_02 = &this->_padding_;
  pTVar3 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar23->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_02);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar3;
  local_838._0_8_ = pSVar5;
  local_838.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_02);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_718.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7f8._0_8_);
  SImage::FArguments::~FArguments(&local_6d8);
  if ((atomic<unsigned___int64>)local_818._0_8_ != (atomic<unsigned___int64>)0x0) {
    (**(code **)(*(longlong *)local_818._0_8_ + 0x10))();
  }
  SCheckBox::FArguments::~FArguments(&local_430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)
             &((TReferenceControllerBase<1> *)param_2)->SharedReferenceCount)->ReferenceController);
  return;
}

// GetSearchBoxVisibility @ 142db06c0

EVisibility __thiscall SSearchToggleButton::GetSearchBoxVisibility(SSearchToggleButton *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->bIsExpanded != false) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetToggleButtonState @ 142db2250

ECheckBoxState __thiscall SSearchToggleButton::GetToggleButtonState(SSearchToggleButton *this)

{
  return this->bIsExpanded != false;
}

// OnToggleButtonStateChanged @ 142dca3b0

void __thiscall
SSearchToggleButton::OnToggleButtonStateChanged(SSearchToggleButton *this,ECheckBoxState param_1)

{
  SetExpanded(this,param_1 == Checked);
  return;
}

// SetExpanded @ 142dd8dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSearchToggleButton::SetExpanded(SSearchToggleButton *this,bool param_1)

{
  SSearchBox *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  uint uVar3;
  FSlateApplication *this_01;
  FSlateApplication *this_02;
  FText *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->bIsExpanded = param_1;
  pTVar5 = (this->SearchBoxPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dd8e03;
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
    this_00 = (this->SearchBoxPtr).Object;
    if (this_00 != (SSearchBox *)0x0) {
      if (this->bIsExpanded == false) {
        pFVar4 = FText::GetEmpty();
        local_40._0_8_ = (pFVar4->TextData).Reference;
        if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res10);
        }
        local_40._8_4_ = pFVar4->Flags;
        local_40[0x10] = true;
        local_18 = 0;
        local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_20.Data = (FScriptContainerElement *)0x0;
        SEditableTextBox::SetText((SEditableTextBox *)this_00,(TAttribute<FText> *)local_40);
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
        if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
        }
      }
      else {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->OnSearchBoxShown);
        this_01 = FSlateApplication::Get();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        local_58._0_8_ = this_00;
        local_58.Accessor = (FMRSWRecursiveAccessDetector *)pTVar5;
        this_02 = FSlateApplication::Get();
        uVar3 = FSlateApplication::GetUserIndexForKeyboard(this_02);
        FSlateApplication::SetUserFocus
                  (this_01,uVar3,(TSharedPtr<SWidget,1> *)&local_58,SetDirectly);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58.Accessor);
      }
    }
  }
LAB_142dd8e03:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

