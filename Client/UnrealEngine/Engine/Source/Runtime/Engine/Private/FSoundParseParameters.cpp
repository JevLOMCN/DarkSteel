// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSoundParseParameters @ 1473407c0

FSoundParseParameters * __thiscall
FSoundParseParameters::FSoundParseParameters(FSoundParseParameters *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (this->NotifyBufferFinishedHooks).Notifies.ArrayNum = 0;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayMax = 0;
  (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  this->SoundClass = (USoundClass *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->SoundSubmixSends).ArrayNum = 0;
  (this->SoundSubmixSends).ArrayMax = 0;
  (this->AttenuationSubmixSends).ArrayNum = 0;
  (this->AttenuationSubmixSends).ArrayMax = 0;
  (this->Velocity).field0_0x0._s_0.X = 0.0;
  (this->Velocity).field0_0x0._s_0.Y = 0.0;
  (this->Velocity).field0_0x0._s_0.Z = 0.0;
  this->Volume = 1.0;
  this->DistanceAttenuation = 1.0;
  this->OcclusionAttenuation = 1.0;
  this->VolumeMultiplier = 1.0;
  this->EnvelopeFollowerAttackTime = 10;
  this->EnvelopeFollowerReleaseTime = 100;
  this->InteriorVolumeMultiplier = 1.0;
  this->Pitch = 1.0;
  this->StartTime = -1.0;
  this->NonSpatializedRadiusStart = 0.0;
  this->NonSpatializedRadiusEnd = 0.0;
  this->NonSpatializedRadiusMode = OmniDirectional;
  this->AttenuationDistance = 0.0;
  this->ListenerToSoundDistance = 0.0;
  this->ListenerToSoundDistanceForPanning = 0.0;
  this->AbsoluteAzimuth = 0.0;
  this->SoundSubmix = (USoundSubmixBase *)0x0;
  (this->SoundSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttenuationSubmixSends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[0].ArrayNum = 0;
  this->BusSends[0].ArrayMax = 0;
  this->BusSends[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->BusSends[1].ArrayNum = 0;
  this->BusSends[1].ArrayMax = 0;
  this->ReverbSendMethod = Linear;
  (this->ReverbSendLevelRange).field0_0x0._s_0.X = 0.0;
  (this->ReverbSendLevelRange).field0_0x0._s_0.Y = 0.0;
  (this->ReverbSendLevelDistanceRange).field0_0x0._s_0.X = 0.0;
  (this->ReverbSendLevelDistanceRange).field0_0x0._s_0.Y = 0.0;
  this->ManualReverbSendLevel = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomReverbSendCurve);
  this->bEnableBusSends = 0;
  this->bEnableSourceDataOverride = 0;
  this->bEnableSubmixSends = 0;
  this->bEnableBaseSubmix = 0;
  this->StereoSpread = 0.0;
  this->SpatializationMethod = SPATIALIZATION_Default;
  this->bSpatializationIsExternalSend = false;
  this->SpatializationPluginSettings = (USpatializationPluginSourceSettingsBase *)0x0;
  this->OcclusionPluginSettings = (UOcclusionPluginSourceSettingsBase *)0x0;
  this->ReverbPluginSettings = (UReverbPluginSourceSettingsBase *)0x0;
  this->SourceDataOverridePluginSettings = (USourceDataOverridePluginSourceSettingsBase *)0x0;
  this->AudioLinkSettingsOverride = (UAudioLinkSettingsAbstract *)0x0;
  this->SourceEffectChain = (USoundEffectSourcePresetChain *)0x0;
  this->LowPassFilterFrequency = 20000.0;
  this->HighPassFilterFrequency = 20.0;
  this->AttenuationLowpassFilterFrequency = 20000.0;
  this->AttenuationHighpassFilterFrequency = 20.0;
  this->OcclusionFilterFrequency = 20000.0;
  this->AmbientZoneFilterFrequency = 20000.0;
  puVar1 = &this->field_0x23c;
  this->bUseSpatialization = '\0';
  this->bApplyNormalizationToStereoSounds = '\0';
  this->bEnableRetrigger = '\0';
  this->bIsPaused = '\0';
  this->bIsOccluded = '\0';
  this->bEnableHighPassFilter = '\0';
  this->bEnableLowPassFilter = '\0';
  this->bLooping = '\0';
  return this;
}

// FSoundParseParameters @ 1486957d0

FSoundParseParameters * __thiscall
FSoundParseParameters::FSoundParseParameters
          (FSoundParseParameters *this,FSoundParseParameters *param_1)

{
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FNotifyBufferDetails *pFVar5;
  FSoundSubmixSendInfo *pFVar6;
  FAttenuationSubmixSendSettings *pFVar7;
  FSoundSourceBusSendInfo *pFVar8;
  UCurveFloat *pUVar9;
  double dVar10;
  byte bVar11;
  uint uVar12;
  int *piVar13;
  
  piVar13 = &(this->NotifyBufferFinishedHooks).Notifies.ArrayMax;
  (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  iVar4 = (param_1->NotifyBufferFinishedHooks).Notifies.ArrayNum;
  pFVar5 = (FNotifyBufferDetails *)
           (param_1->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
  (this->NotifyBufferFinishedHooks).Notifies.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar4,0,(ForAnyElementType *)this,iVar4,piVar13);
    ConstructItems<FNotifyBufferFinishedHooks::FNotifyBufferDetails,FNotifyBufferFinishedHooks::FNotifyBufferDetails,int>
              ((this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data,pFVar5,iVar4);
  }
  pTVar1 = &this->SoundSubmixSends;
  this->SoundClass = param_1->SoundClass;
  dVar10 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Velocity).field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_1->Velocity).field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar10;
  (this->Velocity).field0_0x0._s_0.Z = (param_1->Velocity).field0_0x0._s_0.Z;
  this->Volume = param_1->Volume;
  this->DistanceAttenuation = param_1->DistanceAttenuation;
  this->OcclusionAttenuation = param_1->OcclusionAttenuation;
  this->VolumeMultiplier = param_1->VolumeMultiplier;
  this->EnvelopeFollowerAttackTime = param_1->EnvelopeFollowerAttackTime;
  this->EnvelopeFollowerReleaseTime = param_1->EnvelopeFollowerReleaseTime;
  this->InteriorVolumeMultiplier = param_1->InteriorVolumeMultiplier;
  this->Priority = param_1->Priority;
  this->Pitch = param_1->Pitch;
  this->StartTime = param_1->StartTime;
  this->NonSpatializedRadiusStart = param_1->NonSpatializedRadiusStart;
  this->NonSpatializedRadiusEnd = param_1->NonSpatializedRadiusEnd;
  this->NonSpatializedRadiusMode = param_1->NonSpatializedRadiusMode;
  this->AttenuationDistance = param_1->AttenuationDistance;
  this->ListenerToSoundDistance = param_1->ListenerToSoundDistance;
  this->ListenerToSoundDistanceForPanning = param_1->ListenerToSoundDistanceForPanning;
  this->AbsoluteAzimuth = param_1->AbsoluteAzimuth;
  this->SoundSubmix = param_1->SoundSubmix;
  piVar13 = &(this->SoundSubmixSends).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->SoundSubmixSends).ArrayNum;
  pFVar6 = (FSoundSubmixSendInfo *)(param_1->SoundSubmixSends).AllocatorInstance.Data;
  (this->SoundSubmixSends).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar13);
    ConstructItems<FSoundSubmixSendInfo,FSoundSubmixSendInfo,int>
              ((pTVar1->AllocatorInstance).Data,pFVar6,iVar4);
  }
  pTVar2 = &this->AttenuationSubmixSends;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar13 = &(this->AttenuationSubmixSends).ArrayMax;
  iVar4 = (param_1->AttenuationSubmixSends).ArrayNum;
  pFVar7 = (FAttenuationSubmixSendSettings *)
           (param_1->AttenuationSubmixSends).AllocatorInstance.Data;
  (this->AttenuationSubmixSends).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar13);
    ConstructItems<FAttenuationSubmixSendSettings,FAttenuationSubmixSendSettings,int>
              ((pTVar2->AllocatorInstance).Data,pFVar7,iVar4);
  }
  pTVar3 = this->BusSends;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar13 = &this->BusSends[0].ArrayMax;
  iVar4 = param_1->BusSends[0].ArrayNum;
  pFVar8 = (FSoundSourceBusSendInfo *)param_1->BusSends[0].AllocatorInstance.Data;
  this->BusSends[0].ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar13);
    ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
              ((pTVar3->AllocatorInstance).Data,pFVar8,iVar4);
  }
  this->BusSends[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = param_1->BusSends[1].ArrayNum;
  pFVar8 = (FSoundSourceBusSendInfo *)param_1->BusSends[1].AllocatorInstance.Data;
  this->BusSends[1].ArrayNum = iVar4;
  piVar13 = &this->BusSends[1].ArrayMax;
  if (iVar4 == 0) {
    *piVar13 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,iVar4,0,&this->BusSends[1].AllocatorInstance,iVar4,piVar13);
    ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
              (this->BusSends[1].AllocatorInstance.Data,pFVar8,iVar4);
  }
  this->ReverbSendMethod = param_1->ReverbSendMethod;
  dVar10 = (param_1->ReverbSendLevelRange).field0_0x0._s_0.Y;
  (this->ReverbSendLevelRange).field0_0x0._s_0.X = (param_1->ReverbSendLevelRange).field0_0x0._s_0.X
  ;
  (this->ReverbSendLevelRange).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->ReverbSendLevelDistanceRange).field0_0x0._s_0.Y;
  (this->ReverbSendLevelDistanceRange).field0_0x0._s_0.X =
       (param_1->ReverbSendLevelDistanceRange).field0_0x0._s_0.X;
  (this->ReverbSendLevelDistanceRange).field0_0x0._s_0.Y = dVar10;
  this->ManualReverbSendLevel = param_1->ManualReverbSendLevel;
  FRichCurve::FRichCurve
            (&(this->CustomReverbSendCurve).EditorCurveData,
             &(param_1->CustomReverbSendCurve).EditorCurveData);
  pUVar9 = (param_1->CustomReverbSendCurve).ExternalCurve.field0_0x0.DebugPtr;
  (this->CustomReverbSendCurve).ExternalCurve.field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  this->StereoSpread = param_1->StereoSpread;
  this->SpatializationMethod = param_1->SpatializationMethod;
  this->bSpatializationIsExternalSend = param_1->bSpatializationIsExternalSend;
  this->SpatializationPluginSettings = param_1->SpatializationPluginSettings;
  this->OcclusionPluginSettings = param_1->OcclusionPluginSettings;
  this->ReverbPluginSettings = param_1->ReverbPluginSettings;
  this->SourceDataOverridePluginSettings = param_1->SourceDataOverridePluginSettings;
  this->AudioLinkSettingsOverride = param_1->AudioLinkSettingsOverride;
  this->SourceEffectChain = param_1->SourceEffectChain;
  this->LowPassFilterFrequency = param_1->LowPassFilterFrequency;
  this->HighPassFilterFrequency = param_1->HighPassFilterFrequency;
  this->AttenuationLowpassFilterFrequency = param_1->AttenuationLowpassFilterFrequency;
  this->AttenuationHighpassFilterFrequency = param_1->AttenuationHighpassFilterFrequency;
  this->OcclusionFilterFrequency = param_1->OcclusionFilterFrequency;
  this->AmbientZoneFilterFrequency = param_1->AmbientZoneFilterFrequency;
  uVar12 = (ZPULL(*(undefined4 *)&this->field_0x238,0,1) ^ param_1->bEnableBusSends) & 1 ^
           *(undefined4 *)&this->field_0x238;
  *(uint *)&this->field_0x238 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x238) & 2 ^ uVar12;
  *(uint *)&this->field_0x238 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x238) & 4 ^ uVar12;
  *(uint *)&this->field_0x238 = uVar12;
  uVar12 = (uVar12 ^ *(uint *)&param_1->field_0x238) & 8 ^ uVar12;
  *(uint *)&this->field_0x238 = uVar12;
  *(uint *)&this->field_0x238 = (uVar12 ^ *(uint *)&param_1->field_0x238) & 0x10 ^ uVar12;
  bVar11 = (this->bUseSpatialization ^ param_1->bUseSpatialization) & 1 ^ this->field_0x23c;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 2 ^ bVar11;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 4 ^ bVar11;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 8 ^ bVar11;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 0x10 ^ bVar11;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 0x20 ^ bVar11;
  this->field_0x23c = bVar11;
  bVar11 = (bVar11 ^ param_1->field_0x23c) & 0x40 ^ bVar11;
  this->field_0x23c = bVar11;
  this->field_0x23c = (bVar11 ^ param_1->field_0x23c) & 0x7f ^ param_1->field_0x23c;
  return this;
}

// ~FSoundParseParameters @ 14869ae10

void __thiscall FSoundParseParameters::~FSoundParseParameters(FSoundParseParameters *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  
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
  pTVar4 = (TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *)&this->ReverbSendMethod;
  lVar5 = 2;
  do {
    pTVar3 = pTVar4 + -1;
    pTVar4 = pTVar4 + -1;
    lVar5 = lVar5 + -1;
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(pTVar4->AllocatorInstance).Data,pTVar3->ArrayNum);
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  DestructItems<FAttenuationSubmixSendSettings,int>
            ((FAttenuationSubmixSendSettings *)(this->AttenuationSubmixSends).AllocatorInstance.Data
             ,(this->AttenuationSubmixSends).ArrayNum);
  pFVar1 = (this->AttenuationSubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundSubmixSendInfo,int>
            ((FSoundSubmixSendInfo *)(this->SoundSubmixSends).AllocatorInstance.Data,
             (this->SoundSubmixSends).ArrayNum);
  pFVar1 = (this->SoundSubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

