// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// operator= @ 146541e40

FSoundAttenuationSettings * __thiscall
FSoundAttenuationSettings::operator=
          (FSoundAttenuationSettings *this,FSoundAttenuationSettings *param_1)

{
  int *piVar1;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UAudioLinkSettingsAbstract *pUVar4;
  FAttenuationSubmixSendSettings *pFVar5;
  longlong lVar6;
  byte bVar7;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar6 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar6;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)&this->_padding_,(FRuntimeFloatCurve *)&param_1->_padding_);
  bVar7 = (this->bAttenuate ^ param_1->bAttenuate) & 1 ^ this->field_0xc0;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 2 ^ bVar7;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 4 ^ bVar7;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 8 ^ bVar7;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 0x10 ^ bVar7;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 0x20 ^ bVar7;
  this->field_0xc0 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc0) & 0x40 ^ bVar7;
  this->field_0xc0 = bVar7;
  this->field_0xc0 = (bVar7 ^ param_1->field_0xc0) & 0x7f ^ param_1->field_0xc0;
  bVar7 = (this->bEnablePriorityAttenuation ^ param_1->bEnablePriorityAttenuation) & 1 ^
          this->field_0xc1;
  this->field_0xc1 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc1) & 2 ^ bVar7;
  this->field_0xc1 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc1) & 4 ^ bVar7;
  this->field_0xc1 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc1) & 8 ^ bVar7;
  this->field_0xc1 = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xc1) & 0x10 ^ bVar7;
  this->field_0xc1 = bVar7;
  this->field_0xc1 = (bVar7 ^ param_1->field_0xc1) & 0x20 ^ bVar7;
  (this->SpatializationAlgorithm).Value = (param_1->SpatializationAlgorithm).Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->AudioLinkSettingsOverride).field0_0x0.DebugPtr,
     pUVar4 != (UAudioLinkSettingsAbstract *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AudioLinkSettingsOverride).field0_0x0 = (param_1->AudioLinkSettingsOverride).field0_0x0;
  this->BinauralRadius = param_1->BinauralRadius;
  FRuntimeFloatCurve::operator=
            (&this->CustomLowpassAirAbsorptionCurve,&param_1->CustomLowpassAirAbsorptionCurve);
  FRuntimeFloatCurve::operator=
            (&this->CustomHighpassAirAbsorptionCurve,&param_1->CustomHighpassAirAbsorptionCurve);
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
  FRuntimeFloatCurve::operator=(&this->CustomReverbSendCurve,&param_1->CustomReverbSendCurve);
  pTVar2 = &this->SubmixSendSettings;
  if (pTVar2 != &param_1->SubmixSendSettings) {
    DestructItems<FAttenuationSubmixSendSettings,int>
              ((FAttenuationSubmixSendSettings *)(pTVar2->AllocatorInstance).Data,
               (this->SubmixSendSettings).ArrayNum);
    iVar3 = (param_1->SubmixSendSettings).ArrayNum;
    piVar1 = &(this->SubmixSendSettings).ArrayMax;
    pFVar5 = (FAttenuationSubmixSendSettings *)(param_1->SubmixSendSettings).AllocatorInstance.Data;
    (this->SubmixSendSettings).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FAttenuationSubmixSendSettings,FAttenuationSubmixSendSettings,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  FRuntimeFloatCurve::operator=
            (&this->CustomPriorityAttenuationCurve,&param_1->CustomPriorityAttenuationCurve);
  FSoundAttenuationPluginSettings::operator=(&this->PluginSettings,&param_1->PluginSettings);
  return this;
}

