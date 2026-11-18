// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 5

// Construct @ 145ac4740

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SSimplePreLoadScreenWidget::Construct(SSimplePreLoadScreenWidget *this,FArguments *param_1)

{
  byte *pbVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SScaleBox *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SOverlay *pSVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  SImage *pSVar12;
  FSharedReferencer<1> FVar13;
  FSharedReferencer<1> FVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  FPreLoadSettingsContainerBase *pFVar19;
  FArguments *pFVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget_const_,1> *pTVar22;
  ulong64 uVar23;
  FSlotArguments *pFVar24;
  FArguments *pFVar25;
  FArguments *pFVar26;
  TSharedRef<SScaleBox,1> *pTVar27;
  FArguments *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  TSharedRef<SBox,1> *pTVar31;
  FArguments *pFVar32;
  STextBlock *pSVar33;
  STextBlock *pSVar34;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar35;
  TSharedRef<SVerticalBox,1> *pTVar36;
  FSlotArguments *pFVar37;
  FArguments *pFVar38;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar39;
  TSharedRef<SOverlay,1> *pTVar40;
  SDPIScaler *pSVar41;
  SDPIScaler *pSVar42;
  FSlotArguments *pFVar43;
  longlong *plVar44;
  SSimplePreLoadScreenWidget *pSVar45;
  FSlotArguments *pFVar46;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2728;
  T0RequiredArgs local_2727;
  T0RequiredArgs local_2726;
  T0RequiredArgs local_2725;
  T0RequiredArgs local_2724;
  T0RequiredArgs local_2723;
  T0RequiredArgs local_2722;
  T0RequiredArgs local_2721;
  T0RequiredArgs local_2720 [8];
  SWidget *local_2718;
  TReferenceControllerBase<1> *pTStack_2710;
  FLLMScope local_2708;
  FLLMScope local_2704;
  FLLMScope local_2700;
  FLLMScope local_26fc;
  FLLMScope local_26f8;
  FLLMScope local_26f4;
  FArguments *local_26f0;
  FName local_26e8;
  undefined4 uStack_26e0;
  uint uStack_26dc;
  undefined4 local_26d8;
  undefined1 local_26d4;
  undefined1 local_26d0 [8];
  ForAnyElementType FStack_26c8;
  ulonglong local_26c0;
  SScaleBox *local_26b8;
  FSharedReferencer<1> local_26b0;
  SBox *local_26a8;
  FSharedReferencer<1> local_26a0;
  FArguments *local_2698;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2690;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2678;
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> local_2660;
  SWidget *local_2648;
  TReferenceControllerBase<1> *pTStack_2640;
  TSharedRef<SScaleBox,1> local_2638;
  undefined8 local_2628;
  undefined8 uStack_2620;
  undefined1 local_2618;
  undefined1 local_2610 [8];
  ForAnyElementType FStack_2608;
  ulonglong local_2600;
  float local_25f8;
  float fStack_25f4;
  float fStack_25f0;
  float fStack_25ec;
  uint local_25e8;
  undefined1 local_25e4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_25e0;
  undefined4 local_25c8;
  undefined1 local_25c4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_25c0;
  FName local_25a8;
  FMemScope local_25a0;
  FName local_2598;
  FMemScope local_2590;
  FMemScope local_2588;
  FName local_2580;
  FMemScope local_2578;
  FSlotArguments *local_2570;
  FArguments *local_2568;
  FSlotArguments *local_2560;
  FArguments *local_2558;
  FSlotArguments *local_2550;
  FArguments *local_2548;
  FSlotArguments *local_2540;
  FArguments *local_2538;
  FArguments *local_2530;
  FName local_2528;
  FMemScope local_2520;
  TReferenceControllerBase<1> *local_2518;
  TSharedRef<SWidget,1> local_2510;
  TSharedRef<SWidget,1> local_2500;
  TSharedRef<SWidget,1> local_24f0;
  TSharedRef<SWidget,1> local_24e0;
  TReferenceControllerBase<1> *local_24d0;
  undefined4 local_24c8 [2];
  undefined4 local_24c0 [2];
  FName local_24b8;
  FMemScope local_24b0;
  TAttribute<EStretch::Type> local_24a8;
  TAttribute<float> local_2488;
  TAttribute<float> local_2468;
  FDestructionSentinel local_2448;
  FDestructionSentinel local_2430;
  FDestructionSentinel local_2418;
  undefined1 *local_2400;
  FDestructionSentinel local_23f8;
  undefined1 *local_23e0;
  FDestructionSentinel local_23d8;
  undefined1 *local_23c0;
  FDestructionSentinel local_23b8;
  undefined1 *local_23a0;
  TSharedRef<SVerticalBox,1> local_2398;
  TSharedRef<SOverlay,1> local_2388;
  TSharedRef<SVerticalBox,1> local_2378;
  TSharedRef<SBox,1> local_2368;
  TSharedRef<SScaleBox,1> local_2358;
  TSharedRef<SBox,1> local_2348;
  SWidget *local_2338;
  TReferenceControllerBase<1> *pTStack_2330;
  TSharedRef<SWidget_const_,1> local_2328;
  TSharedRef<SWidget_const_,1> local_2318;
  TSharedRef<SWidget_const_,1> local_2308;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_22f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_22e0;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_22c8;
  TSharedRef<SWidget_const_,1> local_22b0;
  SWidget *local_22a0;
  TReferenceControllerBase<1> *pTStack_2298;
  TSharedRef<SOverlay,1> local_2290;
  longlong local_2280;
  TReferenceControllerBase<1> *pTStack_2278;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2270;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2258;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2240;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2228;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2210;
  undefined1 local_21f8 [96];
  undefined1 local_2198 [96];
  undefined1 local_2138 [96];
  FArguments local_20d8;
  FArguments local_1b80;
  FArguments local_1978;
  FArguments local_1770;
  FArguments local_1568;
  FSlotArguments local_1360;
  FSlotArguments local_1278;
  FSlotArguments local_1190;
  FArguments local_10a8;
  FArguments local_e00;
  FArguments local_bd8;
  FArguments local_948;
  FArguments local_6b8;
  FArguments local_378;
  
  local_378._MaxAspectRatio.Getter._16_8_ = 0x145ac4767;
  pFVar46 = (FSlotArguments *)0x0;
  local_res18[0] = 0;
  pFVar19 = FPreLoadSettingsContainerBase::Get();
  this->TimeToDisplayEachBackground = pFVar19->TimeToDisplayEachBackground;
  pFVar20 = SDPIScaler::FArguments::FArguments(&local_e00);
  (pFVar20->_DPIScale).bIsSet = true;
  local_2530 = pFVar20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_DPIScale).Getter,
             (FWriteAccessScope *)&local_2418);
  local_2400 = &(pFVar20->_DPIScale).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2400);
  pFVar37 = pFVar46;
  pSVar45 = this;
  if (puVar21 != (undefined8 *)0x0) {
    local_2718 = (SWidget *)_vcall__592__flat______;
    pTStack_2710 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2638.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2308);
    pSVar45 = (SSimplePreLoadScreenWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
    }
    *puVar21 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSimplePreLoadScreenWidget___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pSVar45;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar45->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar45->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar21[5] = local_2718;
    puVar21[6] = pTStack_2710;
    pFVar37 = (FSlotArguments *)&DAT_00000007;
  }
  if (((ulonglong)pFVar37 & 4) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (((ulonglong)pFVar37 & 2) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (((ulonglong)pFVar37 & 1) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2308.SharedReferenceCount.ReferenceController);
  }
  if (local_2418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2418.Accessor,&local_2418);
  }
  local_2538 = SOverlay::FArguments::FArguments(&local_1568);
  pFVar24 = SOverlay::Slot((FSlotArguments *)local_2138,0);
  plVar44 = &pFVar24->_padding_;
  if ((longlong *)local_24c8 != plVar44) {
    *(undefined4 *)plVar44 = 0;
    *(undefined1 *)((longlong)&pFVar24->_padding_ + 4) = 1;
  }
  pFVar43 = pFVar46;
  if (plVar44 != (longlong *)0x0) {
    pFVar43 = pFVar24;
  }
  if ((longlong *)local_24c0 != &pFVar43->_padding_) {
    *(undefined4 *)&pFVar43->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar43->_padding_ + 4) = 1;
  }
  local_2540 = pFVar46;
  if (pFVar43 != (FSlotArguments *)0xffffffffffffffb8) {
    local_2540 = pFVar43;
  }
  local_2548 = SVerticalBox::FArguments::FArguments(&local_1770);
  local_2550 = SVerticalBox::Slot(&local_1278);
  local_2698 = (FArguments *)SOverlay::FArguments::FArguments(&local_1978);
  local_26f0 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_2198,0);
  pFVar25 = SScaleBox::FArguments::FArguments(&local_948);
  local_26d4 = 1;
  local_26d8 = 2;
  local_26c0 = 0;
  local_26d0 = (undefined1  [8])0x0;
  FStack_26c8.Data = (FScriptContainerElement *)0x0;
  (pFVar25->_Stretch).Value = ScaleToFit;
  (pFVar25->_Stretch).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Stretch).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_26d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_26d0,
             (FWriteAccessScope *)&local_2448);
  if (((int)local_26c0 != 0) && (FStack_26c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26c8,0,0,0x10);
    local_26c0 = local_26c0 & 0xffffffff00000000;
  }
  if (local_2448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2448.Accessor,&local_2448);
  }
  if (FStack_26c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26d0);
  pFVar26 = SImage::FArguments::FArguments(&local_10a8);
  (pFVar26->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Image).Getter,
             (FWriteAccessScope *)&local_23b8);
  local_23a0 = &(pFVar26->_Image).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_23a0);
  pSVar45 = this;
  if (puVar21 != (undefined8 *)0x0) {
    local_2718 = (SWidget *)GetCurrentBackgroundImage;
    pTStack_2710 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2638.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2328);
    pSVar45 = (SSimplePreLoadScreenWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
    }
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 | 0x38);
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSimplePreLoadScreenWidget___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pSVar45;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar45->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar45->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar21[5] = local_2718;
    puVar21[6] = pTStack_2710;
  }
  if (((ulonglong)pFVar37 & 0x20) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (((ulonglong)pFVar37 & 0x10) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (((ulonglong)pFVar37 & 8) != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2328.SharedReferenceCount.ReferenceController);
  }
  if (local_23b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23b8.Accessor,&local_23b8);
  }
  FLLMScope::FLLMScope(&local_2708,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_24b0,&local_24b8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2690,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x29,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope(&local_24b0);
  FLLMScope::~FLLMScope(&local_2708);
  pSVar12 = local_2690._Widget.Object;
  if ((local_2690._Widget.Object == (SImage *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2690._Widget.Object,(FSlateBaseNamedArgs *)pFVar26);
  SImage::Construct(local_2690._Widget.Object,pFVar26);
  if ((local_2690._Widget.Object == (SImage *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_2690._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)((local_2690._Widget.Object)->_padding_ + 0x228))
                       (local_2690._Widget.Object);
    bVar18 = 0;
    if (cVar17 != '\0') goto LAB_145ac4c6f;
  }
  else {
LAB_145ac4c6f:
    bVar18 = 0x20;
  }
  *(byte *)&(local_2690._Widget.Object)->_padding_ =
       (byte)(local_2690._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2690._Widget.Object)->_padding_ =
       (byte)(local_2690._Widget.Object)->_padding_ | bVar18;
  if ((local_2690._Widget.Object == (SImage *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_2690._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2690._Widget.Object == (SImage *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar13.ReferenceController = local_2690._Widget.SharedReferenceCount.ReferenceController;
  local_2518 = local_2690._Widget.SharedReferenceCount.ReferenceController;
  local_2690._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2690._Widget.Object = (SImage *)0x0;
  if ((pSVar12 == (SImage *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2338 = (pFVar25->_Content).Widget.Object;
  pTStack_2330 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = (SWidget *)pSVar12;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2330);
  FLLMScope::FLLMScope(&local_2704,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25a0,&local_25a8,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_22c8,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x26,local_res20);
  FMemScope::~FMemScope(&local_25a0);
  FLLMScope::~FLLMScope(&local_2704);
  pTVar27 = TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_22c8,&local_2638,pFVar25);
  pFVar25 = local_26f0;
  pTVar3 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_26b8 = pTVar27->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_26b0.ReferenceController = pTVar3;
  if ((SScaleBox **)&local_26f0->_padding_ != &local_26b8) {
    local_26f0->_padding_ = (longlong)local_26b8;
    local_26b8 = (SScaleBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_26f0->_padding_,&local_26b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26b0.ReferenceController);
  local_2558 = SOverlay::FArguments::operator+((FArguments *)local_2698,(FSlotArguments *)pFVar25);
  local_2560 = SOverlay::Slot((FSlotArguments *)local_21f8,0);
  pFVar28 = SVerticalBox::FArguments::FArguments(&local_1b80);
  pFVar29 = SVerticalBox::Slot(&local_1360);
  local_2488.Value = 0.82;
  local_2488.bIsSet = true;
  local_2488.Getter._16_8_ = 0;
  local_2488.Getter._0_8_ = 0;
  local_2488.Getter._8_8_ = 0;
  pFVar29 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar29,&local_2488);
  pFVar30 = SBox::FArguments::FArguments(&local_378);
  FLLMScope::FLLMScope(&local_2700,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2590,&local_2598,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_22e0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x36,&local_2728);
  FMemScope::~FMemScope(&local_2590);
  FLLMScope::~FLLMScope(&local_2700);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_22e0,&local_2348,pFVar30);
  local_26a8 = pTVar31->Object;
  local_26a0.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_26a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_26a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_26a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_26a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_26a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_24d0 = local_26a0.ReferenceController;
  if ((SBox **)&pFVar29->field_0x8 != &local_26a8) {
    *(SBox **)&pFVar29->field_0x8 = local_26a8;
    local_26a8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->field_0x10,&local_26a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a0.ReferenceController);
  local_2568 = SVerticalBox::FArguments::operator+(pFVar28,pFVar29);
  pFVar29 = SVerticalBox::Slot(&local_1190);
  local_2468.Value = 0.18;
  local_2468.bIsSet = true;
  local_2468.Getter._16_8_ = 0;
  local_2468.Getter._0_8_ = 0;
  local_2468.Getter._8_8_ = 0;
  local_2570 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar29,&local_2468);
  local_2698 = SBox::FArguments::FArguments(&local_6b8);
  uStack_2620 = _UNK_1510a13d8;
  local_2628 = ___xmm_40a000004248000040a0000042480000;
  local_2698->_VAlign = VAlign_Center;
  local_2698->_HAlign = HAlign_Center;
  uVar15 = ___xmm_40a000004248000040a0000042480000;
  local_2618 = 1;
  local_2600 = 0;
  local_2610 = (undefined1  [8])0x0;
  FStack_2608.Data = (FScriptContainerElement *)0x0;
  ___xmm_40a000004248000040a0000042480000 = (undefined4)local_2628;
  _UNK_1510a13d4 = SUB84(local_2628,4);
  uVar11 = _UNK_1510a13d4;
  (local_2698->_Padding).Value.Left = (float)___xmm_40a000004248000040a0000042480000;
  ___xmm_40a000004248000040a0000042480000 = uVar15;
  uVar15 = _UNK_1510a13d8;
  (local_2698->_Padding).Value.Top = (float)uVar11;
  _UNK_1510a13d8 = (undefined4)uStack_2620;
  _UNK_1510a13dc = SUB84(uStack_2620,4);
  uVar11 = _UNK_1510a13dc;
  (local_2698->_Padding).Value.Right = (float)_UNK_1510a13d8;
  _UNK_1510a13d8 = uVar15;
  (local_2698->_Padding).Value.Bottom = (float)uVar11;
  (local_2698->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_2698->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2610);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2610,
             (FWriteAccessScope *)&local_2430);
  if (((int)local_2600 != 0) && (FStack_2608.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2608.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2608,0,0,0x10);
    local_2600 = local_2600 & 0xffffffff00000000;
  }
  if (local_2430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2430.Accessor,&local_2430);
  }
  if (FStack_2608.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2608.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2610);
  pFVar25 = SScaleBox::FArguments::FArguments(&local_bd8);
  local_24a8.Value = ScaleToFit;
  local_24a8.bIsSet = true;
  local_24a8.Getter._16_8_ = 0;
  local_24a8.Getter._0_8_ = 0;
  local_24a8.Getter._8_8_ = 0;
  local_26f0 = SScaleBox::FArguments::Stretch(pFVar25,&local_24a8);
  pFVar32 = STextBlock::FArguments::FArguments(&local_20d8);
  local_25c4 = 1;
  local_25c8 = 1;
  local_25c0._16_8_ = 0;
  local_25c0._0_8_ = 0;
  local_25c0._8_8_ = 0;
  (pFVar32->_Justification).Value = Center;
  (pFVar32->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Justification).Getter,
             &local_25c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_25c0)
  ;
  (pFVar32->_Font).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Font).Getter,
             (FWriteAccessScope *)&local_23d8);
  local_23c0 = &(pFVar32->_Font).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_23c0);
  pSVar45 = this;
  if (puVar21 != (undefined8 *)0x0) {
    uStack_26dc = local_2638.SharedReferenceCount.ReferenceController._4_4_;
    local_26e8 = (FName)GetTextFont;
    uStack_26e0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2318);
    pSVar45 = (SSimplePreLoadScreenWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
    }
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 | 0x1c0);
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSimplePreLoadScreenWidget___00__A6A_AUFSlateFontInfo__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pSVar45;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar45->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar45->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_26e8;
    puVar21[6] = CONCAT44(uStack_26dc,uStack_26e0);
  }
  if ((uint)pFVar37 >> 8 != 0) {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if ((char)pFVar37 < '\0') {
    pFVar37 = (FSlotArguments *)(ulonglong)((uint)pFVar37 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (((ulonglong)pFVar37 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2318.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  bVar16 = false;
  if (local_23d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23d8.Accessor,&local_23d8);
  }
  (pFVar32->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Text).Getter,
             (FWriteAccessScope *)&local_23f8);
  local_23e0 = &(pFVar32->_Text).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_23e0);
  pSVar45 = this;
  if (puVar21 != (undefined8 *)0x0) {
    uStack_26dc = local_2638.SharedReferenceCount.ReferenceController._4_4_;
    local_26e8 = (FName)GetCurrentScreenText;
    uStack_26e0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_22b0);
    pSVar45 = (SSimplePreLoadScreenWidget *)(pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar45->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar45->_padding_ + 1);
      UNLOCK();
    }
    bVar10 = true;
    bVar9 = true;
    bVar16 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSimplePreLoadScreenWidget___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pSVar45;
    if (pSVar45 != (SSimplePreLoadScreenWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar45->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar45->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_26e8;
    puVar21[6] = CONCAT44(uStack_26dc,uStack_26e0);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar45);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_22b0.SharedReferenceCount.ReferenceController);
  }
  if (local_23f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_23f8.Accessor,&local_23f8);
  }
  local_25e8 = local_25e8 & 0xffffff00;
  local_25e4 = 1;
  local_25e0._0_8_ = 0;
  local_25e0._8_8_ = 0;
  local_25f8 = (float)((uint)FColor::White.field0_0x0 >> 0x10 & 0xff) * __real_3b808081;
  local_25e0._16_8_ = 0;
  fStack_25f4 = (float)((uint)FColor::White.field0_0x0 >> 8 & 0xff) * __real_3b808081;
  fStack_25f0 = (float)((uint)FColor::White.field0_0x0 & 0xff) * __real_3b808081;
  fStack_25ec = (float)((uint)FColor::White.field0_0x0 >> 0x18) * __real_3b808081;
  (pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.R = local_25f8;
  (pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.G = fStack_25f4;
  (pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.B = fStack_25f0;
  (pFVar32->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.A = fStack_25ec;
  (pFVar32->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_25e8;
  (pFVar32->_ColorAndOpacity).Value.ColorTableId = local_25e8._1_1_;
  *(undefined2 *)&(pFVar32->_ColorAndOpacity).Value.field_0x12 = local_25e8._2_2_;
  (pFVar32->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_ColorAndOpacity).Getter,
             &local_25e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_25e0)
  ;
  FLLMScope::FLLMScope(&local_26fc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_26e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2588,&local_26e8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2678,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x45,&local_2727);
  FMemScope::~FMemScope(&local_2588);
  FLLMScope::~FLLMScope(&local_26fc);
  pSVar33 = TSharedPtr<STextBlock,1>::operator->(&local_2678._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar33,(FSlateBaseNamedArgs *)pFVar32);
  pSVar33 = local_2678._Widget.Object;
  STextBlock::Construct(local_2678._Widget.Object,pFVar32);
  pSVar34 = TSharedPtr<STextBlock,1>::operator->(&local_2678._Widget);
  if ((pSVar34->_padding_ & 0x10) == 0) {
    cVar17 = (**(code **)(pSVar34->_padding_ + 0x228))(pSVar34);
    bVar18 = 0;
    if (cVar17 == '\0') goto LAB_145ac5587;
  }
  bVar18 = 0x20;
LAB_145ac5587:
  *(byte *)&pSVar34->_padding_ = (byte)pSVar34->_padding_ & 0xdf;
  *(byte *)&pSVar34->_padding_ = (byte)pSVar34->_padding_ | bVar18;
  pSVar34 = TSharedPtr<STextBlock,1>::operator->(&local_2678._Widget);
  pbVar1 = (byte *)((longlong)&pSVar34->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2678._Widget.Object == (STextBlock *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar13.ReferenceController = local_2678._Widget.SharedReferenceCount.ReferenceController;
  local_2678._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2678._Widget.Object = (STextBlock *)0x0;
  if ((pSVar33 == (STextBlock *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar25 = local_26f0;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_22a0 = (local_26f0->_Content).Widget.Object;
  pTStack_2298 = (local_26f0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_26f0->_Content).Widget.Object = (SWidget *)pSVar33;
  (local_26f0->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2298);
  FLLMScope::FLLMScope(&local_26f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2580 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2578,&local_2580,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_22f8,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x42,&local_2726);
  FMemScope::~FMemScope(&local_2578);
  FLLMScope::~FLLMScope(&local_26f8);
  pTVar27 = TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_22f8,&local_2358,pFVar25);
  pFVar30 = local_2698;
  pTVar4 = (pTVar27->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar27->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2648 = (local_2698->_Content).Widget.Object;
  pTStack_2640 = (local_2698->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2698->_Content).Widget.Object = (SWidget *)pSVar5;
  (local_2698->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2640);
  this_00 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_2228,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
                       ,0x3d,&local_2725);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_2368,pFVar30);
  local_24e0.Object = (SWidget *)pTVar31->Object;
  local_24e0.SharedReferenceCount.ReferenceController =
       (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_24e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_24e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_24e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2570,&local_24e0);
  pFVar28 = SVerticalBox::FArguments::operator+(local_2568,pFVar29);
  pTVar35 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2210,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
                       ,0x31,&local_2724);
  pTVar36 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar35,&local_2378,pFVar28);
  local_24f0.Object = (SWidget *)pTVar36->Object;
  local_24f0.SharedReferenceCount.ReferenceController =
       (pTVar36->SharedReferenceCount).ReferenceController;
  if (local_24f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_24f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_24f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2560,&local_24f0);
  pFVar38 = SOverlay::FArguments::operator+(local_2558,pFVar37);
  pTVar39 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2270,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
                       ,0x21,&local_2723);
  pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar39,&local_2388,pFVar38);
  local_2500.Object = (SWidget *)pTVar40->Object;
  local_2500.SharedReferenceCount.ReferenceController =
       (pTVar40->SharedReferenceCount).ReferenceController;
  if (local_2500.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2500.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2500.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar29 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2550,&local_2500);
  pFVar28 = SVerticalBox::FArguments::operator+(local_2548,pFVar29);
  pTVar35 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2258,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
                       ,0x1d,&local_2722);
  pTVar36 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar35,&local_2398,pFVar28);
  local_2510.Object = (SWidget *)pTVar36->Object;
  local_2510.SharedReferenceCount.ReferenceController =
       (pTVar36->SharedReferenceCount).ReferenceController;
  if (local_2510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2540,&local_2510);
  pFVar38 = SOverlay::FArguments::operator+(local_2538,pFVar37);
  pTVar39 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2240,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
                       ,0x17,&local_2721);
  pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar39,&local_2290,pFVar38);
  pFVar20 = local_2530;
  pTVar6 = (pTVar40->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar40->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2718 = (local_2530->_Content).Widget.Object;
  pTStack_2710 = (local_2530->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2530->_Content).Widget.Object = (SWidget *)pSVar7;
  (local_2530->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2710);
  FLLMScope::FLLMScope(&local_26f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2528 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2520,&local_2528,true);
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
            (&local_2660,"SDPIScaler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\SimplePreLoadScreenWidget.cpp"
             ,0x14,local_2720);
  FMemScope::~FMemScope(&local_2520);
  FLLMScope::~FLLMScope(&local_26f4);
  pSVar41 = TSharedPtr<SDPIScaler,1>::operator->(&local_2660._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar41,(FSlateBaseNamedArgs *)pFVar20);
  pSVar41 = local_2660._Widget.Object;
  SDPIScaler::Construct(local_2660._Widget.Object,pFVar20);
  pSVar42 = TSharedPtr<SDPIScaler,1>::operator->(&local_2660._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar42);
  pSVar42 = TSharedPtr<SDPIScaler,1>::operator->(&local_2660._Widget);
  pbVar1 = (byte *)((longlong)&pSVar42->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2660._Widget.Object == (SDPIScaler *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar14.ReferenceController = local_2660._Widget.SharedReferenceCount.ReferenceController;
  local_2660._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2660._Widget.Object = (SDPIScaler *)0x0;
  if ((pSVar41 == (SDPIScaler *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar44 = &this->_padding_;
  if (FVar14.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar44);
  }
  else {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar44);
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2280 = this->_padding_;
  pTStack_2278 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar41;
  this->_padding_ = (longlong)FVar14.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2278);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar44);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2660._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2240._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2510.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2258._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2500.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2388.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2270._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2378.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2210._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2228._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2358.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2678._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._OnDoubleClicked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20d8._LineBreakPolicy.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._Justification.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_20d8._ApplyLineHeightToBottomLine.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._LineHeightPercentage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._Margin.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._TransformPolicy.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._WrappingPolicy.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._AutoWrapText.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._WrapTextAt.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._HighlightText.Getter);
  if (local_20d8._HighlightText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20d8._HighlightText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._HighlightShape.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._HighlightColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._ShadowColorAndOpacity.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._ShadowOffset.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._StrikeBrush.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._Font.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20d8._Font.Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20d8._Text.Getter);
  if (local_20d8._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20d8._Text.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_20d8);
  SScaleBox::FArguments::~FArguments(&local_bd8);
  SBox::FArguments::~FArguments(&local_6b8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1190);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_24d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2348.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22e0._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_378);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1360);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1b80._Slots.AllocatorInstance.Data,local_1b80._Slots.ArrayNum);
  if ((FSlotArguments *)local_1b80._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1b80._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1b80);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_21f8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_21f8._16_8_);
  if ((undefined8 *)local_21f8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_21f8._0_8_)(local_21f8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_2638.SharedReferenceCount.ReferenceController._4_4_,
                      local_2638.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2518);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2690._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10a8._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10a8._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10a8._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10a8._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_10a8);
  SScaleBox::FArguments::~FArguments(&local_948);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2198 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2198._16_8_);
  if ((undefined8 *)local_2198._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2198._0_8_)(local_2198._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1978._Slots.AllocatorInstance.Data,local_1978._Slots.ArrayNum);
  if ((FSlotArguments *)local_1978._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1978._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1978);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1278);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1770._Slots.AllocatorInstance.Data,local_1770._Slots.ArrayNum);
  if ((FSlotArguments *)local_1770._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1770._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1770);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_2138 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2138._16_8_);
  if ((undefined8 *)local_2138._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2138._0_8_)(local_2138._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1568._Slots.AllocatorInstance.Data,local_1568._Slots.ArrayNum);
  if ((FSlotArguments *)local_1568._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1568._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1568);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e00._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e00._DPIScale.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e00);
  return;
}

// GetCurrentBackgroundImage @ 145ac94b0

FSlateBrush * __thiscall
SSimplePreLoadScreenWidget::GetCurrentBackgroundImage(SSimplePreLoadScreenWidget *this)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  bool bVar2;
  bool bVar3;
  FPreLoadSettingsContainerBase *pFVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  FSlateBrush *pFVar7;
  longlong lVar8;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  FString local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&BackgroundImageCrit);
  pFVar4 = FPreLoadSettingsContainerBase::Get();
  puVar5 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,CurrentBackgroundImage);
  if (puVar5 == (undefined8 *)0x0) {
    pFVar6 = ::FString::FString(&local_18,L"");
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_38.Data.ArrayMax = 0;
      pFVar6 = &local_38;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      pFVar6 = &local_38;
      bVar3 = true;
      bVar2 = false;
    }
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = (pFVar6->Data).ArrayNum;
  lVar8 = (longlong)local_20;
  _Src_00 = (pFVar6->Data).AllocatorInstance.Data;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src_00,lVar8 * 2);
  }
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPreLoadSettingsContainerBase::Get();
  pFVar7 = (FSlateBrush *)(**(code **)(pFVar4->_padding_ + 8))(pFVar4,&local_28);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&BackgroundImageCrit);
  return pFVar7;
}

// GetCurrentScreenText @ 145ac9660

FText * __thiscall
SSimplePreLoadScreenWidget::GetCurrentScreenText
          (SSimplePreLoadScreenWidget *this,FText *__return_storage_ptr__)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *_Src_00;
  bool bVar2;
  bool bVar3;
  FPreLoadSettingsContainerBase *pFVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&BackgroundImageCrit);
  pFVar4 = FPreLoadSettingsContainerBase::Get();
  lVar5 = (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,CurrentBackgroundImage);
  if (lVar5 == 0) {
    pFVar6 = ::FString::FString(&local_28,L"");
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x18);
    _Src = *(void **)(lVar5 + 0x10);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_48.Data.ArrayMax = 0;
      pFVar6 = &local_48;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      pFVar6 = &local_48;
      bVar3 = true;
      bVar2 = false;
    }
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (pFVar6->Data).ArrayNum;
  lVar5 = (longlong)local_30;
  _Src_00 = (pFVar6->Data).AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src_00,lVar5 * 2);
  }
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar4 = FPreLoadSettingsContainerBase::Get();
  (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,__return_storage_ptr__,&local_38);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&BackgroundImageCrit);
  return __return_storage_ptr__;
}

// GetFontInfo @ 145ac9970

FSlateFontInfo * __thiscall
SSimplePreLoadScreenWidget::GetFontInfo
          (SSimplePreLoadScreenWidget *this,FSlateFontInfo *__return_storage_ptr__,FString *param_1,
          float param_2)

{
  FPreLoadSettingsContainerBase *pFVar1;
  undefined8 *puVar2;
  FName local_res10 [3];
  TSharedPtr<FCompositeFont_const_,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  FFontOutlineSettings local_38;
  
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.OutlineSize = 0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  pFVar1 = FPreLoadSettingsContainerBase::Get();
  puVar2 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,local_48,param_1);
  local_58.Object = (FCompositeFont *)*puVar2;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar2[1];
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,&local_58,param_2,local_res10,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return __return_storage_ptr__;
}

// GetTextFont @ 145aca450

FSlateFontInfo * __thiscall
SSimplePreLoadScreenWidget::GetTextFont
          (SSimplePreLoadScreenWidget *this,FSlateFontInfo *__return_storage_ptr__)

{
  FPreLoadSettingsContainerBase *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  FName local_res10 [3];
  TSharedPtr<FCompositeFont_const_,1> local_68;
  FString local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  FFontOutlineSettings local_38;
  
  pFVar1 = FPreLoadSettingsContainerBase::Get();
  lVar2 = (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,CurrentBackgroundImage);
  if (lVar2 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x20);
  }
  ::FString::FString(&local_58,"Main-new");
  local_38.OutlineSize = 0;
  local_38.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_38.bMiteredCorners = false;
  local_38.bSeparateFillAlpha = false;
  local_38.bApplyOutlineToDropShadows = false;
  local_38.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  pFVar1 = FPreLoadSettingsContainerBase::Get();
  puVar3 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,local_48,&local_58);
  local_68.Object = (FCompositeFont *)*puVar3;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar3[1];
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,&local_68,fVar4,local_res10,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

