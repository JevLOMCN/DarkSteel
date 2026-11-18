// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticStruct @ 148679b80

UScriptStruct * __cdecl FSoundAttenuationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationSettings,(UObject *)pUVar1,
                         L"SoundAttenuationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundAttenuationSettings.OuterSingleton;
}

// FSoundAttenuationSettings @ 148694c30

FSoundAttenuationSettings * __thiscall
FSoundAttenuationSettings::FSoundAttenuationSettings
          (FSoundAttenuationSettings *this,FSoundAttenuationSettings *param_1)

{
  int *piVar1;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  UAudioLinkSettingsAbstract *pUVar5;
  UCurveFloat *pUVar6;
  FAttenuationSubmixSendSettings *pFVar7;
  longlong lVar8;
  byte bVar9;
  
  this->_padding_ = (longlong)&___7FBaseAttenuationSettings__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  FRichCurve::FRichCurve((FRichCurve *)&this->_padding_,(FRichCurve *)&param_1->_padding_);
  pUVar4 = (UObject *)param_1->_padding_;
  this->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)&___7FSoundAttenuationSettings__6B_;
  bVar9 = (this->bAttenuate ^ param_1->bAttenuate) & 1 ^ this->field_0xc0;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 2 ^ bVar9;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 4 ^ bVar9;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 8 ^ bVar9;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 0x10 ^ bVar9;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 0x20 ^ bVar9;
  this->field_0xc0 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc0) & 0x40 ^ bVar9;
  this->field_0xc0 = bVar9;
  this->field_0xc0 = (bVar9 ^ param_1->field_0xc0) & 0x7f ^ param_1->field_0xc0;
  bVar9 = (this->bEnablePriorityAttenuation ^ param_1->bEnablePriorityAttenuation) & 1 ^
          this->field_0xc1;
  this->field_0xc1 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc1) & 2 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc1) & 4 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc1) & 8 ^ bVar9;
  this->field_0xc1 = bVar9;
  bVar9 = (bVar9 ^ param_1->field_0xc1) & 0x10 ^ bVar9;
  this->field_0xc1 = bVar9;
  this->field_0xc1 = (bVar9 ^ param_1->field_0xc1) & 0x20 ^ bVar9;
  (this->SpatializationAlgorithm).Value = (param_1->SpatializationAlgorithm).Value;
  pUVar5 = (param_1->AudioLinkSettingsOverride).field0_0x0.DebugPtr;
  (this->AudioLinkSettingsOverride).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UAudioLinkSettingsAbstract *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->BinauralRadius = param_1->BinauralRadius;
  FRichCurve::FRichCurve
            (&(this->CustomLowpassAirAbsorptionCurve).EditorCurveData,
             &(param_1->CustomLowpassAirAbsorptionCurve).EditorCurveData);
  pUVar6 = (param_1->CustomLowpassAirAbsorptionCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomLowpassAirAbsorptionCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FRichCurve::FRichCurve
            (&(this->CustomHighpassAirAbsorptionCurve).EditorCurveData,
             &(param_1->CustomHighpassAirAbsorptionCurve).EditorCurveData);
  pUVar6 = (param_1->CustomHighpassAirAbsorptionCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomHighpassAirAbsorptionCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  this->AbsorptionMethod = param_1->AbsorptionMethod;
  (this->OcclusionTraceChannel).Value = (param_1->OcclusionTraceChannel).Value;
  this->ReverbSendMethod = param_1->ReverbSendMethod;
  this->PriorityAttenuationMethod = param_1->PriorityAttenuationMethod;
  this->NonSpatializedRadiusStart = param_1->NonSpatializedRadiusStart;
  this->NonSpatializedRadiusEnd = param_1->NonSpatializedRadiusEnd;
  this->NonSpatializedRadiusMode = param_1->NonSpatializedRadiusMode;
  this->StereoSpread = param_1->StereoSpread;
  this->LPFRadiusMin = param_1->LPFRadiusMin;
  this->LPFRadiusMax = param_1->LPFRadiusMax;
  this->LPFFrequencyAtMin = param_1->LPFFrequencyAtMin;
  this->LPFFrequencyAtMax = param_1->LPFFrequencyAtMax;
  this->HPFFrequencyAtMin = param_1->HPFFrequencyAtMin;
  this->HPFFrequencyAtMax = param_1->HPFFrequencyAtMax;
  this->FocusAzimuth = param_1->FocusAzimuth;
  this->NonFocusAzimuth = param_1->NonFocusAzimuth;
  this->FocusDistanceScale = param_1->FocusDistanceScale;
  this->NonFocusDistanceScale = param_1->NonFocusDistanceScale;
  this->FocusPriorityScale = param_1->FocusPriorityScale;
  this->NonFocusPriorityScale = param_1->NonFocusPriorityScale;
  this->FocusVolumeAttenuation = param_1->FocusVolumeAttenuation;
  this->NonFocusVolumeAttenuation = param_1->NonFocusVolumeAttenuation;
  this->FocusAttackInterpSpeed = param_1->FocusAttackInterpSpeed;
  this->FocusReleaseInterpSpeed = param_1->FocusReleaseInterpSpeed;
  this->OcclusionLowPassFilterFrequency = param_1->OcclusionLowPassFilterFrequency;
  this->OcclusionVolumeAttenuation = param_1->OcclusionVolumeAttenuation;
  this->OcclusionInterpolationTime = param_1->OcclusionInterpolationTime;
  this->ReverbWetLevelMin = param_1->ReverbWetLevelMin;
  this->ReverbWetLevelMax = param_1->ReverbWetLevelMax;
  this->ReverbDistanceMin = param_1->ReverbDistanceMin;
  this->ReverbDistanceMax = param_1->ReverbDistanceMax;
  this->ManualReverbSendLevel = param_1->ManualReverbSendLevel;
  this->PriorityAttenuationMin = param_1->PriorityAttenuationMin;
  this->PriorityAttenuationMax = param_1->PriorityAttenuationMax;
  this->PriorityAttenuationDistanceMin = param_1->PriorityAttenuationDistanceMin;
  this->PriorityAttenuationDistanceMax = param_1->PriorityAttenuationDistanceMax;
  this->ManualPriorityAttenuation = param_1->ManualPriorityAttenuation;
  FRichCurve::FRichCurve
            (&(this->CustomReverbSendCurve).EditorCurveData,
             &(param_1->CustomReverbSendCurve).EditorCurveData);
  pUVar6 = (param_1->CustomReverbSendCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomReverbSendCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar2 = &this->SubmixSendSettings;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SubmixSendSettings).ArrayMax;
  iVar3 = (param_1->SubmixSendSettings).ArrayNum;
  pFVar7 = (FAttenuationSubmixSendSettings *)(param_1->SubmixSendSettings).AllocatorInstance.Data;
  (this->SubmixSendSettings).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FAttenuationSubmixSendSettings,FAttenuationSubmixSendSettings,int>
              ((pTVar2->AllocatorInstance).Data,pFVar7,iVar3);
  }
  FRichCurve::FRichCurve
            (&(this->CustomPriorityAttenuationCurve).EditorCurveData,
             &(param_1->CustomPriorityAttenuationCurve).EditorCurveData);
  pUVar6 = (param_1->CustomPriorityAttenuationCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomPriorityAttenuationCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FSoundAttenuationPluginSettings::FSoundAttenuationPluginSettings
            (&this->PluginSettings,&param_1->PluginSettings);
  return this;
}

// FSoundAttenuationSettings @ 148695160

FSoundAttenuationSettings * __thiscall
FSoundAttenuationSettings::FSoundAttenuationSettings(FSoundAttenuationSettings *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  
  FBaseAttenuationSettings::FBaseAttenuationSettings((FBaseAttenuationSettings *)this);
  this->bEnablePriorityAttenuation = '\0';
  this->bEnableSourceDataOverride = '\0';
  this->bEnableSubmixSends = '\0';
  this->bEnableLogFrequencyScaling = '\0';
  this->bApplyNormalizationToStereoSounds = '\0';
  this->bEnableSendToAudioLink = '\x01';
  this->_padding_ = (longlong)&___7FSoundAttenuationSettings__6B_;
  (this->SpatializationAlgorithm).Value = '\0';
  (this->AudioLinkSettingsOverride).field0_0x0.DebugPtr = (UAudioLinkSettingsAbstract *)0x0;
  puVar1 = &this->field_0xc0;
  this->bAttenuate = '\x01';
  this->bEnableReverbSend = '\x01';
  this->bUseComplexCollisionForOcclusion = '\0';
  this->bEnableOcclusion = '\0';
  this->bEnableFocusInterpolation = '\0';
  this->bEnableListenerFocus = '\0';
  this->bAttenuateWithLPF = '\0';
  this->bSpatialize = '\x01';
  this->BinauralRadius = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomLowpassAirAbsorptionCurve);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomHighpassAirAbsorptionCurve);
  fVar3 = (float)(double)this->_padding_;
  this->AbsorptionMethod = Linear;
  this->OcclusionTraceChannel = '\x03';
  this->ReverbSendMethod = Linear;
  this->PriorityAttenuationMethod = Linear;
  this->NonSpatializedRadiusStart = 0.0;
  this->NonSpatializedRadiusEnd = 0.0;
  this->NonSpatializedRadiusMode = OmniDirectional;
  this->StereoSpread = 200.0;
  this->LPFRadiusMin = 3000.0;
  this->LPFRadiusMax = 6000.0;
  this->ReverbDistanceMin = fVar3;
  fVar2 = fVar3 + *(float *)((longlong)&this->_padding_ + 4);
  this->PriorityAttenuationDistanceMin = fVar3;
  this->LPFFrequencyAtMin = 20000.0;
  this->LPFFrequencyAtMax = 20000.0;
  this->HPFFrequencyAtMin = 0.0;
  this->HPFFrequencyAtMax = 0.0;
  this->ReverbDistanceMax = fVar2;
  this->PriorityAttenuationDistanceMax = fVar2;
  this->FocusAzimuth = 30.0;
  this->NonFocusAzimuth = 60.0;
  this->FocusDistanceScale = 1.0;
  this->NonFocusDistanceScale = 1.0;
  this->FocusPriorityScale = 1.0;
  this->NonFocusPriorityScale = 1.0;
  this->FocusVolumeAttenuation = 1.0;
  this->NonFocusVolumeAttenuation = 1.0;
  this->FocusAttackInterpSpeed = 1.0;
  this->FocusReleaseInterpSpeed = 1.0;
  this->OcclusionLowPassFilterFrequency = 20000.0;
  this->OcclusionVolumeAttenuation = 1.0;
  this->OcclusionInterpolationTime = 0.1;
  this->ReverbWetLevelMin = 0.3;
  this->ReverbWetLevelMax = 0.95;
  this->ManualReverbSendLevel = 0.0;
  this->PriorityAttenuationMin = 1.0;
  this->PriorityAttenuationMax = 1.0;
  this->ManualPriorityAttenuation = 1.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomReverbSendCurve);
  (this->SubmixSendSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixSendSettings).ArrayNum = 0;
  (this->SubmixSendSettings).ArrayMax = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomPriorityAttenuationCurve);
  (this->PluginSettings).SpatializationPluginSettingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PluginSettings).SpatializationPluginSettingsArray.ArrayNum = 0;
  (this->PluginSettings).SpatializationPluginSettingsArray.ArrayMax = 0;
  (this->PluginSettings).OcclusionPluginSettingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PluginSettings).OcclusionPluginSettingsArray.ArrayNum = 0;
  (this->PluginSettings).OcclusionPluginSettingsArray.ArrayMax = 0;
  (this->PluginSettings).ReverbPluginSettingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PluginSettings).ReverbPluginSettingsArray.ArrayNum = 0;
  (this->PluginSettings).ReverbPluginSettingsArray.ArrayMax = 0;
  (this->PluginSettings).SourceDataOverridePluginSettingsArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum = 0;
  (this->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayMax = 0;
  return this;
}

// ~FSoundAttenuationSettings @ 14869aae0

void __thiscall
FSoundAttenuationSettings::~FSoundAttenuationSettings(FSoundAttenuationSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSoundAttenuationSettings__6B_;
  pFVar1 = (this->PluginSettings).SourceDataOverridePluginSettingsArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PluginSettings).ReverbPluginSettingsArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PluginSettings).OcclusionPluginSettingsArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PluginSettings).SpatializationPluginSettingsArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomPriorityAttenuationCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomPriorityAttenuationCurve).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomPriorityAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomPriorityAttenuationCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomPriorityAttenuationCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomPriorityAttenuationCurve).EditorCurveData._padding_);
  DestructItems<FAttenuationSubmixSendSettings,int>
            ((FAttenuationSubmixSendSettings *)(this->SubmixSendSettings).AllocatorInstance.Data,
             (this->SubmixSendSettings).ArrayNum);
  pFVar1 = (this->SubmixSendSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomReverbSendCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomReverbSendCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomReverbSendCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomReverbSendCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomReverbSendCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomReverbSendCurve).EditorCurveData._padding_);
  pFVar1 = (this->CustomHighpassAirAbsorptionCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomHighpassAirAbsorptionCurve).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomHighpassAirAbsorptionCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomHighpassAirAbsorptionCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomHighpassAirAbsorptionCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomHighpassAirAbsorptionCurve).EditorCurveData._padding_);
  pFVar1 = (this->CustomLowpassAirAbsorptionCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomLowpassAirAbsorptionCurve).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomLowpassAirAbsorptionCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomLowpassAirAbsorptionCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomLowpassAirAbsorptionCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomLowpassAirAbsorptionCurve).EditorCurveData._padding_);
  FBaseAttenuationSettings::~FBaseAttenuationSettings((FBaseAttenuationSettings *)this);
  return;
}

// operator== @ 14869d370

bool __thiscall
FSoundAttenuationSettings::operator==
          (FSoundAttenuationSettings *this,FSoundAttenuationSettings *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = this->field_0xc0;
  uVar2 = param_1->field_0xc0;
  if ((((((this->bAttenuate ^ param_1->bAttenuate) & 1) == 0) && (((uVar2 ^ uVar1) & 2) == 0)) &&
      (*(float *)((longlong)&param_1->_padding_ + 4) == *(float *)((longlong)&this->_padding_ + 4)))
     && (((*(char *)((longlong)&this->_padding_ + 2) == *(char *)((longlong)&param_1->_padding_ + 2)
          && (param_1->NonSpatializedRadiusStart == this->NonSpatializedRadiusStart)) &&
         ((param_1->NonSpatializedRadiusEnd == this->NonSpatializedRadiusEnd &&
          (this->NonSpatializedRadiusMode == param_1->NonSpatializedRadiusMode)))))) {
    bVar3 = this->field_0xc1;
    bVar4 = param_1->field_0xc1;
    if (((((((((bVar3 ^ bVar4) & 2) == 0) && (param_1->StereoSpread == this->StereoSpread)) &&
           (((char)this->_padding_ == (char)param_1->_padding_ &&
            ((((*(char *)((longlong)&this->_padding_ + 1) ==
                *(char *)((longlong)&param_1->_padding_ + 1) && (((uVar2 ^ uVar1) & 4) == 0)) &&
              (param_1->LPFRadiusMin == this->LPFRadiusMin)) &&
             ((param_1->LPFRadiusMax == this->LPFRadiusMax &&
              (*(float *)((longlong)&param_1->_padding_ + 4) ==
               *(float *)((longlong)&this->_padding_ + 4))))))))) &&
          (((((double)param_1->_padding_ == (double)this->_padding_ &&
             (((double)param_1->_padding_ == (double)this->_padding_ &&
              ((double)param_1->_padding_ == (double)this->_padding_)))) &&
            ((this->SpatializationAlgorithm).Value == (param_1->SpatializationAlgorithm).Value)) &&
           (((iVar5 = (this->PluginSettings).SpatializationPluginSettingsArray.ArrayNum,
             iVar5 == (param_1->PluginSettings).SpatializationPluginSettingsArray.ArrayNum &&
             (bVar6 = CompareItems<TObjectPtr<USpatializationPluginSourceSettingsBase>,int>
                                ((TObjectPtr<USpatializationPluginSourceSettingsBase> *)
                                 (this->PluginSettings).SpatializationPluginSettingsArray.
                                 AllocatorInstance.Data,
                                 (TObjectPtr<USpatializationPluginSourceSettingsBase> *)
                                 (param_1->PluginSettings).SpatializationPluginSettingsArray.
                                 AllocatorInstance.Data,iVar5), bVar6)) &&
            (param_1->LPFFrequencyAtMax == this->LPFFrequencyAtMax)))))) &&
         ((((param_1->LPFFrequencyAtMin == this->LPFFrequencyAtMin &&
            (param_1->HPFFrequencyAtMax == this->HPFFrequencyAtMax)) &&
           ((param_1->HPFFrequencyAtMin == this->HPFFrequencyAtMin &&
            ((((bVar4 ^ bVar3) & 4) == 0 && (((bVar4 ^ bVar3) & 8) == 0)))))) &&
          (((uVar2 ^ uVar1) & 8) == 0)))) &&
        (((((((bVar4 ^ bVar3) & 0x20) == 0 && (param_1->FocusAzimuth == this->FocusAzimuth)) &&
           (param_1->NonFocusAzimuth == this->NonFocusAzimuth)) &&
          ((param_1->FocusDistanceScale == this->FocusDistanceScale &&
           (param_1->FocusPriorityScale == this->FocusPriorityScale)))) &&
         (((param_1->NonFocusPriorityScale == this->NonFocusPriorityScale &&
           ((param_1->FocusVolumeAttenuation == this->FocusVolumeAttenuation &&
            (param_1->NonFocusVolumeAttenuation == this->NonFocusVolumeAttenuation)))) &&
          (((this->OcclusionTraceChannel).Value == (param_1->OcclusionTraceChannel).Value &&
           (((((param_1->OcclusionLowPassFilterFrequency == this->OcclusionLowPassFilterFrequency &&
               (param_1->OcclusionVolumeAttenuation == this->OcclusionVolumeAttenuation)) &&
              (param_1->OcclusionInterpolationTime == this->OcclusionInterpolationTime)) &&
             ((iVar5 = (this->PluginSettings).OcclusionPluginSettingsArray.ArrayNum,
              iVar5 == (param_1->PluginSettings).OcclusionPluginSettingsArray.ArrayNum &&
              (bVar6 = CompareItems<TObjectPtr<UOcclusionPluginSourceSettingsBase>,int>
                                 ((TObjectPtr<UOcclusionPluginSourceSettingsBase> *)
                                  (this->PluginSettings).OcclusionPluginSettingsArray.
                                  AllocatorInstance.Data,
                                  (TObjectPtr<UOcclusionPluginSourceSettingsBase> *)
                                  (param_1->PluginSettings).OcclusionPluginSettingsArray.
                                  AllocatorInstance.Data,iVar5), bVar6)))) &&
            (-1 < (char)(uVar2 ^ uVar1))))))))))) &&
       (((((iVar5 = (this->PluginSettings).ReverbPluginSettingsArray.ArrayNum,
           iVar5 == (param_1->PluginSettings).ReverbPluginSettingsArray.ArrayNum &&
           (bVar6 = CompareItems<TObjectPtr<UReverbPluginSourceSettingsBase>,int>
                              ((TObjectPtr<UReverbPluginSourceSettingsBase> *)
                               (this->PluginSettings).ReverbPluginSettingsArray.AllocatorInstance.
                               Data,(TObjectPtr<UReverbPluginSourceSettingsBase> *)
                                    (param_1->PluginSettings).ReverbPluginSettingsArray.
                                    AllocatorInstance.Data,iVar5), bVar6)) &&
          ((iVar5 = (this->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum,
           iVar5 == (param_1->PluginSettings).SourceDataOverridePluginSettingsArray.ArrayNum &&
           (((bVar6 = CompareItems<TObjectPtr<USourceDataOverridePluginSourceSettingsBase>,int>
                                ((TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *)
                                 (this->PluginSettings).SourceDataOverridePluginSettingsArray.
                                 AllocatorInstance.Data,
                                 (TObjectPtr<USourceDataOverridePluginSourceSettingsBase> *)
                                 (param_1->PluginSettings).SourceDataOverridePluginSettingsArray.
                                 AllocatorInstance.Data,iVar5), bVar6 &&
             ((this->AudioLinkSettingsOverride).field0_0x0.DebugPtr ==
              (param_1->AudioLinkSettingsOverride).field0_0x0.DebugPtr)) &&
            (param_1->ReverbWetLevelMin == this->ReverbWetLevelMin)))))) &&
         ((param_1->ReverbWetLevelMax == this->ReverbWetLevelMax &&
          (param_1->ReverbDistanceMin == this->ReverbDistanceMin)))) &&
        (param_1->ReverbDistanceMax == this->ReverbDistanceMax)))) {
      return true;
    }
  }
  return false;
}

// AddStructReferencedObjects @ 1486a6040

void __thiscall
FSoundAttenuationSettings::AddStructReferencedObjects
          (FSoundAttenuationSettings *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddStableReferenceFwd(param_1,(FObjectPtr *)&this->AudioLinkSettingsOverride)
  ;
  return;
}

// CollectAttenuationShapesForVisualization @ 1486a9a60

void __thiscall
FSoundAttenuationSettings::CollectAttenuationShapesForVisualization
          (FSoundAttenuationSettings *this,
          TMultiMap<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>_>
          *param_1)

{
  uint auStackX_8 [2];
  TPairInitializer<EAttenuationShape::Type_&&,FBaseAttenuationSettings::AttenuationShapeDetails_&&>
  TStackX_10;
  uint *puStack_48;
  longlong *plStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (this->bAttenuate == 0) {
    return;
  }
  lStack_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lStack_28 = this->_padding_;
  auStackX_8[0] = (uint)*(byte *)((longlong)&this->_padding_ + 1);
  uStack_20 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  puStack_48 = auStackX_8;
  uStack_1c = (undefined4)this->_padding_;
  uStack_18 = (undefined4)this->_padding_;
  uStack_14 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  plStack_40 = &lStack_38;
  TSet<TTuple<enum_EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails>,TDefaultMapHashableKeyFuncs<enum_EAttenuationShape::Type,FBaseAttenuationSettings::AttenuationShapeDetails,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EAttenuationShape::Type_&&,FBaseAttenuationSettings::AttenuationShapeDetails_&&>_>
            (param_1,&TStackX_10,(bool *)&puStack_48);
  return;
}

// GetFocusAttenuation @ 1486be950

float __thiscall
FSoundAttenuationSettings::GetFocusAttenuation
          (FSoundAttenuationSettings *this,FGlobalFocusSettings *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->FocusVolumeAttenuation * param_1->FocusVolumeScale;
  fVar1 = (this->NonFocusVolumeAttenuation * param_1->NonFocusVolumeScale - fVar1) * param_2 + fVar1
  ;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetFocusDistanceScale @ 1486be990

float __thiscall
FSoundAttenuationSettings::GetFocusDistanceScale
          (FSoundAttenuationSettings *this,FGlobalFocusSettings *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->FocusDistanceScale * param_1->FocusDistanceScale;
  fVar1 = (this->NonFocusDistanceScale * param_1->NonFocusDistanceScale - fVar1) * param_2 + fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetFocusPriorityScale @ 1486be9d0

float __thiscall
FSoundAttenuationSettings::GetFocusPriorityScale
          (FSoundAttenuationSettings *this,FGlobalFocusSettings *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = this->FocusPriorityScale * param_1->FocusPriorityScale;
  fVar1 = (this->NonFocusPriorityScale * param_1->NonFocusPriorityScale - fVar1) * param_2 + fVar1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

