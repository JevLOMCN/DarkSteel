// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 17

// Construct @ 14d8ee870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SFixedSampledSequenceViewerPanel::Construct
          (SFixedSampledSequenceViewerPanel *this,FArguments *param_1,
          FFixedSampledSequenceView *param_2)

{
  TSharedPtr<FFixedSampledSequenceGridData,1> *this_00;
  float fVar1;
  uint uVar2;
  uint uVar3;
  FFixedSampleSequenceRulerStyle *pFVar4;
  FSampledSequenceViewerStyle *pFVar5;
  FPlayheadOverlayStyle *pFVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  ESampledSequenceDrawOrientation EVar11;
  bool bVar12;
  bool *pbVar13;
  TReferenceControllerBase<1> *pTVar14;
  TSharedRef<FFixedSampledSequenceGridData,1> *pTVar15;
  FArguments *pFVar16;
  TSharedRef<SPlayheadOverlay,1> *pTVar17;
  FFixedSampledSequenceGridData *pFVar18;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<FFixedSampledSequenceGridData,1> local_2b8;
  SPlayheadOverlay *local_2a8;
  FSharedReferencer<1> local_2a0;
  TSharedRef<SPlayheadOverlay,1> local_298;
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> local_288;
  TSharedRef<FFixedSampledSequenceGridData,1> local_270;
  TSharedRef<FFixedSampledSequenceGridData,1> local_260;
  FArguments local_250;
  
  iVar8 = (param_2->SampleData).ArrayNum;
  uVar9 = *(undefined4 *)&(param_2->SampleData).field_0xc;
  (this->DataView).SampleData.DataPtr = (param_2->SampleData).DataPtr;
  (this->DataView).SampleData.ArrayNum = iVar8;
  *(undefined4 *)&(this->DataView).SampleData.field_0xc = uVar9;
  uVar2 = param_2->SampleRate;
  (this->DataView).NumDimensions = param_2->NumDimensions;
  (this->DataView).SampleRate = uVar2;
  fVar1 = (param_1->_SequenceDrawingParams).DimensionSlotMargin;
  fVar10 = (param_1->_SequenceDrawingParams).MaxSequenceHeightRatio;
  (this->DrawingParams).MaxDisplayedValue = (param_1->_SequenceDrawingParams).MaxDisplayedValue;
  (this->DrawingParams).DimensionSlotMargin = fVar1;
  (this->DrawingParams).MaxSequenceHeightRatio = fVar10;
  fVar1 = (param_1->_SequenceDrawingParams).MinScaledBinValue;
  fVar10 = (param_1->_SequenceDrawingParams).VerticalZoomFactor;
  EVar11 = (param_1->_SequenceDrawingParams).Orientation;
  (this->DrawingParams).MinSequenceHeightRatio =
       (param_1->_SequenceDrawingParams).MinSequenceHeightRatio;
  (this->DrawingParams).MinScaledBinValue = fVar1;
  (this->DrawingParams).VerticalZoomFactor = fVar10;
  (this->DrawingParams).Orientation = EVar11;
  this->SamplesRulerDisplayUnit = param_1->_SamplesRulerDisplayUnit;
  pbVar13 = TAttribute<bool>::Get(&param_1->_HidePlayhead);
  this->bHidePlayhead = *pbVar13;
  pbVar13 = TAttribute<bool>::Get(&param_1->_HideSamplesRuler);
  this->bHideSamplesRuler = *pbVar13;
  pbVar13 = TAttribute<bool>::Get(&param_1->_HideSamplesGrid);
  this->bHideSamplesGrid = *pbVar13;
  pbVar13 = TAttribute<bool>::Get(&param_1->_HideValueGrid);
  this->bHideValueGrid = *pbVar13;
  CreateBackground(this,param_1->_SequenceViewerStyle);
  pFVar4 = param_1->_SamplesRulerStyle;
  if (pFVar4 == (FFixedSampleSequenceRulerStyle *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("RulerStyle",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x94,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar2 = (this->DataView).SampleData.ArrayNum;
  uVar3 = (this->DataView).NumDimensions;
  pTVar14 = ::operator_new(0xe0);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    local_2b8.Object = ___xmm_00000000000000000000000000000010;
    pFVar18 = (FFixedSampledSequenceGridData *)&DAT_00000010;
    local_2b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    fVar1 = pFVar4->DesiredWidth;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFixedSampledSequenceGridData___00_SharedPointerInternals__6B_
    ;
    FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
              ((FFixedSampledSequenceGridData *)(pTVar14 + 1),uVar2 / uVar3,
               (this->DataView).SampleRate,&pFVar4->TicksTextFont,fVar1);
    pFVar18 = (FFixedSampledSequenceGridData *)(pTVar14 + 1);
    if (pFVar18 == (FFixedSampledSequenceGridData *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
    local_2b8.SharedReferenceCount.ReferenceController = pTVar14;
    local_2b8.Object = pFVar18;
  }
  this_00 = &this->SamplesGridData;
  if (this_00 != &local_2b8) {
    this_00->Object = pFVar18;
    local_2b8.Object = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SamplesGridData).SharedReferenceCount,&local_2b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  pFVar5 = param_1->_SequenceViewerStyle;
  pTVar15 = TSharedPtr<FFixedSampledSequenceGridData,1>::ToSharedRef(this_00,&local_270);
  CreateSequenceViewer(this,pTVar15,&this->DataView,pFVar5);
  pFVar6 = param_1->_PlayheadOverlayStyle;
  if (pFVar6 == (FPlayheadOverlayStyle *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("PlayheadOverlayStyle",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x6a,L"");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar16 = SPlayheadOverlay::FArguments::FArguments(&local_250);
  pFVar16->_Style = pFVar6;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>
            (&local_288,"SPlayheadOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x6b,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar17 = TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_288,&local_298,pFVar16);
  local_2a0.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  local_2a8 = pTVar17->Object;
  if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PlayheadOverlay != (TSharedPtr<SPlayheadOverlay,1> *)&local_2a8) {
    (this->PlayheadOverlay).Object = local_2a8;
    local_2a8 = (SPlayheadOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PlayheadOverlay).SharedReferenceCount,&local_2a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  pFVar4 = param_1->_SamplesRulerStyle;
  pTVar15 = TSharedPtr<FFixedSampledSequenceGridData,1>::ToSharedRef(this_00,&local_260);
  CreateSamplesRuler(this,pTVar15,pFVar4);
  CreateValueGridOverlay
            (this,param_1->_ValueGridMaxDivisionParameter,param_1->_ValueGridDivideMode,
             &param_1->_ValueGridLabelGenerator,param_1->_ValueGridStyle);
                    /* WARNING: Could not recover jumptable at 0x00014d8eec67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x248))(this);
  return;
}

// CreateBackground @ 14d8f1ea0

void __thiscall
SFixedSampledSequenceViewerPanel::CreateBackground
          (SFixedSampledSequenceViewerPanel *this,FSampledSequenceViewerStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArguments *pFVar3;
  TSharedRef<SBorder,1> *pTVar4;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_4b8 [8];
  ForAnyElementType FStack_4b0;
  ulonglong local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined1 local_488 [8];
  ForAnyElementType FStack_480;
  ulonglong local_478;
  SBorder *local_470;
  FSharedReferencer<1> local_468;
  FDestructionSentinel local_460;
  FDestructionSentinel local_448;
  TSharedRef<SBorder,1> local_430;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_420;
  FArguments local_408;
  
  if (param_1 == (FSampledSequenceViewerStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewerStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = SBorder::FArguments::FArguments(&local_408);
  local_4b8 = (undefined1  [8])0x0;
  FStack_4b0.Data = (FScriptContainerElement *)0x0;
  local_4a8 = 0;
  (pFVar3->_BorderImage).Value = &param_1->BackgroundBrush;
  (pFVar3->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
             (FWriteAccessScope *)&local_460);
  if (((int)local_4a8 != 0) && (FStack_4b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4b0,0,0,0x10);
    local_4a8 = local_4a8 & 0xffffffff00000000;
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  if (FStack_4b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4b8);
  local_490._0_1_ = (param_1->SequenceBackgroundColor).ColorUseRule;
  local_490._1_1_ = (param_1->SequenceBackgroundColor).ColorTableId;
  local_490._2_2_ = *(undefined2 *)&(param_1->SequenceBackgroundColor).field_0x12;
  local_4a0 = *(undefined8 *)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0;
  uStack_498 = *(undefined8 *)
                ((longlong)&(param_1->SequenceBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  local_48c = 1;
  local_478 = 0;
  local_488 = (undefined1  [8])0x0;
  FStack_480.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar3->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_4a0;
  *(undefined8 *)((longlong)&(pFVar3->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_498;
  (pFVar3->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_490;
  (pFVar3->_BorderBackgroundColor).Value.ColorTableId = local_490._1_1_;
  *(undefined2 *)&(pFVar3->_BorderBackgroundColor).Value.field_0x12 = local_490._2_2_;
  (pFVar3->_BorderBackgroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_488,
             (FWriteAccessScope *)&local_448);
  if (((int)local_478 != 0) && (FStack_480.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_480.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_480,0,0,0x10);
    local_478 = local_478 & 0xffffffff00000000;
  }
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  if (FStack_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_480.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_488);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_420,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x8d,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar4 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_420,&local_430,pFVar3);
  local_468.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_470 = pTVar4->Object;
  if (local_468.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_468.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_468.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackgroundBorder != (TSharedPtr<SBorder,1> *)&local_470) {
    (this->BackgroundBorder).Object = local_470;
    local_470 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundBorder).SharedReferenceCount,&local_468);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_430.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_420._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_408);
  return;
}

// CreateGridData @ 14d905de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SFixedSampledSequenceViewerPanel::CreateGridData
          (SFixedSampledSequenceViewerPanel *this,FFixedSampleSequenceRulerStyle *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FFixedSampledSequenceGridData *pFVar7;
  FFixedSampledSequenceGridData *local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1 == (FFixedSampleSequenceRulerStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RulerStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x94,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = (this->DataView).SampleData.ArrayNum;
  uVar3 = (this->DataView).NumDimensions;
  pTVar6 = ::operator_new(0xe0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    local_18 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FFixedSampledSequenceGridData *)&DAT_00000010;
    FStack_10.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    fVar1 = param_1->DesiredWidth;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFixedSampledSequenceGridData___00_SharedPointerInternals__6B_
    ;
    FFixedSampledSequenceGridData::FFixedSampledSequenceGridData
              ((FFixedSampledSequenceGridData *)(pTVar6 + 1),uVar2 / uVar3,
               (this->DataView).SampleRate,&param_1->TicksTextFont,fVar1);
    pFVar7 = (FFixedSampledSequenceGridData *)(pTVar6 + 1);
    if (pFVar7 == (FFixedSampledSequenceGridData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FStack_10.ReferenceController = pTVar6;
    local_18 = pFVar7;
  }
  if (&this->SamplesGridData != (TSharedPtr<FFixedSampledSequenceGridData,1> *)&local_18) {
    (this->SamplesGridData).Object = pFVar7;
    local_18 = (FFixedSampledSequenceGridData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SamplesGridData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// CreateLayout @ 14d906cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SFixedSampledSequenceViewerPanel::CreateLayout(SFixedSampledSequenceViewerPanel *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SVerticalBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SFixedSampledSequenceRuler *pSVar4;
  SOverlay *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SBorder *pSVar6;
  SFixedSampledSequenceViewer *pSVar7;
  SPlayheadOverlay *pSVar8;
  code *pcVar9;
  bool bVar10;
  FArguments *pFVar11;
  TSharedRef<SVerticalBox,1> *pTVar12;
  FSlot *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  TSharedRef<SOverlay,1> *pTVar16;
  FScopedWidgetSlotArguments *pFVar17;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar18;
  longlong *this_01;
  undefined1 auStackY_a18 [32];
  T0RequiredArgs local_9e8;
  T0RequiredArgs local_9e7 [3];
  FLLMScope local_9e4;
  FLLMScope local_9e0 [2];
  SFixedSampledSequenceRuler *local_9d8;
  FSharedReferencer<1> local_9d0;
  SBorder *local_9c8;
  FSharedReferencer<1> local_9c0;
  SSampledSequenceValueGridOverlay *local_9b8;
  FSharedReferencer<1> local_9b0;
  SFixedSampledSequenceViewer *local_9a8;
  FSharedReferencer<1> local_9a0;
  SPlayheadOverlay *local_998;
  FSharedReferencer<1> local_990;
  undefined8 local_988;
  FSharedReferencer<1> local_980;
  FName local_978;
  FMemScope local_970;
  FSlot *local_968;
  FName local_960;
  FMemScope local_958;
  SVerticalBox *local_950;
  FSlot *local_948;
  TSharedRef<SVerticalBox,1> local_940;
  TSharedRef<SOverlay,1> local_930;
  TSharedRef<SSampledSequenceValueGridOverlay,1> local_920;
  longlong local_910;
  TReferenceControllerBase<1> *pTStack_908;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_900;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_8e8;
  undefined1 local_8d0 [16];
  SOverlay *local_8c0;
  FSharedReferencer<1> local_8b8 [27];
  TPanelChildren<SBoxPanel::FSlot> *local_7e0;
  int local_7d8;
  undefined1 local_7d0 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_6e0;
  int local_6d8;
  FArguments local_6d0;
  FArguments local_4c8;
  FScopedWidgetSlotArguments local_2b8;
  FScopedWidgetSlotArguments local_218;
  FScopedWidgetSlotArguments local_178;
  FScopedWidgetSlotArguments local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  if ((this->SamplesRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SamplesRuler",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x27,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SequenceViewer",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x28,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((this->PlayheadOverlay).Object == (SPlayheadOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("PlayheadOverlay",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x29,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ValueGridOverlay",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x2a,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((this->BackgroundBorder).Object == (SBorder *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("BackgroundBorder",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                        ,0x2b,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_6d0);
  FLLMScope::FLLMScope(&local_9e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_978 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_970,&local_978,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_900,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x2d,&local_9e8);
  FMemScope::~FMemScope(&local_970);
  FLLMScope::~FLLMScope(&local_9e4);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_900,&local_940,pFVar11);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_950 = pSVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_940.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_900._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_6d0._Slots.AllocatorInstance.Data,local_6d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_6d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6d0);
  if (this->bHideSamplesRuler == false) {
    if (pSVar2 == (SVerticalBox *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar13 = ::operator_new(0x58);
    local_968 = (FSlot *)0x0;
    if (pFVar13 != (FSlot *)0x0) {
      *(undefined8 *)pFVar13 = 0;
      *(undefined8 *)&pFVar13->field_0x8 = 0;
      *(undefined8 *)&pFVar13->field_0x10 = 0;
      *(undefined8 *)&pFVar13->field_0x18 = 0;
      *(undefined8 *)&pFVar13->field_0x20 = 0;
      *(undefined8 *)&pFVar13->field_0x28 = 0;
      *(undefined8 *)&pFVar13->field_0x30 = 0;
      *(undefined8 *)&pFVar13->field_0x38 = 0;
      *(undefined8 *)&pFVar13->field_0x40 = 0;
      *(undefined8 *)&pFVar13->field_0x48 = 0;
      *(undefined8 *)&pFVar13->field_0x50 = 0;
      local_968 = SVerticalBox::FSlot::FSlot(pFVar13);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)(local_7d0 + 8),(FSlot *)&local_968);
    local_6e0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
    local_7d0._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
    local_6d8 = -1;
    pFVar14 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)(local_7d0 + 8));
    if ((this->SamplesRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar3 = (this->SamplesRuler).SharedReferenceCount.ReferenceController;
    pSVar4 = (this->SamplesRuler).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar4 == (SFixedSampledSequenceRuler *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9d8 = pSVar4;
    local_9d0.ReferenceController = pTVar3;
    if ((SFixedSampledSequenceRuler **)&pFVar14->field_0x8 != &local_9d8) {
      *(SFixedSampledSequenceRuler **)&pFVar14->field_0x8 = pSVar4;
      local_9d8 = (SFixedSampledSequenceRuler *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar14->field_0x10,&local_9d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
              ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_7d0);
  }
  pFVar15 = SOverlay::FArguments::FArguments(&local_4c8);
  FLLMScope::FLLMScope(local_9e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_960 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_958,&local_960,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_8e8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x37,local_9e7);
  FMemScope::~FMemScope(&local_958);
  FLLMScope::~FLLMScope(local_9e0);
  pTVar16 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8e8,&local_930,pFVar15);
  pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
  this_00 = pTVar16->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_930.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_4c8._Slots.AllocatorInstance.Data,local_4c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_4c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4c8);
  if (this_00 == (SOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar17 = SOverlay::AddSlot(this_00,&local_2b8,-1);
  if ((this->BackgroundBorder).Object == (SBorder *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar5 = (this->BackgroundBorder).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->BackgroundBorder).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SBorder *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9c8 = pSVar6;
  local_9c0.ReferenceController = pTVar5;
  if ((SBorder **)&pFVar17->_padding_ != &local_9c8) {
    pFVar17->_padding_ = (longlong)pSVar6;
    local_9c8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_9c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_2b8);
  if (this->bHideValueGrid == false) {
    if (this_00 == (SOverlay *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar17 = SOverlay::AddSlot(this_00,&local_218,-1);
    pTVar18 = TSharedPtr<SSampledSequenceValueGridOverlay,1>::ToSharedRef
                        (&this->ValueGridOverlay,&local_920);
    pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
    local_9b8 = pTVar18->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9b0.ReferenceController = pTVar5;
    if ((SSampledSequenceValueGridOverlay **)&pFVar17->_padding_ != &local_9b8) {
      pFVar17->_padding_ = (longlong)local_9b8;
      local_9b8 = (SSampledSequenceValueGridOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_9b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_920.SharedReferenceCount.ReferenceController);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_218);
  }
  if (this_00 == (SOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar17 = SOverlay::AddSlot(this_00,&local_178,-1);
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar5 = (this->SequenceViewer).SharedReferenceCount.ReferenceController;
  pSVar7 = (this->SequenceViewer).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar7 == (SFixedSampledSequenceViewer *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9a8 = pSVar7;
  local_9a0.ReferenceController = pTVar5;
  if ((SFixedSampledSequenceViewer **)&pFVar17->_padding_ != &local_9a8) {
    pFVar17->_padding_ = (longlong)pSVar7;
    local_9a8 = (SFixedSampledSequenceViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_9a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_178);
  if (this->bHidePlayhead == false) {
    if (this_00 == (SOverlay *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar17 = SOverlay::AddSlot(this_00,&local_d8,-1);
    if ((this->PlayheadOverlay).Object == (SPlayheadOverlay *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar5 = (this->PlayheadOverlay).SharedReferenceCount.ReferenceController;
    pSVar8 = (this->PlayheadOverlay).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar8 == (SPlayheadOverlay *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_998 = pSVar8;
    local_990.ReferenceController = pTVar5;
    if ((SPlayheadOverlay **)&pFVar17->_padding_ != &local_998) {
      pFVar17->_padding_ = (longlong)pSVar8;
      local_998 = (SPlayheadOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar17->_padding_,&local_990);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_990.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_d8);
  }
  pSVar2 = local_950;
  if (local_950 == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar13 = ::operator_new(0x58);
  local_948 = (FSlot *)0x0;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    local_948 = SVerticalBox::FSlot::FSlot(pFVar13);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_8d0 + 8),(FSlot *)&local_948);
  local_7d8 = -1;
  local_8d0._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_7e0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar2->field_0x218;
  if (this_00 == (SOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (SOverlay *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_988 = 0;
  local_980.ReferenceController = pTVar3;
  local_8c0 = this_00;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_8b8,&local_980);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
            ((FScopedWidgetSlotArguments<SVerticalBox::FSlot> *)local_8d0);
  if (pSVar2 == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this_01 = &this->_padding_;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_910 = this->_padding_;
  pTStack_908 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_908);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// CreatePlayheadOverlay @ 14d9093a0

void __thiscall
SFixedSampledSequenceViewerPanel::CreatePlayheadOverlay
          (SFixedSampledSequenceViewerPanel *this,FPlayheadOverlayStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArguments *pFVar3;
  TSharedRef<SPlayheadOverlay,1> *pTVar4;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SPlayheadOverlay *local_258;
  FSharedReferencer<1> local_250;
  TSharedRef<SPlayheadOverlay,1> local_248;
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs> local_238;
  FArguments local_220;
  
  if (param_1 == (FPlayheadOverlayStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayheadOverlayStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x6a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = SPlayheadOverlay::FArguments::FArguments(&local_220);
  pFVar3->_Style = param_1;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>
            (&local_238,"SPlayheadOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x6b,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar4 = TSlateDecl<SPlayheadOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_238,&local_248,pFVar3);
  local_250.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_258 = pTVar4->Object;
  if (local_250.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_250.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_250.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PlayheadOverlay != (TSharedPtr<SPlayheadOverlay,1> *)&local_258) {
    (this->PlayheadOverlay).Object = local_258;
    local_258 = (SPlayheadOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PlayheadOverlay).SharedReferenceCount,&local_250);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  return;
}

// CreateSamplesRuler @ 14d909a20

void __thiscall
SFixedSampledSequenceViewerPanel::CreateSamplesRuler
          (SFixedSampledSequenceViewerPanel *this,
          TSharedRef<FFixedSampledSequenceGridData,1> *param_1,
          FFixedSampleSequenceRulerStyle *param_2)

{
  TSharedPtr<SFixedSampledSequenceRuler,1> *pTVar1;
  FFixedSampledSequenceGridData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SFixedSampledSequenceRuler,1> *pTVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&> local_res18;
  FMemScope local_res20;
  undefined1 local_320 [8];
  ForAnyElementType FStack_318;
  ulonglong local_310;
  SFixedSampledSequenceRuler *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  SFixedSampledSequenceRuler *local_2f8;
  FSharedReferencer<1> local_2f0;
  code *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  code *local_2d8;
  undefined8 uStack_2d0;
  FDestructionSentinel local_2c8;
  undefined1 local_2b0 [16];
  TSharedRef<SFixedSampledSequenceRuler,1> local_2a0;
  code *local_288;
  undefined8 uStack_280;
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  local_278;
  undefined1 local_260 [520];
  undefined1 local_58 [32];
  
  if (param_2 == (FFixedSampleSequenceRulerStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RulerStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = SFixedSampledSequenceRuler::FArguments::FArguments((FArguments *)local_260);
  pFVar6->_DisplayUnit = this->SamplesRulerDisplayUnit;
  pFVar6->_Style = param_2;
  local_310 = 0;
  local_320 = (undefined1  [8])0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_DisplayPlayhead).Value = this->bHidePlayhead == false;
  (pFVar6->_DisplayPlayhead).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_DisplayPlayhead).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_320);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
             (FWriteAccessScope *)&local_2c8);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_320);
  local_res18.Arg0 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (&local_278,"SFixedSampledSequenceRuler",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x62,&local_res18);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  pTVar7 = TSlateDecl<SFixedSampledSequenceRuler,RequiredArgs::T1RequiredArgs<TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
           ::operator<<=(&local_278,&local_2a0,pFVar6);
  local_2f0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_2f8 = pTVar7->Object;
  if (local_2f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SamplesRuler;
  if (pTVar1 != (TSharedPtr<SFixedSampledSequenceRuler,1> *)&local_2f8) {
    pTVar1->Object = local_2f8;
    local_2f8 = (SFixedSampledSequenceRuler *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SamplesRuler).SharedReferenceCount,&local_2f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_260);
  if ((this->SamplesGridData).Object == (FFixedSampledSequenceGridData *)0x0) {
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
  pFVar2 = (this->SamplesGridData).Object;
  local_2e8 = SFixedSampledSequenceRuler::UpdateGridMetrics;
  uStack_2dc = uStack_2d0._4_4_;
  uStack_2e0 = 0;
  if (pTVar1->Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (this->SamplesRuler).SharedReferenceCount.ReferenceController;
  local_308 = pTVar1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTStack_300 = pTVar3;
  if (local_308 == (SFixedSampledSequenceRuler *)0x0) {
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
  uStack_280 = CONCAT44(uStack_2dc,uStack_2e0);
  local_288 = local_2e8;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SFixedSampledSequenceRuler,1>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnGridMetricsUpdated,(TSharedRef<SFixedSampledSequenceRuler,1> *)local_2b0,
             (pmf_57569940 *)&local_308);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pTVar1->Object == (SFixedSampledSequenceRuler *)0x0) {
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
  local_308 = (SFixedSampledSequenceRuler *)UpdateSamplesRulerDisplayUnit;
  pTStack_300 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_300 & 0xffffffff00000000);
  local_2d8 = UpdateSamplesRulerDisplayUnit;
  uStack_2d0 = (ulonglong)pTStack_300;
  TMulticastDelegateRegistration<void___cdecl(enum_ESampledSequenceDisplayUnit),FDefaultDelegateUserPolicy>
  ::AddSP<SFixedSampledSequenceViewerPanel>
            (&pTVar1->Object->OnTimeUnitMenuSelection,
             (SFixedSampledSequenceViewerPanel *)(local_2b0 + 8),(pmf_a8b791c2 *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CreateSequenceViewer @ 14d90a970

void __thiscall
SFixedSampledSequenceViewerPanel::CreateSequenceViewer
          (SFixedSampledSequenceViewerPanel *this,
          TSharedRef<FFixedSampledSequenceGridData,1> *param_1,FFixedSampledSequenceView *param_2,
          FSampledSequenceViewerStyle *param_3)

{
  TSharedPtr<SFixedSampledSequenceViewer,1> *pTVar1;
  FFixedSampledSequenceGridData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  ESampledSequenceDrawOrientation EVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SFixedSampledSequenceViewer,1> *pTVar10;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  SFixedSampledSequenceViewer *local_2e8;
  FSharedReferencer<1> local_2e0;
  code *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  SFixedSampledSequenceViewer *local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  code *local_2b8;
  undefined8 uStack_2b0;
  T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>
  local_2a8;
  TSharedRef<SFixedSampledSequenceViewer,1> local_290;
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  local_280;
  FArguments local_268;
  
  if (param_3 == (FSampledSequenceViewerStyle *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewerStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x7e,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = SFixedSampledSequenceViewer::FArguments::FArguments(&local_268);
  pFVar9->_Style = param_3;
  fVar5 = (this->DrawingParams).DimensionSlotMargin;
  fVar6 = (this->DrawingParams).MaxSequenceHeightRatio;
  (pFVar9->_SequenceDrawingParams).MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
  (pFVar9->_SequenceDrawingParams).DimensionSlotMargin = fVar5;
  (pFVar9->_SequenceDrawingParams).MaxSequenceHeightRatio = fVar6;
  fVar5 = (this->DrawingParams).MinScaledBinValue;
  fVar6 = (this->DrawingParams).VerticalZoomFactor;
  EVar7 = (this->DrawingParams).Orientation;
  (pFVar9->_SequenceDrawingParams).MinSequenceHeightRatio =
       (this->DrawingParams).MinSequenceHeightRatio;
  (pFVar9->_SequenceDrawingParams).MinScaledBinValue = fVar5;
  (pFVar9->_SequenceDrawingParams).VerticalZoomFactor = fVar6;
  (pFVar9->_SequenceDrawingParams).Orientation = EVar7;
  pFVar9->_HideBackground = true;
  pFVar9->_HideGrid = this->bHideSamplesGrid;
  local_2a8.Arg1 = &param_2->NumDimensions;
  local_2a8.Arg0 = &param_2->SampleData;
  local_2a8.Arg2 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
  ::
  TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            (&local_280,"SFixedSampledSequenceViewer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x80,&local_2a8);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pTVar10 = TSlateDecl<SFixedSampledSequenceViewer,RequiredArgs::T3RequiredArgs<TArrayView<float_const_,int>_const_&,unsigned_int_const_&,TSharedRef<FFixedSampledSequenceGridData,1>_&>_>
            ::operator<<=(&local_280,&local_290,pFVar9);
  local_2e0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_2e8 = pTVar10->Object;
  if (local_2e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SequenceViewer;
  if (pTVar1 != (TSharedPtr<SFixedSampledSequenceViewer,1> *)&local_2e8) {
    pTVar1->Object = local_2e8;
    local_2e8 = (SFixedSampledSequenceViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SequenceViewer).SharedReferenceCount,&local_2e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_268);
  if ((this->SamplesGridData).Object == (FFixedSampledSequenceGridData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->SamplesGridData).Object;
  local_2d8 = SFixedSampledSequenceViewer::UpdateGridMetrics;
  uStack_2cc = uStack_2b0._4_4_;
  uStack_2d0 = 0;
  if (pTVar1->Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_2c8 = pTVar1->Object;
  pTVar3 = (this->SequenceViewer).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c0 = pTVar3;
  if (local_2c8 == (SFixedSampledSequenceViewer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_2b0 = CONCAT44(uStack_2cc,uStack_2d0);
  local_2b8 = local_2d8;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SFixedSampledSequenceViewer,1>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnGridMetricsUpdated,
             (TSharedRef<SFixedSampledSequenceViewer,1> *)(local_res18 + 1),
             (pmf_63c4aff8 *)&local_2c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CreateValueGridOverlay @ 14d90c7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SFixedSampledSequenceViewerPanel::CreateValueGridOverlay
          (SFixedSampledSequenceViewerPanel *this,uint param_1,EGridDivideMode param_2,
          TFunction<FText___cdecl(double)> *param_3,FSampledSequenceValueGridOverlayStyle *param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  ESampledSequenceDrawOrientation EVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SSampledSequenceValueGridOverlay,1> *pTVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStackY_368 [32];
  T0RequiredArgs local_338 [4];
  FLLMScope local_334;
  SSampledSequenceValueGridOverlay *local_330;
  FSharedReferencer<1> local_328;
  FName local_320;
  FMemScope local_318 [2];
  undefined1 local_308 [40];
  longlong *local_2e0;
  TSharedRef<SSampledSequenceValueGridOverlay,1> local_2d8;
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs> local_2c8;
  undefined1 local_2a8 [624];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if (param_4 == (FSampledSequenceValueGridOverlayStyle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueGridStyle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0x70,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar6 = SSampledSequenceValueGridOverlay::FArguments::FArguments((FArguments *)local_2a8);
  pFVar6->_DivideMode = param_2;
  pFVar6->_MaxDivisionParameter = param_1;
  local_308._0_8_ = *(undefined8 *)param_3;
  local_2e0 = (longlong *)0x0;
  if (local_308._0_8_ != 0) {
    puVar8 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_308 + 0x10);
  }
  TFunction<FText___cdecl(double)>::operator=
            (&pFVar6->_ValueGridLabelGenerator,(TFunction<FText___cdecl(double)> *)local_308);
  if (local_308._0_8_ != 0) {
    plVar9 = (longlong *)(local_308 + 0x10);
    if (local_2e0 != (longlong *)0x0) {
      plVar9 = local_2e0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pFVar6->_Style = param_4;
  fVar2 = (this->DrawingParams).DimensionSlotMargin;
  fVar3 = (this->DrawingParams).MaxSequenceHeightRatio;
  (pFVar6->_SequenceDrawingParams).MaxDisplayedValue = (this->DrawingParams).MaxDisplayedValue;
  (pFVar6->_SequenceDrawingParams).DimensionSlotMargin = fVar2;
  (pFVar6->_SequenceDrawingParams).MaxSequenceHeightRatio = fVar3;
  fVar2 = (this->DrawingParams).MinScaledBinValue;
  fVar3 = (this->DrawingParams).VerticalZoomFactor;
  EVar4 = (this->DrawingParams).Orientation;
  (pFVar6->_SequenceDrawingParams).MinSequenceHeightRatio =
       (this->DrawingParams).MinSequenceHeightRatio;
  (pFVar6->_SequenceDrawingParams).MinScaledBinValue = fVar2;
  (pFVar6->_SequenceDrawingParams).VerticalZoomFactor = fVar3;
  (pFVar6->_SequenceDrawingParams).Orientation = EVar4;
  pFVar6->_NumDimensions = (this->DataView).NumDimensions;
  FLLMScope::FLLMScope(&local_334,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_320 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_318,&local_320,true);
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2c8,"SSampledSequenceValueGridOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
             ,0x72,local_338);
  FMemScope::~FMemScope(local_318);
  FLLMScope::~FLLMScope(&local_334);
  pTVar7 = TSlateDecl<SSampledSequenceValueGridOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2c8,&local_2d8,pFVar6);
  local_328.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_330 = pTVar7->Object;
  if (local_328.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_328.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_328.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ValueGridOverlay != (TSharedPtr<SSampledSequenceValueGridOverlay,1> *)&local_330) {
    (this->ValueGridOverlay).Object = local_330;
    local_330 = (SSampledSequenceValueGridOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ValueGridOverlay).SharedReferenceCount,&local_328);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8._Widget.SharedReferenceCount.ReferenceController);
  if (local_2a8._560_8_ != 0) {
    plVar9 = (longlong *)(local_2a8 + 0x240);
    if ((longlong *)local_2a8._600_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_2a8._600_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2a8);
  return;
}

// ReceiveSequenceView @ 14d962240

void __thiscall
SFixedSampledSequenceViewerPanel::ReceiveSequenceView
          (SFixedSampledSequenceViewerPanel *this,FFixedSampledSequenceView *param_1,uint param_2)

{
  SFixedSampledSequenceViewer *this_00;
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  TRange<unsigned_int> local_18;
  
  if ((FFixedSampledSequenceGridData *)this->_padding_ != (FFixedSampledSequenceGridData *)0x0) {
    local_18.LowerBound.Type.Value = '\x01';
    uVar4 = param_2 / param_1->NumDimensions;
    local_18.LowerBound.Value = uVar4;
    local_18.UpperBound =
         (TRangeBound<unsigned_int>)
         (CONCAT44((uint)(param_1->SampleData).ArrayNum / param_1->NumDimensions + uVar4,
                   local_18.UpperBound._0_4_) & 0xffffffffffffff00);
    FFixedSampledSequenceGridData::UpdateDisplayRange
              ((FFixedSampledSequenceGridData *)this->_padding_,&local_18);
  }
  this_00 = (SFixedSampledSequenceViewer *)this->_padding_;
  if (this_00 != (SFixedSampledSequenceViewer *)0x0) {
    SFixedSampledSequenceViewer::UpdateGridMetrics(this_00);
    pfVar1 = (param_1->SampleData).DataPtr;
    iVar2 = (param_1->SampleData).ArrayNum;
    uVar3 = *(undefined4 *)&(param_1->SampleData).field_0xc;
    this_00->NumChannels = (uchar)param_1->NumDimensions;
    (this_00->SampleData).DataPtr = pfVar1;
    (this_00->SampleData).ArrayNum = iVar2;
    *(undefined4 *)&(this_00->SampleData).field_0xc = uVar3;
    this_00->bForceRedraw = true;
  }
  return;
}

// SetPlayheadRatio @ 14d96baf0

void __thiscall
SFixedSampledSequenceViewerPanel::SetPlayheadRatio
          (SFixedSampledSequenceViewerPanel *this,float param_1)

{
  this->CachedPlayheadRatio = param_1;
  return;
}

// Tick @ 14d976450

void __thiscall
SFixedSampledSequenceViewerPanel::Tick
          (SFixedSampledSequenceViewerPanel *this,FGeometry *param_1,double param_2,float param_3)

{
  FFixedSampledSequenceGridData *pFVar1;
  SPlayheadOverlay *pSVar2;
  SFixedSampledSequenceRuler *pSVar3;
  float local_res8;
  
  local_res8 = SUB84(param_1->Size,0);
  if (local_res8 != this->CachedPixelWidth) {
    this->CachedPixelWidth = local_res8;
    pFVar1 = (this->SamplesGridData).Object;
    if (pFVar1 != (FFixedSampledSequenceGridData *)0x0) {
      FFixedSampledSequenceGridData::UpdateGridMetrics(pFVar1,local_res8);
    }
  }
  pFVar1 = (this->SamplesGridData).Object;
  local_res8 = local_res8 * this->CachedPlayheadRatio;
  if (pFVar1 != (FFixedSampledSequenceGridData *)0x0) {
    local_res8 = (float)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,local_res8);
  }
  if ((this->bHidePlayhead == false) &&
     (pSVar2 = (this->PlayheadOverlay).Object, pSVar2 != (SPlayheadOverlay *)0x0)) {
    pSVar2->PlayheadPosition = local_res8;
  }
  if ((this->bHideSamplesRuler == false) &&
     (pSVar3 = (this->SamplesRuler).Object, pSVar3 != (SFixedSampledSequenceRuler *)0x0)) {
    pSVar3->PlayheadPosition = local_res8;
  }
  return;
}

// UpdatePlayheadOverlayStyle @ 14d979de0

void __thiscall
SFixedSampledSequenceViewerPanel::UpdatePlayheadOverlayStyle
          (SFixedSampledSequenceViewerPanel *this,FPlayheadOverlayStyle *param_1)

{
  SPlayheadOverlay *pSVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  FSlateWidgetStyle local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((this->PlayheadOverlay).Object == (SPlayheadOverlay *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlayheadOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0xbb,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->PlayheadOverlay).Object == (SPlayheadOverlay *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_30 = *(undefined8 *)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0;
  uStack_28 = *(undefined8 *)((longlong)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
  pSVar1 = (this->PlayheadOverlay).Object;
  local_18 = param_1->DesiredWidth;
  local_38 = (FSlateWidgetStyle)&___7FPlayheadOverlayStyle__6B_;
  local_1c = param_1->PlayheadWidth;
  local_20._0_1_ = (param_1->PlayheadColor).ColorUseRule;
  local_20._1_1_ = (param_1->PlayheadColor).ColorTableId;
  local_20._2_2_ = *(undefined2 *)&(param_1->PlayheadColor).field_0x12;
  local_14 = param_1->DesiredHeight;
  uVar3 = *(undefined8 *)((longlong)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(pSVar1->PlayheadColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->PlayheadColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(pSVar1->PlayheadColor).SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar4 = (param_1->PlayheadColor).ColorTableId;
  uVar5 = *(undefined2 *)&(param_1->PlayheadColor).field_0x12;
  (pSVar1->PlayheadColor).ColorUseRule = (param_1->PlayheadColor).ColorUseRule;
  (pSVar1->PlayheadColor).ColorTableId = EVar4;
  *(undefined2 *)&(pSVar1->PlayheadColor).field_0x12 = uVar5;
  pSVar1->PlayheadWidth = local_1c;
  pSVar1->DesiredWidth = local_18;
  pSVar1->DesiredHeight = local_14;
  FSlateWidgetStyle::~FSlateWidgetStyle(&local_38);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdatePlayheadPosition @ 14d979f00

void __thiscall
SFixedSampledSequenceViewerPanel::UpdatePlayheadPosition
          (SFixedSampledSequenceViewerPanel *this,float param_1)

{
  FFixedSampledSequenceGridData *pFVar1;
  SPlayheadOverlay *pSVar2;
  SFixedSampledSequenceRuler *pSVar3;
  float fVar4;
  
  fVar4 = param_1 * this->CachedPlayheadRatio;
  pFVar1 = (this->SamplesGridData).Object;
  if (pFVar1 != (FFixedSampledSequenceGridData *)0x0) {
    fVar4 = (float)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,fVar4);
  }
  if ((this->bHidePlayhead == false) &&
     (pSVar2 = (this->PlayheadOverlay).Object, pSVar2 != (SPlayheadOverlay *)0x0)) {
    pSVar2->PlayheadPosition = fVar4;
  }
  if ((this->bHideSamplesRuler == false) &&
     (pSVar3 = (this->SamplesRuler).Object, pSVar3 != (SFixedSampledSequenceRuler *)0x0)) {
    pSVar3->PlayheadPosition = fVar4;
  }
  return;
}

// UpdateRulerStyle @ 14d979f70

void __thiscall
SFixedSampledSequenceViewerPanel::UpdateRulerStyle
          (SFixedSampledSequenceViewerPanel *this,FFixedSampleSequenceRulerStyle *param_1)

{
  SFixedSampledSequenceRuler *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FFixedSampleSequenceRulerStyle *pFVar4;
  FFixedSampleSequenceRulerStyle local_238;
  
  if ((this->SamplesRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SamplesRuler",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0xb5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SamplesRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
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
  this_00 = (this->SamplesRuler).Object;
  pFVar4 = FFixedSampleSequenceRulerStyle::FFixedSampleSequenceRulerStyle(&local_238,param_1);
  SFixedSampledSequenceRuler::OnStyleUpdated(this_00,pFVar4);
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TicksTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  pTVar1 = (param_1->HandleBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->HandleBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateSamplesRulerDisplayUnit @ 14d97a060

void __thiscall
SFixedSampledSequenceViewerPanel::UpdateSamplesRulerDisplayUnit
          (SFixedSampledSequenceViewerPanel *this,ESampledSequenceDisplayUnit param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->SamplesRulerDisplayUnit = param_1;
  if ((this->SamplesRuler).Object == (SFixedSampledSequenceRuler *)0x0) {
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
  ((this->SamplesRuler).Object)->DisplayUnit = this->SamplesRulerDisplayUnit;
  return;
}

// UpdateSequenceViewerStyle @ 14d97a990

void __thiscall
SFixedSampledSequenceViewerPanel::UpdateSequenceViewerStyle
          (SFixedSampledSequenceViewerPanel *this,FSampledSequenceViewerStyle *param_1)

{
  SFixedSampledSequenceViewer *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSampledSequenceViewerStyle *pFVar4;
  FSampledSequenceViewerStyle local_148;
  
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SequenceViewer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0xaf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SequenceViewer).Object == (SFixedSampledSequenceViewer *)0x0) {
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
  this_00 = (this->SequenceViewer).Object;
  pFVar4 = FSampledSequenceViewerStyle::FSampledSequenceViewerStyle(&local_148,param_1);
  SFixedSampledSequenceViewer::OnStyleUpdated(this_00,pFVar4);
  pTVar1 = (param_1->BackgroundBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->BackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

// UpdateValueGridOverlayStyle @ 14d97b0b0

void __thiscall
SFixedSampledSequenceViewerPanel::UpdateValueGridOverlayStyle
          (SFixedSampledSequenceViewerPanel *this,FSampledSequenceValueGridOverlayStyle *param_1)

{
  SSampledSequenceValueGridOverlay *this_00;
  code *pcVar1;
  bool bVar2;
  FSampledSequenceValueGridOverlayStyle *pFVar3;
  FSampledSequenceValueGridOverlayStyle local_a8;
  
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueGridOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SFixedSampledSequenceViewerPanel.cpp"
                       ,0xc1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ValueGridOverlay).Object == (SSampledSequenceValueGridOverlay *)0x0) {
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
  this_00 = (this->ValueGridOverlay).Object;
  pFVar3 = FSampledSequenceValueGridOverlayStyle::FSampledSequenceValueGridOverlayStyle
                     (&local_a8,param_1);
  SSampledSequenceValueGridOverlay::OnStyleUpdated(this_00,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->LabelTextFont).CompositeFont.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)param_1);
  return;
}

