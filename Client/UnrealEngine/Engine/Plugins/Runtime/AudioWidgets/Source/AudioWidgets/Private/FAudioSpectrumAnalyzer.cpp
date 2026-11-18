// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 38

// FAudioSpectrumAnalyzer @ 14d8b2510

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FAudioSpectrumAnalyzer * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::FAudioSpectrumAnalyzer
          (FAudioSpectrumAnalyzer *this,FAudioSpectrumAnalyzerParams *param_1)

{
  byte *pbVar1;
  EFFTSize EVar2;
  EConstantQFFTSizeEnum EVar3;
  UObject *pUVar4;
  SAudioSpectrumPlot *pSVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  UObject *pUVar11;
  USynesthesiaSpectrumAnalysisSettings *this_00;
  UConstantQSettings *this_01;
  FArguments *pFVar12;
  FAudioWidgetsStyle *pFVar13;
  FName *pFVar14;
  FAudioSpectrumPlotStyle *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FAudioSpectrumAnalyzer *pFVar18;
  EFFTSize *pEVar19;
  EConstantQFFTSizeEnum *pEVar20;
  TSharedRef<FExtensionBase_const_,1> *pTVar21;
  float fVar22;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_768 [8];
  FDelegateAllocation local_760;
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs> local_750;
  UAudioBus *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  FExtensionBase *local_728;
  FSharedReferencer<1> local_720;
  float local_718;
  bool local_714;
  undefined1 local_710 [8];
  void *pvStack_708;
  undefined4 local_700;
  undefined2 local_6f8;
  undefined1 local_6f0 [8];
  void *pvStack_6e8;
  undefined8 local_6e0;
  bool local_6d8;
  bool local_6d7;
  undefined1 local_6d0 [8];
  void *pvStack_6c8;
  undefined4 local_6c0;
  bool local_6b8;
  bool local_6b7;
  undefined1 local_6b0 [8];
  void *pvStack_6a8;
  undefined4 local_6a0;
  EAudioSpectrumPlotFrequencyAxisScale local_698;
  bool local_697;
  undefined1 local_690 [8];
  void *pvStack_688;
  undefined4 local_680;
  EAudioSpectrumPlotFrequencyAxisPixelBucketMode local_678;
  bool local_677;
  undefined1 local_670 [8];
  void *pvStack_668;
  undefined4 local_660;
  code *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  TSharedRef<FExtensionBase_const_,1> local_648;
  TSharedPtr<FUICommandList,1> local_638;
  FDestructionSentinel local_628;
  FDestructionSentinel local_610;
  undefined1 *local_5f8;
  FDestructionSentinel local_5f0;
  FDelegateAllocation *local_5d8;
  FName local_5d0;
  FArguments local_5c8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAudioSpectrumAnalyzer_AudioWidgets__6B_;
  (this->SpectrumAnalyzer).Object = (UObject *)0x0;
  (this->ConstantQAnalyzer).Object = (UObject *)0x0;
  (this->AudioBus).Object = (UObject *)0x0;
  (this->CenterFrequencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CenterFrequencies).ArrayNum = 0;
  (this->CenterFrequencies).ArrayMax = 0;
  (this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ARSmoothedSquaredMagnitudes).ArrayNum = 0;
  (this->ARSmoothedSquaredMagnitudes).ArrayMax = 0;
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
  pFVar12 = SAudioSpectrumPlot::FArguments::FArguments(&local_5c8);
  pFVar15 = param_1->PlotStyle;
  if (pFVar15 == (FAudioSpectrumPlotStyle *)0x0) {
    pFVar13 = FAudioWidgetsStyle::Get();
    pFVar14 = ::FName::FName(&local_5d0,"AudioSpectrumPlot.Style");
    pFVar15 = (FAudioSpectrumPlotStyle *)
              (**(code **)(*(longlong *)pFVar13 + 0xa0))
                        (pFVar13,FAudioSpectrumPlotStyle::TypeName,*pFVar14,0,1);
    if ((pFVar15 == (FAudioSpectrumPlotStyle *)0x0) &&
       (pFVar15 = &::Default,
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0)) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FAudioSpectrumPlotStyle::FAudioSpectrumPlotStyle(&::Default);
        atexit(`FAudioSpectrumPlotStyle::GetDefault'::__l2::
               _dynamic_atexit_destructor_for__Default__);
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  pFVar12->_Style = pFVar15;
  *(undefined1 *)((longlong)&pFVar12->_padding_ + 2) = 1;
  local_718 = (param_1->TiltExponent).Value;
  local_714 = (param_1->TiltExponent).bIsSet;
  local_710 = (undefined1  [8])0x0;
  pvStack_708 = (void *)0x0;
  local_700 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_710,
             &(param_1->TiltExponent).Getter);
  (pFVar12->_TiltExponent).Value = local_718;
  (pFVar12->_TiltExponent).bIsSet = local_714;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_TiltExponent).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  if (pvStack_708 != (void *)0x0) {
    FMemory::Free(pvStack_708);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_710);
  local_6f8 = 0x101;
  local_6e0 = 0;
  local_6f0 = (undefined1  [8])0x0;
  pvStack_6e8 = (void *)0x0;
  (pFVar12->_DisplayCrosshair).Value = true;
  (pFVar12->_DisplayCrosshair).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_DisplayCrosshair).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  if (pvStack_6e8 != (void *)0x0) {
    FMemory::Free(pvStack_6e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  local_6d8 = (param_1->bDisplayFrequencyAxisLabels).Value;
  local_6d7 = (param_1->bDisplayFrequencyAxisLabels).bIsSet;
  local_6d0 = (undefined1  [8])0x0;
  pvStack_6c8 = (void *)0x0;
  local_6c0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_6d0,
             &(param_1->bDisplayFrequencyAxisLabels).Getter);
  (pFVar12->_DisplayFrequencyAxisLabels).Value = local_6d8;
  (pFVar12->_DisplayFrequencyAxisLabels).bIsSet = local_6d7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar12->_DisplayFrequencyAxisLabels).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  if (pvStack_6c8 != (void *)0x0) {
    FMemory::Free(pvStack_6c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  local_6b8 = (param_1->bDisplaySoundLevelAxisLabels).Value;
  local_6b7 = (param_1->bDisplaySoundLevelAxisLabels).bIsSet;
  local_6b0 = (undefined1  [8])0x0;
  pvStack_6a8 = (void *)0x0;
  local_6a0 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_6b0,
             &(param_1->bDisplaySoundLevelAxisLabels).Getter);
  (pFVar12->_DisplaySoundLevelAxisLabels).Value = local_6b8;
  (pFVar12->_DisplaySoundLevelAxisLabels).bIsSet = local_6b7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar12->_DisplaySoundLevelAxisLabels).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
  if (pvStack_6a8 != (void *)0x0) {
    FMemory::Free(pvStack_6a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b0);
  local_698 = (param_1->FrequencyAxisScale).Value;
  local_697 = (param_1->FrequencyAxisScale).bIsSet;
  local_690 = (undefined1  [8])0x0;
  pvStack_688 = (void *)0x0;
  local_680 = 0;
  TDelegate<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(local_690,&(param_1->FrequencyAxisScale).Getter);
  (pFVar12->_FrequencyAxisScale).Value = local_698;
  (pFVar12->_FrequencyAxisScale).bIsSet = local_697;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_FrequencyAxisScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_690);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_690);
  if (pvStack_688 != (void *)0x0) {
    FMemory::Free(pvStack_688);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_690);
  local_678 = (param_1->FrequencyAxisPixelBucketMode).Value;
  local_677 = (param_1->FrequencyAxisPixelBucketMode).bIsSet;
  local_670 = (undefined1  [8])0x0;
  pvStack_668 = (void *)0x0;
  local_660 = 0;
  TDelegate<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(local_670,&(param_1->FrequencyAxisPixelBucketMode).Getter);
  (pFVar12->_FrequencyAxisPixelBucketMode).Value = local_678;
  (pFVar12->_FrequencyAxisPixelBucketMode).bIsSet = local_677;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar12->_FrequencyAxisPixelBucketMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_670);
  if (pvStack_668 != (void *)0x0) {
    FMemory::Free(pvStack_668);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_670);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy>::operator=
            (&pFVar12->_OnTiltSpectrumMenuEntryClicked,&param_1->OnTiltSpectrumMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar12->_OnFrequencyAxisPixelBucketModeMenuEntryClicked,
              &param_1->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy>::
  operator=(&pFVar12->_OnFrequencyAxisScaleMenuEntryClicked,
            &param_1->OnFrequencyAxisScaleMenuEntryClicked);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar12->_OnDisplayFrequencyAxisLabelsButtonToggled,
             &param_1->OnDisplayFrequencyAxisLabelsButtonToggled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar12->_OnDisplaySoundLevelAxisLabelsButtonToggled,
             &param_1->OnDisplaySoundLevelAxisLabelsButtonToggled);
  uStack_730 = 0;
  local_738 = (UAudioBus *)GetAudioSpectrumData;
  uStack_72c = local_648.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar12->_OnGetAudioSpectrumData,(FWriteAccessScope *)&local_610);
  local_5f8 = &(pFVar12->_OnGetAudioSpectrumData).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5f8);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_738;
    puVar16[5] = CONCAT44(uStack_72c,uStack_730);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6A_AUFAudioPowerSpectrumData__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if (puVar16[4] == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
        return pFVar18;
      }
    }
  }
  if (local_610.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_610.Accessor,&local_610);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioSpectrumPlot,RequiredArgs::T0RequiredArgs>
            (&local_750,"SAudioSpectrumPlot",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
             ,0x5c,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar5 = local_750._Widget.Object;
  if (local_750._Widget.Object == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_750._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SAudioSpectrumPlot::Construct(local_750._Widget.Object,pFVar12);
  if (local_750._Widget.Object == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  if (((local_750._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_750._Widget.Object)->_padding_ + 0x228))(local_750._Widget.Object);
    bVar10 = 0;
    if (cVar9 == '\0') goto LAB_14d8b2b3c;
  }
  bVar10 = 0x20;
LAB_14d8b2b3c:
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ | bVar10;
  if (local_750._Widget.Object == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_750._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_750._Widget.Object == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  FVar7.ReferenceController = local_750._Widget.SharedReferenceCount.ReferenceController;
  local_750._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_750._Widget.Object = (SAudioSpectrumPlot *)0x0;
  if (pSVar5 == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
  SAudioSpectrumPlot::FArguments::~FArguments(&local_5c8);
  (this->ContextMenuExtension).Object = (FExtensionBase *)0x0;
  (this->ContextMenuExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AudioDeviceId = 0xffffffff;
  this->bUseExternalAudioBus = false;
  (this->ActiveAnalyzerType).bIsSet = false;
  (this->PrevTimeStamp).bIsSet = false;
  this->WindowCompensationPowerGain = 1.0;
  this->AttackTimeMsec = 300.0;
  this->ReleaseTimeMsec = 300.0;
  (this->Ballistics).Value = (param_1->Ballistics).Value;
  (this->Ballistics).bIsSet = (param_1->Ballistics).bIsSet;
  TDelegate<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Ballistics).Getter,&(param_1->Ballistics).Getter);
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
  TDelegate<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy>
            (&this->OnBallisticsMenuEntryClicked,&param_1->OnBallisticsMenuEntryClicked);
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  (this->SpectrumAnalysisSettings).Object[1].field_0x5 = 1;
  pEVar19 = TAttribute<enum_EFFTSize>::Get(&this->FFTAnalyzerFFTSize);
  EVar2 = *pEVar19;
  if ((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  pUVar4 = (this->ConstantQSettings).Object;
  fVar22 = powf(__real_3f000000,
                (float)(*(int *)&pUVar11[1].field_0x4 + -1) / *(float *)&pUVar4[1].field_0x8);
  fVar22 = fVar22 * __real_469c4000;
  if (pUVar4 == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  *(float *)((this->ConstantQSettings).Object + 1) = fVar22;
  pEVar20 = TAttribute<enum_EConstantQFFTSizeEnum>::Get(&this->CQTAnalyzerFFTSize);
  EVar3 = *pEVar20;
  if ((this->ConstantQSettings).Object == (UObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
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
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  *(undefined4 *)&(this->ConstantQSettings).Object[1].field_0x14 = 0x40000000;
  if ((this->Widget).Object == (SAudioSpectrumPlot *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
      return pFVar18;
    }
  }
  pSVar5 = (this->Widget).Object;
  local_658 = ExtendSpectrumPlotContextMenu;
  uStack_64c = local_648.SharedReferenceCount.ReferenceController._4_4_;
  uStack_650 = 0;
  local_768 = (undefined1  [8])0x0;
  local_760.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_760.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_5f0);
  local_5d8 = &local_760;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_760);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    puVar16[4] = local_658;
    puVar16[5] = CONCAT44(uStack_64c,uStack_650);
    *puVar16 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFAudioSpectrumAnalyzer_AudioWidgets____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = this;
    if (puVar16[4] == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar18 = (FAudioSpectrumAnalyzer *)(*pcVar6)();
        return pFVar18;
      }
    }
  }
  if (local_5f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
  }
  local_638.Object = (FUICommandList *)0x0;
  local_638.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar21 = SAudioSpectrumPlot::AddContextMenuExtension
                      (pSVar5,&local_648,Before,&local_638,
                       (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       local_768);
  local_720.ReferenceController = (pTVar21->SharedReferenceCount).ReferenceController;
  local_728 = pTVar21->Object;
  if (local_720.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_720.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_720.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ContextMenuExtension != (TSharedPtr<FExtensionBase_const_,1> *)&local_728) {
    (this->ContextMenuExtension).Object = local_728;
    local_728 = (FExtensionBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ContextMenuExtension).SharedReferenceCount,&local_720);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_720.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_648.SharedReferenceCount.ReferenceController._4_4_,
                      local_648.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_628);
  if ((local_760.DelegateSize != 0) &&
     (local_760.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_760.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_760,0,0,0x10);
    local_760.DelegateSize = 0;
  }
  if (local_628.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_628.Accessor,&local_628);
  }
  if (local_760.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_760.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_768);
  local_738 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_738 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_738);
  }
  Init(this,param_1->NumChannels,param_1->AudioDeviceId,(TObjectPtr<UAudioBus>)&local_738);
  return this;
}

// FAudioSpectrumAnalyzer @ 14d8b32f0

FAudioSpectrumAnalyzer * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::FAudioSpectrumAnalyzer
          (FAudioSpectrumAnalyzer *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3)

{
  FDestructionSentinel local_238;
  undefined1 local_220 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_208;
  ForAnyElementType FStack_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e8;
  ForAnyElementType FStack_1e0;
  ulonglong local_1d8;
  undefined1 local_1d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType FStack_1a0;
  ulonglong local_198;
  float local_190;
  bool local_18c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  ForAnyElementType FStack_180;
  ulonglong local_178;
  undefined1 local_170 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  ulonglong local_158;
  undefined1 local_150 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  undefined1 local_130 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  ulonglong local_118;
  undefined1 local_110 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType FStack_100;
  ulonglong local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType FStack_d0;
  ulonglong local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  ForAnyElementType FStack_a0;
  ulonglong local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  ulonglong local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  ulonglong local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  FAudioSpectrumPlotStyle *local_18;
  
  local_220._8_8_ = *(undefined8 *)param_3.field0_0x0;
  local_220._0_4_ = param_1;
  local_220._4_4_ = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UAudioBus *)local_220._8_8_ != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_220._8_8_);
  }
  local_220[0x10] = Digital;
  local_220[0x11] = true;
  local_1f8 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_198 = 0;
  local_178 = 0;
  local_158 = 0;
  local_138 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_208.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_200.Data = (FScriptContainerElement *)0x0;
  local_1f0[0] = CQT;
  local_1f0[1] = true;
  local_1e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1e0.Data = (FScriptContainerElement *)0x0;
  local_1d0[0] = Max;
  local_1d0[1] = true;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = XXLarge;
  local_1b0[1] = true;
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a0.Data = (FScriptContainerElement *)0x0;
  local_190 = 0.0;
  local_18c = true;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  local_170[0] = Average;
  local_170[1] = true;
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_160.Data = (FScriptContainerElement *)0x0;
  local_150[0] = Logarithmic;
  local_150[1] = true;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_130[0] = false;
  local_130[1] = true;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_110[0] = false;
  local_110[1] = true;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_100.Data = (FScriptContainerElement *)0x0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_18 = (FAudioSpectrumPlotStyle *)0x0;
  FAudioSpectrumAnalyzer(this,(FAudioSpectrumAnalyzerParams *)local_220);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_238);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_238);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_238);
  if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_238);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_238);
  if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_238);
  if (((int)local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_238);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_238);
  if (((int)local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_238);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_238);
  if (((int)local_f8 != 0) && (FStack_100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_100,0,0,0x10);
    local_f8 = local_f8 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_238);
  if (((int)local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = local_118 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_238);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_238);
  if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
    local_158 = local_158 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_238);
  if (((int)local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
    local_178 = local_178 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_238);
  if (((int)local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10);
    local_198 = local_198 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_238);
  if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = local_1b8 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1e8,(FWriteAccessScope *)&local_238);
  if (((int)local_1d8 != 0) && (FStack_1e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e0,0,0,0x10);
    local_1d8 = local_1d8 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_1e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_208,(FWriteAccessScope *)&local_238);
  if (((int)local_1f8 != 0) && (FStack_200.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_200.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_200,0,0,0x10);
    local_1f8 = local_1f8 & 0xffffffff00000000;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (FStack_200.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_200.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_208.AccessDetector);
  this->_padding_ = (longlong)&___7FAudioSpectrumAnalyzer_AudioWidgets__6B_;
  return this;
}

// ~FAudioSpectrumAnalyzer @ 14d8bea10

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::~FAudioSpectrumAnalyzer(FAudioSpectrumAnalyzer *this)

{
  int *piVar1;
  int iVar2;
  SAudioSpectrumPlot *this_00;
  void *pvVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<FExtensionBase_const_,1> local_18;
  
  this->_padding_ = (longlong)&___7FAudioSpectrumAnalyzer_AudioWidgets__6B_;
  Teardown(this);
  if ((this->Widget).Object == (SAudioSpectrumPlot *)0x0) {
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &((this->Widget).Object)->OnGetAudioSpectrumData);
  if ((this->ContextMenuExtension).Object != (FExtensionBase *)0x0) {
    if ((this->Widget).Object == (SAudioSpectrumPlot *)0x0) {
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
    this_00 = (this->Widget).Object;
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
    local_18.SharedReferenceCount.ReferenceController =
         (this->ContextMenuExtension).SharedReferenceCount.ReferenceController;
    local_18.Object = (this->ContextMenuExtension).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_18.Object == (FExtensionBase *)0x0) {
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
    SAudioSpectrumPlot::RemoveContextMenuExtension(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  pvVar3 = *(void **)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  pvVar3 = *(void **)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAnalyzerTypeMenuEntryClicked);
  pvVar3 = *(void **)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalyzerTypeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBallisticsMenuEntryClicked);
  pvVar3 = *(void **)&(this->OnBallisticsMenuEntryClicked).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBallisticsMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CQTAnalyzerFFTSize).Getter);
  pvVar3 = *(void **)&(this->CQTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CQTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FFTAnalyzerFFTSize).Getter);
  pvVar3 = *(void **)&(this->FFTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FFTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnalyzerType).Getter);
  pvVar3 = *(void **)&(this->AnalyzerType).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnalyzerType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Ballistics).Getter);
  pvVar3 = *(void **)&(this->Ballistics).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Ballistics).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextMenuExtension).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  pUVar4 = (this->ConstantQSettings).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->ConstantQSettings).Object = (UObject *)0x0;
  }
  pUVar4 = (this->SpectrumAnalysisSettings).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->SpectrumAnalysisSettings).Object = (UObject *)0x0;
  }
  pFVar5 = (this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CenterFrequencies).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pUVar4 = (this->AudioBus).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  pUVar4 = (this->ConstantQAnalyzer).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
    (this->ConstantQAnalyzer).Object = (UObject *)0x0;
  }
  pUVar4 = (this->SpectrumAnalyzer).Object;
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
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
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// operator() @ 14d8c4080

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_10>::operator()
          (void *this,EAudioSpectrumAnalyzerBallistics param_1)

{
  UClass *pUVar1;
  EAudioSpectrumAnalyzerBallistics *pEVar2;
  
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

// operator() @ 14d8c41c0

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_11>::operator()
          (void *this,EAudioSpectrumAnalyzerType param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrumAnalyzerType *)((longlong)pvVar2 + 1) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4300

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_12>::operator()
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
  *(EFFTSize *)((longlong)pvVar2 + 2) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4440

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_13>::operator()
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
  *(EConstantQFFTSizeEnum *)((longlong)pvVar2 + 3) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4580

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_14>::operator()
          (void *this,EAudioSpectrumPlotTilt param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrumPlotTilt *)((longlong)pvVar2 + 4) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4620

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_15>::operator()
          (void *this,EAudioSpectrumPlotFrequencyAxisPixelBucketMode param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)((longlong)pvVar2 + 5) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c46c0

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_16>::operator()
          (void *this,EAudioSpectrumPlotFrequencyAxisScale param_1)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(EAudioSpectrumPlotFrequencyAxisScale *)((longlong)pvVar2 + 6) = param_1;
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4760

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_17>::operator()(void *this)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(bool *)((longlong)pvVar2 + 7) = *(char *)((longlong)pvVar2 + 7) == '\0';
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c4800

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::__l8::<lambda_18>::operator()(void *this)

{
  UClass *pUVar1;
  void *pvVar2;
  
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pvVar2 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)this,(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0);
  *(bool *)((longlong)pvVar2 + 8) = *(char *)((longlong)pvVar2 + 8) == '\0';
  pUVar1 = FField::GetOwnerClass(*(FField **)this);
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  UObject::SaveConfig((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr,0x4000,(wchar_t *)0x0,GConfig
                      ,true);
  return;
}

// operator() @ 14d8c83b0

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu'::__l4::<lambda_1>::operator()
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xd8),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0xe8) != 0) && (*(longlong **)(lVar2 + 0xe0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xe0) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c83fd;
    }
  }
  bVar4 = false;
LAB_14d8c83fd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0xd0) = local_30;
    *(undefined1 *)(lVar2 + 0xd1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xd8),
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x148),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x158) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x150), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c8510

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu'::__l4::<lambda_1>::operator()
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xb8),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 200) != 0) && (*(longlong **)(lVar2 + 0xc0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xc0) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c855d;
    }
  }
  bVar4 = false;
LAB_14d8c855d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0xb0) = local_30;
    *(undefined1 *)(lVar2 + 0xb1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xb8),
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x130),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x140) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x138), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8c92c0

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l7::<lambda_1>::operator()
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xf8),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x108) != 0) && (*(longlong **)(lVar2 + 0x100) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x100) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8c930d;
    }
  }
  bVar4 = false;
LAB_14d8c930d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0xf0) = local_30;
    *(undefined1 *)(lVar2 + 0xf1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xf8),
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x160),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x170) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x168), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// operator() @ 14d8ceee0

void __thiscall
`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::__l16::<lambda_3>::operator()
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x118),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x128) != 0) && (*(longlong **)(lVar2 + 0x120) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x120) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14d8cef2d;
    }
  }
  bVar4 = false;
LAB_14d8cef2d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  if (!bVar4) {
    local_30 = *(undefined1 *)((longlong)this + 8);
    lVar2 = *(longlong *)this;
    local_2f = 1;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_18 = 0;
    *(undefined1 *)(lVar2 + 0x110) = local_30;
    *(undefined1 *)(lVar2 + 0x111) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x118),
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x178),
             (FReadAccessScope *)&local_48);
  if ((*(int *)(lVar2 + 0x188) != 0) &&
     (plVar3 = *(longlong **)(lVar2 + 0x180), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  return;
}

// BuildAnalyzerTypeSubMenu @ 14d8dbdb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu
          (FAudioSpectrumAnalyzer *this,FMenuBuilder *param_1)

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
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu'::`4'::<lambda_2>_>
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
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildAnalyzerTypeSubMenu'::`4'::<lambda_1>_>
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

// BuildBallisticsSubMenu @ 14d8dc530

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu
          (FAudioSpectrumAnalyzer *this,FMenuBuilder *param_1)

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
  if (Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton == (UEnum *)0x0) {
    pUVar13 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioSpectrumAnalyzerBallistics,
                       (UObject *)pUVar13,L"EAudioSpectrumAnalyzerBallistics");
  }
  pUVar10 = Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton;
  iVar21 = 0;
  iVar12 = ((Z_Registration_Info_UEnum_EAudioSpectrumAnalyzerBallistics.OuterSingleton)->Names).
           NumValues + -1;
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
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu'::`4'::<lambda_2>_>
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
        *puVar15 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildBallisticsSubMenu'::`4'::<lambda_1>_>
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

// BuildFFTSizeSubMenu @ 14d8e0e30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu
          (FAudioSpectrumAnalyzer *this,FMenuBuilder *param_1)

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
  FAudioSpectrumAnalyzer *pFVar20;
  FAudioSpectrumAnalyzer *pFVar21;
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
            pFVar21 = (FAudioSpectrumAnalyzer *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::`7'::<lambda_2>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar21;
            if (pFVar21 != (FAudioSpectrumAnalyzer *)0x0) {
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
             (uVar18 = uVar18 & 0xfffffffd, pFVar21 != (FAudioSpectrumAnalyzer *)0x0)) {
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
            pFVar20 = (FAudioSpectrumAnalyzer *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::`7'::<lambda_1>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar20;
            if (pFVar20 != (FAudioSpectrumAnalyzer *)0x0) {
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
             (uVar18 = uVar18 & 0xfffffff7, pFVar20 != (FAudioSpectrumAnalyzer *)0x0)) {
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
            pFVar21 = (FAudioSpectrumAnalyzer *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::`16'::<lambda_4>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar21;
            if (pFVar21 != (FAudioSpectrumAnalyzer *)0x0) {
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
             (uVar19 = uVar19 & 0xffffffdf, pFVar21 != (FAudioSpectrumAnalyzer *)0x0)) {
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
            pFVar20 = (FAudioSpectrumAnalyzer *)(pTVar13->WeakReferenceCount).ReferenceController;
            (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pTVar13->Object = (IAudioAnalyzerRackUnit *)0x0;
            *puVar12 = &
                       ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar14 = FDelegateHandle::GenerateNewID();
            puVar12[2] = uVar14;
            *puVar12 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::BuildFFTSizeSubMenu'::`16'::<lambda_3>_>
                        ::_vftable_;
            puVar12[3] = pIVar5;
            puVar12[4] = pFVar20;
            if (pFVar20 != (FAudioSpectrumAnalyzer *)0x0) {
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
             (uVar19 = uVar19 & 0xffffff7f, pFVar20 != (FAudioSpectrumAnalyzer *)0x0)) {
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

// CreateConstantQAnalyzer @ 14d8f2b50

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::CreateConstantQAnalyzer(FAudioSpectrumAnalyzer *this)

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
          ::AddRaw<AudioWidgets::FAudioSpectrumAnalyzer>
                    ((TMulticastDelegateRegistration<void___cdecl(UConstantQAnalyzer_*,int,TArray<FConstantQResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object[4].field_0x20,(FAudioSpectrumAnalyzer *)&stack0x00000008,
                     (pmf_1a03f935 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->ConstantQResultsDelegateHandle).ID = *FVar6.ID;
  return;
}

// CreateSynesthesiaSpectrumAnalyzer @ 14d90add0

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::CreateSynesthesiaSpectrumAnalyzer
          (FAudioSpectrumAnalyzer *this)

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
                      (&bGEnsureHasExecuted<1517583727188771385>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x239,"!SpectrumAnalyzer.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SpectrumResultsDelegateHandle).ID != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771386>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x23a,"!SpectrumResultsDelegateHandle.IsValid()");
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
          ::AddRaw<AudioWidgets::FAudioSpectrumAnalyzer>
                    ((TMulticastDelegateRegistration<void___cdecl(USynesthesiaSpectrumAnalyzer_*,int,TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object[4].field_0x20,(FAudioSpectrumAnalyzer *)&stack0x00000008,
                     (pmf_b61cd775 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->SpectrumResultsDelegateHandle).ID = *FVar6.ID;
  return;
}

// ExtendSpectrumPlotContextMenu @ 14d923be0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::ExtendSpectrumPlotContextMenu
          (FAudioSpectrumAnalyzer *this,FMenuBuilder *param_1)

{
  FText *pFVar1;
  FName *pFVar2;
  FSlateIcon *pFVar3;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar4;
  FName local_res18;
  undefined8 local_res20;
  FDestructionSentinel local_288;
  undefined1 local_268 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_260;
  ForAnyElementType FStack_258;
  ulonglong local_250;
  FDestructionSentinel local_248;
  undefined1 local_228 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  FDestructionSentinel local_1f8;
  undefined1 local_1d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [16];
  bool local_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType FStack_188;
  ulonglong local_180;
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
  FText local_70;
  undefined1 local_60 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  memset(local_158,0,200);
  local_268[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_268[1] = false;
  local_140 = 0;
  local_120 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_250 = 0;
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
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_248,L"FAudioSpectrumAnalyzer",L"AnalyzerSettings",
                      L"Analyzer Settings");
  FText::FText((FText *)local_228,pFVar1);
  local_228[0x10] = true;
  local_200 = 0;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  pFVar2 = ::FName::FName(&local_res18,"AnalyzerSettings");
  FMenuBuilder::BeginSection
            (param_1,*pFVar2,(TAttribute<FText> *)local_228,(TAttribute<EVisibility> *)local_268,
             (TAttribute<FMenuEntryResizeParams> *)local_158);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_288);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  if ((FName)local_228._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
  }
  if ((ITextData *)local_248._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_248._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_260,(FWriteAccessScope *)&local_288);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_288);
  if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = local_78 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_288);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_288);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_288);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_288);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_288);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_288);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_288.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  local_268[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_268[1] = false;
  local_250 = 0;
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  pFVar3 = FSlateIcon::FSlateIcon(&local_178);
  local_248.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_248.Accessor._4_4_ << 0x20)
  ;
  local_248._0_8_ = BuildBallisticsSubMenu;
  pTVar4 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<AudioWidgets::FAudioSpectrumAnalyzer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      &local_288,this,(pmf_0216d70c *)&local_248);
  pFVar1 = FText::FText((FText *)&local_1f8);
  FText::FText((FText *)local_1a8,pFVar1);
  local_198 = true;
  local_180 = 0;
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_188.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"FAudioSpectrumAnalyzer",L"Ballistics",L"Ballistics");
  FText::FText((FText *)local_228,pFVar1);
  local_228[0x10] = true;
  local_200 = 0;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_228,(TAttribute<FText> *)local_1a8,pTVar4,false,
             pFVar3,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_268);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_248);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  if ((FName)local_228._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)&local_248);
  if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
    local_180 = local_180 & 0xffffffff00000000;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (FStack_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
  if ((ITextData *)local_1a8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1a8._0_8_ + 0x10))();
  }
  if ((ITextData *)local_1f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_288,
             (FWriteAccessScope *)&local_248);
  if ((local_288._16_4_ != 0) && (&(local_288.Accessor)->State != (atomic<unsigned___int64> *)0x0))
  {
    (**(code **)(local_288.Accessor)->State)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_288.Accessor,0,0,0x10);
    local_288._16_4_ = 0;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (&(local_288.Accessor)->State != (atomic<unsigned___int64> *)0x0) {
    FMemory::Free(local_288.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_260,(FWriteAccessScope *)&local_248);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
  local_268[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_268[1] = false;
  local_250 = 0;
  local_260.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20 = 0;
  pFVar3 = FSlateIcon::FSlateIcon(&local_178);
  local_248.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_248.Accessor & 0xffffffff00000000);
  local_248._0_8_ = BuildAnalyzerTypeSubMenu;
  local_1f8._0_8_ = BuildAnalyzerTypeSubMenu;
  local_1f8.Accessor = local_248.Accessor;
  pTVar4 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<AudioWidgets::FAudioSpectrumAnalyzer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_1a8,this,(pmf_0216d70c *)&local_1f8);
  pFVar1 = FText::FText((FText *)&local_288);
  FText::FText((FText *)local_1d8,pFVar1);
  local_1d8[0x10] = true;
  local_1b0 = 0;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_70,L"FAudioSpectrumAnalyzer",L"AnalyzerType",L"Analyzer Type");
  FText::FText((FText *)local_228,pFVar1);
  local_228[0x10] = true;
  local_200 = 0;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_228,(TAttribute<FText> *)local_1d8,pTVar4,false,
             pFVar3,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)local_268);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)&local_1f8);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  if ((FName)local_228._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_1f8);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  if ((ITextData *)local_1d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d8._0_8_ + 0x10))();
  }
  if ((atomic<unsigned___int64>)local_288._0_8_ != (atomic<unsigned___int64>)0x0) {
    (**(code **)(*(longlong *)local_288._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
  if ((FMRSWRecursiveAccessDetector *)local_1a8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_1a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_260,(FWriteAccessScope *)&local_1f8);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_260.AccessDetector);
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
  pFVar3 = FSlateIcon::FSlateIcon((FSlateIcon *)local_228);
  local_248.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_248.Accessor & 0xffffffff00000000);
  local_248._0_8_ = BuildFFTSizeSubMenu;
  local_288._0_8_ = BuildFFTSizeSubMenu;
  local_288.Accessor = local_248.Accessor;
  pTVar4 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<AudioWidgets::FAudioSpectrumAnalyzer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_268,this,(pmf_0216d70c *)&local_288);
  pFVar1 = FText::FText(&local_70);
  FText::FText((FText *)local_60,pFVar1);
  local_60[0x10] = true;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1f8,L"FAudioSpectrumAnalyzer",L"FFTSize",L"FFT Size");
  FText::FText((FText *)local_1d8,pFVar1);
  local_1d8[0x10] = true;
  local_1b0 = 0;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddSubMenu
            (param_1,(TAttribute<FText> *)local_1d8,(TAttribute<FText> *)local_60,pTVar4,false,
             pFVar3,true,(FName)0x0,(FName)0x0,(TAttribute<EVisibility> *)&local_178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)local_1a8);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_198 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1a8._8_8_,(FDestructionSentinel *)local_1a8);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  if ((ITextData *)local_1d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d8._0_8_ + 0x10))();
  }
  if ((ITextData *)local_1f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)local_1a8);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_198 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1a8._8_8_,(FDestructionSentinel *)local_1a8);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
  if (local_260.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_260.AccessDetector.State);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_268);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_178.StyleName,
             (FWriteAccessScope *)local_1a8);
  if ((local_178.StatusOverlayStyleName.ComparisonIndex.Value != 0) &&
     (local_178.SmallStyleName != (FName)0x0)) {
    (*(code *)**(undefined8 **)local_178.SmallStyleName)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_178.SmallStyleName,0,0,0x10);
    local_178.StatusOverlayStyleName =
         (FName)((ulonglong)local_178.StatusOverlayStyleName & 0xffffffff00000000);
  }
  if (local_198 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1a8._8_8_,(FDestructionSentinel *)local_1a8);
  }
  if (local_178.SmallStyleName != (FName)0x0) {
    FMemory::Free((void *)local_178.SmallStyleName);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_178.StyleName);
  FMenuBuilder::EndSection(param_1);
  return;
}

// GetAudioBus @ 14d92acf0

UAudioBus * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::GetAudioBus(FAudioSpectrumAnalyzer *this)

{
  return (UAudioBus *)(this->AudioBus).Object;
}

// GetAudioSpectrumData @ 14d92ad10

FAudioPowerSpectrumData * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::GetAudioSpectrumData
          (FAudioSpectrumAnalyzer *this,FAudioPowerSpectrumData *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAudioPowerSpectrumData *pFVar4;
  
  UpdateAnalyzerSettings(this);
  if ((this->CenterFrequencies).ArrayNum != (this->ARSmoothedSquaredMagnitudes).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CenterFrequencies.Num() == ARSmoothedSquaredMagnitudes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x162,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAudioPowerSpectrumData *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->CenterFrequencies).DataPtr =
       (float *)(this->CenterFrequencies).AllocatorInstance.Data;
  iVar1 = (this->CenterFrequencies).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAudioPowerSpectrumData *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->CenterFrequencies).ArrayNum = iVar1;
  (__return_storage_ptr__->SquaredMagnitudes).DataPtr =
       (float *)(this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data;
  iVar1 = (this->ARSmoothedSquaredMagnitudes).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FAudioPowerSpectrumData *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->SquaredMagnitudes).ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetWidget @ 14d938580

TSharedRef<SWidget,1> * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::GetWidget
          (FAudioSpectrumAnalyzer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  
  if ((this->Widget).Object == (SAudioSpectrumPlot *)0x0) {
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

// Init @ 14d93bf20

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::Init
          (FAudioSpectrumAnalyzer *this,int param_1,uint param_2,TObjectPtr<UAudioBus> param_3)

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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                           ,0xac,L""), bVar5)) {
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

// MakeRackUnit @ 14d9443b0

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __cdecl
AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit
          (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,
          FAudioAnalyzerRackUnitConstructParams *param_1)

{
  int *piVar1;
  int iVar2;
  UAudioBus *pUVar3;
  UClass *this;
  ISlateStyle *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FProperty *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FAudioSpectrumPlotStyle *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar14;
  IAudioAnalyzerRackUnit *pIVar15;
  TReferenceControllerBase<1> *pTVar16;
  FName local_res8;
  FName local_res10;
  FDestructionSentinel local_478;
  FDelegateAllocation *local_460;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  FDestructionSentinel local_438;
  FDelegateAllocation *local_420;
  FDestructionSentinel local_418;
  FDelegateAllocation *local_400;
  FDestructionSentinel local_3f8;
  FDelegateAllocation *local_3e0;
  FDestructionSentinel local_3d8;
  FDelegateAllocation *local_3c0;
  FDestructionSentinel local_3b8;
  FDelegateAllocation *local_3a0;
  FDestructionSentinel local_398;
  FDelegateAllocation *local_380;
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
  undefined1 local_238 [32];
  FDelegateAllocation local_218;
  bool local_207;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  FDelegateAllocation local_1f8;
  bool local_1e7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  FDelegateAllocation local_1d8;
  bool local_1c7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  FDelegateAllocation local_1b8;
  bool local_1a4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  FDelegateAllocation local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  FDelegateAllocation local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  FDelegateAllocation local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FDelegateAllocation local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FAudioSpectrumPlotStyle *local_30;
  
  FAudioSpectrumAnalyzerParams::FAudioSpectrumAnalyzerParams
            ((FAudioSpectrumAnalyzerParams *)local_238);
  pUVar3 = (param_1->AudioBusInfo).AudioBus.field0_0x0.DebugPtr;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  if (pUVar3 == (UAudioBus *)0x0) {
    local_238._0_4_ = 0;
  }
  else {
    local_238._0_4_ = pUVar3->AudioBusChannels + 1;
  }
  local_238._4_4_ = (param_1->AudioBusInfo).AudioDeviceId;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this = param_1->EditorSettingsClass;
  local_238._8_8_ = (param_1->AudioBusInfo).AudioBus.field0_0x0;
  if (this != (UClass *)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"SpectrumAnalyzerSettings");
    pFVar9 = UStruct::FindPropertyByName((UStruct *)this,*pFVar8);
    if (pFVar9 != (FProperty *)0x0) {
      local_238[0x11] = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_238 + 0x18),
                 (FWriteAccessScope *)&local_478);
      local_460 = &local_218;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_218);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerBallistics__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerBallistics___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_1>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_478.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
      }
      local_207 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_200,(FWriteAccessScope *)&local_458);
      local_440 = &local_1f8;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_1f8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumAnalyzerType__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumAnalyzerType___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_2>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_458.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
      }
      local_1e7 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1e0,(FWriteAccessScope *)&local_438);
      local_420 = &local_1d8;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_1d8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EFFTSize__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EFFTSize___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_3>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_438.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
      }
      local_1c7 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1c0,(FWriteAccessScope *)&local_418);
      local_400 = &local_1b8;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_1b8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EConstantQFFTSizeEnum__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EConstantQFFTSizeEnum___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_4>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_418.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
      }
      local_1a4 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1a0,(FWriteAccessScope *)&local_3f8);
      local_3e0 = &local_198;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_198);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_5>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_3f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
      }
      local_187 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_180,(FWriteAccessScope *)&local_3d8);
      local_3c0 = &local_178;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_178);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_6>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_3d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
      }
      local_167 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_160,(FWriteAccessScope *)&local_3b8);
      local_3a0 = &local_158;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_158);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4EAudioSpectrumPlotFrequencyAxisScale__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_7>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_3b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
      }
      local_147 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_398);
      local_380 = &local_138;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_138);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_8>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_398.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
      }
      local_127 = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_120,(FWriteAccessScope *)&local_378);
      local_360 = &local_118;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_118);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_9>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_378.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_108,(FWriteAccessScope *)&local_358);
      local_340 = &local_100;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_100);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerBallistics___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerBallistics),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_10>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_358.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f0,(FWriteAccessScope *)&local_338);
      local_320 = &local_e8;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_e8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumAnalyzerType___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumAnalyzerType),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_11>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_338.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_318);
      local_300 = &local_d0;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_d0);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EFFTSize___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EFFTSize),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_12>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_318.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_c0,(FWriteAccessScope *)&local_2f8);
      local_2e0 = &local_b8;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_b8);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EConstantQFFTSizeEnum___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EConstantQFFTSizeEnum),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_13>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_2f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a8,(FWriteAccessScope *)&local_2d8);
      local_2c0 = &local_a0;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotTilt___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_14>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_2d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_90,(FWriteAccessScope *)&local_2b8);
      local_2a0 = &local_88;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisPixelBucketMode___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_15>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_2b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_298);
      local_280 = &local_70;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4EAudioSpectrumPlotFrequencyAxisScale___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_16>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_298.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_60,(FWriteAccessScope *)&local_278);
      local_260 = &local_58;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_17>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_278.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_48,(FWriteAccessScope *)&local_258);
      local_240 = &local_40;
      puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`AudioWidgets::FAudioSpectrumAnalyzer::MakeRackUnit'::`8'::<lambda_18>_>
                    ::_vftable_;
        puVar10[3] = pFVar9;
      }
      if (local_258.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
      }
    }
  }
  pIVar4 = param_1->StyleSet;
  pFVar8 = ::FName::FName(&local_res10,"AudioSpectrumPlot.Style");
  pFVar12 = (FAudioSpectrumPlotStyle *)
            (**(code **)((longlong)*pIVar4 + 0xa0))
                      (pIVar4,FAudioSpectrumPlotStyle::TypeName,*pFVar8,0,1);
  if ((pFVar12 == (FAudioSpectrumPlotStyle *)0x0) &&
     (pFVar12 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioSpectrumPlotStyle::FAudioSpectrumPlotStyle(&::Default);
      atexit(`FAudioSpectrumPlotStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_30 = pFVar12;
  pTVar13 = ::operator_new(0x1a0);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pIVar15 = (IAudioAnalyzerRackUnit *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioSpectrumAnalyzer_AudioWidgets___00_SharedPointerInternals__6B_
    ;
    FAudioSpectrumAnalyzer
              ((FAudioSpectrumAnalyzer *)(pTVar13 + 1),(FAudioSpectrumAnalyzerParams *)local_238);
    pIVar15 = (IAudioAnalyzerRackUnit *)(pTVar13 + 1);
    pTVar16 = pTVar13;
    if (pIVar15 == (IAudioAnalyzerRackUnit *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar6)();
        return pTVar14;
      }
      goto LAB_14d944dc0;
    }
  }
  if (((*(longlong *)&pIVar15->field_0x8 == 0) || (*(longlong *)&pIVar15->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar15->field_0x10 + 8) < 1)) {
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IAudioAnalyzerRackUnit **)&pIVar15->field_0x8 = pIVar15;
    if (pTVar16 != *(TReferenceControllerBase<1> **)&pIVar15->field_0x10) {
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pIVar15->field_0x10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar15->field_0x10 = pTVar16;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
LAB_14d944dc0:
  __return_storage_ptr__->Object = pIVar15;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  FAudioSpectrumAnalyzerParams::~FAudioSpectrumAnalyzerParams
            ((FAudioSpectrumAnalyzerParams *)local_238);
  return __return_storage_ptr__;
}

// OnConstantQResults @ 14d94a4c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::OnConstantQResults
          (FAudioSpectrumAnalyzer *this,UConstantQAnalyzer *param_1,int param_2,
          TArray<FConstantQResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TArrayView<float_const_,int> *pTVar10;
  float in_XMM1_Da;
  undefined1 local_res8 [8];
  undefined8 *local_98;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58 [3];
  
  pTVar10 = (TArrayView<float_const_,int> *)(ulonglong)(uint)param_2;
  if ((((this->ActiveAnalyzerType).bIsSet == true) && ((this->ActiveAnalyzerType).TypedValue == CQT)
      ) && (param_1 == (UConstantQAnalyzer *)(this->ConstantQAnalyzer).Object)) {
    iVar2 = param_3->ArrayNum;
    pFVar9 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FConstantQResults_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar1) break;
      if (((this->PrevTimeStamp).bIsSet == false) ||
         (*(float *)pFVar9 <= (this->PrevTimeStamp).TypedValue)) {
        if ((this->ConstantQAnalyzer).Object == (UObject *)0x0) {
          pTVar10 = (TArrayView<float_const_,int> *)0x0;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = UConstantQAnalyzer::GetNumCenterFrequencies
                          ((UConstantQAnalyzer *)(this->ConstantQAnalyzer).Object);
        pTVar10 = (TArrayView<float_const_,int> *)CONCAT71((int7)((ulonglong)pTVar10 >> 8),1);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->CenterFrequencies,iVar8,Default);
        if ((this->ConstantQAnalyzer).Object == (UObject *)0x0) {
          pTVar10 = (TArrayView<float_const_,int> *)&DAT_00000067;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        UConstantQAnalyzer::GetCenterFrequencies
                  ((UConstantQAnalyzer *)(this->ConstantQAnalyzer).Object,&this->CenterFrequencies);
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  (&this->ARSmoothedSquaredMagnitudes,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar9 + 8));
        if ((this->ConstantQSettings).Object == (UObject *)0x0) {
          pTVar10 = (TArrayView<float_const_,int> *)&DAT_00000067;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                             ,0x67,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        UConstantQSettings::GetSettings
                  ((UConstantQSettings *)(this->ConstantQSettings).Object,in_XMM1_Da,(int)pTVar10);
        in_XMM1_Da = AudioSpectrumAnalyzerPrivate::GetWindowCompensationPowerGain
                               (*(EWindowType *)(local_98 + 4),*(int *)((longlong)local_98 + 0x1c));
        this->WindowCompensationPowerGain = in_XMM1_Da;
        pFVar5 = (this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data;
        iVar8 = (this->ARSmoothedSquaredMagnitudes).ArrayNum;
        if (iVar8 < 0) {
          pTVar10 = (TArrayView<float_const_,int> *)0x0;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_58[0]._12_4_ = uStack_6c;
        local_58[0].ArrayNum = iVar8;
        local_58[0].DataPtr = (float *)pFVar5;
        Audio::ArrayMultiplyByConstantInPlace(local_58,in_XMM1_Da);
        if (local_98 != (undefined8 *)0x0) {
          (**(code **)*local_98)(local_98,1);
        }
      }
      else {
        pfVar4 = *(float **)(pFVar9 + 8);
        fVar3 = *(float *)(pFVar9 + 0x10);
        if (((int)fVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        in_XMM1_Da = *(float *)pFVar9;
        pTVar10 = &local_68;
        local_68._12_4_ = uStack_7c;
        local_68.ArrayNum = (int)fVar3;
        local_68.DataPtr = pfVar4;
        UpdateARSmoothing(this,in_XMM1_Da,pTVar10);
      }
      if ((TOptional<float> *)pFVar9 != &this->PrevTimeStamp) {
        (this->PrevTimeStamp).TypedValue = *(float *)pFVar9;
        (this->PrevTimeStamp).bIsSet = true;
      }
      pFVar9 = pFVar9 + 0x18;
    }
  }
  return;
}

// OnSpectrumResults @ 14d957f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::OnSpectrumResults
          (FAudioSpectrumAnalyzer *this,USynesthesiaSpectrumAnalyzer *param_1,int param_2,
          TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res8 [8];
  undefined8 *local_98 [2];
  float *local_88;
  float fStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58 [3];
  
  fVar4 = __real_473b8000;
  if ((((this->ActiveAnalyzerType).bIsSet == true) && ((this->ActiveAnalyzerType).TypedValue == FFT)
      ) && (param_1 == (USynesthesiaSpectrumAnalyzer *)(this->SpectrumAnalyzer).Object)) {
    iVar2 = param_3->ArrayNum;
    pFVar8 = (param_3->AllocatorInstance).Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSynesthesiaSpectrumResults_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      if (((this->PrevTimeStamp).bIsSet == false) ||
         (*(float *)pFVar8 <= (this->PrevTimeStamp).TypedValue)) {
        this_00 = FAudioDeviceManager::Get();
        fVar9 = fVar4;
        if ((this_00 != (FAudioDeviceManager *)0x0) &&
           (pFVar7 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AudioDeviceId),
           pFVar7 != (FAudioDevice *)0x0)) {
          fVar9 = (float)pFVar7->SampleRate;
        }
        if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies
                          ((USynesthesiaSpectrumAnalyzer *)(this->SpectrumAnalyzer).Object);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->CenterFrequencies,iVar6,Default);
        if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        USynesthesiaSpectrumAnalyzer::GetCenterFrequencies
                  ((USynesthesiaSpectrumAnalyzer *)(this->SpectrumAnalyzer).Object,fVar9,
                   &this->CenterFrequencies);
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  (&this->ARSmoothedSquaredMagnitudes,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)(pFVar8 + 8));
        if (((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        USynesthesiaSpectrumAnalysisSettings::GetSettings
                  ((USynesthesiaSpectrumAnalysisSettings *)(this->SpectrumAnalysisSettings).Object,
                   (int)local_98,(int)fVar9);
        fVar9 = AudioSpectrumAnalyzerPrivate::GetWindowCompensationPowerGain
                          (*(EWindowType *)((longlong)local_98[0] + 0xd),*(int *)(local_98[0] + 1));
        this->WindowCompensationPowerGain = fVar9;
        local_78 = (this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data;
        iVar6 = (this->ARSmoothedSquaredMagnitudes).ArrayNum;
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_58[0]._12_4_ = uStack_6c;
        local_58[0].ArrayNum = iVar6;
        local_58[0].DataPtr = (float *)local_78;
        iStack_70 = iVar6;
        Audio::ArrayMultiplyByConstantInPlace(local_58,fVar9);
        if (local_98[0] != (undefined8 *)0x0) {
          (**(code **)*local_98[0])(local_98[0],1);
        }
      }
      else {
        local_88 = *(float **)(pFVar8 + 8);
        fVar9 = *(float *)(pFVar8 + 0x10);
        if (((int)fVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68._12_4_ = uStack_7c;
        local_68.ArrayNum = (int)fVar9;
        local_68.DataPtr = local_88;
        fStack_80 = fVar9;
        UpdateARSmoothing(this,*(float *)pFVar8,&local_68);
      }
      if ((TOptional<float> *)pFVar8 != &this->PrevTimeStamp) {
        (this->PrevTimeStamp).TypedValue = *(float *)pFVar8;
        (this->PrevTimeStamp).bIsSet = true;
      }
      pFVar8 = pFVar8 + 0x18;
    }
  }
  return;
}

// ReleaseConstantQAnalyzer @ 14d963760

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::ReleaseConstantQAnalyzer(FAudioSpectrumAnalyzer *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->ConstantQAnalyzer).Object;
  if ((pUVar1 == (UObject *)0x0) ||
     (FVar2.ID = (this->ConstantQResultsDelegateHandle).ID, FVar2.ID == 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771413>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x255,
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

// ReleaseSynesthesiaSpectrumAnalyzer @ 14d963cb0

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::ReleaseSynesthesiaSpectrumAnalyzer
          (FAudioSpectrumAnalyzer *this)

{
  UObject *pUVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  bool bVar4;
  
  pUVar1 = (this->SpectrumAnalyzer).Object;
  if ((pUVar1 == (UObject *)0x0) ||
     (FVar2.ID = (this->SpectrumResultsDelegateHandle).ID, FVar2.ID == 0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771395>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x243,
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

// SetAudioBusInfo @ 14d968150

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::SetAudioBusInfo
          (FAudioSpectrumAnalyzer *this,FAudioBusInfo *param_1)

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

// SpawnTab @ 14d970f00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::SpawnTab
          (FAudioSpectrumAnalyzer *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
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
  if ((this->Widget).Object == (SAudioSpectrumPlot *)0x0) {
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
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
             ,0x260,local_res8);
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

// StartAnalyzing @ 14d971500

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::StartAnalyzing
          (FAudioSpectrumAnalyzer *this,EAudioSpectrumAnalyzerType param_1)

{
  code *pcVar1;
  bool bVar2;
  UAudioAnalyzer *this_00;
  undefined1 local_res10 [24];
  
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771003>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0xbb,"!ActiveAnalyzerType.IsSet()");
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
    if (param_1 != CQT) goto LAB_14d9715c3;
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
LAB_14d9715c3:
  if ((TOptional<EAudioSpectrumAnalyzerType> *)local_res10 != &this->ActiveAnalyzerType) {
    (this->ActiveAnalyzerType).TypedValue = param_1;
    (this->ActiveAnalyzerType).bIsSet = true;
  }
  return;
}

// StopAnalyzing @ 14d971f50

void __thiscall AudioWidgets::FAudioSpectrumAnalyzer::StopAnalyzing(FAudioSpectrumAnalyzer *this)

{
  EAudioSpectrumAnalyzerType EVar1;
  code *pcVar2;
  bool bVar3;
  UAudioAnalyzer *this_00;
  
  if ((this->ActiveAnalyzerType).bIsSet == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771022>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0xce,"ActiveAnalyzerType.IsSet()");
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
    if (EVar1 != CQT) goto LAB_14d972039;
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
LAB_14d972039:
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    (this->ActiveAnalyzerType).bIsSet = false;
  }
  return;
}

// Teardown @ 14d975d80

void __thiscall AudioWidgets::FAudioSpectrumAnalyzer::Teardown(FAudioSpectrumAnalyzer *this)

{
  int *piVar1;
  UObjectBase *pUVar2;
  UObject *pUVar3;
  bool bVar4;
  USynesthesiaSpectrumAnalyzer *this_00;
  UConstantQAnalyzer *this_01;
  
  pUVar2 = (UObjectBase *)(this->SpectrumAnalyzer).Object;
  if (pUVar2 != (UObjectBase *)0x0) {
    bVar4 = UObjectBase::IsValidLowLevel(pUVar2);
    if (bVar4) {
      if (((this->ActiveAnalyzerType).bIsSet == true) &&
         ((this->ActiveAnalyzerType).TypedValue == FFT)) {
        this_00 = TStrongObjectPtr<USynesthesiaSpectrumAnalyzer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                  ::operator->(&this->SpectrumAnalyzer);
        UAudioAnalyzer::StopAnalyzing((UAudioAnalyzer *)this_00,(UObject *)0x0);
      }
      ReleaseSynesthesiaSpectrumAnalyzer(this);
    }
  }
  pUVar2 = (UObjectBase *)(this->ConstantQAnalyzer).Object;
  if (pUVar2 != (UObjectBase *)0x0) {
    bVar4 = UObjectBase::IsValidLowLevel(pUVar2);
    if (bVar4) {
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
  if ((this->PrevTimeStamp).bIsSet != false) {
    (this->PrevTimeStamp).bIsSet = false;
  }
  piVar1 = &(this->CenterFrequencies).ArrayMax;
  (this->CenterFrequencies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CenterFrequencies).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ARSmoothedSquaredMagnitudes).ArrayMax;
  (this->ARSmoothedSquaredMagnitudes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ARSmoothedSquaredMagnitudes).AllocatorInstance,0,piVar1);
  }
  pUVar3 = (this->AudioBus).Object;
  if (pUVar3 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    (this->AudioBus).Object = (UObject *)0x0;
  }
  this->bUseExternalAudioBus = false;
  return;
}

// UpdateARSmoothing @ 14d9783f0

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::UpdateARSmoothing
          (FAudioSpectrumAnalyzer *this,float param_1,TArrayView<float_const_,int> *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EAudioSpectrumAnalyzerBallistics *pEVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  FAttackRelease local_38 [2];
  
  if (((this->PrevTimeStamp).bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = (this->PrevTimeStamp).TypedValue;
  pEVar5 = TAttribute<enum_EAudioSpectrumAnalyzerBallistics>::Get(&this->Ballistics);
  Audio::FAttackRelease::FAttackRelease
            (local_38,__real_3f800000 / (param_1 - fVar1),this->AttackTimeMsec,this->ReleaseTimeMsec
             ,*pEVar5 == Analog);
  if ((param_2->ArrayNum != (this->ARSmoothedSquaredMagnitudes).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SquaredMagnitudes.Num() == ARSmoothedSquaredMagnitudes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                         ,0x133,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = 0;
  if (0 < param_2->ArrayNum) {
    lVar7 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->ARSmoothedSquaredMagnitudes).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)((this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data + lVar7);
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar9 = *(float *)((longlong)param_2->DataPtr + lVar7) * this->WindowCompensationPowerGain;
      fVar10 = local_38[0].ReleaseTimeSamples;
      if (fVar1 <= fVar9) {
        fVar10 = local_38[0].AttackTimeSamples;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->ARSmoothedSquaredMagnitudes).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(float *)((this->ARSmoothedSquaredMagnitudes).AllocatorInstance.Data + lVar7) =
           (fVar1 - fVar9) * fVar10 + fVar9;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < param_2->ArrayNum);
  }
  return;
}

// UpdateAnalyzerSettings @ 14d978620

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzer::UpdateAnalyzerSettings(FAudioSpectrumAnalyzer *this)

{
  TOptional<EAudioSpectrumAnalyzerType> *pTVar1;
  EAudioSpectrumAnalyzerType EVar2;
  EFFTSize EVar3;
  EConstantQFFTSizeEnum EVar4;
  EFFTSize EVar5;
  EConstantQFFTSizeEnum EVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  EAudioSpectrumAnalyzerType *pEVar10;
  EFFTSize *pEVar11;
  EConstantQFFTSizeEnum *pEVar12;
  USynesthesiaSpectrumAnalysisSettings *pUVar13;
  UConstantQSettings *pUVar14;
  UAudioAnalyzer *pUVar15;
  EAudioSpectrumAnalyzerType local_48 [16];
  
  pTVar1 = &this->ActiveAnalyzerType;
  if (this->AudioDeviceId == 0xffffffff) {
    if ((this->ActiveAnalyzerType).bIsSet == false) {
      return;
    }
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1517583727188771342>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                       ,0x20e,"!ActiveAnalyzerType.IsSet()");
    if (!bVar8) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pEVar10 = TAttribute<enum_EAudioSpectrumAnalyzerType>::Get(&this->AnalyzerType);
  EVar2 = *pEVar10;
  pEVar11 = TAttribute<enum_EFFTSize>::Get(&this->FFTAnalyzerFFTSize);
  EVar3 = *pEVar11;
  pEVar12 = TAttribute<enum_EConstantQFFTSizeEnum>::Get(&this->CQTAnalyzerFFTSize);
  EVar4 = *pEVar12;
  if ((this->ActiveAnalyzerType).bIsSet == true) {
    bVar8 = pTVar1->TypedValue != EVar2;
  }
  else {
    bVar8 = true;
  }
  if (((this->SpectrumAnalysisSettings).Object == (UObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar5 = (this->SpectrumAnalysisSettings).Object[1].field_0x4;
  if (((this->ConstantQSettings).Object == (UObject *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar6 = (this->ConstantQSettings).Object[1].field_0x11;
  if (((!bVar8) && (EVar5 == EVar3)) && (EVar6 == EVar4)) {
    return;
  }
  if (((this->ActiveAnalyzerType).bIsSet == false) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1517583727188771022>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                         ,0xce,"ActiveAnalyzerType.IsSet()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->ActiveAnalyzerType).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar1->TypedValue == FFT) {
    if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar15 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
LAB_14d978847:
    UAudioAnalyzer::StopAnalyzing(pUVar15,(UObject *)0x0);
  }
  else if (pTVar1->TypedValue == CQT) {
    if (((this->ConstantQAnalyzer).Object == (UObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar15 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
    goto LAB_14d978847;
  }
  if ((this->ActiveAnalyzerType).bIsSet != false) {
    (this->ActiveAnalyzerType).bIsSet = false;
  }
  if (bVar8) {
    if ((this->PrevTimeStamp).bIsSet != false) {
      (this->PrevTimeStamp).bIsSet = false;
    }
    (this->CenterFrequencies).ArrayNum = 0;
    if ((this->CenterFrequencies).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CenterFrequencies).AllocatorInstance,0,
                 &(this->CenterFrequencies).ArrayMax);
    }
    (this->ARSmoothedSquaredMagnitudes).ArrayNum = 0;
    if ((this->ARSmoothedSquaredMagnitudes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ARSmoothedSquaredMagnitudes).AllocatorInstance,0,
                 &(this->ARSmoothedSquaredMagnitudes).ArrayMax);
    }
  }
  if (EVar5 != EVar3) {
    ReleaseSynesthesiaSpectrumAnalyzer(this);
    pUVar13 = TStrongObjectPtr<USynesthesiaSpectrumAnalysisSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->(&this->SpectrumAnalysisSettings);
    pUVar13->FFTSize = EVar3;
    CreateSynesthesiaSpectrumAnalyzer(this);
  }
  if (EVar6 != EVar4) {
    ReleaseConstantQAnalyzer(this);
    pUVar14 = TStrongObjectPtr<UConstantQSettings,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              ::operator->(&this->ConstantQSettings);
    pUVar14->FFTSize = EVar4;
    CreateConstantQAnalyzer(this);
  }
  if (((this->ActiveAnalyzerType).bIsSet != false) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1517583727188771003>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\AudioSpectrumAnalyzer.cpp"
                         ,0xbb,"!ActiveAnalyzerType.IsSet()"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (EVar2 == FFT) {
    if (((this->SpectrumAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar15 = (UAudioAnalyzer *)(this->SpectrumAnalyzer).Object;
  }
  else {
    if (EVar2 != CQT) goto LAB_14d9789d5;
    if (((this->ConstantQAnalyzer).Object == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar15 = (UAudioAnalyzer *)(this->ConstantQAnalyzer).Object;
  }
  UAudioAnalyzer::StartAnalyzing(pUVar15,this->AudioDeviceId,(UAudioBus *)(this->AudioBus).Object);
LAB_14d9789d5:
  if ((TOptional<EAudioSpectrumAnalyzerType> *)local_48 != pTVar1) {
    pTVar1->TypedValue = EVar2;
    (this->ActiveAnalyzerType).bIsSet = true;
  }
  return;
}

