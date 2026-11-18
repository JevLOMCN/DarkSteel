// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 31

// FAudioSpectrogram @ 14d8b13d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FAudioSpectrogram * __thiscall
AudioWidgets::FAudioSpectrogram::FAudioSpectrogram
          (FAudioSpectrogram *this,FAudioSpectrogramParams *param_1)

{
  byte *pbVar1;
  EFFTSize EVar2;
  EConstantQFFTSizeEnum EVar3;
  UObject *pUVar4;
  SAudioSpectrogram *pSVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  UObject *pUVar11;
  USynesthesiaSpectrumAnalysisSettings *this_00;
  UConstantQSettings *this_01;
  FArguments *pFVar12;
  FAudioSpectrogram *pFVar13;
  EFFTSize *pEVar14;
  EConstantQFFTSizeEnum *pEVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  TSharedRef<FActiveTimerHandle,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  float fVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_648 [8];
  FDelegateAllocation local_640;
  EAudioSpectrogramFrequencyAxisScale local_630;
  bool local_62f;
  undefined1 local_628 [8];
  ForAnyElementType FStack_620;
  int local_618;
  EAudioSpectrogramFrequencyAxisPixelBucketMode local_610;
  bool local_60f;
  undefined1 local_608 [8];
  ForAnyElementType FStack_600;
  int local_5f8;
  EAudioColorGradient local_5f0;
  bool local_5ef;
  undefined1 local_5e8 [8];
  ForAnyElementType FStack_5e0;
  int local_5d8;
  EOrientation local_5d0;
  bool local_5cc;
  undefined1 local_5c8 [8];
  ForAnyElementType FStack_5c0;
  int local_5b8;
  undefined2 local_5b0;
  undefined1 local_5a8 [8];
  ForAnyElementType FStack_5a0;
  ulonglong local_598;
  code *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  TReferenceControllerBase<1> *local_578;
  FSharedReferencer<1> FStack_570;
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs> local_568;
  FExtensionBase *local_550;
  FSharedReferencer<1> local_548;
  FActiveTimerHandle *local_540;
  FSharedReferencer<1> local_538;
  undefined1 local_530 [8];
  FDelegateAllocation local_528;
  UAudioBus *local_518;
  TSharedRef<FExtensionBase_const_,1> local_510;
  TSharedRef<FActiveTimerHandle,1> local_500;
  TSharedPtr<FUICommandList,1> local_4f0;
  FDestructionSentinel local_4e0;
  FDestructionSentinel local_4c8;
  FDestructionSentinel local_4b0;
  FDestructionSentinel local_498;
  FDestructionSentinel local_480;
  FDestructionSentinel local_468;
  FDestructionSentinel local_450;
  FDelegateAllocation *local_438;
  FDestructionSentinel local_430;
  FDelegateAllocation *local_418;
  FArguments local_410;
  
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioSpectrogram_AudioWidgets__6B_;
  (this->SpectrumAnalyzer).Object = (UObject *)0x0;
  (this->ConstantQAnalyzer).Object = (UObject *)0x0;
  (this->AudioBus).Object = (UObject *)0x0;
  (this->SpectrumResultsDelegateHandle).ID = 0;
  (this->ConstantQResultsDelegateHandle).ID = 0;
  pUVar11 = GetTransientPackageAsObject();
  this_00 = NewObject<USynesthesiaSpectrumAnalysisSettings>(pUVar11);
  (this->SpectrumAnalysisSettings).Object = (UObject *)0x0;
  if (this_00 != (USynesthesiaSpectrumAnalysisSettings *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    (this->SpectrumAnalysisSettings).Object = (UObject *)this_00;
  }
  pUVar11 = GetTransientPackageAsObject();
  this_01 = NewObject<UConstantQSettings>(pUVar11);
  (this->ConstantQSettings).Object = (UObject *)0x0;
  if (this_01 != (UConstantQSettings *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_01);
    (this->ConstantQSettings).Object = (UObject *)this_01;
  }
  pFVar12 = SAudioSpectrogram::FArguments::FArguments(&local_410);
  *(undefined1 *)((longlong)&pFVar12->_padding_ + 2) = 1;
  local_630 = (param_1->FrequencyAxisScale).Value;
  local_62f = (param_1->FrequencyAxisScale).bIsSet;
  local_628 = (undefined1  [8])0x0;
  FStack_620.Data = (FScriptContainerElement *)0x0;
  local_618 = 0;
  TDelegate<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_628,&(param_1->FrequencyAxisScale).Getter);
  (pFVar12->_FrequencyAxisScale).Value = local_630;
  (pFVar12->_FrequencyAxisScale).bIsSet = local_62f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_FrequencyAxisScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_628);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_4e0);
  if ((local_618 != 0) && (FStack_620.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_620.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_620,0,0,0x10);
    local_618 = 0;
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  if (FStack_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_620.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_628);
  local_610 = (param_1->FrequencyAxisPixelBucketMode).Value;
  local_60f = (param_1->FrequencyAxisPixelBucketMode).bIsSet;
  local_608 = (undefined1  [8])0x0;
  FStack_600.Data = (FScriptContainerElement *)0x0;
  local_5f8 = 0;
  TDelegate<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(local_608,&(param_1->FrequencyAxisPixelBucketMode).Getter);
  (pFVar12->_FrequencyAxisPixelBucketMode).Value = local_610;
  (pFVar12->_FrequencyAxisPixelBucketMode).bIsSet = local_60f;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar12->_FrequencyAxisPixelBucketMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_608);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_608,
             (FWriteAccessScope *)&local_4c8);
  if ((local_5f8 != 0) && (FStack_600.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_600.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_600,0,0,0x10);
    local_5f8 = 0;
  }
  if (local_4c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
  }
  if (FStack_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_600.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_608);
  local_5f0 = (param_1->ColorMap).Value;
  local_5ef = (param_1->ColorMap).bIsSet;
  local_5e8 = (undefined1  [8])0x0;
  FStack_5e0.Data = (FScriptContainerElement *)0x0;
  local_5d8 = 0;
  TDelegate<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_5e8,&(param_1->ColorMap).Getter);
  (pFVar12->_ColorMap).Value = local_5f0;
  (pFVar12->_ColorMap).bIsSet = local_5ef;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_ColorMap).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
             (FWriteAccessScope *)&local_4b0);
  if ((local_5d8 != 0) && (FStack_5e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e0,0,0,0x10);
    local_5d8 = 0;
  }
  if (local_4b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b0.Accessor,&local_4b0);
  }
  if (FStack_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e8);
  local_5d0 = (param_1->Orientation).Value;
  local_5cc = (param_1->Orientation).bIsSet;
  local_5c8 = (undefined1  [8])0x0;
  FStack_5c0.Data = (FScriptContainerElement *)0x0;
  local_5b8 = 0;
  TDelegate<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_5c8,&(param_1->Orientation).Getter);
  (pFVar12->_Orientation).Value = local_5d0;
  (pFVar12->_Orientation).bIsSet = local_5cc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Orientation).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5c8,
             (FWriteAccessScope *)&local_498);
  if ((local_5b8 != 0) && (FStack_5c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5c0,0,0,0x10);
    local_5b8 = 0;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_5c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5c8);
  local_5b0 = 0x101;
  local_598 = 0;
  local_5a8 = (undefined1  [8])0x0;
  FStack_5a0.Data = (FScriptContainerElement *)0x0;
  (pFVar12->_FillBackground).Value = true;
  (pFVar12->_FillBackground).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_FillBackground).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a8,
             (FWriteAccessScope *)&local_480);
  if (((int)local_598 != 0) && (FStack_5a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5a0,0,0,0x10);
    local_598 = local_598 & 0xffffffff00000000;
  }
  if (local_480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
  }
  if (FStack_5a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a8);
  TDelegate<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar12->_OnFrequencyAxisPixelBucketModeMenuEntryClicked,
              &param_1->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy>::
  operator=(&pFVar12->_OnFrequencyAxisScaleMenuEntryClicked,
            &param_1->OnFrequencyAxisScaleMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy>::operator=
            (&pFVar12->_OnColorMapMenuEntryClicked,&param_1->OnColorMapMenuEntryClicked);
  TDelegate<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy>::operator=
            (&pFVar12->_OnOrientationMenuEntryClicked,&param_1->OnOrientationMenuEntryClicked);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSpectrogram,RequiredArgs::T0RequiredArgs>
            (&local_568,"SAudioSpectrogram",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
             ,0x3e,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_568._Widget.Object;
  if (local_568._Widget.Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_568._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SAudioSpectrogram::Construct(local_568._Widget.Object,pFVar12);
  if (local_568._Widget.Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  if (((local_568._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_568._Widget.Object)->_padding_ + 0x228))(local_568._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_14d8b19d3;
  }
  bVar10 = 0x20;
LAB_14d8b19d3:
  *(byte *)&(local_568._Widget.Object)->_padding_ =
       (byte)(local_568._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_568._Widget.Object)->_padding_ =
       (byte)(local_568._Widget.Object)->_padding_ | bVar10;
  if (local_568._Widget.Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_568._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_568._Widget.Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  FVar7.ReferenceController = local_568._Widget.SharedReferenceCount.ReferenceController;
  local_568._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_568._Widget.Object = (SAudioSpectrogram *)0x0;
  if (pSVar5 == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->Widget).Object = pSVar5;
  (this->Widget).SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SAudioSpectrogram::FArguments::~FArguments(&local_410);
  (this->ContextMenuExtension).Object = (FExtensionBase *)0x0;
  (this->ContextMenuExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTimer).Object = (FActiveTimerHandle *)0x0;
  (this->ActiveTimer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->AudioDeviceId = 0xffffffff;
  this->bUseExternalAudioBus = false;
  (this->ActiveAnalyzerType).bIsSet = false;
  (this->AnalyzerType).Value = (param_1->AnalyzerType).Value;
  (this->AnalyzerType).bIsSet = (param_1->AnalyzerType).bIsSet;
  TDelegate<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->AnalyzerType).Getter,&(param_1->AnalyzerType).Getter);
  (this->FFTAnalyzerFFTSize).Value = (param_1->FFTAnalyzerFFTSize).Value;
  (this->FFTAnalyzerFFTSize).bIsSet = (param_1->FFTAnalyzerFFTSize).bIsSet;
  TDelegate<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->FFTAnalyzerFFTSize).Getter,&(param_1->FFTAnalyzerFFTSize).Getter);
  (this->CQTAnalyzerFFTSize).Value = (param_1->CQTAnalyzerFFTSize).Value;
  (this->CQTAnalyzerFFTSize).bIsSet = (param_1->CQTAnalyzerFFTSize).bIsSet;
  TDelegate<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->CQTAnalyzerFFTSize).Getter,&(param_1->CQTAnalyzerFFTSize).Getter);
  TDelegate<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy>
            (&this->OnAnalyzerTypeMenuEntryClicked,&param_1->OnAnalyzerTypeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy>
            (&this->OnFFTAnalyzerFFTSizeMenuEntryClicked,
             &param_1->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy>
            (&this->OnCQTAnalyzerFFTSizeMenuEntryClicked,
             &param_1->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  if ((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->SpectrumAnalysisSettings).Object[1].field_0x5 = 1;
  pEVar14 = TAttribute<enum_EFFTSize>::Get(&this->FFTAnalyzerFFTSize);
  EVar2 = *pEVar14;
  if ((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->SpectrumAnalysisSettings).Object[1].field_0x4 = EVar2;
  if ((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->SpectrumAnalysisSettings).Object[1].field_0x6 = 3;
  if ((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->SpectrumAnalysisSettings).Object[1].field_0x7 = 1;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->ConstantQSettings).Object[1].field_0x13 = 1;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  *(undefined4 *)&(this->ConstantQSettings).Object[1].field_0x8 = 0x40c00000;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  *(undefined4 *)&(this->ConstantQSettings).Object[1].field_0x4 = 0x3d;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  pUVar11 = (this->ConstantQSettings).Object;
  if (pUVar11 == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  pUVar4 = (this->ConstantQSettings).Object;
  fVar21 = powf(__real_3f000000,
                (float)(*(int *)&pUVar11[1].field_0x4 + -1) / *(float *)&pUVar4[1].field_0x8);
  fVar21 = fVar21 * __real_469c4000;
  if (pUVar4 == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  *(float *)((this->ConstantQSettings).Object + 1) = fVar21;
  pEVar15 = TAttribute<enum_EConstantQFFTSizeEnum>::Get(&this->CQTAnalyzerFFTSize);
  EVar3 = *pEVar15;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->ConstantQSettings).Object[1].field_0x11 = EVar3;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->ConstantQSettings).Object[1].field_0x12 = 3;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  (this->ConstantQSettings).Object[1].field_0x10 = 1;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  *(undefined4 *)&(this->ConstantQSettings).Object[1].field_0x14 = 0x40000000;
  if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  pSVar5 = (this->Widget).Object;
  local_588 = ExtendSpectrumPlotContextMenu;
  uStack_57c = local_500.SharedReferenceCount.ReferenceController._4_4_;
  uStack_580 = 0;
  local_648 = (undefined1  [8])0x0;
  local_640.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_640.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
             (FWriteAccessScope *)&local_450);
  local_438 = &local_640;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_640);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_588;
    puVar16[5] = CONCAT44(uStack_57c,uStack_580);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if (puVar16[4] == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
        return pFVar13;
      }
    }
  }
  if (local_450.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
  }
  local_4f0.Object = (FUICommandList *)0x0;
  local_4f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((pSVar5->ContextMenuExtender).Object == (FExtender *)0x0) {
    FStack_570.ReferenceController = ::operator_new(0x20);
    if (FStack_570.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_578 = ___xmm_00000000000000000000000000000010;
      pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_570.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_570.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar20 = FStack_570.ReferenceController + 1;
      (FStack_570.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_570.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFExtender___00_SharedPointerInternals__6B_;
      FStack_570.ReferenceController[1]._padding_ = 0;
      FStack_570.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_570.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
          return pFVar13;
        }
      }
      LOCK();
      (FStack_570.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_570.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar19 = FStack_570.ReferenceController;
      local_578 = pTVar20;
    }
    if (&pSVar5->ContextMenuExtender != (TSharedPtr<FExtender,1> *)&local_578) {
      (pSVar5->ContextMenuExtender).Object = (FExtender *)pTVar20;
      local_578 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pSVar5->ContextMenuExtender).SharedReferenceCount,&FStack_570);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_570.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    if ((pSVar5->ContextMenuExtender).Object == (FExtender *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
        return pFVar13;
      }
    }
  }
  FExtender::AddMenuExtension
            ((pSVar5->ContextMenuExtender).Object,&local_510,
             SAudioSpectrogram::ContextMenuExtensionHook,Before,&local_4f0,
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_648);
  local_550 = local_510.Object;
  local_548.ReferenceController = local_510.SharedReferenceCount.ReferenceController;
  if (local_510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ContextMenuExtension != (TSharedPtr<FExtensionBase_const_,1> *)&local_550) {
    (this->ContextMenuExtension).Object = local_510.Object;
    local_550 = (FExtensionBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContextMenuExtension).SharedReferenceCount,&local_548);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_548.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4f0.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
             (FWriteAccessScope *)&local_468);
  if ((local_640.DelegateSize != 0) &&
     (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_640.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_640,0,0,0x10);
    local_640.DelegateSize = 0;
  }
  if (local_468.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
  }
  if (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_640.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
      return pFVar13;
    }
  }
  pSVar5 = (this->Widget).Object;
  local_588 = Update;
  uStack_57c = local_500.SharedReferenceCount.ReferenceController._4_4_;
  uStack_580 = 0;
  local_530 = (undefined1  [8])0x0;
  local_528.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_528.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_530,
             (FWriteAccessScope *)&local_430);
  local_418 = &local_528;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_528);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_588;
    puVar16[5] = CONCAT44(uStack_57c,uStack_580);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrogram_AudioWidgets____A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if (puVar16[4] == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FAudioSpectrogram *)(*pcVar6)();
        return pFVar13;
      }
    }
  }
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  pTVar18 = SWidget::RegisterActiveTimer
                      ((SWidget *)pSVar5,&local_500,0.0,
                       (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                        *)local_530);
  local_538.ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
  local_540 = pTVar18->Object;
  if (local_538.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_538.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_538.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ActiveTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_540) {
    (this->ActiveTimer).Object = local_540;
    local_540 = (FActiveTimerHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveTimer).SharedReferenceCount,&local_538);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_500.SharedReferenceCount.ReferenceController._4_4_,
                      local_500.SharedReferenceCount.ReferenceController._0_4_));
  local_518 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_518 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_518);
  }
  Init(this,param_1->NumChannels,param_1->AudioDeviceId,(TObjectPtr<UAudioBus>)&local_518);
  return this;
}

// ~FAudioSpectrogram @ 14d8be350

void __thiscall AudioWidgets::FAudioSpectrogram::~FAudioSpectrogram(FAudioSpectrogram *this)

{
  int *piVar1;
  int iVar2;
  SAudioSpectrogram *pSVar3;
  FExtender *this_00;
  void *pvVar4;
  UObject *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<FExtensionBase_const_,1> local_28;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  this->_padding_ = (longlong)&___7FAudioSpectrogram_AudioWidgets__6B_;
  Teardown(this);
  if ((this->ContextMenuExtension).Object != (FExtensionBase *)0x0) {
    if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar3 = (this->Widget).Object;
    if ((this->ContextMenuExtension).Object == (FExtensionBase *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_28.SharedReferenceCount.ReferenceController =
         (this->ContextMenuExtension).SharedReferenceCount.ReferenceController;
    local_28.Object = (this->ContextMenuExtension).Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_28.Object == (FExtensionBase *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    this_00 = (pSVar3->ContextMenuExtender).Object;
    if (this_00 == (FExtender *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_850704391362052004>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrogram.cpp"
                         ,0x5c,"ContextMenuExtender.IsValid()");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      FExtender::RemoveExtension(this_00,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->ActiveTimer).Object != (FActiveTimerHandle *)0x0) {
    if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pSVar3 = (this->Widget).Object;
    if ((this->ActiveTimer).Object == (FActiveTimerHandle *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_18.SharedReferenceCount.ReferenceController =
         (this->ActiveTimer).SharedReferenceCount.ReferenceController;
    local_18.Object = (this->ActiveTimer).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_18.Object == (FActiveTimerHandle *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    SWidget::UnRegisterActiveTimer((SWidget *)pSVar3,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  pvVar4 = *(void **)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  pvVar4 = *(void **)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAnalyzerTypeMenuEntryClicked);
  pvVar4 = *(void **)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalyzerTypeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CQTAnalyzerFFTSize).Getter);
  pvVar4 = *(void **)&(this->CQTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CQTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FFTAnalyzerFFTSize).Getter);
  pvVar4 = *(void **)&(this->FFTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FFTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnalyzerType).Getter);
  pvVar4 = *(void **)&(this->AnalyzerType).Getter.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnalyzerType).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveTimer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextMenuExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  pUVar5 = (this->ConstantQSettings).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (this->ConstantQSettings).Object = (UObject *)0x0;
  }
  pUVar5 = (this->SpectrumAnalysisSettings).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (this->SpectrumAnalysisSettings).Object = (UObject *)0x0;
  }
  pUVar5 = (this->AudioBus).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  pUVar5 = (this->ConstantQAnalyzer).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (this->ConstantQAnalyzer).Object = (UObject *)0x0;
  }
  pUVar5 = (this->SpectrumAnalyzer).Object;
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    (this->SpectrumAnalyzer).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8be6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return;
    }
  }
  return;
}

// operator() @ 14d8c3fe0

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_10>::operator()
          (void *this,EConstantQFFTSizeEnum param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EConstantQFFTSizeEnum *)((longlong)pvVar2 + 2) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4120

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_11>::operator()
          (void *this,EAudioSpectrogramFrequencyAxisPixelBucketMode param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrogramFrequencyAxisPixelBucketMode *)((longlong)pvVar2 + 3) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4260

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_12>::operator()
          (void *this,EAudioSpectrogramFrequencyAxisScale param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrogramFrequencyAxisScale *)((longlong)pvVar2 + 4) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c43a0

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_13>::operator()
          (void *this,EAudioColorGradient param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioColorGradient *)((longlong)pvVar2 + 5) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c44e0

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_14>::operator()
          (void *this,EOrientation param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(char *)((longlong)pvVar2 + 6) = (char)param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c8250

void __thiscall
`AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu'::__l4::<lambda_1>::operator()
          (void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x90),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0xa0) != 0) && (*(longlong **)(lVar2 + 0x98) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c829d;
    }
  }
  bVar4 = false;
LAB_14d8c829d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0x88) = local_30;
    *(undefined1 *)(lVar2 + 0x89) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x90),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
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
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xe8),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0xf8) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0xf0), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c9160

void __thiscall
`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l7::<lambda_1>::operator()(void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xb0),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0xc0) != 0) && (*(longlong **)(lVar2 + 0xb8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xb8) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c91ad;
    }
  }
  bVar4 = false;
LAB_14d8c91ad:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0xa8) = local_30;
    *(undefined1 *)(lVar2 + 0xa9) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xb0),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
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
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x100),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x110) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x108), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8ced80

void __thiscall
`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::__l16::<lambda_3>::operator()(void *this)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_48;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  lVar2 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xd0),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0xe0) != 0) && (*(longlong **)(lVar2 + 0xd8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8cedcd;
    }
  }
  bVar4 = false;
LAB_14d8cedcd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 200) = local_30;
    *(undefined1 *)(lVar2 + 0xc9) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xd0),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
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
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x118),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x128) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x120), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8cf4f0

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_8>::operator()
          (void *this,EAudioSpectrumAnalyzerType param_1)

{
  UClass *pUVar1;
  EAudioSpectrumAnalyzerType *pEVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pEVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *pEVar2 = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8cf6a0

void __thiscall
`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::__l8::<lambda_9>::operator()
          (void *this,EFFTSize param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EFFTSize *)((longlong)pvVar2 + 1) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// BuildAnalyzerTypeSubMenu @ 14d8db630

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu
          (FAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  IAudioAnalyzerRackUnit *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UEnum *pUVar10;
  bool bVar11;
  int iVar12;
  UPackage *pUVar13;
  TTuple<FName,__int64> *pTVar14;
  undefined8 *puVar15;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar16;
  ulong64 uVar17;
  FUIAction *pFVar18;
  FSlateIcon *pFVar19;
  FText *pFVar20;
  int iVar21;
  TReferenceControllerBase<1> *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  undefined4 uStackX_1c;
  undefined1 local_2e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  FName local_2c8;
  FName local_2c0;
  undefined1 local_2b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  FDelegateAllocation local_220;
  undefined1 local_210 [8];
  FDelegateAllocation local_208;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1f8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FDestructionSentinel local_140;
  FDelegateAllocation *local_128;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_120;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_110;
  longlong *local_100 [2];
  FText local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [32];
  TTuple<FName,__int64> local_78;
  FSlateIcon local_68;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton == (UEnum *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerType,(UObject *)pUVar13,
                       L"EAudioSpectrumAnalyzerType");
  }
  pUVar10 = Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton;
  iVar21 = 0;
  iVar12 = ((Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerType.OuterSingleton)->Names).NumValues
           + -1;
  if (0 < iVar12) {
    pTVar22 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    pTVar23 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,iVar12);
    do {
      if (((pUVar10->Names).NumValues <= iVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Names.IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xb2d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar14 = UEnum::FNameData::operator[](&pUVar10->Names,&local_78,iVar21);
      local_2e8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_2e8[1] = false;
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2d8.Data = (FScriptContainerElement *)0x0;
      uVar3 = pTVar14->field_0x8;
      local_2d0 = 0;
      FText::FText((FText *)local_258);
      local_258[0x10] = false;
      local_230 = 0;
      local_2c8.ComparisonIndex.Value = 0;
      local_2c8.Number = 0;
      local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_238.Data = (FScriptContainerElement *)0x0;
      local_2c0.ComparisonIndex.Value = 0;
      local_2c0.Number = 0;
      uStack_1d8 = CONCAT31(uStack_1d8._1_3_,uVar3);
      local_228 = (undefined1  [8])0x0;
      local_220.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_220.DelegateSize = 0;
      local_1e0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_220;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_220);
      if (puVar15 != (undefined8 *)0x0) {
        bVar7 = true;
        bVar6 = true;
        pTVar16 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                            ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                             &this->_padding_,&local_120);
        pIVar4 = pTVar16->Object;
        pTVar23 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (IAudioAnalyzerRackUnit *)0x0;
        *puVar15 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu'::`4'::<lambda_2>_>
                    ::_vftable_;
        puVar15[3] = pIVar4;
        puVar15[4] = pTVar23;
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1e0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1d8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1d4;
      }
      if ((bVar6) && (bVar6 = false, pTVar23 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar23->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar23->_padding_ + 8))(pTVar23,1);
        }
      }
      if ((bVar7) &&
         (bVar7 = false,
         local_120.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_120.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_120.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_120.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      local_1f8._16_8_ = 0;
      local_1f8._0_8_ = 0;
      local_1f8._8_8_ = 0;
      local_210 = (undefined1  [8])0x0;
      local_208.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_208.DelegateSize = 0;
      uStack_1c8 = CONCAT31(uStack_1c8._1_3_,uVar3);
      local_1d0 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
                 (FWriteAccessScope *)&local_140);
      local_128 = &local_208;
      puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_208);
      if (puVar15 != (undefined8 *)0x0) {
        bVar9 = true;
        bVar8 = true;
        pTVar16 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                            ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                             &this->_padding_,&local_110);
        pIVar4 = pTVar16->Object;
        pTVar22 = (pTVar16->WeakReferenceCount).ReferenceController;
        (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar16->Object = (IAudioAnalyzerRackUnit *)0x0;
        *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar17 = FDelegateHandle::GenerateNewID();
        puVar15[2] = uVar17;
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildAnalyzerTypeSubMenu'::`4'::<lambda_1>_>
                    ::_vftable_;
        puVar15[3] = pIVar4;
        puVar15[4] = pTVar22;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
          UNLOCK();
        }
        *(undefined4 *)(puVar15 + 5) = (undefined4)local_1d0;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_1d0._4_4_;
        *(undefined4 *)(puVar15 + 6) = uStack_1c8;
        *(undefined4 *)((longlong)puVar15 + 0x34) = uStack_1c4;
      }
      if ((bVar8) && (bVar8 = false, pTVar22 != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &pTVar22->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar22->_padding_ + 8))(pTVar22,1);
        }
      }
      if ((bVar9) &&
         (bVar9 = false,
         local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
        LOCK();
        paVar1 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_110.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      pFVar18 = FUIAction::FUIAction
                          ((FUIAction *)local_e0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_210,
                           &local_1f8,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_228,
                           RepeatDisabled);
      pFVar19 = FSlateIcon::FSlateIcon(&local_68);
      pFVar20 = FText::FText(&local_f0);
      FText::FText((FText *)local_288,pFVar20);
      local_288[0x10] = true;
      local_260 = 0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar20 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_100,iVar21);
      FText::FText((FText *)local_2b8,pFVar20);
      local_2b8[0x10] = true;
      local_290 = 0;
      local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_298.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2b8,
                 (TAttribute<FText> *)local_288,pFVar19,pFVar18,local_2c0,ToggleButton,local_2c8,
                 (TAttribute<FText> *)local_258,(TAttribute<EVisibility> *)local_2e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a0,(FWriteAccessScope *)&local_1c0);
      if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_298.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
        local_290 = local_290 & 0xffffffff00000000;
      }
      if (local_1c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
      }
      if (FStack_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
      if ((ITextData *)local_2b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2b8._0_8_ + 0x10))();
      }
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1a8);
      if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = local_260 & 0xffffffff00000000;
      }
      if (local_1a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      if ((void *)local_98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
      if ((void *)local_e0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_240,(FWriteAccessScope *)&local_190);
      if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_238.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
        local_230 = local_230 & 0xffffffff00000000;
      }
      if (local_190.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
      }
      if (FStack_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_238.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
      if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_178);
      if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
        local_2d0 = local_2d0 & 0xffffffff00000000;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar12);
  }
  return;
}

// BuildFFTSizeSubMenu @ 14d8dfff0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu(FAudioSpectrogram *this,FMenuBuilder *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  undefined1 uVar4;
  IAudioAnalyzerRackUnit *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  EAudioSpectrumAnalyzerType *pEVar9;
  UEnum *pUVar10;
  TTuple<FName,__int64> *pTVar11;
  undefined8 *puVar12;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar13;
  ulong64 uVar14;
  FUIAction *pFVar15;
  FSlateIcon *pFVar16;
  FText *pFVar17;
  uint uVar18;
  uint uVar19;
  FAudioSpectrogram *pFVar20;
  FAudioSpectrogram *pFVar21;
  undefined1 local_550 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_548;
  ForAnyElementType FStack_540;
  ulonglong local_538;
  FName local_530;
  FName local_528;
  FName local_520;
  undefined1 local_518 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_500;
  ForAnyElementType FStack_4f8;
  ulonglong local_4f0;
  undefined1 local_4e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4d0;
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  undefined1 local_4b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a0;
  ForAnyElementType FStack_498;
  ulonglong local_490;
  undefined1 local_488 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_470;
  ForAnyElementType FStack_468;
  ulonglong local_460;
  undefined1 local_458 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_440;
  ForAnyElementType FStack_438;
  ulonglong local_430;
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  void *pvStack_418;
  undefined8 local_410;
  undefined1 local_408 [8];
  FDelegateAllocation local_400;
  undefined1 local_3f0 [8];
  FDelegateAllocation local_3e8;
  undefined1 local_3d8 [8];
  FDelegateAllocation local_3d0;
  undefined1 local_3c0 [8];
  FDelegateAllocation local_3b8;
  undefined1 local_3a8 [24];
  undefined1 local_390 [8];
  void *pvStack_388;
  undefined8 local_380;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_378;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_360;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FDestructionSentinel local_308;
  FDestructionSentinel local_2f0;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDestructionSentinel local_278;
  FDelegateAllocation *local_260;
  FDestructionSentinel local_258;
  FDelegateAllocation *local_240;
  FDestructionSentinel local_238;
  FDelegateAllocation *local_220;
  FDestructionSentinel local_218;
  FDelegateAllocation *local_200;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_1f8;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_1e8;
  FText local_1d8;
  longlong *local_1c8 [2];
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_1b8;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> local_1a8;
  FText local_198;
  longlong *local_188 [2];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [32];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  TTuple<FName,__int64> local_a8;
  TTuple<FName,__int64> local_98;
  FSlateIcon local_88;
  FSlateIcon local_68;
  
  uVar19 = 0;
  pEVar9 = TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(&this->AnalyzerType);
  if (*pEVar9 == FFT) {
    pUVar10 = StaticEnum<enum_EFFTSize>();
    iVar8 = (pUVar10->Names).NumValues + -1;
    pFVar20 = this;
    pFVar21 = this;
    uVar18 = uVar19;
    if (0 < iVar8) {
      do {
        if (((pUVar10->Names).NumValues <= (int)uVar19) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar11 = UEnum::FNameData::operator[](&pUVar10->Names,&local_98,uVar19);
        cVar3 = pTVar11->field_0x8;
        if (cVar3 != '\0') {
          local_550[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_550[1] = false;
          local_538 = 0;
          local_548.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_540.Data = (FScriptContainerElement *)0x0;
          FText::FText((FText *)local_458);
          local_458[0x10] = false;
          local_430 = 0;
          local_440.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_438.Data = (FScriptContainerElement *)0x0;
          local_530.ComparisonIndex.Value = 0;
          local_530.Number = 0;
          uStack_340 = CONCAT31(uStack_340._1_3_,cVar3);
          local_408 = (undefined1  [8])0x0;
          local_400.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_400.DelegateSize = 0;
          local_348 = this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
                     (FWriteAccessScope *)&local_278);
          local_260 = &local_400;
          puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_400);
          if (puVar12 != (undefined8 *)0x0) {
            uVar18 = uVar18 | 3;
            pTVar13 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                                ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                                 &this->_padding_,&local_1f8);
            pIVar5 = pTVar13->Object;
            pFVar21 = (FAudioSpectrogram *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::`7'::<lambda_2>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar21;
            if (pFVar21 != (FAudioSpectrogram *)0x0) {
              LOCK();
              ((atomic<int> *)&pFVar21->_padding_)[1] =
                   (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
              UNLOCK();
            }
            *(undefined4 *)(puVar12 + 5) = (undefined4)local_348;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = local_348._4_4_;
            *(undefined4 *)(puVar12 + 6) = uStack_340;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_33c;
          }
          if (((uVar18 & 2) != 0) &&
             (uVar18 = uVar18 & 0xfffffffd, pFVar21 != (FAudioSpectrogram *)0x0)) {
            LOCK();
            paVar1 = (atomic<int> *)&pFVar21->_padding_ + 1;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pFVar21->_padding_ + 8))(pFVar21,1);
            }
          }
          if (((uVar18 & 1) != 0) &&
             (uVar18 = uVar18 & 0xfffffffe,
             local_1f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
             ) {
            LOCK();
            paVar1 = &(local_1f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_1f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_1f8.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_278.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
          }
          local_360._16_8_ = 0;
          local_360._0_8_ = 0;
          local_360._8_8_ = 0;
          local_3f0 = (undefined1  [8])0x0;
          local_3e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3e8.DelegateSize = 0;
          uStack_310 = CONCAT31(uStack_310._1_3_,cVar3);
          local_318 = this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
                     (FWriteAccessScope *)&local_258);
          local_240 = &local_3e8;
          puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_3e8);
          if (puVar12 != (undefined8 *)0x0) {
            uVar18 = uVar18 | 0xc;
            pTVar13 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                                ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                                 &this->_padding_,&local_1e8);
            pIVar5 = pTVar13->Object;
            pFVar20 = (FAudioSpectrogram *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::`7'::<lambda_1>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar20;
            if (pFVar20 != (FAudioSpectrogram *)0x0) {
              LOCK();
              ((atomic<int> *)&pFVar20->_padding_)[1] =
                   (atomic<int>)((int)((atomic<int> *)&pFVar20->_padding_)[1] + 1);
              UNLOCK();
            }
            *(undefined4 *)(puVar12 + 5) = (undefined4)local_318;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = local_318._4_4_;
            *(undefined4 *)(puVar12 + 6) = uStack_310;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_30c;
          }
          if (((uVar18 & 8) != 0) &&
             (uVar18 = uVar18 & 0xfffffff7, pFVar20 != (FAudioSpectrogram *)0x0)) {
            LOCK();
            paVar1 = (atomic<int> *)&pFVar20->_padding_ + 1;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pFVar20->_padding_ + 8))(pFVar20,1);
            }
          }
          if (((uVar18 & 4) != 0) &&
             (uVar18 = uVar18 & 0xfffffffb,
             local_1e8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
             ) {
            LOCK();
            paVar1 = &(local_1e8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_1e8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_1e8.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_258.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
          }
          pFVar15 = FUIAction::FUIAction
                              ((FUIAction *)local_178,
                               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f0
                               ,&local_360,
                               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_408
                               ,RepeatDisabled);
          pFVar16 = FSlateIcon::FSlateIcon(&local_88);
          pFVar17 = FText::FText(&local_198);
          FText::FText((FText *)local_4b8,pFVar17);
          local_4b8[0x10] = true;
          local_490 = 0;
          local_4a0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_498.Data = (FScriptContainerElement *)0x0;
          pFVar17 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_188,uVar19);
          FText::FText((FText *)local_488,pFVar17);
          local_488[0x10] = true;
          local_460 = 0;
          local_470.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_468.Data = (FScriptContainerElement *)0x0;
          FBaseMenuBuilder::AddMenuEntry
                    ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_488,
                     (TAttribute<FText> *)local_4b8,pFVar16,pFVar15,local_530,ToggleButton,
                     (FName)0x0,(TAttribute<FText> *)local_458,(TAttribute<EVisibility> *)local_550)
          ;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_470,(FWriteAccessScope *)&local_308);
          if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_468.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_468,0,0,0x10);
            local_460 = local_460 & 0xffffffff00000000;
          }
          if (local_308.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
          }
          if (FStack_468.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_468.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_470.AccessDetector);
          if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
          }
          if (local_188[0] != (longlong *)0x0) {
            (**(code **)(*local_188[0] + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_4a0,(FWriteAccessScope *)&local_2f0);
          if (((int)local_490 != 0) && (FStack_498.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_498.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_498,0,0,0x10);
            local_490 = local_490 & 0xffffffff00000000;
          }
          if (local_2f0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
          }
          if (FStack_498.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_498.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a0.AccessDetector);
          if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
          }
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
          if ((void *)local_130._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_130._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_130);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
          if ((void *)local_148._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_148._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_148);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
          if ((void *)local_160._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_160._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_160);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
          if ((void *)local_178._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_178._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_178);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_440,(FWriteAccessScope *)&local_2d8);
          if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_438.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_438,0,0,0x10);
            local_430 = local_430 & 0xffffffff00000000;
          }
          if (local_2d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
          }
          if (FStack_438.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_438.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_440.AccessDetector);
          if ((ITextData *)local_458._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_458._0_8_ + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_548,(FWriteAccessScope *)&local_2c0);
          if (((int)local_538 != 0) && (FStack_540.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_540.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_540,0,0,0x10);
            local_538 = local_538 & 0xffffffff00000000;
          }
          if (local_2c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
          }
          if (FStack_540.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_540.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_548.AccessDetector);
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar8);
    }
  }
  else {
    pEVar9 = TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(&this->AnalyzerType);
    if (*pEVar9 == CQT) {
      pUVar10 = StaticEnum<enum_EConstantQFFTSizeEnum>();
      iVar8 = (pUVar10->Names).NumValues + -1;
      pFVar20 = this;
      pFVar21 = this;
      uVar18 = uVar19;
      if (0 < iVar8) {
        do {
          if (((pUVar10->Names).NumValues <= (int)uVar18) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Names.IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xb2d,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar11 = UEnum::FNameData::operator[](&pUVar10->Names,&local_a8,uVar18);
          local_428[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_428[1] = false;
          local_420 = (undefined1  [8])0x0;
          pvStack_418 = (void *)0x0;
          uVar4 = pTVar11->field_0x8;
          local_410 = 0;
          FText::FText((FText *)local_3a8);
          local_3a8[0x10] = false;
          local_380 = 0;
          local_390 = (undefined1  [8])0x0;
          pvStack_388 = (void *)0x0;
          local_528.ComparisonIndex.Value = 0;
          local_528.Number = 0;
          local_520.ComparisonIndex.Value = 0;
          local_520.Number = 0;
          uStack_330 = CONCAT31(uStack_330._1_3_,uVar4);
          local_3d8 = (undefined1  [8])0x0;
          local_3d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3d0.DelegateSize = 0;
          local_338 = this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d8,
                     (FWriteAccessScope *)&local_238);
          local_220 = &local_3d0;
          puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_3d0);
          if (puVar12 != (undefined8 *)0x0) {
            uVar19 = uVar19 | 0x30;
            pTVar13 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                                ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                                 &this->_padding_,&local_1a8);
            pIVar5 = pTVar13->Object;
            pFVar21 = (FAudioSpectrogram *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::`16'::<lambda_4>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar21;
            if (pFVar21 != (FAudioSpectrogram *)0x0) {
              LOCK();
              ((atomic<int> *)&pFVar21->_padding_)[1] =
                   (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
              UNLOCK();
            }
            *(undefined4 *)(puVar12 + 5) = (undefined4)local_338;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = local_338._4_4_;
            *(undefined4 *)(puVar12 + 6) = uStack_330;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_32c;
          }
          if (((uVar19 & 0x20) != 0) &&
             (uVar19 = uVar19 & 0xffffffdf, pFVar21 != (FAudioSpectrogram *)0x0)) {
            LOCK();
            paVar1 = (atomic<int> *)&pFVar21->_padding_ + 1;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pFVar21->_padding_ + 8))(pFVar21,1);
            }
          }
          if (((uVar19 & 0x10) != 0) &&
             (uVar19 = uVar19 & 0xffffffef,
             local_1a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
             ) {
            LOCK();
            paVar1 = &(local_1a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_1a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_1a8.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_238.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
          }
          local_378._16_8_ = 0;
          local_378._0_8_ = 0;
          local_378._8_8_ = 0;
          local_3c0 = (undefined1  [8])0x0;
          local_3b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3b8.DelegateSize = 0;
          uStack_320 = CONCAT31(uStack_320._1_3_,uVar4);
          local_328 = this;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
                     (FWriteAccessScope *)&local_218);
          local_200 = &local_3b8;
          puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_3b8);
          if (puVar12 != (undefined8 *)0x0) {
            uVar19 = uVar19 | 0xc0;
            pTVar13 = TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
                                ((TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *)
                                 &this->_padding_,&local_1b8);
            pIVar5 = pTVar13->Object;
            pFVar20 = (FAudioSpectrogram *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::BuildFFTSizeSubMenu'::`16'::<lambda_3>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar20;
            if (pFVar20 != (FAudioSpectrogram *)0x0) {
              LOCK();
              ((atomic<int> *)&pFVar20->_padding_)[1] =
                   (atomic<int>)((int)((atomic<int> *)&pFVar20->_padding_)[1] + 1);
              UNLOCK();
            }
            *(undefined4 *)(puVar12 + 5) = (undefined4)local_328;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = local_328._4_4_;
            *(undefined4 *)(puVar12 + 6) = uStack_320;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_31c;
          }
          if (((char)uVar19 < '\0') &&
             (uVar19 = uVar19 & 0xffffff7f, pFVar20 != (FAudioSpectrogram *)0x0)) {
            LOCK();
            paVar1 = (atomic<int> *)&pFVar20->_padding_ + 1;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pFVar20->_padding_ + 8))(pFVar20,1);
            }
          }
          if (((uVar19 & 0x40) != 0) &&
             (uVar19 = uVar19 & 0xffffffbf,
             local_1b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
             ) {
            LOCK();
            paVar1 = &(local_1b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_1b8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_1b8.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_218.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
          }
          pFVar15 = FUIAction::FUIAction
                              ((FUIAction *)local_110,
                               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3c0
                               ,&local_378,
                               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d8
                               ,RepeatDisabled);
          pFVar16 = FSlateIcon::FSlateIcon(&local_68);
          pFVar17 = FText::FText(&local_1d8);
          FText::FText((FText *)local_518,pFVar17);
          local_518[0x10] = true;
          local_4f0 = 0;
          local_500.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_4f8.Data = (FScriptContainerElement *)0x0;
          pFVar17 = (FText *)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,local_1c8,uVar18);
          FText::FText((FText *)local_4e8,pFVar17);
          local_4e8[0x10] = true;
          local_4c0 = 0;
          local_4d0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_4c8.Data = (FScriptContainerElement *)0x0;
          FBaseMenuBuilder::AddMenuEntry
                    ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_4e8,
                     (TAttribute<FText> *)local_518,pFVar16,pFVar15,local_520,ToggleButton,local_528
                     ,(TAttribute<FText> *)local_3a8,(TAttribute<EVisibility> *)local_428);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_4d0,(FWriteAccessScope *)&local_2a8);
          if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_4c8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_4c8,0,0,0x10);
            local_4c0 = local_4c0 & 0xffffffff00000000;
          }
          if (local_2a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
          }
          if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4c8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4d0.AccessDetector);
          if ((ITextData *)local_4e8._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_4e8._0_8_ + 0x10))();
          }
          if (local_1c8[0] != (longlong *)0x0) {
            (**(code **)(*local_1c8[0] + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_500,(FWriteAccessScope *)&local_290);
          if (((int)local_4f0 != 0) && (FStack_4f8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_4f8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_4f8,0,0,0x10);
            local_4f0 = local_4f0 & 0xffffffff00000000;
          }
          if (local_290.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
          }
          if (FStack_4f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_4f8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_500.AccessDetector);
          if ((ITextData *)local_518._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_518._0_8_ + 0x10))();
          }
          if (local_1d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
          if ((void *)local_c8._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_c8._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_c8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
          if ((void *)local_e0._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_e0._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_e0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
          if ((void *)local_f8._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_f8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
          if ((void *)local_110._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_110._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_110);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
          if (pvStack_388 != (void *)0x0) {
            FMemory::Free(pvStack_388);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_390);
          if ((ITextData *)local_3a8._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_3a8._0_8_ + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
          if (pvStack_418 != (void *)0x0) {
            FMemory::Free(pvStack_418);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_420);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < iVar8);
      }
    }
  }
  return;
}

// CreateConstantQAnalyzer @ 14d8f2a00

void __thiscall AudioWidgets::FAudioSpectrogram::CreateConstantQAnalyzer(FAudioSpectrogram *this)

{
  TStrongObjectPtr<UConstantQAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UConstantQAnalyzer *this_00;
  FDelegateHandle FVar6;
  UConstantQAnalyzer *pUVar7;
  longlong local_28 [2];
  code *local_18;
  undefined8 uStack_10;
  
  pUVar5 = GetTransientPackageAsObject();
  this_00 = NewObject<UConstantQAnalyzer>(pUVar5);
  pUVar7 = (UConstantQAnalyzer *)0x0;
  if (this_00 != (UConstantQAnalyzer *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar7 = this_00;
  }
  pTVar1 = &this->ConstantQAnalyzer;
  if (pTVar1 == (TStrongObjectPtr<UConstantQAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_28) {
    if (pUVar7 != (UConstantQAnalyzer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar7;
  }
  pUVar5 = (this->ConstantQSettings).Object;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = pTVar1->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 4) = pUVar5;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = OnConstantQResults;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<AudioWidgets::FAudioSpectrogram>
                    ((TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object[4].field_0x20,(FAudioSpectrogram *)&stack0x00000008,
                     (pmf_faa2efb9 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->ConstantQResultsDelegateHandle).ID = *FVar6.ID;
  return;
}

// CreateSynesthesiaSpectrumAnalyzer @ 14d90ac20

void __thiscall
AudioWidgets::FAudioSpectrogram::CreateSynesthesiaSpectrumAnalyzer(FAudioSpectrogram *this)

{
  TStrongObjectPtr<USynesthesiaSpectrumAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  USynesthesiaSpectrumAnalyzer *this_00;
  FDelegateHandle FVar6;
  USynesthesiaSpectrumAnalyzer *pUVar7;
  longlong local_28 [2];
  code *local_18;
  undefined8 uStack_10;
  
  pTVar1 = &this->SpectrumAnalyzer;
  if ((this->SpectrumAnalyzer).Object != (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310756962>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x19e,"!SpectrumAnalyzer.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SpectrumResultsDelegateHandle).ID != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310756961>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x19f,"!SpectrumResultsDelegateHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  this_00 = NewObject<USynesthesiaSpectrumAnalyzer>(pUVar5);
  pUVar7 = (USynesthesiaSpectrumAnalyzer *)0x0;
  if (this_00 != (USynesthesiaSpectrumAnalyzer *)0x0) {
    UObjectBase::AddRef((UObjectBase *)this_00);
    pUVar7 = this_00;
  }
  if (pTVar1 == (TStrongObjectPtr<USynesthesiaSpectrumAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_28) {
    if (pUVar7 != (USynesthesiaSpectrumAnalyzer *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar7;
  }
  pUVar5 = (this->SpectrumAnalysisSettings).Object;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = pTVar1->Object;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(UObject **)(pUVar2 + 4) = pUVar5;
  if (pTVar1->Object == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = OnSpectrumResults;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<AudioWidgets::FAudioSpectrogram>
                    ((TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object[4].field_0x20,(FAudioSpectrogram *)&stack0x00000008,
                     (pmf_e92cc679 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->SpectrumResultsDelegateHandle).ID = *FVar6.ID;
  return;
}

// ExtendSpectrumPlotContextMenu @ 14d922fe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrogram::ExtendSpectrumPlotContextMenu
          (FAudioSpectrogram *this,FMenuBuilder *param_1)

{
  FText *pFVar1;
  FName *pFVar2;
  FSlateIcon *pFVar3;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar4;
  FName local_res18;
  undefined8 local_res20;
  FDestructionSentinel local_258;
  undefined1 local_240 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  FDestructionSentinel local_218;
  undefined1 local_1f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  FDestructionSentinel local_198;
  FSlateIcon local_178;
  undefined1 local_158 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  undefined1 local_138 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  undefined1 local_118 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType FStack_108;
  ulonglong local_100;
  undefined1 local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  int local_d8;
  bool local_d4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  bool local_97;
  bool local_95;
  bool local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  FText local_40;
  
  memset(local_158,0,200);
  local_240[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_240[1] = false;
  local_140 = 0;
  local_120 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_228 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_138[0] = false;
  local_138[1] = false;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  local_118[0] = false;
  local_118[1] = false;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_108.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = false;
  local_f8[1] = false;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_d4 = false;
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  local_b8[0] = Preferred;
  local_b8[1] = false;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_97 = false;
  local_95 = false;
  local_90 = false;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_230.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"FAudioSpectrogram",L"AnalyzerSettings",
                      L"Analyzer Settings");
  FText::FText((FText *)local_1f8,pFVar1);
  local_1f8[0x10] = true;
  local_1d0 = 0;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
  pFVar2 = ::FName::FName(&local_res18,"AnalyzerSettings");
  FMenuBuilder::BeginSection
            (param_1,*pFVar2,(TAttribute<FText> *)local_1f8,(TAttribute<EVisibility> *)local_240,
             (TAttribute<FMenuEntryResizeParams> *)local_158);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1e0,(FWriteAccessScope *)&local_258);
  if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
    local_1d0 = local_1d0 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
  if ((FName)local_1f8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f8._0_8_ + 0x10))();
  }
  if ((ITextData *)local_218._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_218._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_238,(FWriteAccessScope *)&local_258);
  if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_258);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_258);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_258);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_258);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_258);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_258);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_258);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_258.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  local_240[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_240[1] = false;
  local_228 = 0;
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_230.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  pFVar3 = FSlateIcon::FSlateIcon(&local_178);
  local_218.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_218.Accessor._4_4_ << 0x20)
  ;
  local_218._0_8_ = BuildAnalyzerTypeSubMenu;
  pTVar4 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<AudioWidgets::FAudioSpectrogram>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_258,this,(pmf_2e5b06be *)&local_218);
  pFVar1 = FText::FText((FText *)&local_198);
  FText::FText((FText *)local_1c8,pFVar1);
  local_1c8[0x10] = true;
  local_1a0 = 0;
  local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a8.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"FAudioSpectrogram",L"AnalyzerType",L"Analyzer Type");
  FText::FText((FText *)local_1f8,pFVar1);
  local_1f8[0x10] = true;
  local_1d0 = 0;
  local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_1f8,(TAttribute<FText> *)local_1c8,pTVar4,false,
             pFVar3,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_240);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1e0,(FWriteAccessScope *)&local_218);
  if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
    local_1d0 = local_1d0 & 0xffffffff00000000;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
  if ((FName)local_1f8._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f8._0_8_ + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)&local_218);
  if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
    local_1a0 = local_1a0 & 0xffffffff00000000;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
  if ((ITextData *)local_1c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1c8._0_8_ + 0x10))();
  }
  if ((ITextData *)local_198._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_198._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_258,
             (FWriteAccessScope *)&local_218);
  if ((local_258._16_4_ != 0) && (&(local_258.Accessor)->State != (atomic<unsigned___int64> *)0x0))
  {
    (**(code **)(local_258.Accessor)->State)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_258.Accessor,0,0,0x10);
    local_258._16_4_ = 0;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (&(local_258.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
    FMemory::Free(local_258.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_258);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_238,(FWriteAccessScope *)&local_218);
  if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_218.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
  }
  if (FStack_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  local_178.StyleSetName.ComparisonIndex.Value._0_2_ = 0x19;
  local_178.StatusOverlayStyleName.ComparisonIndex.Value = 0;
  local_178.StatusOverlayStyleName.Number = 0;
  local_178.StyleName.ComparisonIndex.Value = 0;
  local_178.StyleName.Number = 0;
  local_178.SmallStyleName.ComparisonIndex.Value = 0;
  local_178.SmallStyleName.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  pFVar3 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1f8);
  local_218.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_218.Accessor & 0xffffffff00000000);
  local_218._0_8_ = BuildFFTSizeSubMenu;
  local_198._0_8_ = BuildFFTSizeSubMenu;
  local_198.Accessor = local_218.Accessor;
  pTVar4 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<AudioWidgets::FAudioSpectrogram>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_240,this,(pmf_2e5b06be *)&local_198);
  pFVar1 = FText::FText((FText *)&local_258);
  FText::FText((FText *)local_70,pFVar1);
  local_70[0x10] = true;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"FAudioSpectrogram",L"FFTSize",L"FFT Size");
  FText::FText((FText *)local_1c8,pFVar1);
  local_1c8[0x10] = true;
  local_1a0 = 0;
  local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_1c8,(TAttribute<FText> *)local_70,pTVar4,false,
             pFVar3,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)&local_178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)&local_198);
  if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
    local_1a0 = local_1a0 & 0xffffffff00000000;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
  if ((ITextData *)local_1c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1c8._0_8_ + 0x10))();
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_198);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((ITextData *)local_70._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
  }
  if ((atomic<unsigned___int64>)local_258._0_8_ != (atomic<unsigned___int64>)0x0) {
    (**(code **)(*(longlong *)local_258._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
  if (local_238.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_238.AccessDetector.State);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_178.StyleName,
             (FWriteAccessScope *)&local_198);
  if ((local_178.StatusOverlayStyleName.ComparisonIndex.Value != 0) &&
     (local_178.SmallStyleName != (FName)0x0)) {
    (*(code *)**(undefined8 **)local_178.SmallStyleName)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_178.SmallStyleName,0,0,0x10);
    local_178.StatusOverlayStyleName =
         (FName)((ulonglong)local_178.StatusOverlayStyleName & 0xffffffff00000000);
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  if (local_178.SmallStyleName != (FName)0x0) {
    FMemory::Free((void *)local_178.SmallStyleName);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_178.StyleName);
  FMenuBuilder::EndSection(param_1);
  return;
}

// GetAudioBus @ 14d92ace0

UAudioBus * __thiscall AudioWidgets::FAudioSpectrogram::GetAudioBus(FAudioSpectrogram *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetWidget @ 14d938510

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FAudioSpectrogram::GetWidget
          (FAudioSpectrogram *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  
  if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&((this->Widget).Object)->_padding_,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14d93bd40

void __thiscall
AudioWidgets::FAudioSpectrogram::Init
          (FAudioSpectrogram *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3)

{
  TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UObject *pUVar6;
  UAudioBus *pUVar7;
  EAudioSpectrumAnalyzerType *pEVar8;
  UAudioBus **ppUVar9;
  UAudioBus *local_38;
  UAudioBus *local_30;
  
  Teardown(this);
  this->AudioDeviceId = param_2;
  if (param_2 != 0xffffffff) {
    if ((param_1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumChannels > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                           ,0x88,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)param_3.field0_0x0;
    this->bUseExternalAudioBus = lVar2 != 0;
    if (lVar2 == 0) {
      pUVar6 = GetTransientPackageAsObject();
      pUVar7 = NewObject<UAudioBus>(pUVar6);
      local_38 = (UAudioBus *)0x0;
      if (pUVar7 != (UAudioBus *)0x0) {
        UObjectBase::AddRef((UObjectBase *)pUVar7);
        local_38 = pUVar7;
      }
      ppUVar9 = &local_38;
      bVar4 = false;
      bVar5 = true;
      pUVar7 = local_38;
    }
    else {
      pUVar7 = *(UAudioBus **)param_3.field0_0x0;
      local_30 = (UAudioBus *)0x0;
      if (pUVar7 == (UAudioBus *)0x0) {
        ppUVar9 = &local_30;
        bVar4 = true;
        bVar5 = false;
        pUVar7 = (UAudioBus *)0x0;
      }
      else {
        UObjectBase::AddRef((UObjectBase *)pUVar7);
        ppUVar9 = &local_30;
        bVar4 = true;
        bVar5 = false;
        local_30 = pUVar7;
      }
    }
    pTVar1 = &this->AudioBus;
    if (pTVar1 != (TStrongObjectPtr<UAudioBus,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)ppUVar9) {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
      }
      *ppUVar9 = (UAudioBus *)0x0;
      pTVar1->Object = (UObject *)pUVar7;
    }
    pUVar7 = local_30;
    if ((bVar5) && (local_38 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_38);
      local_38 = (UAudioBus *)0x0;
    }
    if ((bVar4) && (pUVar7 != (UAudioBus *)0x0)) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
      local_30 = (UAudioBus *)0x0;
    }
    if ((pTVar1->Object == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1->Object[1].field_0x8 = (char)param_1 + -1;
    CreateSynesthesiaSpectrumAnalyzer(this);
    CreateConstantQAnalyzer(this);
    pEVar8 = TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(&this->AnalyzerType);
    StartAnalyzing(this,*pEVar8);
  }
  return;
}

// MakeRackUnit @ 14d943bd0

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioSpectrogram::MakeRackUnit
          (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,
          FAudioAnalyzerRackUnitConstructParams *param_1)

{
  int *piVar1;
  int iVar2;
  UAudioBus *pUVar3;
  UClass *this;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FProperty *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  IAudioAnalyzerRackUnit *pIVar14;
  FName local_res8;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FDestructionSentinel local_358;
  FDelegateAllocation *local_340;
  FDestructionSentinel local_338;
  FDelegateAllocation *local_320;
  FDestructionSentinel local_318;
  FDelegateAllocation *local_300;
  FDestructionSentinel local_2f8;
  FDelegateAllocation *local_2e0;
  FDestructionSentinel local_2d8;
  FDelegateAllocation *local_2c0;
  FDestructionSentinel local_2b8;
  FDelegateAllocation *local_2a0;
  FDestructionSentinel local_298;
  FDelegateAllocation *local_280;
  FDestructionSentinel local_278;
  FDelegateAllocation *local_260;
  FDestructionSentinel local_258;
  FDelegateAllocation *local_240;
  FDestructionSentinel local_238;
  FDelegateAllocation *local_220;
  FDestructionSentinel local_218;
  FDelegateAllocation *local_200;
  FDestructionSentinel local_1f8;
  FDelegateAllocation *local_1e0;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  undefined1 local_1b8 [32];
  FDelegateAllocation local_198;
  bool local_187;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  FDelegateAllocation local_178;
  bool local_167;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_160;
  FDelegateAllocation local_158;
  bool local_147;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FDelegateAllocation local_138;
  bool local_127;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  bool local_107;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  bool local_e4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  FDelegateAllocation local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  FDelegateAllocation local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  FDelegateAllocation local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  FDelegateAllocation local_30;
  
  FAudioSpectrogramParams::FAudioSpectrogramParams((FAudioSpectrogramParams *)local_1b8);
  pUVar3 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (pUVar3 == (UAudioBus *)0x0) {
    local_1b8._0_4_ = 0;
  }
  else {
    local_1b8._0_4_ = pUVar3->AudioBusChannels + 1;
  }
  local_1b8._4_4_ = (param_1->AudioBusInfo).AudioDeviceId;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_1b8._8_8_ = (param_1->AudioBusInfo).AudioBus.field0_0x0;
  this = param_1->EditorSettingsClass;
  if (this != (UClass *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,"SpectrogramSettings");
    pFVar8 = UStruct::FindPropertyByName((UStruct *)this,*pFVar7);
    if (pFVar8 != (FProperty *)0x0) {
      local_1b8[0x11] = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_1b8 + 0x18),
                 (FWriteAccessScope *)&local_378);
      local_360 = &local_198;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_198);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_1>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_378.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
      }
      local_187 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_180,(FWriteAccessScope *)&local_358);
      local_340 = &local_178;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_178);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_2>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_358.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
      }
      local_167 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_160,(FWriteAccessScope *)&local_338);
      local_320 = &local_158;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_158);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_3>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_338.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
      }
      local_147 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_318);
      local_300 = &local_138;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_138);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_4>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_318.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
      }
      local_127 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_120,(FWriteAccessScope *)&local_2f8);
      local_2e0 = &local_118;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_118);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrogramFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrogramFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_5>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_2f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
      }
      local_107 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_100,(FWriteAccessScope *)&local_2d8);
      local_2c0 = &local_f8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EAudioColorGradient__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EAudioColorGradient___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_6>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_2d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
      }
      local_e4 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_e0,(FWriteAccessScope *)&local_2b8);
      local_2a0 = &local_d8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_d8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EOrientation__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<enum_EOrientation___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_7>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_2b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_c8,(FWriteAccessScope *)&local_298);
      local_280 = &local_c0;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_8>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_298.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b0,(FWriteAccessScope *)&local_278);
      local_260 = &local_a8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_a8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_9>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_278.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_98,(FWriteAccessScope *)&local_258);
      local_240 = &local_90;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_90);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_10>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_258.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_80,(FWriteAccessScope *)&local_238);
      local_220 = &local_78;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_78);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_11>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_218);
      local_200 = &local_60;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrogramFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrogramFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_12>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_218.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_50,(FWriteAccessScope *)&local_1f8);
      local_1e0 = &local_48;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EAudioColorGradient___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioColorGradient),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_13>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_1f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_1d8);
      local_1c0 = &local_30;
      puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_30);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXW4EOrientation___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EOrientation),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrogram::MakeRackUnit'::`8'::<lambda_14>_>
                   ::_vftable_;
        puVar9[3] = pFVar8;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
    }
  }
  pTVar11 = ::operator_new(0x140);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pIVar14 = (IAudioAnalyzerRackUnit *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioSpectrogram_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    FAudioSpectrogram((FAudioSpectrogram *)(pTVar11 + 1),(FAudioSpectrogramParams *)local_1b8);
    pIVar14 = (IAudioAnalyzerRackUnit *)(pTVar11 + 1);
    pTVar13 = pTVar11;
    if (pIVar14 == (IAudioAnalyzerRackUnit *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar5)();
        return pTVar12;
      }
      goto LAB_14d944361;
    }
  }
  if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IAudioAnalyzerRackUnit **)&pIVar14->field_0x8 = pIVar14;
    if (pTVar13 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pIVar14->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
LAB_14d944361:
  __return_storage_ptr__->Object = pIVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  FAudioSpectrogramParams::~FAudioSpectrogramParams((FAudioSpectrogramParams *)local_1b8);
  return __return_storage_ptr__;
}

// OnConstantQResults @ 14d94a280

void __thiscall
AudioWidgets::FAudioSpectrogram::OnConstantQResults
          (FAudioSpectrogram *this,UConstantQAnalyzer *param_1,int param_2,
          TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  EAudioSpectrumType EVar4;
  int iVar5;
  int iVar6;
  SAudioSpectrogram *this_00;
  UObject *pUVar7;
  code *pcVar8;
  float _X;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FAudioSpectrogramFrameData local_78 [2];
  
  _X = __real_40000000;
  if ((((this->ActiveAnalyzerType).bIsSet == true) && ((this->ActiveAnalyzerType).TypedValue == CQT)
      ) && (param_1 == (UConstantQAnalyzer *)(this->ConstantQAnalyzer).Object)) {
    pFVar10 = (param_3->AllocatorInstance).Data;
    iVar5 = param_3->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar5 * 0x18;
    while( true ) {
      if (param_3->ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FConstantQResults_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      if (((this->Widget).Object == (SAudioSpectrogram *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = (this->Widget).Object;
      if (((this->ConstantQSettings).Object == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar7 = (this->ConstantQSettings).Object;
      EVar4 = pUVar7[1].field_0x13;
      if ((pUVar7 == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pUVar7 = (this->ConstantQSettings).Object;
      fVar2 = *(float *)&pUVar7[1].field_0x8;
      if ((pUVar7 == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar6 = *(int *)(pFVar10 + 0x10);
      fVar3 = *(float *)((this->ConstantQSettings).Object + 1);
      local_78[0].SpectrumValues.DataPtr = *(float **)(pFVar10 + 8);
      if ((iVar6 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_78[0].SpectrumValues.ArrayNum = iVar6;
      local_78[0].SpectrumType = EVar4;
      local_78[0].MinFrequency = fVar3;
      local_78[0].MaxFrequency = powf(_X,(float)(iVar6 + -1) / fVar2);
      local_78[0].MaxFrequency = local_78[0].MaxFrequency * fVar3;
      local_78[0].bLogSpacedFreqencies = true;
      SAudioSpectrogram::AddFrame(this_00,local_78);
      pFVar10 = pFVar10 + 0x18;
    }
  }
  return;
}

// OnSpectrumResults @ 14d957ca0

void __thiscall
AudioWidgets::FAudioSpectrogram::OnSpectrumResults
          (FAudioSpectrogram *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
          TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  EAudioSpectrumType EVar2;
  uint uVar3;
  uint uVar4;
  SAudioSpectrogram *this_00;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  float fVar8;
  bool bVar9;
  FAudioDeviceManager *this_01;
  FAudioDevice *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  uint local_res8 [2];
  undefined4 uStack_84;
  FAudioSpectrogramFrameData local_78 [2];
  
  fVar8 = __real_473b8000;
  if ((((this->ActiveAnalyzerType).bIsSet == true) && ((this->ActiveAnalyzerType).TypedValue == FFT)
      ) && (param_1 == (USynesthesiaSpectrumAnalyzer *)(this->SpectrumAnalyzer).Object)) {
    uVar3 = param_3->ArrayNum;
    uVar11 = (ulonglong)(int)uVar3;
    pFVar13 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar13 + uVar11 * 0x18;
    while( true ) {
      if (param_3->ArrayNum != (int)uVar11) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<FSynesthesiaSpectrumResults_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      this_01 = FAudioDeviceManager::Get();
      fVar14 = fVar8;
      if ((this_01 != (FAudioDeviceManager *)0x0) &&
         (pFVar10 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,this->AudioDeviceId),
         pFVar10 != (FAudioDevice *)0x0)) {
        fVar14 = (float)pFVar10->SampleRate;
      }
      if (((this->Widget).Object == (SAudioSpectrogram *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (this->Widget).Object;
      if (((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = *(uint *)(pFVar13 + 0x10);
      uVar5 = *(undefined8 *)(pFVar13 + 8);
      EVar2 = (this->SpectrumAnalysisSettings).Object[1].field_0x5;
      if (((int)uVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar4 - 1;
      if (((uVar12 & uVar4 - 2) != 0) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_850704391362052047>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrogram.cpp"
                             ,0x31,"FMath::IsPowerOfTwo(SpectrumValues.Num() - 1)"), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar7 = uVar4;
      if ((int)uVar12 < (int)uVar4) {
        uVar7 = uVar12;
      }
      uVar12 = 0;
      if (0 < (int)uVar7) {
        uVar12 = uVar7;
      }
      if (((int)uVar12 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uStack_84 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_78[0].SpectrumValues.DataPtr._0_4_ = (undefined4)uVar5;
      local_78[0].MinFrequency = 0.0;
      local_78[0].SpectrumValues.DataPtr._4_4_ = uStack_84;
      local_78[0].MaxFrequency = (float)(int)(uVar12 - 1) * (fVar14 / (float)(int)(uVar4 * 2 + -2));
      local_78[0].bLogSpacedFreqencies = false;
      local_78[0].SpectrumValues.ArrayNum = uVar12;
      local_78[0].SpectrumType = EVar2;
      SAudioSpectrogram::AddFrame(this_00,local_78);
      uVar11 = (ulonglong)uVar3;
      pFVar13 = pFVar13 + 0x18;
    }
  }
  return;
}

// ReleaseConstantQAnalyzer @ 14d9636d0

void __thiscall AudioWidgets::FAudioSpectrogram::ReleaseConstantQAnalyzer(FAudioSpectrogram *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->ConstantQAnalyzer).Object;
  if ((pUVar1 == (UObject *)0x0) ||
     (FVar2.ID = (this->ConstantQResultsDelegateHandle).ID, FVar2.ID == 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310756934>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x1ba,
                       "ConstantQAnalyzer.IsValid() && ConstantQResultsDelegateHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[4].field_0x20,FVar2);
  }
  (this->ConstantQResultsDelegateHandle).ID = 0;
  pUVar1 = (this->ConstantQAnalyzer).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->ConstantQAnalyzer).Object = (UObject *)0x0;
  }
  return;
}

// ReleaseSynesthesiaSpectrumAnalyzer @ 14d963c20

void __thiscall
AudioWidgets::FAudioSpectrogram::ReleaseSynesthesiaSpectrumAnalyzer(FAudioSpectrogram *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->SpectrumAnalyzer).Object;
  if ((pUVar1 == (UObject *)0x0) ||
     (FVar2.ID = (this->SpectrumResultsDelegateHandle).ID, FVar2.ID == 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310756952>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x1a8,
                       "SpectrumAnalyzer.IsValid() && SpectrumResultsDelegateHandle.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[4].field_0x20,FVar2);
  }
  (this->SpectrumResultsDelegateHandle).ID = 0;
  pUVar1 = (this->SpectrumAnalyzer).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->SpectrumAnalyzer).Object = (UObject *)0x0;
  }
  return;
}

// SetAudioBusInfo @ 14d9680f0

void __thiscall
AudioWidgets::FAudioSpectrogram::SetAudioBusInfo(FAudioSpectrogram *this,FAudioBusInfo *param_1)

{
  UAudioBus *local_res10 [3];
  
  local_res10[0] = (param_1->AudioBus).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  Init(this,((param_1->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1,param_1->AudioDeviceId,
       (TObjectPtr<UAudioBus>)local_res10);
  return;
}

// SpawnTab @ 14d970ca0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioSpectrogram::SpawnTab
          (FAudioSpectrogram *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  code *pcVar1;
  bool bVar2;
  FArguments *pFVar3;
  TSharedRef<SDockTab,1> *pTVar4;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [5];
  undefined1 local_res20 [8];
  FText local_4e8;
  bool local_4d8;
  undefined1 local_4d0 [8];
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  FName local_4b8;
  FMemScope local_4b0;
  TSharedRef<SWidget,1> local_4a8;
  FDestructionSentinel local_498;
  SWidget *local_480;
  TReferenceControllerBase<1> *pTStack_478;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_470;
  FArguments local_458;
  
  pFVar3 = SDockTab::FArguments::FArguments(&local_458);
  *(undefined1 *)((longlong)&pFVar3->_padding_ + 2) = 1;
  local_4e8.TextData.Reference = RackUnitTypeInfo.DisplayName.TextData.Reference;
  if (RackUnitTypeInfo.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*RackUnitTypeInfo.DisplayName.TextData.Reference + 8))
              (RackUnitTypeInfo.DisplayName.TextData.Reference,local_res20);
  }
  local_4e8.Flags = RackUnitTypeInfo.DisplayName.Flags;
  local_4d8 = true;
  local_4c0 = 0;
  local_4d0 = (undefined1  [8])0x0;
  FStack_4c8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->_Label).Value,&local_4e8);
  (pFVar3->_Label).bIsSet = local_4d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
             (FWriteAccessScope *)&local_498);
  if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
    local_4c0 = local_4c0 & 0xffffffff00000000;
  }
  if (local_498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
  }
  if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  if (local_4e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
  }
  if ((this->Widget).Object == (SAudioSpectrogram *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)&((this->Widget).Object)->_padding_,&local_4a8);
  if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_480 = (pFVar3->_Content).Widget.Object;
  pTStack_478 = (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar3->_Content).Widget.Object = local_4a8.Object;
  (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_4a8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_478);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4b0,&local_4b8,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_470,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
             ,0x1c5,local_res8);
  FMemScope::~FMemScope(&local_4b0);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_470,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_458);
  return __return_storage_ptr__;
}

// StartAnalyzing @ 14d971410

void __thiscall
AudioWidgets::FAudioSpectrogram::StartAnalyzing
          (FAudioSpectrogram *this,EAudioSpectrumAnalyzerType param_1)

{
  code *pcVar1;
  bool bVar2;
  UAudioAnalyzer *this_00;
  undefined1 local_res10 [24];
  
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310757225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x97,"!ActiveAnalyzerType.IsSet()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == FFT) {
    if ((this->SpectrumAnalyzer).Object == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
  }
  else {
    if (param_1 != CQT) goto LAB_14d9714d3;
    if ((this->ConstantQAnalyzer).Object == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
  }
  UAudioAnalyzer::StartAnalyzing(this_00,this->AudioDeviceId,(UAudioBus *)(this->AudioBus).Object);
LAB_14d9714d3:
  if ((TOptional<EAudioSpectrumAnalyzerType> *)local_res10 != &this->ActiveAnalyzerType) {
    (this->ActiveAnalyzerType).TypedValue = param_1;
    (this->ActiveAnalyzerType).bIsSet = true;
  }
  return;
}

// StopAnalyzing @ 14d971e40

void __thiscall AudioWidgets::FAudioSpectrogram::StopAnalyzing(FAudioSpectrogram *this)

{
  EAudioSpectrumAnalyzerType EVar1;
  code *pcVar2;
  bool bVar3;
  UAudioAnalyzer *this_00;
  
  if ((this->ActiveAnalyzerType).bIsSet == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310757206>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0xaa,"ActiveAnalyzerType.IsSet()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ActiveAnalyzerType).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar1 = (this->ActiveAnalyzerType).TypedValue;
  if (EVar1 == FFT) {
    if ((this->SpectrumAnalyzer).Object == (UObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
  }
  else {
    if (EVar1 != CQT) goto LAB_14d971f29;
    if ((this->ConstantQAnalyzer).Object == (UObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
  }
  UAudioAnalyzer::StopAnalyzing(this_00,(UObject *)0x0);
LAB_14d971f29:
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    (this->ActiveAnalyzerType).bIsSet = false;
  }
  return;
}

// Teardown @ 14d975cb0

void __thiscall AudioWidgets::FAudioSpectrogram::Teardown(FAudioSpectrogram *this)

{
  UObjectBase *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  USynesthesiaSpectrumAnalyzer *this_00;
  UConstantQAnalyzer *this_01;
  
  pUVar1 = (UObjectBase *)(this->SpectrumAnalyzer).Object;
  if (pUVar1 != (UObjectBase *)0x0) {
    bVar3 = UObjectBase::IsValidLowLevel(pUVar1);
    if (bVar3) {
      if (((this->ActiveAnalyzerType).bIsSet == true) &&
         ((this->ActiveAnalyzerType).TypedValue == FFT)) {
        this_00 = TStrongObjectPtr<USynesthesiaSpectrumAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->(&this->SpectrumAnalyzer);
        UAudioAnalyzer::StopAnalyzing((UAudioAnalyzer *)this_00,(UObject *)0x0);
      }
      ReleaseSynesthesiaSpectrumAnalyzer(this);
    }
  }
  pUVar1 = (UObjectBase *)(this->ConstantQAnalyzer).Object;
  if (pUVar1 != (UObjectBase *)0x0) {
    bVar3 = UObjectBase::IsValidLowLevel(pUVar1);
    if (bVar3) {
      if (((this->ActiveAnalyzerType).bIsSet == true) &&
         ((this->ActiveAnalyzerType).TypedValue == CQT)) {
        this_01 = TStrongObjectPtr<UConstantQAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->(&this->ConstantQAnalyzer);
        UAudioAnalyzer::StopAnalyzing((UAudioAnalyzer *)this_01,(UObject *)0x0);
      }
      ReleaseConstantQAnalyzer(this);
    }
  }
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    (this->ActiveAnalyzerType).bIsSet = false;
  }
  pUVar2 = (this->AudioBus).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  this->bUseExternalAudioBus = false;
  return;
}

// Update @ 14d978060

EActiveTimerReturnType __thiscall
AudioWidgets::FAudioSpectrogram::Update(FAudioSpectrogram *this,double param_1,float param_2)

{
  TOptional<EAudioSpectrumAnalyzerType> *pTVar1;
  EAudioSpectrumAnalyzerType EVar2;
  EFFTSize EVar3;
  EConstantQFFTSizeEnum EVar4;
  EFFTSize EVar5;
  EConstantQFFTSizeEnum EVar6;
  code *pcVar7;
  bool bVar8;
  EActiveTimerReturnType EVar9;
  bool bVar10;
  EAudioSpectrumAnalyzerType *pEVar11;
  EFFTSize *pEVar12;
  EConstantQFFTSizeEnum *pEVar13;
  USynesthesiaSpectrumAnalysisSettings *pUVar14;
  UConstantQSettings *pUVar15;
  UAudioAnalyzer *pUVar16;
  EAudioSpectrumAnalyzerType local_48 [16];
  
  pTVar1 = &this->ActiveAnalyzerType;
  if (this->AudioDeviceId == 0xffffffff) {
    if ((this->ActiveAnalyzerType).bIsSet == false) {
      return Continue;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_156472556310756999>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                       ,0x179,"!ActiveAnalyzerType.IsSet()");
    if (!bVar8) {
      return Continue;
    }
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  pEVar11 = TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(&this->AnalyzerType);
  EVar2 = *pEVar11;
  pEVar12 = TAttribute<enum_EFFTSize>::Get(&this->FFTAnalyzerFFTSize);
  EVar3 = *pEVar12;
  pEVar13 = TAttribute<enum_EConstantQFFTSizeEnum>::Get(&this->CQTAnalyzerFFTSize);
  EVar4 = *pEVar13;
  if ((this->ActiveAnalyzerType).bIsSet == true) {
    bVar8 = pTVar1->TypedValue != EVar2;
  }
  else {
    bVar8 = true;
  }
  if (((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  EVar5 = (this->SpectrumAnalysisSettings).Object[1].field_0x4;
  if (((this->ConstantQSettings).Object == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  EVar6 = (this->ConstantQSettings).Object[1].field_0x11;
  if (((!bVar8) && (EVar5 == EVar3)) && (EVar6 == EVar4)) {
    return Continue;
  }
  if (((this->ActiveAnalyzerType).bIsSet == false) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_156472556310757206>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                         ,0xaa,"ActiveAnalyzerType.IsSet()"), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  if (((this->ActiveAnalyzerType).bIsSet == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  if (pTVar1->TypedValue == FFT) {
    if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    pUVar16 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
LAB_14d97828c:
    UAudioAnalyzer::StopAnalyzing(pUVar16,(UObject *)0x0);
  }
  else if (pTVar1->TypedValue == CQT) {
    if (((this->ConstantQAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    pUVar16 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
    goto LAB_14d97828c;
  }
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    (this->ActiveAnalyzerType).bIsSet = false;
  }
  if (EVar5 != EVar3) {
    ReleaseSynesthesiaSpectrumAnalyzer(this);
    pUVar14 = TStrongObjectPtr<USynesthesiaSpectrumAnalysisSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->(&this->SpectrumAnalysisSettings);
    pUVar14->FFTSize = EVar3;
    CreateSynesthesiaSpectrumAnalyzer(this);
  }
  if (EVar6 != EVar4) {
    ReleaseConstantQAnalyzer(this);
    pUVar15 = TStrongObjectPtr<UConstantQSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->(&this->ConstantQSettings);
    pUVar15->FFTSize = EVar4;
    CreateConstantQAnalyzer(this);
  }
  if (((this->ActiveAnalyzerType).bIsSet != false) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_156472556310757225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrogram.cpp"
                         ,0x97,"!ActiveAnalyzerType.IsSet()"), bVar8)) {
    pcVar7 = (code *)swi(3);
    EVar9 = (*pcVar7)();
    return EVar9;
  }
  if (EVar2 == FFT) {
    if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    pUVar16 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
  }
  else {
    if (EVar2 != CQT) goto LAB_14d9783a7;
    if (((this->ConstantQAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      EVar9 = (*pcVar7)();
      return EVar9;
    }
    pUVar16 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
  }
  UAudioAnalyzer::StartAnalyzing(pUVar16,this->AudioDeviceId,(UAudioBus *)(this->AudioBus).Object);
LAB_14d9783a7:
  if ((TOptional<EAudioSpectrumAnalyzerType> *)local_48 != pTVar1) {
    pTVar1->TypedValue = EVar2;
    (this->ActiveAnalyzerType).bIsSet = true;
  }
  return Continue;
}

