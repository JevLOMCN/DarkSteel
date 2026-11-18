// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 5

// FStreamingPauseRenderingModule @ 146c82630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FStreamingPauseRenderingModule * __thiscall
FStreamingPauseRenderingModule::FStreamingPauseRenderingModule(FStreamingPauseRenderingModule *this)

{
  this->_padding_ = (longlong)&___7FStreamingPauseRenderingModule__6B_;
  (this->SceneViewport).Object = (FSceneViewport *)0x0;
  (this->SceneViewport).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ViewportWidget).Object = (SViewport *)0x0;
  (this->ViewportWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BackgroundView).Object = (FBackgroundView *)0x0;
  (this->BackgroundView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->BeginDelegate = 0;
  *(undefined8 *)&(this->BeginDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->BeginDelegate).field_0x10 = 0;
  *(undefined8 *)&this->EndDelegate = 0;
  *(undefined8 *)&(this->EndDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EndDelegate).field_0x10 = 0;
  this->bMovieWasStarted = false;
  return this;
}

// BeginStreamingPause @ 146c829a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamingPauseRenderingModule::BeginStreamingPause
          (FStreamingPauseRenderingModule *this,FViewport *param_1)

{
  byte *pbVar1;
  TSharedPtr<SViewport,1> *this_00;
  int *piVar2;
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FViewportClient *pFVar5;
  FCommandList *pFVar6;
  FRHITexture *this_01;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TIntPoint<int>_u_0 TVar9;
  TConsoleVariableData<int> *pTVar10;
  FSharedReferencer<1> FVar11;
  SVerticalBox *pSVar12;
  FSharedReferencer<1> FVar13;
  SThrobber *pSVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  IGameMoviePlayer *pIVar21;
  FArguments *pFVar22;
  FArguments *pFVar23;
  FSlot *this_02;
  FArguments *pFVar24;
  FSceneViewport *pFVar25;
  longlong lVar26;
  UWorld *pUVar27;
  FRenderCommandList *this_03;
  FRenderCommandTag *pFVar28;
  FBackgroundView *pFVar29;
  FSceneViewport *pFVar30;
  TRefCountPtr<FRHITexture> *pTVar31;
  TRawPtrProxy<FBackgroundView> TVar32;
  FSlateRenderTargetRHI *pFVar33;
  SViewport *pSVar34;
  undefined ***pppuVar35;
  FRenderResource *pFVar36;
  FSceneViewport *pFVar37;
  ulonglong uVar38;
  uint uVar39;
  undefined1 auStackY_b68 [32];
  T0RequiredArgs local_b18;
  T0RequiredArgs local_b17;
  T0RequiredArgs local_b16 [6];
  uint local_b10;
  int iStack_b0c;
  FLLMScope local_b08;
  FLLMScope local_b04;
  FLLMScope local_b00 [2];
  TIntPoint<int>_u_0 local_af8;
  TRawPtrProxy<FBackgroundView> local_af0;
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs> local_ae8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ad0;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_ab8;
  TSharedPtr<SViewport,1> local_aa0;
  SViewport *local_a90;
  FSharedReferencer<1> local_a88;
  FString *pFStack_a80;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined1 local_a6c;
  undefined4 local_a6b;
  undefined1 local_a67;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined1 local_a50;
  undefined1 local_a48 [8];
  ForAnyElementType FStack_a40;
  ulonglong local_a38;
  undefined8 local_a30;
  FSharedReferencer<1> local_a28;
  undefined1 local_a20 [8];
  undefined8 uStack_a18;
  FSharedReferencer<1> aFStack_a10 [3];
  undefined1 local_9f8;
  undefined1 local_9f0 [8];
  ForAnyElementType FStack_9e8;
  ulonglong local_9e0;
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined4 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9b8 [32];
  undefined1 local_998 [24];
  char local_980;
  undefined4 local_978;
  undefined1 local_974;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_970;
  ForAnyElementType FStack_968;
  ulonglong local_960;
  undefined4 local_958;
  undefined1 local_954;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_950;
  ForAnyElementType FStack_948;
  ulonglong local_940;
  FMemScope local_938;
  TRawPtrProxy<FSceneViewport> local_930;
  undefined8 local_928;
  FSharedReferencer<1> local_920;
  FName local_918;
  FMemScope local_910;
  FName local_908;
  FMemScope local_900;
  FName local_8f8;
  TSharedPtr<SViewport,1> local_8f0;
  TSharedRef<ISlateViewport,1> local_8e0;
  TSharedPtr<SWidget,1> local_8d0;
  FDestructionSentinel local_8c0;
  FDestructionSentinel local_8a8;
  FDestructionSentinel local_890;
  FDestructionSentinel local_878;
  TRefCountPtr<FRHITexture> local_860;
  undefined1 local_858 [528];
  undefined1 local_648 [40];
  FSharedReferencer<1> local_620;
  undefined1 local_600 [24];
  FArguments local_5e8;
  FArguments local_3e0;
  code *local_1d8 [2];
  undefined **local_1c8;
  FSceneViewport *pFStack_1c0;
  undefined8 local_1b8;
  undefined ***local_1b0;
  undefined1 local_1a8 [16];
  undefined **local_198;
  FSceneViewport *pFStack_190;
  undefined8 local_188;
  undefined ***local_180;
  byte local_178;
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b68;
  bVar15 = IsMoviePlayerEnabled();
  if (!bVar15) {
    return;
  }
  pIVar21 = GetMoviePlayer();
  cVar16 = (**(code **)((longlong)*pIVar21 + 0x40))(pIVar21);
  if (cVar16 == '\0') {
    return;
  }
  pIVar21 = GetMoviePlayer();
  cVar16 = (**(code **)((longlong)*pIVar21 + 0x68))(pIVar21);
  if (cVar16 != '\0') {
    return;
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId101,"FStreamingPauseRenderingModule::BeginStreamingPause",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
               ,0x65);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId101);
  }
  if ((param_1 == (FViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GameViewport",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                          ,0x67,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar22 = SViewport::FArguments::FArguments((FArguments *)local_858);
  pFVar22->_EnableGammaCorrection = false;
  FLLMScope::FLLMScope(&local_b08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_918 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_910,&local_918,true);
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SViewport,RequiredArgs::T0RequiredArgs>
            (&local_ae8,"SViewport",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
             ,0x6a,&local_b18);
  FMemScope::~FMemScope(&local_910);
  FLLMScope::~FLLMScope(&local_b08);
  pSVar34 = local_ae8._Widget.Object;
  if ((local_ae8._Widget.Object == (SViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_ae8._Widget.Object,(FSlateBaseNamedArgs *)pFVar22);
  SViewport::Construct(local_ae8._Widget.Object,pFVar22);
  if ((local_ae8._Widget.Object == (SViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_ae8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_ae8._Widget.Object)->_padding_ + 0x228))(local_ae8._Widget.Object);
    bVar18 = 0;
    if (cVar16 != '\0') goto LAB_146c82bc6;
  }
  else {
LAB_146c82bc6:
    bVar18 = 0x20;
  }
  *(byte *)&(local_ae8._Widget.Object)->_padding_ =
       (byte)(local_ae8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ae8._Widget.Object)->_padding_ =
       (byte)(local_ae8._Widget.Object)->_padding_ | bVar18;
  if ((local_ae8._Widget.Object == (SViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_ae8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_ae8._Widget.Object == (SViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar11.ReferenceController = local_ae8._Widget.SharedReferenceCount.ReferenceController;
  local_ae8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ae8._Widget.Object = (SViewport *)0x0;
  if ((pSVar34 == (SViewport *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_aa0.Object = pSVar34;
  local_aa0.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->ViewportWidget;
  if (this_00 != &local_aa0) {
    local_aa0.Object = (SViewport *)0x0;
    this_00->Object = pSVar34;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewportWidget).SharedReferenceCount,&local_aa0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_600);
  if ((void *)local_600._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_600._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_600);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_620.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  if ((void *)local_648._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_648._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_858._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_858);
  local_af8 = (TIntPoint<int>_u_0)TSharedPtr<SViewport,1>::operator->(this_00);
  pFVar23 = SVerticalBox::FArguments::FArguments(&local_5e8);
  this_02 = ::operator_new(0x58);
  if (this_02 == (FSlot *)0x0) {
    local_a20 = (undefined1  [8])0x0;
LAB_146c82da4:
    aFStack_a10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    uStack_a18 = (SThrobber *)0x0;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Slot.Get()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                        ,0x9b,L"");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
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
    local_a20 = (undefined1  [8])SVerticalBox::FSlot::FSlot(this_02);
    uStack_a18 = (SThrobber *)0x0;
    aFStack_a10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (local_a20 == (undefined1  [8])0x0) goto LAB_146c82da4;
  }
  local_9d0 = 3;
  local_9e0 = 0;
  local_960 = 0;
  local_940 = 0;
  local_a38 = 0;
  local_9f0 = (undefined1  [8])0x0;
  FStack_9e8.Data = (FScriptContainerElement *)0x0;
  local_980 = '\0';
  local_978 = 0;
  local_974 = 0;
  local_970.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_968.Data = (FScriptContainerElement *)0x0;
  local_958 = 0;
  local_954 = 0;
  local_950.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_948.Data = (FScriptContainerElement *)0x0;
  local_9cc = 1;
  local_9d8 = 3;
  local_9d4 = 1;
  local_a60 = ___xmm_41200000412000004120000041200000;
  uStack_a58 = _UNK_15076c1d8;
  local_a50 = 1;
  local_a48 = (undefined1  [8])0x0;
  FStack_a40.Data = (FScriptContainerElement *)0x0;
  local_9f8 = 1;
  aFStack_a10[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_41200000412000004120000041200000;
  aFStack_a10[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_15076c1d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a48,
             (FWriteAccessScope *)&local_8c0);
  if (((int)local_a38 != 0) && (FStack_a40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a40,0,0,0x10);
    local_a38 = local_a38 & 0xffffffff00000000;
  }
  if (local_8c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8c0.Accessor,&local_8c0);
  }
  if (FStack_a40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a48);
  pFVar24 = SThrobber::FArguments::FArguments(&local_3e0);
  FLLMScope::FLLMScope(&local_b04,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_908 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_900,&local_908,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_ab8,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
             ,0x75,&local_b17);
  FMemScope::~FMemScope(&local_900);
  FLLMScope::~FLLMScope(&local_b04);
  pSVar14 = local_ab8._Widget.Object;
  if ((local_ab8._Widget.Object == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_ab8._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  SThrobber::Construct(local_ab8._Widget.Object,pFVar24);
  if ((local_ab8._Widget.Object == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_ab8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)((local_ab8._Widget.Object)->_padding_ + 0x228))(local_ab8._Widget.Object);
    bVar18 = 0;
    if (cVar16 != '\0') goto LAB_146c8301a;
  }
  else {
LAB_146c8301a:
    bVar18 = 0x20;
  }
  *(byte *)&(local_ab8._Widget.Object)->_padding_ =
       (byte)(local_ab8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ab8._Widget.Object)->_padding_ =
       (byte)(local_ab8._Widget.Object)->_padding_ | bVar18;
  if ((local_ab8._Widget.Object == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_ab8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_ab8._Widget.Object == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar11.ReferenceController = local_ab8._Widget.SharedReferenceCount.ReferenceController;
  local_ab8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ab8._Widget.Object = (SThrobber *)0x0;
  if ((pSVar14 == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_a28.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_a18 = pSVar14;
  local_a30 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_a10,&local_a28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a28.ReferenceController);
  pTVar3 = &pFVar23->_Slots;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_a20) &&
      ((FScriptContainerElement *)local_a20 < pFVar4 + (longlong)(pFVar23->_Slots).ArrayMax * 0xe8))
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar19 = (pFVar23->_Slots).ArrayNum;
  piVar2 = &(pFVar23->_Slots).ArrayMax;
  if (iVar19 == *piVar2) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar23->_Slots).ArrayNum = iVar19 + 1;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0xe8),
             (FSlotArguments *)local_a20);
  FLLMScope::FLLMScope(local_b00,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_8f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_938,&local_8f8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_ad0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
             ,0x6f,local_b16);
  FMemScope::~FMemScope(&local_938);
  FLLMScope::~FLLMScope(local_b00);
  pSVar12 = local_ad0._Widget.Object;
  if ((local_ad0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_ad0._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
  SVerticalBox::Construct(local_ad0._Widget.Object,pFVar23);
  if ((local_ad0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((local_ad0._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar16 = (**(code **)(*(longlong *)local_ad0._Widget.Object + 0x228))(local_ad0._Widget.Object);
    bVar18 = 0;
    if (cVar16 == '\0') goto LAB_146c832a6;
  }
  bVar18 = 0x20;
LAB_146c832a6:
  (local_ad0._Widget.Object)->field_0x30 = (local_ad0._Widget.Object)->field_0x30 & 0xdf;
  (local_ad0._Widget.Object)->field_0x30 = (local_ad0._Widget.Object)->field_0x30 | bVar18;
  if ((local_ad0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (local_ad0._Widget.Object)->field_0x31 = (local_ad0._Widget.Object)->field_0x31 | 4;
  if ((local_ad0._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar13.ReferenceController = local_ad0._Widget.SharedReferenceCount.ReferenceController;
  local_ad0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ad0._Widget.Object = (SVerticalBox *)0x0;
  if ((pSVar12 == (SVerticalBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_8d0.Object = (SWidget *)pSVar12;
  local_8d0.SharedReferenceCount.ReferenceController = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SViewport::SetContent((SViewport *)local_af8,&local_8d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_950,(FWriteAccessScope *)&local_8a8);
  if (((int)local_940 != 0) && (FStack_948.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_948.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_948,0,0,0x10);
    local_940 = local_940 & 0xffffffff00000000;
  }
  pFVar30 = (FSceneViewport *)0x0;
  if (local_8a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8a8.Accessor,&local_8a8);
  }
  if (FStack_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_948.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_950.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_970,(FWriteAccessScope *)&local_890);
  if (((int)local_960 != 0) && (FStack_968.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_968.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_968,0,0,0x10);
    local_960 = local_960 & 0xffffffff00000000;
  }
  if (local_890.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_890.Accessor,&local_890);
  }
  if (FStack_968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_968.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_970.AccessDetector);
  if (local_980 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_998);
    if ((void *)local_998._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_998._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_998);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
    if ((void *)local_9b8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_9b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
             (FWriteAccessScope *)&local_878);
  if (((int)local_9e0 != 0) && (FStack_9e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9e8,0,0,0x10);
    local_9e0 = local_9e0 & 0xffffffff00000000;
  }
  if (local_878.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_878.Accessor,&local_878);
  }
  if (FStack_9e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_a10[0].ReferenceController);
  if (local_a20 != (undefined1  [8])0x0) {
    (*(code *)**(undefined8 **)local_a20)(local_a20,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5e8._Slots.AllocatorInstance.Data,local_5e8._Slots.ArrayNum);
  if ((FSlotArguments *)local_5e8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5e8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5e8);
  (**(code **)(param_1->_padding_ + 0x28))(param_1);
  pTVar10 = CVarRenderLastFrameInStreamingPause.Ref;
  bVar17 = IsInParallelGameThread();
  if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((pTVar10->ShadowedValue[0] == 0) ||
     (((GEngine->StereoRenderingDevice).Object != (IStereoRendering *)0x0 &&
      (cVar16 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1), cVar16 != '\0')))) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (((0 < (int)local_b10) && (0 < iStack_b0c)) && (bVar17)) {
    pFVar5 = param_1->ViewportClient;
    pFVar25 = ::operator_new(0x328);
    local_930.Object = pFVar30;
    if (pFVar25 != (FSceneViewport *)0x0) {
      local_8f0.Object = (this->ViewportWidget).Object;
      local_8f0.SharedReferenceCount.ReferenceController =
           (this->ViewportWidget).SharedReferenceCount.ReferenceController;
      if (local_8f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_8f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_8f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_930.Object = FSceneViewport::FSceneViewport(pFVar25,pFVar5,&local_8f0);
    }
    TSharedPtr<FSceneViewport,1>::operator=<FSceneViewport>(&this->SceneViewport,&local_930);
    pFVar25 = TSharedPtr<FSceneViewport,1>::operator->(&this->SceneViewport);
    (**(code **)(pFVar25->_padding_ + 0x1e8))(&pFVar25->_padding_,0,local_b10,iStack_b0c);
    pFVar25 = TSharedPtr<FSceneViewport,1>::operator->(&this->SceneViewport);
    (**(code **)(pFVar25->_padding_ + 0x178))(&pFVar25->_padding_,0);
    lVar26 = (**(code **)((longlong)*pFVar5 + 0x30))(pFVar5);
    bVar18 = *(byte *)(lVar26 + 0x188);
    pUVar27 = (UWorld *)(**(code **)((longlong)*pFVar5 + 0x30))(pFVar5);
    pFVar25 = (this->SceneViewport).Object;
    pFVar37 = (FSceneViewport *)&pFVar25->_padding_;
    if (pFVar25 == (FSceneViewport *)0x0) {
      pFVar37 = pFVar30;
    }
    FCanvas::FCanvas(&local_168,(FRenderTarget *)pFVar37,(FHitProxyConsumer *)0x0,pUVar27,
                     (uint)bVar18,CDM_DeferDrawing,__real_3f800000);
    pFVar25 = (this->SceneViewport).Object;
    pFVar37 = (FSceneViewport *)&pFVar25->_padding_;
    if (pFVar25 == (FSceneViewport *)0x0) {
      pFVar37 = pFVar30;
    }
    (**(code **)((longlong)*pFVar5 + 0x20))(pFVar5,pFVar37,&local_168);
    FCanvas::Flush_GameThread(&local_168,false);
    pFVar25 = (this->SceneViewport).Object;
    local_1c8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStreamingPauseRenderingModule::BeginStreamingPause'::`15'::<lambda_1>,1,0>
                 ::_vftable_;
    local_1b0 = (undefined ***)0x0;
    pFStack_1c0 = (FSceneViewport *)&pFVar25->_padding_;
    if (pFVar25 == (FSceneViewport *)0x0) {
      pFStack_1c0 = pFVar30;
    }
    local_1d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    this_03 = FRenderCommandList::GetInstanceTLS();
    if (this_03 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStreamingPauseRenderingModule::BeginStreamingPause_::__l15::TSTR_EndDrawingCommand143>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1d8);
    }
    else {
      if (this_03->bInitialized == 0) {
        FRenderCommandList::Init(this_03);
      }
      iVar19 = (this_03->CommandLists).ArrayNum;
      uVar39 = iVar19 - 1;
      uVar20 = 0;
      if ((int)uVar39 < iVar19) {
        uVar20 = ~uVar39 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar19 = (this_03->CommandLists).ArrayNum;
      local_198 = local_1c8;
      pFStack_190 = pFStack_1c0;
      local_188 = local_1b8;
      local_178 = 2;
      pFVar6 = (this_03->CommandLists).AllocatorInstance.Data;
      local_1a8._0_8_ = local_1d8[0];
      local_180 = local_1b0;
      local_1d8[0] = (code *)0x0;
      pFVar28 = (FRenderCommandTag *)
                TRenderCommandTag<`FStreamingPauseRenderingModule::BeginStreamingPause'::__l15::TSTR_EndDrawingCommand143>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar6 + (iVar19 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_1a8,pFVar28);
      uVar38 = (ulonglong)local_178;
      if ((2 < uVar38) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar38] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_1a8._0_8_ != (code *)0x0) {
          pppuVar35 = (undefined ***)(local_1a8 + 0x10);
          if (local_180 != (undefined ***)0x0) {
            pppuVar35 = local_180;
          }
          (*(code *)(*pppuVar35)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar38])(local_1a8);
      }
    }
    if (local_1d8[0] != (code *)0x0) {
      pppuVar35 = &local_1c8;
      if (local_1b0 != (undefined ***)0x0) {
        pppuVar35 = local_1b0;
      }
      (*(code *)(*pppuVar35)[2])();
    }
    pFVar29 = ::operator_new(0x18);
    if (pFVar29 == (FBackgroundView *)0x0) {
      pFVar29 = (FBackgroundView *)0x0;
    }
    else {
      TVar9._s_0.Y = iStack_b0c;
      TVar9._s_0.X = local_b10;
      local_af8 = TVar9;
      pFVar30 = TSharedPtr<FSceneViewport,1>::operator->(&this->SceneViewport);
      pTVar31 = (TRefCountPtr<FRHITexture> *)
                (**(code **)(pFVar30->_padding_ + 0x10))(&pFVar30->_padding_);
      TVar32.Object =
           (FBackgroundView *)
           TRefCountPtr<FRHITexture>::TRefCountPtr<FRHITexture>(&local_860,pTVar31);
      pFVar29->_padding_ = (longlong)&___7FBackgroundView__6B_;
      local_af0.Object = TVar32.Object;
      pFVar33 = ::operator_new(0x40);
      if (pFVar33 != (FSlateRenderTargetRHI *)0x0) {
        this_01 = (FRHITexture *)(TVar32.Object)->_padding_;
        if (this_01 == (FRHITexture *)0x0) {
          *(undefined1 *)&pFVar33->_padding_ = 0x21;
          pFVar33->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
          pFVar33->_padding_ = 0;
        }
        else {
          FRHIResource::AddRef((FRHIResource *)this_01);
          *(undefined1 *)&pFVar33->_padding_ = 0x21;
          pFVar33->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
          pFVar33->_padding_ = (longlong)this_01;
          FRHIResource::AddRef((FRHIResource *)this_01);
        }
        FRenderResource::FRenderResource((FRenderResource *)&pFVar33->_padding_);
        pFVar33->Width = local_b10;
        pFVar33->_padding_ =
             (longlong)
             &FSlateRenderTargetRHI::_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
        pFVar33->_padding_ = (longlong)&FSlateRenderTargetRHI::_vftable__for__FRenderResource__;
        pFVar33->Height = local_af8._4_4_;
        TVar32.Object = local_af0.Object;
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
          TVar32.Object = local_af0.Object;
        }
      }
      pFVar29->RenderTarget = pFVar33;
      pFVar36 = (FRenderResource *)&pFVar33->_padding_;
      (pFVar29->Size).field0_0x0 = TVar9;
      if (pFVar33 == (FSlateRenderTargetRHI *)0x0) {
        pFVar36 = (FRenderResource *)0x0;
      }
      BeginInitResource(pFVar36,(FRenderCommandPipe *)0x0);
      if ((FRHITexture *)(TVar32.Object)->_padding_ != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)(TVar32.Object)->_padding_);
      }
    }
    local_af0.Object = pFVar29;
    TSharedPtr<FBackgroundView,1>::operator=<FBackgroundView>(&this->BackgroundView,&local_af0);
    pSVar34 = TSharedPtr<SViewport,1>::operator->(&this->ViewportWidget);
    if (((this->BackgroundView).Object == (FBackgroundView *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar7 = (this->BackgroundView).SharedReferenceCount.ReferenceController;
    pFVar29 = (this->BackgroundView).Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar29 == (FBackgroundView *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8e0.Object = (ISlateViewport *)pFVar29;
    local_8e0.SharedReferenceCount.ReferenceController = pTVar7;
    SViewport::SetViewportInterface(pSVar34,&local_8e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FCanvas::~FCanvas(&local_168);
  }
  local_920.ReferenceController = (this->ViewportWidget).SharedReferenceCount.ReferenceController;
  local_a90 = (this->ViewportWidget).Object;
  local_a78 = 0;
  local_a70 = 0xbf800000;
  local_a6b = 1;
  local_a67 = 0;
  local_a6c = 1;
  local_a88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFStack_a80 = (FString *)0x0;
  if (local_920.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_920.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_920.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_928 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a88,&local_920);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_920.ReferenceController);
  pIVar21 = GetMoviePlayer();
  (**(code **)((longlong)*pIVar21 + 0x20))(pIVar21,&local_a90);
  pIVar21 = GetMoviePlayer();
  (**(code **)((longlong)*pIVar21 + 0x48))(pIVar21);
  this->bMovieWasStarted = true;
  DestructItems<FString,int>(pFStack_a80,(int)local_a78);
  if (pFStack_a80 != (FString *)0x0) {
    FMemory::Free(pFStack_a80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a88.ReferenceController);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndStreamingPause @ 146c84020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FStreamingPauseRenderingModule::EndStreamingPause(FStreamingPauseRenderingModule *this)

{
  IGameMoviePlayer *pIVar1;
  bool bVar2;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bMovieWasStarted != false) {
    bVar2 = -1 < CpuChannel->Enabled;
    if (bVar2) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId172,"FStreamingPauseRenderingModule::EndStreamingPause",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                 ,0xac);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId172);
    }
    pIVar1 = GetMoviePlayer();
    (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,0);
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ViewportWidget != (TSharedPtr<SViewport,1> *)&local_38) {
      (this->ViewportWidget).Object = (SViewport *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ViewportWidget).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SceneViewport != (TSharedPtr<FSceneViewport,1> *)&local_28) {
      (this->SceneViewport).Object = (FSceneViewport *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SceneViewport).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->BackgroundView != (TSharedPtr<FBackgroundView,1> *)&local_18) {
      (this->BackgroundView).Object = (FBackgroundView *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BackgroundView).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    FlushRenderingCommands();
    this->bMovieWasStarted = false;
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// ShutdownModule @ 146c84600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FStreamingPauseRenderingModule::ShutdownModule(FStreamingPauseRenderingModule *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->BeginDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EndDelegate);
  if (GEngine != (UEngine *)0x0) {
    UEngine::RegisterBeginStreamingPauseRenderingDelegate
              (GEngine,(TDelegate<void___cdecl(FViewport_*),FDefaultDelegateUserPolicy> *)0x0);
    UEngine::RegisterEndStreamingPauseRenderingDelegate
              (GEngine,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0);
    return;
  }
  return;
}

// StartupModule @ 146c84650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FStreamingPauseRenderingModule::StartupModule(FStreamingPauseRenderingModule *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BeginDelegate,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->BeginDelegate).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFViewport___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStreamingPauseRenderingModule____A6AXPEAVFViewport___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = _vcall__64__flat______;
    puVar3[3] = this;
    if (this == (FStreamingPauseRenderingModule *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EndDelegate,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->EndDelegate).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFStreamingPauseRenderingModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = _vcall__72__flat______;
    puVar3[3] = this;
    if (this == (FStreamingPauseRenderingModule *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (GEngine == (UEngine *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                       ,0x4e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UEngine::RegisterBeginStreamingPauseRenderingDelegate(GEngine,&this->BeginDelegate);
  UEngine::RegisterEndStreamingPauseRenderingDelegate(GEngine,&this->EndDelegate);
  return;
}

