// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 14

// ~SEyeDropperButton @ 142f3f920

void __thiscall SEyeDropperButton::~SEyeDropperButton(SEyeDropperButton *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayGamma).Getter);
  pvVar1 = *(void **)&(this->DisplayGamma).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayGamma).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComplete);
  pvVar1 = *(void **)&(this->OnComplete).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnComplete);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBegin);
  pvVar1 = *(void **)&(this->OnBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SButton::~SButton((SButton *)this);
  return;
}

// Construct @ 143023b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014302455c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEyeDropperButton::Construct(SEyeDropperButton *this,FArguments *param_1)

{
  longlong *plVar1;
  SWidget *pSVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FArguments *pFVar13;
  undefined8 *puVar14;
  TSharedRef<SWidget,1> *pTVar15;
  ulong64 uVar16;
  FName FVar17;
  FArguments *this_00;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FText *pFVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  TSharedRef<SImage,1> *pTVar22;
  FSlot *this_01;
  SHorizontalBox *pSVar23;
  FArguments *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  FArguments *pFVar26;
  TSharedRef<SHorizontalBox,1> *pTVar27;
  FArguments *pFVar28;
  TSharedRef<SOverlay,1> *pTVar29;
  TReferenceControllerBase<1> *pTVar30;
  TReferenceControllerBase<1> *pTVar31;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1588 [2];
  FName local_1580;
  TReferenceControllerBase<1> *pTStack_1578;
  FDestructionSentinel local_1570;
  undefined1 local_1558 [8];
  ForAnyElementType local_1550;
  int local_1548;
  FName local_1540;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1538;
  FMemScope local_1520;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  TSharedRef<SWidget,1> local_1510;
  SImage *local_1500;
  FSharedReferencer<1> local_14f8;
  SHorizontalBox *local_14f0;
  FSharedReferencer<1> local_14e8;
  FDestructionSentinel local_14e0;
  undefined1 *local_14c8;
  FSlateBrush *local_14c0;
  undefined1 local_14b8;
  undefined1 local_14b0 [8];
  ForAnyElementType FStack_14a8;
  ulonglong local_14a0;
  FText local_1498;
  undefined1 local_1488;
  undefined1 local_1480 [8];
  ForAnyElementType FStack_1478;
  ulonglong local_1470;
  FText local_1468;
  undefined1 local_1458;
  undefined1 local_1450 [8];
  ForAnyElementType FStack_1448;
  ulonglong local_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined1 local_1428;
  undefined1 local_1420 [8];
  ForAnyElementType FStack_1418;
  ulonglong local_1410;
  FArguments *local_1408;
  FDestructionSentinel local_1400;
  FDestructionSentinel local_13e8;
  longlong *local_13d0;
  TAttribute<FText> local_13c8;
  FText local_1398;
  FText local_1388;
  TSharedRef<STextBlock,1> local_1378;
  TSharedRef<SHorizontalBox,1> local_1368;
  TSharedRef<SOverlay,1> local_1358;
  FName local_1348;
  undefined1 local_1340 [96];
  undefined1 local_12e0 [96];
  undefined1 local_1280 [16];
  FSharedReferencer<1> local_1270 [8];
  undefined4 local_1230;
  undefined1 local_122c;
  FArguments local_1198;
  FArguments local_f90;
  FArguments local_d88;
  FArguments local_ae0;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x143023b8f;
  bVar9 = false;
  bVar8 = false;
  bVar6 = false;
  local_res8 = 0;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnBegin,&param_1->_OnBegin);
  if (&param_1->_OnComplete != &this->OnComplete) {
    local_1558 = (undefined1  [8])0x0;
    local_1550.Data = (FScriptContainerElement *)0x0;
    local_1548 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnComplete,
               (FReadAccessScope *)&local_14e0);
    if ((*(int *)&(param_1->_OnComplete).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnComplete).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_1558);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_14e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComplete,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1558);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1558,
               (FWriteAccessScope *)&local_1400);
    if ((local_1548 != 0) && (local_1550.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1550.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1550,0,0,0x10);
      local_1548 = 0;
    }
    if (local_1400.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1400.Accessor,&local_1400);
    }
    if (local_1550.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1550.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1558);
  }
  (this->DisplayGamma).Value = (param_1->_DisplayGamma).Value;
  (this->DisplayGamma).bIsSet = (param_1->_DisplayGamma).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->DisplayGamma).Getter,&(param_1->_DisplayGamma).Getter);
  pFVar13 = SButton::FArguments::FArguments(&local_ae0);
  uVar11 = _UNK_150a1f5b8;
  local_1428 = 1;
  local_1410 = 0;
  local_1438 = ___xmm_40200000400000004020000040000000;
  uStack_1430 = _UNK_150a1f5b8;
  local_1420 = (undefined1  [8])0x0;
  FStack_1418.Data = (FScriptContainerElement *)0x0;
  uVar10 = _UNK_150a1f5b4;
  (pFVar13->_ContentPadding).Value.Left = (float)___xmm_40200000400000004020000040000000;
  uVar12 = _UNK_150a1f5b8;
  (pFVar13->_ContentPadding).Value.Top = (float)uVar10;
  _UNK_150a1f5b8 = (undefined4)uVar11;
  _UNK_150a1f5bc = SUB84(uVar11,4);
  uVar10 = _UNK_150a1f5bc;
  (pFVar13->_ContentPadding).Value.Right = (float)_UNK_150a1f5b8;
  _UNK_150a1f5b8 = uVar12;
  (pFVar13->_ContentPadding).Value.Bottom = (float)uVar10;
  (pFVar13->_ContentPadding).bIsSet = true;
  local_1408 = pFVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1420);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1420,
             (FWriteAccessScope *)&local_1570);
  if (((int)local_1410 != 0) && (FStack_1418.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1418.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1418,0,0,0x10);
    local_1410 = local_1410 & 0xffffffff00000000;
  }
  if (local_1570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1570.Accessor,&local_1570);
  }
  if (FStack_1418.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1418.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1420);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnClicked,
             (FWriteAccessScope *)&local_14e0);
  local_14c8 = &(pFVar13->_OnClicked).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_14c8);
  if (puVar14 == (undefined8 *)0x0) {
    pTVar30 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1580 = (FName)OnClicked;
    pTStack_1578 = (TReferenceControllerBase<1> *)((ulonglong)local_1550.Data & 0xffffffff00000000);
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1510);
    pTVar30 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar15->Object;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSEyeDropperButton___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = pSVar2;
    puVar14[4] = pTVar30;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar8 = true;
    bVar6 = true;
    *(FName *)(puVar14 + 5) = local_1580;
    puVar14[6] = pTStack_1578;
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1510.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar6 = false;
  if (local_14e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e0.Accessor,&local_14e0);
  }
  local_1538._Widget.Object = (SHorizontalBox *)SOverlay::FArguments::FArguments(&local_f90);
  FVar17 = (FName)SOverlay::Slot((FSlotArguments *)local_12e0,0);
  local_1540 = FVar17;
  this_00 = SImage::FArguments::FArguments(&local_d88);
  pIVar18 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1348,"ColorPicker.EyeDropperLarge");
  local_14c0 = (FSlateBrush *)(*pcVar3)(pIVar18,*pFVar19,0,0);
  local_14b8 = 1;
  local_14b0 = (undefined1  [8])0x0;
  FStack_14a8.Data = (FScriptContainerElement *)0x0;
  local_14a0 = 0;
  (this_00->_Image).Value = local_14c0;
  (this_00->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_14b0,
             (FWriteAccessScope *)&local_1570);
  if (((int)local_14a0 != 0) && (FStack_14a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_14a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_14a8,0,0,0x10);
    local_14a0 = local_14a0 & 0xffffffff00000000;
  }
  if (local_1570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1570.Accessor,&local_1570);
  }
  if (FStack_14a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_14a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_14b0);
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)local_1558,L"EyeDroppperButton",L"EyeDropperButton_ToolTip",
                       L"Activates the eye-dropper for selecting a colored pixel from any window.");
  FText::FText(&local_1468,pFVar20);
  local_1458 = 1;
  local_1440 = 0;
  local_1450 = (undefined1  [8])0x0;
  FStack_1448.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_1468);
  *(undefined1 *)&this_00->_padding_ = local_1458;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1450);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1450,
             (FWriteAccessScope *)&local_1570);
  if (((int)local_1440 != 0) && (FStack_1448.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1448.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1448,0,0,0x10);
    local_1440 = local_1440 & 0xffffffff00000000;
  }
  if (local_1570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1570.Accessor,&local_1570);
  }
  if (FStack_1448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1450);
  if (local_1468.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1468.TextData.Reference + 0x10))();
  }
  (this_00->_ColorAndOpacity).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this_00->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_14e0);
  local_14c8 = &(this_00->_ColorAndOpacity).Getter.field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_14c8);
  if (puVar14 == (undefined8 *)0x0) {
    pTVar30 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1580 = (FName)GetDropperImageColor;
    pTStack_1578 = (TReferenceControllerBase<1> *)((ulonglong)local_1550.Data & 0xffffffff00000000);
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_1510);
    pTVar30 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar21->Object;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar9 = true;
    bVar8 = true;
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEyeDropperButton___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = pSVar2;
    puVar14[4] = pTVar30;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar14 + 5) = local_1580;
    puVar14[6] = pTStack_1578;
    FVar17 = local_1540;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1510.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar6 = false;
  if (local_14e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e0.Accessor,&local_14e0);
  }
  FLLMScope::FLLMScope(local_1588,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1540 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1520,&local_1540,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_14e0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SEyeDropperButton.cpp"
             ,0x1e,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1520);
  FLLMScope::~FLLMScope(local_1588);
  pTVar22 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *)&local_14e0,
                       (TSharedRef<SImage,1> *)&local_1400,this_00);
  pTVar30 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_1500 = pTVar22->Object;
  if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar23 = (SHorizontalBox *)0x0;
  local_14f8.ReferenceController = pTVar30;
  if ((SImage **)((longlong)FVar17 + 8) != &local_1500) {
    *(SImage **)((longlong)FVar17 + 8) = local_1500;
    local_1500 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar17 + 0x10),&local_14f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14f8.ReferenceController);
  local_1580 = (FName)SOverlay::FArguments::operator+
                                ((FArguments *)local_1538._Widget.Object,(FSlotArguments *)FVar17);
  local_1510.Object = (SWidget *)SOverlay::Slot((FSlotArguments *)local_1340,0);
  local_1540 = (FName)SHorizontalBox::FArguments::FArguments(&local_1198);
  this_01 = ::operator_new(0x58);
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    pSVar23 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(this_01);
  }
  local_1538._Widget.Object = pSVar23;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1280,(FSlot *)&local_1538);
  local_1230 = 2;
  local_122c = 1;
  pFVar24 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_1398,L"EyeDroppperButton",L"EscapeCue",L"Esc");
  FText::FText(&local_13c8.Value,pFVar20);
  local_13c8.bIsSet = true;
  local_13c8.Getter._16_8_ = 0;
  local_13c8.Getter._0_8_ = 0;
  local_13c8.Getter._8_8_ = 0;
  pFVar24 = STextBlock::FArguments::Text(pFVar24,&local_13c8);
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_1388,L"EyeDroppperButton",L"EyeDropperEscapeCue_ToolTip",
                       L"Hit Escape key to stop the eye dropper");
  FText::FText(&local_1498,pFVar20);
  local_1488 = 1;
  local_1470 = 0;
  local_1480 = (undefined1  [8])0x0;
  FStack_1478.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar24,&local_1498);
  *(undefined1 *)&pFVar24->_padding_ = local_1488;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar24->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1480);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1480,
             (FWriteAccessScope *)&local_1570);
  if (((int)local_1470 != 0) && (FStack_1478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1478,0,0,0x10);
    local_1470 = local_1470 & 0xffffffff00000000;
  }
  if (local_1570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1570.Accessor,&local_1570);
  }
  if (FStack_1478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1480);
  if (local_1498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1498.TextData.Reference + 0x10))();
  }
  *(undefined1 *)((longlong)&pFVar24->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_padding_,
             (FWriteAccessScope *)&local_13e8);
  local_13d0 = &pFVar24->_padding_;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_13d0);
  if (puVar14 == (undefined8 *)0x0) {
    pTVar31 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1514 = local_1550.Data._4_4_;
    local_1520 = (FMemScope)GetEscapeTextVisibility;
    uStack_1518 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_1570);
    pTVar31 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_1538._Widget.Object = (SHorizontalBox *)pTVar21->Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar8 = true;
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEyeDropperButton___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar14[3] = local_1538._Widget.Object;
    puVar14[4] = pTVar31;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->WeakReferenceCount = (atomic<int>)((int)pTVar31->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar14 + 5) = local_1520;
    puVar14[6] = CONCAT44(uStack_1514,uStack_1518);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1570.Accessor);
  }
  if (local_13e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13e8.Accessor,&local_13e8);
  }
  FLLMScope::FLLMScope(local_1588,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1538._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1520,(FName *)&local_1538,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_13e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SEyeDropperButton.cpp"
             ,0x2b,local_res10);
  FMemScope::~FMemScope(&local_1520);
  FLLMScope::~FLLMScope(local_1588);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_13e8,
                       &local_1378,pFVar24);
  pTVar31 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_1280._8_8_ = pTVar25->Object;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1538._Widget.Object = (SHorizontalBox *)0x0;
  local_1538._Widget.SharedReferenceCount.ReferenceController = pTVar31;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1280 + 0x10),&local_1538._Widget.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1538._Widget.SharedReferenceCount.ReferenceController);
  pFVar26 = SHorizontalBox::FArguments::operator+
                      ((FArguments *)local_1540,(FSlotArguments *)local_1280);
  FLLMScope::FLLMScope(local_1588,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1538._Widget.Object = (SHorizontalBox *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1520,(FName *)&local_1538,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1538,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SEyeDropperButton.cpp"
             ,0x26,local_res18);
  FMemScope::~FMemScope(&local_1520);
  FLLMScope::~FLLMScope(local_1588);
  pTVar27 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1538,&local_1368,pFVar26);
  pSVar2 = local_1510.Object;
  pTVar4 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_14f0 = pTVar27->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_14e8.ReferenceController = pTVar4;
  if ((SHorizontalBox **)&(local_1510.Object)->_padding_ != &local_14f0) {
    (local_1510.Object)->_padding_ = (longlong)local_14f0;
    local_14f0 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(local_1510.Object)->_padding_,&local_14e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_14e8.ReferenceController);
  pFVar28 = SOverlay::FArguments::operator+((FArguments *)local_1580,(FSlotArguments *)pSVar2);
  FLLMScope::FLLMScope(local_1588,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1580 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1510,&local_1580,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_1570,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SEyeDropperButton.cpp"
             ,0x1a,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_1510);
  FLLMScope::~FLLMScope(local_1588);
  pTVar29 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *)&local_1570,&local_1358,
                       pFVar28);
  pFVar13 = local_1408;
  pTVar5 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_1580 = (FName)pTVar29->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_1408->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1408->_Content).Widget.Object = (SWidget *)local_1580;
  (local_1408->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_1578 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SButton::Construct((SButton *)this,pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1358.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1570.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1538._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_13e8.Accessor);
  if (local_1388.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1388.TextData.Reference + 0x10))();
  }
  if (local_1398.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1398.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_1280);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1198._Slots.AllocatorInstance.Data,local_1198._Slots.ArrayNum);
  if ((FSlotArguments *)local_1198._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1198._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1198);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1340 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1340._16_8_);
  if ((undefined8 *)local_1340._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1340._0_8_)(local_1340._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1400.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_14e0.Accessor);
  if ((atomic<unsigned___int64>)local_1558 != (atomic<unsigned___int64>)0x0) {
    (**(code **)(*(longlong *)local_1558 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d88._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d88._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d88._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d88._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d88);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_12e0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_12e0._16_8_);
  if ((undefined8 *)local_12e0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_12e0._0_8_)(local_12e0._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_f90._Slots.AllocatorInstance.Data,local_f90._Slots.ArrayNum);
  if ((FSlotArguments *)local_f90._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_f90._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_f90);
  SButton::FArguments::~FArguments(&local_ae0);
  return;
}

// GetDropperImageColor @ 1430342d0

FSlateColor * __thiscall
SEyeDropperButton::GetDropperImageColor(SEyeDropperButton *this,FSlateColor *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar1) && (this->bWasClickActivated != false)) {
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 0.3;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 0.3;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 0.3;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetEscapeTextVisibility @ 143034350

EVisibility __thiscall SEyeDropperButton::GetEscapeTextVisibility(SEyeDropperButton *this)

{
  bool bVar1;
  EVisibility EVar2;
  uchar *in_RDX;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((!bVar1) || (EVar2 = EVisibility::Visible, this->bWasClickActivated == false)) {
    EVar2 = EVisibility::Hidden;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsMouseOver @ 143037ac0

bool __thiscall
SEyeDropperButton::IsMouseOver(SEyeDropperButton *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FDeprecateSlateVector2D local_res18 [2];
  
  local_res18[0] = param_2->ScreenSpacePosition;
  bVar1 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)local_res18);
  return bVar1;
}

// OnClicked @ 143039860

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEyeDropperButton::OnClicked(SEyeDropperButton *this,FReply *__return_storage_ptr__)

{
  this->bWasClicked = true;
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnCursorQuery @ 143039e10

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SEyeDropperButton::OnCursorQuery
          (SEyeDropperButton *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((((bVar1) && (this->bWasClickActivated != false)) && (this->bWasLeft != false)) &&
     (this->bWasReEntered == false)) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = EyeDropper;
  }
  else {
    SWidget::OnCursorQuery((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 14303abc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEyeDropperButton::OnKeyDown
          (SEyeDropperButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  longlong *plVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  FSlateApplication *this_00;
  FReadAccessScope local_198;
  FReply local_180;
  FReply local_c8;
  
  pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->Key).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar4 == EKeys::Escape.KeyName) {
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if ((bVar7) && (this->bWasClickActivated != false)) {
      bVar7 = true;
      goto LAB_14303ac11;
    }
  }
  bVar7 = false;
LAB_14303ac11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar7) {
    this->bWasClickActivated = false;
    this->bWasLeft = false;
    this->bWasReEntered = false;
    this_00 = FSlateApplication::Get();
    FSlateApplication::QueryCursor(this_00);
    FReply::FReply(&local_180,true);
    FVar6.ReferenceController = local_180.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_180.MouseCaptor.Object = (SWidget *)0x0;
    local_180.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_180.bUseHighPrecisionMouse = 0;
    local_180.bReleaseMouseCapture = 1;
    FReply::FReply(&local_c8,&local_180);
    FReply::~FReply(&local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComplete,
               &local_198);
    if ((*(int *)&(this->OnComplete).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnComplete).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_198);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14303ae80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEyeDropperButton::OnMouseButtonDown
          (SEyeDropperButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar1) {
    this->bWasClickActivated = false;
    this->bWasLeft = false;
    this->bWasReEntered = false;
  }
  SButton::OnMouseButtonDown((SButton *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14303b150

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEyeDropperButton::OnMouseButtonUp
          (SEyeDropperButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FSlateApplication *pFVar6;
  FReadAccessScope local_28;
  
  bVar1 = this->bWasClickActivated;
  this->bWasClicked = false;
  SButton::OnMouseButtonUp((SButton *)this,__return_storage_ptr__,param_1,param_2);
  if (bVar1 == false) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar4 == EKeys::LeftMouseButton.KeyName) && (this->bWasClicked != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      this->bWasClickActivated = true;
      this->bWasLeft = false;
      this->bWasReEntered = false;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&this->OnBegin);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_28);
      FReply::CaptureMouse(__return_storage_ptr__,pTVar5);
      local_28.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)
           ((ulonglong)local_28.DestructionSentinel.Accessor._4_4_ << 0x20);
      local_28.DestructionSentinel._0_8_ = OnPreTick;
      pFVar6 = FSlateApplication::Get();
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddSP<SEyeDropperButton>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pFVar6->PreTickEvent,(SEyeDropperButton *)&stack0x00000008,(pmf_3b7f7b37 *)this);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  else {
    this->bWasClickActivated = false;
    this->bWasLeft = false;
    this->bWasReEntered = false;
    FReply::ReleaseMouseCapture(__return_storage_ptr__);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComplete,&local_28
              );
    if ((*(int *)&(this->OnComplete).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnComplete).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  this->bWasClicked = false;
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 14303b460

void __thiscall
SEyeDropperButton::OnMouseCaptureLost(SEyeDropperButton *this,FCaptureLostEvent *param_1)

{
  if (((this->bWasClickActivated != false) && (this->bWasLeft != false)) &&
     (this->bWasReEntered == false)) {
    this->bWasClickActivated = false;
    this->bWasLeft = false;
    this->bWasReEntered = false;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnComplete,false);
    return;
  }
  return;
}

// OnMouseMove @ 14303b4a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEyeDropperButton::OnMouseMove
          (SEyeDropperButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FDeprecateSlateVector2D local_res10;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar1) && (this->bWasClickActivated != false)) {
    local_res10 = param_2->ScreenSpacePosition;
    bVar1 = FGeometry::IsUnderLocation(param_1,(FDeprecateVector2DParameter *)&local_res10);
    if (bVar1) {
      if (this->bWasLeft != false) {
        this->bWasReEntered = true;
      }
    }
    else {
      this->bWasLeft = true;
      this->bWasReEntered = false;
    }
  }
  SButton::OnMouseMove((SButton *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnPreTick @ 14303c290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEyeDropperButton::OnPreTick(SEyeDropperButton *this,float param_1)

{
  TOptional<UE::Math::TVector2<double>_> *pTVar1;
  longlong *plVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_68;
  FLinearColor_u_0 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FReadAccessScope local_38 [2];
  
  if (this->bWasClickActivated == false) {
    if ((this->LastCursorPosition).bIsSet != false) {
      (this->LastCursorPosition).bIsSet = false;
    }
    pFVar4 = FSlateApplication::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar4->PreTickEvent,this);
    return;
  }
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (((bVar3) && (this->bWasLeft != false)) && (this->bWasReEntered == false)) {
    pFVar4 = FSlateApplication::Get();
    pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,local_res8);
    pTVar1 = &this->LastCursorPosition;
    local_68._s_0.Y = (double)pfVar5[1];
    local_68._s_0.X = (double)*pfVar5;
    if ((((this->LastCursorPosition).bIsSet == true) &&
        (local_68._s_0.X == (pTVar1->TypedValue).field0_0x0._s_0.X)) &&
       (local_68._s_0.Y == (this->LastCursorPosition).TypedValue.field0_0x0._s_0.Y)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar6 = __real_400ccccd;
      if ((this->DisplayGamma).bIsSet != false) {
        pfVar5 = TAttribute<float>::Get(&this->DisplayGamma);
        fVar6 = *pfVar5;
      }
      FWindowsPlatformApplicationMisc::GetScreenPixelColor
                ((FLinearColor *)&local_58._s_0,(TVector2<double> *)&local_68._s_0,
                 fVar6 * __real_3ee8ba2e);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
                 local_38);
      if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar2 != (longlong *)0x0)) {
        local_48 = local_58._0_8_;
        uStack_40 = local_58._8_8_;
        (**(code **)(*plVar2 + 0x68))(plVar2,&local_48);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
    }
    if (&local_68 != (TVector2<double>_u_0 *)pTVar1) {
      (pTVar1->TypedValue).field0_0x0._s_0.X = local_68._s_0.X;
      (this->LastCursorPosition).TypedValue.field0_0x0._s_0.Y = local_68._s_0.Y;
      (this->LastCursorPosition).bIsSet = true;
    }
  }
  return;
}

// ResetDropperModeStates @ 14303da50

void __thiscall SEyeDropperButton::ResetDropperModeStates(SEyeDropperButton *this)

{
  this->bWasClickActivated = false;
  this->bWasLeft = false;
  this->bWasReEntered = false;
  return;
}

